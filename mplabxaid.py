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



def fixGeneratedC(gc, staticTextInfos):
    drawItemStart = gc.find("bool GFX_HGC_DrawItem(int itemId)")
    drawItemEnd = gc.find("default:", drawItemStart)

    toFixSection = gc[drawItemStart, drawItemEnd]
    for st in staticTextInfos:
        

def generateTranslateFun(staticTexts):
    return ""
    
fixGeneratedC(generatedc, baseStaticTextVariableNames)