import sys
import os

if len(sys.argv) < 4:
    print("Usage : python3 maplabxaid.py uixml generatedc translatefile")
    exit(0)

import xml.etree.ElementTree as ET
uixml = ET.parse(sys.argv[1]).getroot()

#uiStruct = {}
uiScreens = uixml.find("Designer").find("Screens")

baseStaticTextVariableNames = {}
textToWidgetID = {}

for screen in uiScreens.findall("Screen"):
#    print(screen.get("name"))
#    staticTextItems = []
    screenName = screen.get("name")
    widgetID = ""
    for widget in screen.iter("Widget"):
        if widget.get("type") == "StaticTextWidget":
            widgetID = widget.find("Name").text
            baseStaticTextVariableNames[widgetID] = (screenName + "_" + widgetID + "text")
            textElement = widget.find("Text")
            if textElement is not None:
                textToWidgetID[textElement.text] = widgetID
#            staticTextItems.append({"widgetID":widget.find("Name").text,
#                                   "text":widget.find("Text").text})
#    uiStruct[screen.get("name")] = staticTextItems


#print(baseStaticTextVariableNames)

generatedc = open(sys.argv[2], 'r').read()
translateFile = open(sys.argv[3], 'r')
translateInfo = {}
for line in translateFile.readlines():
    if len(line) < 3:
        continue
    lineItems = line.split(':')
    if len(lineItems) == 3:
        translateInfo[lineItems[0]] = lineItems[1] + lineItems[2]
    elif len(lineItems) > 1:
        translateInfo[lineItems[0]] = lineItems[1]
    else:
        translateInfo[lineItems[0]] = ""
translateFile.close()
#print(translateInfo)


for st in baseStaticTextVariableNames:
    languages = ["_CH", "EN"]
    for lg in languages:
        wID = baseStaticTextVariableNames[st] + lg
        if wID not in translateInfo:
            translateInfo[wID] = "{0}//\n".format(wID)
            
def findMap(gc):
    seekPos = 0
    headerLen = len("static const GFX_XCHAR ")
    nameTotext = {}
    mappedTranslate = {}
    while(seekPos < len(gc)):
        stBegin = gc.find("static const GFX_XCHAR staticTextStr_", seekPos)
        if stBegin < 0:
            break
        indexEnd = gc.find("[] =", stBegin)
        stTextBegin = gc.find("}; // ", stBegin)
        stEnd = gc.find("\n", stTextBegin)
        nameTotext[gc[stBegin + headerLen :indexEnd]] = gc[stTextBegin + 6:stEnd]
        seekPos = stEnd
    mapFile = open("map.txt", 'r')
    newTranslate = {"Ch":None,"En":None}
    newTranslate["Ch"] = open("newTCh", 'w')
    newTranslate["En"] = open("newTEn", 'w')
#    print(translateInfo)
    languages = ["Ch", "En"]
    oldLanguageToNew = {"Ch":"_CH", "En":"_EN"}
    for line in mapFile.readlines():
        line = line.strip()
        lineItems = line.split("=")
        if len(lineItems) == 2:
            if lineItems[0] in nameTotext:
#                print(nameTotext[lineItems[0]])
                if nameTotext[lineItems[0]] in textToWidgetID:
                    mappedVariable = baseStaticTextVariableNames[textToWidgetID[nameTotext[lineItems[0]]]]
                    for lg in languages:
                        if lineItems[1][0:-5] + lg in translateInfo:
#                            print(mappedVariable, translateInfo[lineItems[1][0:-5] + lg])
                            newTranslate[lg].write("{0}:{1}".format(mappedVariable + oldLanguageToNew[lg],translateInfo[lineItems[1][0:-5] + lg]))
#            lineItems[1][0:-5]
    mapFile.close()
    newTranslate["Ch"].close()
    newTranslate["En"].close()
findMap(generatedc)

def fixGeneratedC(gc, staticTextInfos):
    drawItemStart = gc.find("bool GFX_HGC_DrawItem(int itemId)\n{")
    drawItemEnd = gc.find("default:", drawItemStart)
    
    originSectionStart = gc[0:drawItemStart]
    originSectionEnd = gc[drawItemEnd:-1]

    toFixSection = gc[drawItemStart:drawItemEnd]
    fixedSection = ""
    seekPos = 0
    oldSeekPos = -1
    
