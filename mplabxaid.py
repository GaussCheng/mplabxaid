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

for screen in uiScreens.findall("Screen"):
#    print(screen.get("name"))
#    staticTextItems = []
    screenName = screen.get("name")
    widgetID = ""
    for widget in screen.iter("Widget"):
        if widget.get("type") == "StaticTextWidget":
            widgetID = widget.find("Name").text
            baseStaticTextVariableNames[widgetID] = (screenName + "_" + widgetID)
#            staticTextItems.append({"widgetID":widget.find("Name").text,
#                                   "text":widget.find("Text").text})
#    uiStruct[screen.get("name")] = staticTextItems


#print(baseStaticTextVariableNames)

generatedc = open(sys.argv[2], 'r').read()
translateFile = open(sys.argv[3], 'r')
translateInfo = {}
for line in translateFile.readlines():
    lineItems = line.split(':')
    if len(lineItems) > 1:
        translateInfo[lineItems[0]] = lineItems[1]
    else:
        translateInfo[lineItems[0]] = ""
translateFile.close()


for st in baseStaticTextVariableNames:
    languages = ["_CH", "EN"]
    for lg in languages:
        wID = baseStaticTextVariableNames[st] + lg
        if wID not in translateInfo:
            translateInfo[wID] = "{0}//\n".format(wID)
print(translateInfo)

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
     

def generateTranslateFun(staticTexts):
    return ""
    
toWriteGeneratedC = fixGeneratedC(generatedc, baseStaticTextVariableNames)