#    print(toFixSection)
    
    while (seekPos < len(toFixSection)) and (seekPos != oldSeekPos):
        casePos = toFixSection.find("case", seekPos)
        if casePos == -1: break
        caseEndPos = toFixSection.find(":", casePos)
        caseBreakPos = toFixSection.find("break;", caseEndPos)
        itemName = toFixSection[(casePos + 5):caseEndPos]
        toAdd = ""
        if itemName in  staticTextInfos:
            toReplaceBegin = toFixSection.find("(GFX_XCHAR*)", caseEndPos)
            toReplaceEnd = toFixSection.find(",", toReplaceBegin)
            toAdd = toFixSection[seekPos:caseBreakPos].replace(toFixSection[toReplaceBegin:toReplaceEnd],
                                                              "(GFX_XCHAR*){0}".format(staticTextInfos[itemName])) + "\n        break;"
        else:
            toAdd = (toFixSection[seekPos:caseBreakPos] + "\n        break;")
        fixedSection += toAdd
        oldSeekPos = seekPos
        seekPos = caseBreakPos + 6
    return (originSectionStart + fixedSection + "\n" + originSectionEnd )
     


def generateSTDefine(staticTextInfos):
    outGenSTDefine = open("genSTDefine.h", 'w')
    outGenSTDefineC = open("genSTDefine.c", 'w')
    outGenSTDefine.write("#ifndef GENSTDEFINE_H\n#define GENSTDEFINE_H\n")
    outGenSTDefineC.write('#include "genSTDefine.h"\n')
    translateContentCH = ""
    translateContentEN = ""
    for st in staticTextInfos:
        outGenSTDefine.write("extern GFX_XCHAR* {0};\nextern GFX_XCHAR* {0}_CH;\nextern GFX_XCHAR* {0}_EN;\n".format(staticTextInfos[st]))
        outGenSTDefineC.write("GFX_XCHAR* {0};\nGFX_XCHAR* {0}_CH;\nGFX_XCHAR* {0}_EN;\n".format(staticTextInfos[st]))
        translateContentCH += "        {0} = (GFX_XCHAR*){0}_CH;\n".format(staticTextInfos[st])
        translateContentEN += "        {0} = (GFX_XCHAR*){0}_EN;\n".format(staticTextInfos[st])
        
    translateFun = "void ChangeTranslate(WORD kind)\n{\n    static char kind_old=-1;\n    if((kind == CHINESE)&&(kind_old!=kind))\n    {\n"
    translateFun += translateContentCH + "    }\n    else if((kind == ENGLISH)&&(kind_old!=kind))\n    {\n"
    translateFun += translateContentEN + "    }\n    if(kind_old!=kind)\n    {\n        InitFontString();\n        kind_old=kind;\n    }\n}"
    outGenSTDefineC.write(translateFun)
    outGenSTDefine.close()
    outGenSTDefineC.close()
    
    

def generateGFX(gc, staticTextInfos):
    toWriteGeneratedC = fixGeneratedC(generatedc, baseStaticTextVariableNames)
    open(sys.argv[2] + ".bak", 'w').write(gc)
    open(sys.argv[2], 'w').write(toWriteGeneratedC)
    

def generateTranslate(trInfo):
    open(sys.argv[3] + ".bak", 'w').write(open(sys.argv[3], 'r').read())
    chGroup = []
    enGroup = []
#    testFile = open("test", 'w')
    for tr in trInfo:
        toAdd = "{0}:{1}".format(tr, trInfo[tr])
#        testFile.write(toAdd)
        if tr.endswith('En') or tr.endswith('EN'):
            enGroup.append(toAdd)
        else:
            chGroup.append(toAdd)
    chGroup.sort()
    enGroup.sort()
    
    trFile = open(sys.argv[3], 'w')
    for line in chGroup:
        trFile.write(line)
    for line in enGroup:
        trFile.write(line)
    trFile.write("\n")
    trFile.close()

generateSTDefine(baseStaticTextVariableNames)
generateGFX(generatedc, baseStaticTextVariableNames)
generateTranslate(translateInfo)