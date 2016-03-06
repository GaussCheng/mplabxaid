/*******************************************************************************
  MPLAB Harmony Graphics Composer Generated Implementation File

  File Name:
    gfx_hgc_definitions.c

  Summary:
    Build-time generated implementation from the MPLAB Harmony
    Graphics Composer.

  Description:
    Build-time generated implementation from the MPLAB Harmony
    Graphics Composer.

    Created with MPLAB Harmony Version 1.06
*******************************************************************************/
// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/
// DOM-IGNORE-END

#include "gfx_hgc_definitions.h"
#include "CommonFont.h"

extern GFX_GOL_OBJ_SCHEME *WarningSte;
extern GFX_GOL_OBJ_SCHEME *WarningDm;
extern GFX_GOL_OBJ_SCHEME defscheme;
extern GFX_GOL_OBJ_SCHEME motorAdjscheme;
const GFX_XCHAR Null_Arr[]={0x0};
/*** Default GFX GOL Scheme ***/
#define GFX_SCHEMEDEFAULT GOLSchemeDefault
extern GFX_GOL_OBJ_SCHEME GFX_SCHEMEDEFAULT;

/*** HGC-specified GFX GOL Scheme ***/
static GFX_GOL_OBJ_SCHEME *gfxScheme0;
static GFX_GOL_OBJ_SCHEME *gfxScheme1;
static GFX_GOL_OBJ_SCHEME *gfxScheme2;
static GFX_GOL_OBJ_SCHEME *gfxScheme3;
static GFX_GOL_OBJ_SCHEME *gfxScheme4;
static GFX_GOL_OBJ_SCHEME *gfxScheme5;
static GFX_GOL_OBJ_SCHEME *gfxScheme6;
static GFX_GOL_OBJ_SCHEME *gfxScheme7;
static GFX_GOL_OBJ_SCHEME *gfxScheme8;
static GFX_GOL_OBJ_SCHEME *gfxScheme9;

/*** Generated Asset References ***/
extern const GFX_RESOURCE_HDR AutoRun1;
extern const GFX_RESOURCE_HDR AutoRun2;
extern const GFX_RESOURCE_HDR AutoRun3;
extern const GFX_RESOURCE_HDR Function;
extern const GFX_RESOURCE_HDR Information;
extern const GFX_RESOURCE_HDR Instruct;
extern const GFX_RESOURCE_HDR Logogray;
extern const GFX_RESOURCE_HDR Manual;
extern const GFX_RESOURCE_HDR Monitor;
extern const GFX_RESOURCE_HDR Parameter;
extern const GFX_RESOURCE_HDR Warning1;
extern const GFX_RESOURCE_HDR Warning2;
extern const GFX_RESOURCE_HDR ledgray;
extern const GFX_RESOURCE_HDR ledred;
extern const GFX_RESOURCE_HDR ledgreen;
extern const GFX_RESOURCE_HDR AutoRunSmall;
extern const GFX_RESOURCE_HDR FunctionSmall;
extern const GFX_RESOURCE_HDR InformationSmall;
extern const GFX_RESOURCE_HDR InstructSmall;
extern const GFX_RESOURCE_HDR ManualSmall;
extern const GFX_RESOURCE_HDR MonitorSmall;
extern const GFX_RESOURCE_HDR ParameterSmall;
extern const GFX_RESOURCE_HDR StartUp;
extern const GFX_RESOURCE_HDR StopPageDisp;
extern const GFX_RESOURCE_HDR simsun_16;

/*** Generated ASCII Text Labels ***/
static const GFX_XCHAR buttonStr_0[] = { 0x50, 0x6f, 0x70, 0x0 }; // Pop
static const GFX_XCHAR buttonStr_1[] = { 0x4c, 0x65, 0x61, 0x64, 0x49, 0x6e, 0x0 }; // LeadIn
static const GFX_XCHAR buttonStr_2[] = { 0x4c, 0x65, 0x61, 0x64, 0x4f, 0x75, 0x74, 0x0 }; // LeadOut
static const GFX_XCHAR buttonStr_3[] = { 0x52, 0x65, 0x46, 0x72, 0x65, 0x73, 0x68, 0x0 }; // ReFresh
static const GFX_XCHAR buttonStr_4[] = { 0x52, 0x65, 0x67, 0x0 }; // Reg
static const GFX_XCHAR buttonStr_5[] = { 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x53, 0x4e, 0x0 }; // CreateSN
static const GFX_XCHAR meterStr_0[] = { 0x0 }; //  
static const GFX_XCHAR editBoxStr_0[] = { 0x7c, 0x0 }; // |
static const GFX_XCHAR editBoxStr_1[] = { 0x0 }; //  
static const GFX_XCHAR editBoxStr_2[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_0[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_1[] = { 0x41, 0x6c, 0x61, 0x72, 0x6d, 0x0 }; // Alarm
static const GFX_XCHAR staticTextStr_2[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_3[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_4[] = { 0x54, 0x68, 0x69, 0x6d, 0x62, 0x0 }; // Thimb
static const GFX_XCHAR staticTextStr_5[] = { 0x43, 0x6c, 0x6f, 0x73, 0x45, 0x0 }; // ClosE
static const GFX_XCHAR staticTextStr_6[] = { 0x53, 0x61, 0x66, 0x65, 0x44, 0x0 }; // SafeD
static const GFX_XCHAR staticTextStr_7[] = { 0x4f, 0x70, 0x65, 0x6e, 0x46, 0x0 }; // OpenF
static const GFX_XCHAR staticTextStr_8[] = { 0x53, 0x74, 0x6f, 0x70, 0x0 }; // Stop
static const GFX_XCHAR staticTextStr_9[] = { 0x43, 0x75, 0x72, 0x72, 0x50, 0x6f, 0x73, 0x0 }; // CurrPos
static const GFX_XCHAR staticTextStr_10[] = { 0x43, 0x75, 0x72, 0x72, 0x4d, 0x0 }; // CurrM
static const GFX_XCHAR staticTextStr_11[] = { 0x4b, 0x65, 0x79, 0x53, 0x6f, 0x75, 0x6e, 0x64, 0x0 }; // KeySound
static const GFX_XCHAR staticTextStr_12[] = { 0x43, 0x6c, 0x65, 0x61, 0x72, 0x50, 0x72, 0x6f, 0x0 }; // ClearPro
static const GFX_XCHAR staticTextStr_13[] = { 0x43, 0x68, 0x6b, 0x48, 0x6f, 0x6c, 0x64, 0x0 }; // ChkHold
static const GFX_XCHAR staticTextStr_14[] = { 0x43, 0x68, 0x6b, 0x56, 0x61, 0x63, 0x63, 0x75, 0x0 }; // ChkVaccu
static const GFX_XCHAR staticTextStr_15[] = { 0x43, 0x68, 0x6b, 0x56, 0x46, 0x69, 0x78, 0x0 }; // ChkVFix
static const GFX_XCHAR staticTextStr_16[] = { 0x54, 0x68, 0x69, 0x6d, 0x62, 0x44, 0x6c, 0x79, 0x0 }; // ThimbDly
static const GFX_XCHAR staticTextStr_17[] = { 0x43, 0x68, 0x6b, 0x4d, 0x46, 0x69, 0x78, 0x0 }; // ChkMFix
static const GFX_XCHAR staticTextStr_18[] = { 0x4f, 0x70, 0x65, 0x6e, 0x44, 0x6c, 0x79, 0x0 }; // OpenDly
static const GFX_XCHAR staticTextStr_19[] = { 0x53, 0x65, 0x74, 0x4d, 0x6f, 0x6c, 0x64, 0x0 }; // SetMold
static const GFX_XCHAR staticTextStr_20[] = { 0x4c, 0x61, 0x6e, 0x67, 0x75, 0x61, 0x67, 0x65, 0x0 }; // Language
static const GFX_XCHAR staticTextStr_21[] = { 0x4f, 0x46, 0x46, 0x0 }; // OFF
static const GFX_XCHAR staticTextStr_22[] = { 0x4f, 0x46, 0x46, 0x0 }; // OFF
static const GFX_XCHAR staticTextStr_23[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_24[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_25[] = { 0x50, 0x50, 0x0 }; // PP
static const GFX_XCHAR staticTextStr_26[] = { 0x50, 0x50, 0x0 }; // PP
static const GFX_XCHAR staticTextStr_27[] = { 0x43, 0x68, 0x69, 0x6e, 0x65, 0x73, 0x65, 0x0 }; // Chinese
static const GFX_XCHAR staticTextStr_28[] = { 0x50, 0x61, 0x73, 0x73, 0x57, 0x6f, 0x72, 0x64, 0x0 }; // PassWord
static const GFX_XCHAR staticTextStr_29[] = { 0x57, 0x72, 0x69, 0x74, 0x65, 0x28, 0x32, 0x30, 0x2d, 0x39, 0x39, 0x29, 0x0 }; // Write(20-99)
static const GFX_XCHAR staticTextStr_30[] = { 0x52, 0x65, 0x61, 0x64, 0x28, 0x30, 0x2d, 0x39, 0x39, 0x29, 0x0 }; // Read(0-99)
static const GFX_XCHAR staticTextStr_31[] = { 0x4b, 0x65, 0x79, 0x20, 0x75, 0x70, 0x20, 0x6f, 0x72, 0x20, 0x64, 0x6f, 0x77, 0x6e, 0x20, 0x61, 0x64, 0x6a, 0x75, 0x73, 0x74, 0x20, 0x62, 0x72, 0x69, 0x67, 0x68, 0x74, 0x0 }; // Key up or down adjust bright
static const GFX_XCHAR staticTextStr_32[] = { 0x42, 0x72, 0x69, 0x67, 0x68, 0x74, 0x6e, 0x65, 0x73, 0x73, 0x0 }; // Brightness
static const GFX_XCHAR staticTextStr_33[] = { 0x4d, 0x61, 0x6e, 0x75, 0x61, 0x6c, 0x0 }; // Manual
static const GFX_XCHAR staticTextStr_34[] = { 0x43, 0x75, 0x72, 0x72, 0x41, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x0 }; // CurrAction
static const GFX_XCHAR staticTextStr_35[] = { 0x46, 0x6e, 0x73, 0x68, 0x43, 0x6e, 0x74, 0x0 }; // FnshCnt
static const GFX_XCHAR staticTextStr_36[] = { 0x44, 0x6f, 0x74, 0x53, 0x70, 0x64, 0x0 }; // DotSpd
static const GFX_XCHAR staticTextStr_37[] = { 0x4d, 0x61, 0x6e, 0x75, 0x50, 0x6f, 0x73, 0x0 }; // ManuPos
static const GFX_XCHAR staticTextStr_38[] = { 0x4d, 0x61, 0x6e, 0x75, 0x53, 0x70, 0x64, 0x0 }; // ManuSpd
static const GFX_XCHAR staticTextStr_39[] = { 0x54, 0x72, 0x61, 0x76, 0x4d, 0x6f, 0x64, 0x65, 0x0 }; // TravMode
static const GFX_XCHAR staticTextStr_40[] = { 0x44, 0x6f, 0x74, 0x52, 0x61, 0x6e, 0x67, 0x65, 0x0 }; // DotRange
static const GFX_XCHAR staticTextStr_41[] = { 0x54, 0x61, 0x63, 0x6b, 0x50, 0x6f, 0x73, 0x0 }; // TackPos
static const GFX_XCHAR staticTextStr_42[] = { 0x44, 0x6f, 0x74, 0x53, 0x70, 0x64, 0x0 }; // DotSpd
static const GFX_XCHAR staticTextStr_43[] = { 0x4d, 0x61, 0x6e, 0x75, 0x50, 0x6f, 0x73, 0x0 }; // ManuPos
static const GFX_XCHAR staticTextStr_44[] = { 0x4d, 0x61, 0x6e, 0x75, 0x53, 0x70, 0x64, 0x0 }; // ManuSpd
static const GFX_XCHAR staticTextStr_45[] = { 0x48, 0x50, 0x2e, 0x20, 0x41, 0x64, 0x6a, 0x75, 0x73, 0x74, 0x0 }; // HP. Adjust
static const GFX_XCHAR staticTextStr_46[] = { 0x59, 0x34, 0x36, 0x4e, 0x65, 0x67, 0x61, 0x74, 0x69, 0x76, 0x65, 0x0 }; // Y46Negative
static const GFX_XCHAR staticTextStr_47[] = { 0x49, 0x6e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4d, 0x61, 0x69, 0x6e, 0x41, 0x64, 0x6a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x75, 0x74, 0x0 }; // In     MainAdj     Out
static const GFX_XCHAR staticTextStr_48[] = { 0x49, 0x6e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4d, 0x61, 0x69, 0x6e, 0x41, 0x64, 0x6a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x75, 0x74, 0x0 }; // In     MainAdj     Out
static const GFX_XCHAR staticTextStr_49[] = { 0x4d, 0x54, 0x72, 0x61, 0x76, 0x42, 0x61, 0x63, 0x6b, 0x20, 0x59, 0x34, 0x32, 0x0 }; // MTravBack Y42
static const GFX_XCHAR staticTextStr_50[] = { 0x4d, 0x54, 0x72, 0x61, 0x76, 0x46, 0x6f, 0x72, 0x77, 0x20, 0x59, 0x34, 0x32, 0x0 }; // MTravForw Y42
static const GFX_XCHAR staticTextStr_51[] = { 0x4d, 0x50, 0x6f, 0x73, 0x42, 0x61, 0x63, 0x6b, 0x20, 0x59, 0x34, 0x31, 0x0 }; // MPosBack Y41
static const GFX_XCHAR staticTextStr_52[] = { 0x4d, 0x50, 0x6f, 0x73, 0x46, 0x6f, 0x72, 0x77, 0x20, 0x59, 0x34, 0x31, 0x0 }; // MPosForw Y41
static const GFX_XCHAR staticTextStr_53[] = { 0x4d, 0x61, 0x69, 0x6e, 0x44, 0x6f, 0x77, 0x6e, 0x20, 0x59, 0x34, 0x30, 0x0 }; // MainDown Y40
static const GFX_XCHAR staticTextStr_54[] = { 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x20, 0x55, 0x70, 0x20, 0x59, 0x34, 0x30, 0x0 }; // Main  Up Y40
static const GFX_XCHAR staticTextStr_55[] = { 0x48, 0x50, 0x2e, 0x20, 0x41, 0x64, 0x6a, 0x75, 0x73, 0x74, 0x0 }; // HP. Adjust
static const GFX_XCHAR staticTextStr_56[] = { 0x59, 0x34, 0x36, 0x4e, 0x65, 0x67, 0x61, 0x74, 0x69, 0x76, 0x65, 0x0 }; // Y46Negative
static const GFX_XCHAR staticTextStr_57[] = { 0x49, 0x6e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x56, 0x69, 0x63, 0x65, 0x41, 0x64, 0x6a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x75, 0x74, 0x0 }; // In     ViceAdj     Out
static const GFX_XCHAR staticTextStr_58[] = { 0x49, 0x6e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x56, 0x69, 0x63, 0x65, 0x41, 0x64, 0x6a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x75, 0x74, 0x0 }; // In     ViceAdj     Out
static const GFX_XCHAR staticTextStr_59[] = { 0x53, 0x54, 0x72, 0x61, 0x76, 0x42, 0x61, 0x63, 0x6b, 0x20, 0x59, 0x34, 0x35, 0x0 }; // STravBack Y45
static const GFX_XCHAR staticTextStr_60[] = { 0x53, 0x54, 0x72, 0x61, 0x76, 0x46, 0x6f, 0x72, 0x77, 0x20, 0x59, 0x34, 0x35, 0x0 }; // STravForw Y45
static const GFX_XCHAR staticTextStr_61[] = { 0x53, 0x50, 0x6f, 0x73, 0x42, 0x61, 0x63, 0x6b, 0x20, 0x59, 0x34, 0x34, 0x0 }; // SPosBack Y44
static const GFX_XCHAR staticTextStr_62[] = { 0x53, 0x50, 0x6f, 0x73, 0x46, 0x6f, 0x72, 0x77, 0x20, 0x59, 0x34, 0x34, 0x0 }; // SPosForw Y44
static const GFX_XCHAR staticTextStr_63[] = { 0x53, 0x75, 0x62, 0x20, 0x44, 0x6f, 0x77, 0x6e, 0x20, 0x59, 0x34, 0x33, 0x0 }; // Sub Down Y43
static const GFX_XCHAR staticTextStr_64[] = { 0x53, 0x75, 0x62, 0x20, 0x20, 0x20, 0x55, 0x70, 0x20, 0x59, 0x34, 0x33, 0x0 }; // Sub   Up Y43
static const GFX_XCHAR staticTextStr_65[] = { 0x4e, 0x6f, 0x20, 0x20, 0x20, 0x41, 0x63, 0x74, 0x0 }; // No   Act
static const GFX_XCHAR staticTextStr_66[] = { 0x43, 0x75, 0x72, 0x72, 0x41, 0x63, 0x74, 0x0 }; // CurrAct
static const GFX_XCHAR staticTextStr_67[] = { 0x50, 0x72, 0x6f, 0x63, 0x54, 0x69, 0x6d, 0x65, 0x0 }; // ProcTime
static const GFX_XCHAR staticTextStr_68[] = { 0x54, 0x61, 0x6b, 0x65, 0x54, 0x69, 0x6d, 0x65, 0x0 }; // TakeTime
static const GFX_XCHAR staticTextStr_69[] = { 0x41, 0x75, 0x74, 0x6f, 0x43, 0x79, 0x63, 0x6c, 0x0 }; // AutoCycl
static const GFX_XCHAR staticTextStr_70[] = { 0x41, 0x63, 0x74, 0x50, 0x72, 0x6f, 0x4e, 0x6f, 0x0 }; // ActProNo
static const GFX_XCHAR staticTextStr_71[] = { 0x53, 0x65, 0x74, 0x50, 0x72, 0x6f, 0x4e, 0x6f, 0x0 }; // SetProNo
static const GFX_XCHAR staticTextStr_72[] = { 0x45, 0x6d, 0x62, 0x49, 0x6e, 0x4d, 0x6c, 0x64, 0x0 }; // EmbInMld
static const GFX_XCHAR staticTextStr_73[] = { 0x53, 0x74, 0x61, 0x72, 0x74, 0x50, 0x6f, 0x73, 0x0 }; // StartPos
static const GFX_XCHAR staticTextStr_74[] = { 0x53, 0x75, 0x62, 0x50, 0x75, 0x74, 0x44, 0x65, 0x0 }; // SubPutDe
static const GFX_XCHAR staticTextStr_75[] = { 0x53, 0x74, 0x6f, 0x70, 0x53, 0x61, 0x66, 0x65, 0x0 }; // StopSafe
static const GFX_XCHAR staticTextStr_76[] = { 0x53, 0x74, 0x64, 0x62, 0x79, 0x50, 0x6f, 0x73, 0x0 }; // StdbyPos
static const GFX_XCHAR staticTextStr_77[] = { 0x53, 0x74, 0x64, 0x62, 0x79, 0x47, 0x65, 0x73, 0x0 }; // StdbyGes
static const GFX_XCHAR staticTextStr_78[] = { 0x4d, 0x69, 0x64, 0x4d, 0x6f, 0x6c, 0x64, 0x0 }; // MidMold
static const GFX_XCHAR staticTextStr_79[] = { 0x53, 0x61, 0x66, 0x65, 0x44, 0x6f, 0x6f, 0x72, 0x0 }; // SafeDoor
static const GFX_XCHAR staticTextStr_80[] = { 0x54, 0x68, 0x69, 0x6d, 0x62, 0x0 }; // Thimb
static const GFX_XCHAR staticTextStr_81[] = { 0x43, 0x79, 0x63, 0x6c, 0x65, 0x54, 0x69, 0x6d, 0x65, 0x0 }; // CycleTime
static const GFX_XCHAR staticTextStr_82[] = { 0x55, 0x73, 0x65, 0x0 }; // Use
static const GFX_XCHAR staticTextStr_83[] = { 0x4e, 0x6f, 0x6d, 0x43, 0x6c, 0x6f, 0x0 }; // NomClo
static const GFX_XCHAR staticTextStr_84[] = { 0x49, 0x6e, 0x73, 0x69, 0x64, 0x65, 0x0 }; // Inside
static const GFX_XCHAR staticTextStr_85[] = { 0x48, 0x6f, 0x72, 0x69, 0x0 }; // Hori
static const GFX_XCHAR staticTextStr_86[] = { 0x55, 0x73, 0x65, 0x0 }; // Use
static const GFX_XCHAR staticTextStr_87[] = { 0x55, 0x73, 0x65, 0x0 }; // Use
static const GFX_XCHAR staticTextStr_88[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_89[] = { 0x43, 0x6c, 0x70, 0x41, 0x62, 0x44, 0x65, 0x63, 0x74, 0x0 }; // ClpAbDect
static const GFX_XCHAR staticTextStr_90[] = { 0x43, 0x68, 0x63, 0x6b, 0x43, 0x6c, 0x73, 0x4d, 0x6c, 0x64, 0x0 }; // ChckClsMld
static const GFX_XCHAR staticTextStr_91[] = { 0x43, 0x68, 0x63, 0x6b, 0x44, 0x66, 0x50, 0x72, 0x64, 0x0 }; // ChckDfPrd
static const GFX_XCHAR staticTextStr_92[] = { 0x43, 0x68, 0x63, 0x6b, 0x50, 0x72, 0x65, 0x73, 0x73, 0x0 }; // ChckPress
static const GFX_XCHAR staticTextStr_93[] = { 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x32, 0x0 }; // Reserv2
static const GFX_XCHAR staticTextStr_94[] = { 0x43, 0x6c, 0x53, 0x63, 0x72, 0x54, 0x69, 0x6d, 0x0 }; // ClScrTim
static const GFX_XCHAR staticTextStr_95[] = { 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x6c, 0x0 }; // Reservl
static const GFX_XCHAR staticTextStr_96[] = { 0x43, 0x6f, 0x6e, 0x76, 0x43, 0x6e, 0x74, 0x0 }; // ConvCnt
static const GFX_XCHAR staticTextStr_97[] = { 0x53, 0x70, 0x61, 0x63, 0x65, 0x0 }; // Space
static const GFX_XCHAR staticTextStr_98[] = { 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x43, 0x6e, 0x74, 0x0 }; // PointCnt
static const GFX_XCHAR staticTextStr_99[] = { 0x54, 0x72, 0x61, 0x76, 0x4f, 0x75, 0x74, 0x0 }; // TravOut
static const GFX_XCHAR staticTextStr_100[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_101[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_102[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_103[] = { 0x4f, 0x70, 0x65, 0x6e, 0x53, 0x61, 0x66, 0x65, 0x44, 0x0 }; // OpenSafeD
static const GFX_XCHAR staticTextStr_104[] = { 0x54, 0x72, 0x76, 0x49, 0x6e, 0x50, 0x73, 0x74, 0x0 }; // TrvInPst
static const GFX_XCHAR staticTextStr_105[] = { 0x54, 0x72, 0x76, 0x4f, 0x75, 0x74, 0x50, 0x73, 0x74, 0x0 }; // TrvOutPst
static const GFX_XCHAR staticTextStr_106[] = { 0x53, 0x6c, 0x6f, 0x77, 0x44, 0x6f, 0x77, 0x6d, 0x0 }; // SlowDowm
static const GFX_XCHAR staticTextStr_107[] = { 0x50, 0x72, 0x65, 0x73, 0x73, 0x53, 0x77, 0x0 }; // PressSw
static const GFX_XCHAR staticTextStr_108[] = { 0x41, 0x75, 0x74, 0x6f, 0x4c, 0x69, 0x6d, 0x69, 0x74, 0x0 }; // AutoLimit
static const GFX_XCHAR staticTextStr_109[] = { 0x53, 0x74, 0x61, 0x72, 0x74, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x0 }; // StartPoint
static const GFX_XCHAR staticTextStr_110[] = { 0x53, 0x6c, 0x6f, 0x77, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x0 }; // SlowDelay
static const GFX_XCHAR staticTextStr_111[] = { 0x53, 0x61, 0x66, 0x65, 0x49, 0x6e, 0x4d, 0x6c, 0x64, 0x0 }; // SafeInMld
static const GFX_XCHAR staticTextStr_112[] = { 0x4f, 0x75, 0x74, 0x53, 0x74, 0x64, 0x62, 0x79, 0x0 }; // OutStdby
static const GFX_XCHAR staticTextStr_113[] = { 0x53, 0x61, 0x66, 0x65, 0x44, 0x6f, 0x6f, 0x72, 0x0 }; // SafeDoor
static const GFX_XCHAR staticTextStr_114[] = { 0x43, 0x6f, 0x6e, 0x74, 0x69, 0x0 }; // Conti
static const GFX_XCHAR staticTextStr_115[] = { 0x4e, 0x6f, 0x74, 0x52, 0x73, 0x74, 0x0 }; // NotRst
static const GFX_XCHAR staticTextStr_116[] = { 0x4e, 0x6f, 0x74, 0x52, 0x73, 0x74, 0x0 }; // NotRst
static const GFX_XCHAR staticTextStr_117[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_118[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_119[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_120[] = { 0x53, 0x74, 0x6b, 0x44, 0x72, 0x74, 0x0 }; // StkDrt
static const GFX_XCHAR staticTextStr_121[] = { 0x54, 0x65, 0x73, 0x74, 0x4d, 0x6f, 0x75, 0x6c, 0x64, 0x0 }; // TestMould
static const GFX_XCHAR staticTextStr_122[] = { 0x53, 0x74, 0x6b, 0x43, 0x6c, 0x65, 0x61, 0x72, 0x0 }; // StkClear
static const GFX_XCHAR staticTextStr_123[] = { 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x79, 0x4f, 0x6e, 0x0 }; // ConveyOn
static const GFX_XCHAR staticTextStr_124[] = { 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x31, 0x54, 0x69, 0x6d, 0x65, 0x0 }; // Reserv1Time
static const GFX_XCHAR staticTextStr_125[] = { 0x4f, 0x70, 0x65, 0x6e, 0x44, 0x41, 0x6c, 0x61, 0x72, 0x0 }; // OpenDAlar
static const GFX_XCHAR staticTextStr_126[] = { 0x50, 0x53, 0x54, 0x56, 0x0 }; // PSTV
static const GFX_XCHAR staticTextStr_127[] = { 0x4f, 0x46, 0x46, 0x0 }; // OFF
static const GFX_XCHAR staticTextStr_128[] = { 0x43, 0x6f, 0x6e, 0x74, 0x69, 0x0 }; // Conti
static const GFX_XCHAR staticTextStr_129[] = { 0x4f, 0x72, 0x69, 0x53, 0x70, 0x65, 0x65, 0x64, 0x0 }; // OriSpeed
static const GFX_XCHAR staticTextStr_130[] = { 0x57, 0x68, 0x6f, 0x6c, 0x65, 0x53, 0x70, 0x65, 0x65, 0x64, 0x0 }; // WholeSpeed
static const GFX_XCHAR staticTextStr_131[] = { 0x4d, 0x61, 0x78, 0x53, 0x70, 0x65, 0x65, 0x64, 0x0 }; // MaxSpeed
static const GFX_XCHAR staticTextStr_132[] = { 0x41, 0x63, 0x63, 0x44, 0x65, 0x63, 0x54, 0x69, 0x6d, 0x65, 0x0 }; // AccDecTime
static const GFX_XCHAR staticTextStr_133[] = { 0x41, 0x6c, 0x61, 0x72, 0x6d, 0x54, 0x69, 0x6d, 0x65, 0x0 }; // AlarmTime
static const GFX_XCHAR staticTextStr_134[] = { 0x46, 0x42, 0x50, 0x75, 0x6c, 0x73, 0x65, 0x4f, 0x75, 0x74, 0x0 }; // FBPulseOut
static const GFX_XCHAR staticTextStr_135[] = { 0x46, 0x42, 0x50, 0x75, 0x6c, 0x73, 0x65, 0x49, 0x6e, 0x0 }; // FBPulseIn
static const GFX_XCHAR staticTextStr_136[] = { 0x44, 0x6f, 0x77, 0x6e, 0x47, 0x65, 0x73, 0x74, 0x0 }; // DownGest
static const GFX_XCHAR staticTextStr_137[] = { 0x46, 0x65, 0x65, 0x64, 0x42, 0x61, 0x63, 0x6b, 0x0 }; // FeedBack
static const GFX_XCHAR staticTextStr_138[] = { 0x50, 0x6f, 0x6c, 0x73, 0x65, 0x49, 0x6e, 0x0 }; // PolseIn
static const GFX_XCHAR staticTextStr_139[] = { 0x4d, 0x61, 0x78, 0x50, 0x6f, 0x73, 0x0 }; // MaxPos
static const GFX_XCHAR staticTextStr_140[] = { 0x56, 0x65, 0x72, 0x74, 0x69, 0x0 }; // Verti
static const GFX_XCHAR staticTextStr_141[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_142[] = { 0x46, 0x69, 0x78, 0x52, 0x65, 0x76, 0x65, 0x72, 0x73, 0x65, 0x0 }; // FixReverse
static const GFX_XCHAR staticTextStr_143[] = { 0x57, 0x61, 0x69, 0x74, 0x53, 0x69, 0x67, 0x0 }; // WaitSig
static const GFX_XCHAR staticTextStr_144[] = { 0x55, 0x73, 0x65, 0x0 }; // Use
static const GFX_XCHAR staticTextStr_145[] = { 0x54, 0x65, 0x61, 0x63, 0x68, 0x0 }; // Teach
static const GFX_XCHAR staticTextStr_146[] = { 0x6d, 0x6d, 0x0 }; // mm
static const GFX_XCHAR staticTextStr_147[] = { 0x25, 0x0 }; // %
static const GFX_XCHAR staticTextStr_148[] = { 0x73, 0x0 }; // s
static const GFX_XCHAR staticTextStr_149[] = { 0x54, 0x69, 0x6d, 0x65, 0x0 }; // Time
static const GFX_XCHAR staticTextStr_150[] = { 0x53, 0x70, 0x65, 0x65, 0x64, 0x0 }; // Speed
static const GFX_XCHAR staticTextStr_151[] = { 0x44, 0x69, 0x73, 0x74, 0x0 }; // Dist
static const GFX_XCHAR staticTextStr_152[] = { 0x41, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x0 }; // Action
static const GFX_XCHAR staticTextStr_153[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_154[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_155[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_156[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_157[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_158[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_159[] = { 0x4e, 0x4f, 0x2e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4e, 0x75, 0x6d, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x41, 0x6c, 0x61, 0x72, 0x6d, 0x49, 0x6e, 0x66, 0x6f, 0x0 }; // NO.     Num      AlarmInfo
static const GFX_XCHAR staticTextStr_160[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_161[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_162[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_163[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_164[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_165[] = { 0x4e, 0x4f, 0x2e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4d, 0x6f, 0x6c, 0x64, 0x4e, 0x75, 0x6d, 0x20, 0x20, 0x20, 0x20, 0x20, 0x43, 0x79, 0x63, 0x6c, 0x65, 0x54, 0x69, 0x6d, 0x65, 0x20, 0x73, 0x0 }; // NO.      MoldNum     CycleTime s
static const GFX_XCHAR staticTextStr_166[] = { 0x52, 0x65, 0x76, 0x65, 0x72, 0x73, 0x65, 0x64, 0x32, 0x0 }; // Reversed2
static const GFX_XCHAR staticTextStr_167[] = { 0x50, 0x72, 0x6f, 0x63, 0x65, 0x73, 0x73, 0x31, 0x0 }; // Process1
static const GFX_XCHAR staticTextStr_168[] = { 0x50, 0x6f, 0x73, 0x74, 0x75, 0x72, 0x65, 0x0 }; // Posture
static const GFX_XCHAR staticTextStr_169[] = { 0x54, 0x72, 0x61, 0x76, 0x0 }; // Trav
static const GFX_XCHAR staticTextStr_170[] = { 0x56, 0x69, 0x63, 0x65, 0x46, 0x6f, 0x72, 0x77, 0x42, 0x6b, 0x0 }; // ViceForwBk
static const GFX_XCHAR staticTextStr_171[] = { 0x56, 0x69, 0x63, 0x65, 0x55, 0x70, 0x44, 0x6f, 0x77, 0x6e, 0x0 }; // ViceUpDown
static const GFX_XCHAR staticTextStr_172[] = { 0x4d, 0x61, 0x69, 0x6e, 0x46, 0x6f, 0x72, 0x77, 0x42, 0x6b, 0x0 }; // MainForwBk
static const GFX_XCHAR staticTextStr_173[] = { 0x4d, 0x61, 0x69, 0x6e, 0x55, 0x70, 0x44, 0x6f, 0x77, 0x6e, 0x0 }; // MainUpDown
static const GFX_XCHAR staticTextStr_174[] = { 0x46, 0x72, 0x65, 0x71, 0x44, 0x65, 0x63, 0x65, 0x6c, 0x0 }; // FreqDecel
static const GFX_XCHAR staticTextStr_175[] = { 0x56, 0x69, 0x63, 0x65, 0x44, 0x6f, 0x77, 0x6e, 0x0 }; // ViceDown
static const GFX_XCHAR staticTextStr_176[] = { 0x4d, 0x61, 0x69, 0x6e, 0x42, 0x61, 0x63, 0x6b, 0x0 }; // MainBack
static const GFX_XCHAR staticTextStr_177[] = { 0x4d, 0x61, 0x69, 0x6e, 0x46, 0x6f, 0x72, 0x77, 0x0 }; // MainForw
static const GFX_XCHAR staticTextStr_178[] = { 0x4d, 0x61, 0x69, 0x6e, 0x44, 0x6f, 0x77, 0x6e, 0x0 }; // MainDown
static const GFX_XCHAR staticTextStr_179[] = { 0x54, 0x72, 0x61, 0x76, 0x41, 0x78, 0x69, 0x73, 0x0 }; // TravAxis
static const GFX_XCHAR staticTextStr_180[] = { 0x46, 0x42, 0x50, 0x75, 0x6c, 0x73, 0x65, 0x0 }; // FBPulse
static const GFX_XCHAR staticTextStr_181[] = { 0x56, 0x69, 0x63, 0x65, 0x42, 0x61, 0x63, 0x6b, 0x0 }; // ViceBack
static const GFX_XCHAR staticTextStr_182[] = { 0x56, 0x69, 0x63, 0x65, 0x46, 0x6f, 0x72, 0x77, 0x0 }; // ViceForw
static const GFX_XCHAR staticTextStr_183[] = { 0x4e, 0x6f, 0x46, 0x65, 0x65, 0x64, 0x0 }; // NoFeed
static const GFX_XCHAR staticTextStr_184[] = { 0x44, 0x65, 0x63, 0x54, 0x0 }; // DecT
static const GFX_XCHAR staticTextStr_185[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_186[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_187[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_188[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_189[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_190[] = { 0x4e, 0x6f, 0x20, 0x55, 0x73, 0x65, 0x0 }; // No Use
static const GFX_XCHAR staticTextStr_191[] = { 0x53, 0x65, 0x72, 0x76, 0x6f, 0x0 }; // Servo
static const GFX_XCHAR staticTextStr_192[] = { 0x58, 0x32, 0x37, 0x20, 0x54, 0x72, 0x61, 0x76, 0x4f, 0x75, 0x74, 0x4c, 0x6d, 0x74, 0x0 }; // X27 TravOutLmt
static const GFX_XCHAR staticTextStr_193[] = { 0x58, 0x32, 0x36, 0x20, 0x54, 0x72, 0x61, 0x76, 0x49, 0x6e, 0x4c, 0x6d, 0x74, 0x0 }; // X26 TravInLmt
static const GFX_XCHAR staticTextStr_194[] = { 0x58, 0x32, 0x35, 0x20, 0x4f, 0x72, 0x69, 0x67, 0x69, 0x6e, 0x0 }; // X25 Origin
static const GFX_XCHAR staticTextStr_195[] = { 0x58, 0x32, 0x34, 0x20, 0x4f, 0x75, 0x74, 0x53, 0x61, 0x66, 0x65, 0x0 }; // X24 OutSafe
static const GFX_XCHAR staticTextStr_196[] = { 0x58, 0x32, 0x33, 0x20, 0x49, 0x6e, 0x53, 0x61, 0x66, 0x65, 0x0 }; // X23 InSafe
static const GFX_XCHAR staticTextStr_197[] = { 0x58, 0x32, 0x32, 0x20, 0x43, 0x68, 0x65, 0x63, 0x6b, 0x50, 0x72, 0x65, 0x73, 0x73, 0x0 }; // X22 CheckPress
static const GFX_XCHAR staticTextStr_198[] = { 0x58, 0x32, 0x31, 0x20, 0x49, 0x6e, 0x6a, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x0 }; // X21 Injection
static const GFX_XCHAR staticTextStr_199[] = { 0x58, 0x32, 0x30, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x0 }; // X20 Reserve
static const GFX_XCHAR staticTextStr_200[] = { 0x58, 0x31, 0x37, 0x20, 0x4d, 0x61, 0x69, 0x6e, 0x44, 0x6f, 0x77, 0x6e, 0x0 }; // X17 MainDown
static const GFX_XCHAR staticTextStr_201[] = { 0x58, 0x31, 0x36, 0x20, 0x4d, 0x61, 0x69, 0x6e, 0x42, 0x61, 0x63, 0x6b, 0x0 }; // X16 MainBack
static const GFX_XCHAR staticTextStr_202[] = { 0x58, 0x31, 0x35, 0x20, 0x4d, 0x61, 0x69, 0x6e, 0x46, 0x6f, 0x72, 0x77, 0x0 }; // X15 MainForw
static const GFX_XCHAR staticTextStr_203[] = { 0x58, 0x31, 0x34, 0x20, 0x56, 0x61, 0x63, 0x75, 0x75, 0x6d, 0x0 }; // X14 Vacuum
static const GFX_XCHAR staticTextStr_204[] = { 0x58, 0x31, 0x33, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x0 }; // X13 Hold
static const GFX_XCHAR staticTextStr_205[] = { 0x58, 0x31, 0x32, 0x20, 0x4d, 0x61, 0x69, 0x6e, 0x46, 0x69, 0x78, 0x0 }; // X12 MainFix
static const GFX_XCHAR staticTextStr_206[] = { 0x58, 0x31, 0x31, 0x20, 0x56, 0x65, 0x72, 0x74, 0x69, 0x0 }; // X11 Verti
static const GFX_XCHAR staticTextStr_207[] = { 0x58, 0x31, 0x30, 0x20, 0x48, 0x6f, 0x72, 0x69, 0x0 }; // X10 Hori
static const GFX_XCHAR staticTextStr_208[] = { 0x58, 0x33, 0x37, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x32, 0x0 }; // X37 Reserv2
static const GFX_XCHAR staticTextStr_209[] = { 0x58, 0x33, 0x36, 0x20, 0x50, 0x72, 0x6f, 0x65, 0x63, 0x73, 0x73, 0x31, 0x0 }; // X36 Proecss1
static const GFX_XCHAR staticTextStr_210[] = { 0x58, 0x33, 0x35, 0x20, 0x4d, 0x61, 0x69, 0x6e, 0x55, 0x70, 0x0 }; // X35 MainUp
static const GFX_XCHAR staticTextStr_211[] = { 0x58, 0x33, 0x34, 0x20, 0x53, 0x75, 0x62, 0x46, 0x69, 0x78, 0x0 }; // X34 SubFix
static const GFX_XCHAR staticTextStr_212[] = { 0x58, 0x33, 0x33, 0x20, 0x56, 0x69, 0x63, 0x65, 0x44, 0x6f, 0x77, 0x6e, 0x0 }; // X33 ViceDown
static const GFX_XCHAR staticTextStr_213[] = { 0x58, 0x33, 0x32, 0x20, 0x53, 0x75, 0x62, 0x55, 0x70, 0x0 }; // X32 SubUp
static const GFX_XCHAR staticTextStr_214[] = { 0x58, 0x33, 0x31, 0x20, 0x56, 0x69, 0x63, 0x65, 0x42, 0x61, 0x63, 0x6b, 0x0 }; // X31 ViceBack
static const GFX_XCHAR staticTextStr_215[] = { 0x45, 0x6d, 0x65, 0x72, 0x67, 0x53, 0x74, 0x6f, 0x70, 0x0 }; // EmergStop
static const GFX_XCHAR staticTextStr_216[] = { 0x54, 0x68, 0x69, 0x6d, 0x62, 0x6c, 0x65, 0x0 }; // Thimble
static const GFX_XCHAR staticTextStr_217[] = { 0x4d, 0x69, 0x64, 0x4d, 0x6f, 0x6c, 0x64, 0x0 }; // MidMold
static const GFX_XCHAR staticTextStr_218[] = { 0x41, 0x75, 0x74, 0x6f, 0x4c, 0x6d, 0x74, 0x0 }; // AutoLmt
static const GFX_XCHAR staticTextStr_219[] = { 0x44, 0x65, 0x66, 0x50, 0x72, 0x6f, 0x64, 0x0 }; // DefProd
static const GFX_XCHAR staticTextStr_220[] = { 0x43, 0x6c, 0x6f, 0x46, 0x69, 0x6e, 0x69, 0x0 }; // CloFini
static const GFX_XCHAR staticTextStr_221[] = { 0x4f, 0x70, 0x65, 0x6e, 0x46, 0x69, 0x6e, 0x69, 0x0 }; // OpenFini
static const GFX_XCHAR staticTextStr_222[] = { 0x53, 0x61, 0x66, 0x65, 0x44, 0x6f, 0x6f, 0x72, 0x0 }; // SafeDoor
static const GFX_XCHAR staticTextStr_223[] = { 0x58, 0x33, 0x30, 0x20, 0x56, 0x69, 0x63, 0x65, 0x46, 0x6f, 0x72, 0x77, 0x0 }; // X30 ViceForw
static const GFX_XCHAR staticTextStr_224[] = { 0x58, 0x34, 0x37, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x36, 0x0 }; // X47 Reserve6
static const GFX_XCHAR staticTextStr_225[] = { 0x58, 0x34, 0x36, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x35, 0x0 }; // X46 Reserve5
static const GFX_XCHAR staticTextStr_226[] = { 0x58, 0x34, 0x35, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x34, 0x0 }; // X45 Reserve4
static const GFX_XCHAR staticTextStr_227[] = { 0x58, 0x34, 0x34, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x33, 0x0 }; // X44 Reserve3
static const GFX_XCHAR staticTextStr_228[] = { 0x58, 0x34, 0x33, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x32, 0x0 }; // X43 Reserve2
static const GFX_XCHAR staticTextStr_229[] = { 0x58, 0x34, 0x32, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x31, 0x0 }; // X42 Reserve1
static const GFX_XCHAR staticTextStr_230[] = { 0x58, 0x34, 0x31, 0x20, 0x56, 0x61, 0x63, 0x75, 0x75, 0x6d, 0x32, 0x0 }; // X41 Vacuum2
static const GFX_XCHAR staticTextStr_231[] = { 0x58, 0x34, 0x30, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x32, 0x0 }; // X40 Hold2
static const GFX_XCHAR staticTextStr_232[] = { 0x59, 0x32, 0x37, 0x20, 0x54, 0x72, 0x61, 0x76, 0x4f, 0x75, 0x74, 0x0 }; // Y27 TravOut
static const GFX_XCHAR staticTextStr_233[] = { 0x59, 0x32, 0x36, 0x20, 0x54, 0x72, 0x61, 0x76, 0x49, 0x6e, 0x0 }; // Y26 TravIn
static const GFX_XCHAR staticTextStr_234[] = { 0x59, 0x32, 0x34, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x32, 0x0 }; // Y24 Reserv2
static const GFX_XCHAR staticTextStr_235[] = { 0x59, 0x32, 0x34, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x31, 0x0 }; // Y24 Reserv1
static const GFX_XCHAR staticTextStr_236[] = { 0x59, 0x32, 0x33, 0x20, 0x53, 0x6c, 0x6f, 0x77, 0x44, 0x6f, 0x77, 0x6e, 0x0 }; // Y23 SlowDown
static const GFX_XCHAR staticTextStr_237[] = { 0x59, 0x32, 0x32, 0x20, 0x4c, 0x6f, 0x77, 0x50, 0x72, 0x65, 0x73, 0x73, 0x0 }; // Y22 LowPress
static const GFX_XCHAR staticTextStr_238[] = { 0x59, 0x32, 0x31, 0x20, 0x4d, 0x61, 0x69, 0x6e, 0x44, 0x6f, 0x77, 0x6e, 0x0 }; // Y21 MainDown
static const GFX_XCHAR staticTextStr_239[] = { 0x59, 0x32, 0x30, 0x20, 0x4d, 0x61, 0x69, 0x6e, 0x55, 0x70, 0x0 }; // Y20 MainUp
static const GFX_XCHAR staticTextStr_240[] = { 0x59, 0x31, 0x37, 0x20, 0x41, 0x6c, 0x61, 0x72, 0x6d, 0x0 }; // Y17 Alarm
static const GFX_XCHAR staticTextStr_241[] = { 0x59, 0x31, 0x36, 0x20, 0x4d, 0x61, 0x69, 0x6e, 0x42, 0x61, 0x63, 0x6b, 0x0 }; // Y16 MainBack
static const GFX_XCHAR staticTextStr_242[] = { 0x59, 0x31, 0x35, 0x20, 0x4d, 0x61, 0x69, 0x6e, 0x46, 0x6f, 0x72, 0x77, 0x0 }; // Y15 MainForw
static const GFX_XCHAR staticTextStr_243[] = { 0x59, 0x31, 0x34, 0x20, 0x56, 0x61, 0x63, 0x75, 0x75, 0x6d, 0x0 }; // Y14 Vacuum
static const GFX_XCHAR staticTextStr_244[] = { 0x59, 0x31, 0x33, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x0 }; // Y13 Hold
static const GFX_XCHAR staticTextStr_245[] = { 0x59, 0x31, 0x32, 0x20, 0x4d, 0x61, 0x69, 0x6e, 0x46, 0x69, 0x78, 0x0 }; // Y12 MainFix
static const GFX_XCHAR staticTextStr_246[] = { 0x59, 0x31, 0x31, 0x20, 0x56, 0x65, 0x72, 0x74, 0x69, 0x0 }; // Y11 Verti
static const GFX_XCHAR staticTextStr_247[] = { 0x59, 0x31, 0x30, 0x20, 0x48, 0x6f, 0x72, 0x69, 0x0 }; // Y10 Hori
static const GFX_XCHAR staticTextStr_248[] = { 0x59, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x33, 0x0 }; // YReserv3
static const GFX_XCHAR staticTextStr_249[] = { 0x59, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x32, 0x0 }; // YReserv2
static const GFX_XCHAR staticTextStr_250[] = { 0x59, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x31, 0x0 }; // YReserv1
static const GFX_XCHAR staticTextStr_251[] = { 0x54, 0x68, 0x69, 0x6d, 0x53, 0x61, 0x66, 0x65, 0x0 }; // ThimSafe
static const GFX_XCHAR staticTextStr_252[] = { 0x52, 0x65, 0x63, 0x79, 0x63, 0x6c, 0x69, 0x6e, 0x67, 0x0 }; // Recycling
static const GFX_XCHAR staticTextStr_253[] = { 0x4f, 0x70, 0x65, 0x6e, 0x53, 0x61, 0x66, 0x65, 0x0 }; // OpenSafe
static const GFX_XCHAR staticTextStr_254[] = { 0x43, 0x6c, 0x6f, 0x73, 0x65, 0x53, 0x61, 0x66, 0x65, 0x0 }; // CloseSafe
static const GFX_XCHAR staticTextStr_255[] = { 0x59, 0x34, 0x37, 0x20, 0x45, 0x6d, 0x65, 0x72, 0x67, 0x53, 0x74, 0x6f, 0x70, 0x0 }; // Y47 EmergStop
static const GFX_XCHAR staticTextStr_256[] = { 0x59, 0x33, 0x37, 0x20, 0x43, 0x6f, 0x6e, 0x65, 0x72, 0x79, 0x6f, 0x72, 0x0 }; // Y37 Coneryor
static const GFX_XCHAR staticTextStr_257[] = { 0x59, 0x33, 0x36, 0x20, 0x53, 0x63, 0x69, 0x73, 0x73, 0x6f, 0x72, 0x0 }; // Y36 Scissor
static const GFX_XCHAR staticTextStr_258[] = { 0x59, 0x33, 0x35, 0x20, 0x50, 0x72, 0x6f, 0x63, 0x65, 0x73, 0x73, 0x31, 0x0 }; // Y35 Process1
static const GFX_XCHAR staticTextStr_259[] = { 0x59, 0x33, 0x34, 0x20, 0x53, 0x75, 0x62, 0x46, 0x69, 0x78, 0x0 }; // Y34 SubFix
static const GFX_XCHAR staticTextStr_260[] = { 0x59, 0x33, 0x33, 0x20, 0x53, 0x75, 0x62, 0x44, 0x6f, 0x77, 0x6e, 0x0 }; // Y33 SubDown
static const GFX_XCHAR staticTextStr_261[] = { 0x59, 0x33, 0x32, 0x20, 0x53, 0x75, 0x62, 0x55, 0x70, 0x0 }; // Y32 SubUp
static const GFX_XCHAR staticTextStr_262[] = { 0x59, 0x33, 0x31, 0x20, 0x53, 0x75, 0x62, 0x42, 0x61, 0x63, 0x6b, 0x0 }; // Y31 SubBack
static const GFX_XCHAR staticTextStr_263[] = { 0x59, 0x33, 0x30, 0x20, 0x53, 0x75, 0x62, 0x46, 0x6f, 0x72, 0x77, 0x0 }; // Y30 SubForw
static const GFX_XCHAR staticTextStr_264[] = { 0x59, 0x34, 0x36, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x35, 0x0 }; // Y46 Reserve5
static const GFX_XCHAR staticTextStr_265[] = { 0x59, 0x34, 0x35, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x34, 0x0 }; // Y45 Reserve4
static const GFX_XCHAR staticTextStr_266[] = { 0x59, 0x34, 0x34, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x33, 0x0 }; // Y44 Reserve3
static const GFX_XCHAR staticTextStr_267[] = { 0x59, 0x34, 0x33, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x32, 0x0 }; // Y43 Reserve2
static const GFX_XCHAR staticTextStr_268[] = { 0x59, 0x34, 0x32, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x31, 0x0 }; // Y42 Reserve1
static const GFX_XCHAR staticTextStr_269[] = { 0x59, 0x34, 0x31, 0x20, 0x56, 0x61, 0x63, 0x75, 0x75, 0x6d, 0x32, 0x0 }; // Y41 Vacuum2
static const GFX_XCHAR staticTextStr_270[] = { 0x59, 0x34, 0x30, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x32, 0x0 }; // Y40 Hold2
static const GFX_XCHAR staticTextStr_271[] = { 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x20, 0x74, 0x6f, 0x20, 0x72, 0x65, 0x73, 0x65, 0x74, 0x20, 0x73, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x0 }; // Press enter to reset settings
static const GFX_XCHAR staticTextStr_272[] = { 0x31, 0x2e, 0x31, 0x2e, 0x31, 0x2e, 0x31, 0x0 }; // 1.1.1.1
static const GFX_XCHAR staticTextStr_273[] = { 0x32, 0x30, 0x31, 0x36, 0x2d, 0x33, 0x2d, 0x33, 0x0 }; // 2016-3-3
static const GFX_XCHAR staticTextStr_274[] = { 0x48, 0x43, 0x2d, 0x51, 0x31, 0x0 }; // HC-Q1
static const GFX_XCHAR staticTextStr_275[] = { 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x3a, 0x0 }; // Version:
static const GFX_XCHAR staticTextStr_276[] = { 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x44, 0x61, 0x74, 0x65, 0x3a, 0x0 }; // VersionDate:
static const GFX_XCHAR staticTextStr_277[] = { 0x50, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x54, 0x79, 0x70, 0x65, 0x3a, 0x0 }; // ProductType:
static const GFX_XCHAR staticTextStr_278[] = { 0x54, 0x69, 0x6d, 0x65, 0x3a, 0x0 }; // Time:
static const GFX_XCHAR staticTextStr_279[] = { 0x44, 0x61, 0x74, 0x65, 0x3a, 0x0 }; // Date:
static const GFX_XCHAR staticTextStr_280[] = { 0x57, 0x65, 0x62, 0x3a, 0x77, 0x77, 0x77, 0x2e, 0x68, 0x63, 0x2d, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x63, 0x6f, 0x6d, 0x0 }; // Web:www.hc-system.com
static const GFX_XCHAR staticTextStr_281[] = { 0x46, 0x61, 0x78, 0x3a, 0x30, 0x37, 0x35, 0x35, 0x2d, 0x32, 0x36, 0x34, 0x31, 0x36, 0x35, 0x37, 0x38, 0x0 }; // Fax:0755-26416578
static const GFX_XCHAR staticTextStr_282[] = { 0x54, 0x65, 0x6c, 0x3a, 0x30, 0x37, 0x35, 0x35, 0x2d, 0x32, 0x36, 0x34, 0x31, 0x37, 0x36, 0x37, 0x38, 0x0 }; // Tel:0755-26417678
static const GFX_XCHAR staticTextStr_283[] = { 0x48, 0x55, 0x41, 0x43, 0x48, 0x45, 0x4e, 0x47, 0x20, 0x49, 0x6e, 0x64, 0x20, 0x43, 0x74, 0x72, 0x6c, 0x20, 0x43, 0x6f, 0x2e, 0x4c, 0x74, 0x64, 0x2e, 0x0 }; // HUACHENG Ind Ctrl Co.Ltd.
static const GFX_XCHAR staticTextStr_284[] = { 0x54, 0x69, 0x6d, 0x65, 0x4e, 0x6f, 0x4c, 0x69, 0x6d, 0x69, 0x74, 0x0 }; // TimeNoLimit
static const GFX_XCHAR staticTextStr_285[] = { 0x57, 0x65, 0x65, 0x6b, 0x55, 0x73, 0x65, 0x64, 0x0 }; // WeekUsed
static const GFX_XCHAR staticTextStr_286[] = { 0x57, 0x65, 0x65, 0x6b, 0x53, 0x65, 0x74, 0x0 }; // WeekSet
static const GFX_XCHAR staticTextStr_287[] = { 0x52, 0x65, 0x67, 0x43, 0x6f, 0x64, 0x65, 0x0 }; // RegCode
static const GFX_XCHAR staticTextStr_288[] = { 0x53, 0x65, 0x72, 0x69, 0x4e, 0x6f, 0x0 }; // SeriNo
static const GFX_XCHAR staticTextStr_289[] = { 0x55, 0x73, 0x65, 0x48, 0x6f, 0x75, 0x72, 0x43, 0x6e, 0x74, 0x0 }; // UseHourCnt
static const GFX_XCHAR staticTextStr_290[] = { 0x55, 0x73, 0x65, 0x57, 0x65, 0x65, 0x6b, 0x43, 0x6e, 0x74, 0x0 }; // UseWeekCnt
static const GFX_XCHAR staticTextStr_291[] = { 0x43, 0x6c, 0x72, 0x54, 0x69, 0x6d, 0x65, 0x43, 0x6e, 0x74, 0x0 }; // ClrTimeCnt
static const GFX_XCHAR staticTextStr_292[] = { 0x53, 0x65, 0x74, 0x57, 0x65, 0x65, 0x6b, 0x43, 0x6e, 0x74, 0x0 }; // SetWeekCnt
static const GFX_XCHAR staticTextStr_293[] = { 0x4f, 0x46, 0x46, 0x0 }; // OFF
static const GFX_XCHAR staticTextStr_294[] = { 0x4d, 0x6f, 0x6e, 0x69, 0x74, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x0 }; // MonitValue
static const GFX_XCHAR staticTextStr_295[] = { 0x4d, 0x6f, 0x6e, 0x69, 0x74, 0x50, 0x61, 0x72, 0x61, 0x6d, 0x0 }; // MonitParam
static const GFX_XCHAR staticTextStr_296[] = { 0x5a, 0x4d, 0x6f, 0x6e, 0x69, 0x74, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x0 }; // ZMonitValue
static const GFX_XCHAR staticTextStr_297[] = { 0x5a, 0x4d, 0x6f, 0x6e, 0x69, 0x74, 0x50, 0x61, 0x72, 0x61, 0x6d, 0x0 }; // ZMonitParam
static const GFX_XCHAR staticTextStr_298[] = { 0x42, 0x72, 0x65, 0x61, 0x6b, 0x64, 0x6f, 0x77, 0x6e, 0x0 }; // Breakdown
static const GFX_XCHAR staticTextStr_299[] = { 0x54, 0x65, 0x6d, 0x70, 0x72, 0x61, 0x74, 0x75, 0x72, 0x65, 0x0 }; // Temprature
static const GFX_XCHAR staticTextStr_300[] = { 0x56, 0x6f, 0x6c, 0x74, 0x61, 0x67, 0x65, 0x0 }; // Voltage
static const GFX_XCHAR staticTextStr_301[] = { 0x44, 0x42, 0x70, 0x6f, 0x77, 0x65, 0x72, 0x44, 0x69, 0x73, 0x0 }; // DBpowerDis
static const GFX_XCHAR staticTextStr_302[] = { 0x52, 0x65, 0x67, 0x4c, 0x6f, 0x61, 0x64, 0x0 }; // RegLoad
static const GFX_XCHAR staticTextStr_303[] = { 0x43, 0x75, 0x6d, 0x75, 0x6c, 0x4c, 0x6f, 0x61, 0x64, 0x0 }; // CumulLoad
static const GFX_XCHAR staticTextStr_304[] = { 0x4f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x0 }; // Offset
static const GFX_XCHAR staticTextStr_305[] = { 0x44, 0x4f, 0x0 }; // DO
static const GFX_XCHAR staticTextStr_306[] = { 0x44, 0x49, 0x0 }; // DI
static const GFX_XCHAR staticTextStr_307[] = { 0x52, 0x6f, 0x74, 0x41, 0x6e, 0x67, 0x6c, 0x65, 0x32, 0x0 }; // RotAngle2
static const GFX_XCHAR staticTextStr_308[] = { 0x52, 0x6f, 0x74, 0x41, 0x6e, 0x67, 0x6c, 0x65, 0x31, 0x0 }; // RotAngle1
static const GFX_XCHAR staticTextStr_309[] = { 0x4d, 0x6f, 0x74, 0x6f, 0x72, 0x53, 0x70, 0x64, 0x0 }; // MotorSpd
static const GFX_XCHAR staticTextStr_310[] = { 0x5a, 0x42, 0x72, 0x65, 0x61, 0x6b, 0x64, 0x6f, 0x77, 0x6e, 0x0 }; // ZBreakdown
static const GFX_XCHAR staticTextStr_311[] = { 0x5a, 0x54, 0x65, 0x6d, 0x70, 0x72, 0x61, 0x74, 0x75, 0x72, 0x65, 0x0 }; // ZTemprature
static const GFX_XCHAR staticTextStr_312[] = { 0x5a, 0x56, 0x6f, 0x6c, 0x74, 0x61, 0x67, 0x65, 0x0 }; // ZVoltage
static const GFX_XCHAR staticTextStr_313[] = { 0x5a, 0x44, 0x42, 0x70, 0x6f, 0x77, 0x65, 0x72, 0x44, 0x69, 0x73, 0x0 }; // ZDBpowerDis
static const GFX_XCHAR staticTextStr_314[] = { 0x5a, 0x52, 0x65, 0x67, 0x4c, 0x6f, 0x61, 0x64, 0x0 }; // ZRegLoad
static const GFX_XCHAR staticTextStr_315[] = { 0x5a, 0x43, 0x75, 0x6d, 0x75, 0x6c, 0x4c, 0x6f, 0x61, 0x64, 0x0 }; // ZCumulLoad
static const GFX_XCHAR staticTextStr_316[] = { 0x5a, 0x4f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x0 }; // ZOffset
static const GFX_XCHAR staticTextStr_317[] = { 0x5a, 0x44, 0x4f, 0x0 }; // ZDO
static const GFX_XCHAR staticTextStr_318[] = { 0x5a, 0x44, 0x49, 0x0 }; // ZDI
static const GFX_XCHAR staticTextStr_319[] = { 0x5a, 0x52, 0x6f, 0x74, 0x41, 0x6e, 0x67, 0x6c, 0x65, 0x32, 0x0 }; // ZRotAngle2
static const GFX_XCHAR staticTextStr_320[] = { 0x5a, 0x52, 0x6f, 0x74, 0x41, 0x6e, 0x67, 0x6c, 0x65, 0x31, 0x0 }; // ZRotAngle1
static const GFX_XCHAR staticTextStr_321[] = { 0x5a, 0x4d, 0x6f, 0x74, 0x6f, 0x72, 0x53, 0x70, 0x64, 0x0 }; // ZMotorSpd
static const GFX_XCHAR staticTextStr_322[] = { 0x52, 0x6f, 0x74, 0x49, 0x6e, 0x65, 0x72, 0x74, 0x52, 0x61, 0x74, 0x0 }; // RotInertRat
static const GFX_XCHAR staticTextStr_323[] = { 0x50, 0x6f, 0x73, 0x4c, 0x6f, 0x6f, 0x70, 0x47, 0x61, 0x69, 0x6e, 0x0 }; // PosLoopGain
static const GFX_XCHAR staticTextStr_324[] = { 0x53, 0x70, 0x64, 0x4c, 0x6f, 0x6f, 0x70, 0x49, 0x6e, 0x74, 0x0 }; // SpdLoopInt
static const GFX_XCHAR staticTextStr_325[] = { 0x53, 0x70, 0x64, 0x4c, 0x6f, 0x6f, 0x70, 0x47, 0x61, 0x69, 0x6e, 0x0 }; // SpdLoopGain
static const GFX_XCHAR staticTextStr_326[] = { 0x53, 0x65, 0x74, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x0 }; // SetValue
static const GFX_XCHAR staticTextStr_327[] = { 0x50, 0x61, 0x72, 0x61, 0x6d, 0x53, 0x65, 0x74, 0x0 }; // ParamSet
static const GFX_XCHAR staticTextStr_328[] = { 0x5a, 0x52, 0x6f, 0x74, 0x49, 0x6e, 0x65, 0x72, 0x74, 0x52, 0x61, 0x74, 0x0 }; // ZRotInertRat
static const GFX_XCHAR staticTextStr_329[] = { 0x5a, 0x50, 0x6f, 0x73, 0x4c, 0x6f, 0x6f, 0x70, 0x47, 0x61, 0x69, 0x6e, 0x0 }; // ZPosLoopGain
static const GFX_XCHAR staticTextStr_330[] = { 0x5a, 0x53, 0x70, 0x64, 0x4c, 0x6f, 0x6f, 0x70, 0x49, 0x6e, 0x74, 0x0 }; // ZSpdLoopInt
static const GFX_XCHAR staticTextStr_331[] = { 0x5a, 0x53, 0x70, 0x64, 0x4c, 0x6f, 0x6f, 0x70, 0x47, 0x61, 0x69, 0x6e, 0x0 }; // ZSpdLoopGain
static const GFX_XCHAR staticTextStr_332[] = { 0x5a, 0x53, 0x65, 0x74, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x0 }; // ZSetValue
static const GFX_XCHAR staticTextStr_333[] = { 0x5a, 0x50, 0x61, 0x72, 0x61, 0x6d, 0x53, 0x65, 0x74, 0x0 }; // ZParamSet
/*** HGC Object Global ***/
HGC_OBJECTS hgcObj;
static HGC_STATES hgcState;

void InitFontString(void)
{
//    buttonStr_0=SavePage_BTN_Poptext;
//    buttonStr_1=SavePage_BTN_LeadIntext;
//    buttonStr_2=SavePage_BTN_LeadOuttext;
//    buttonStr_3=SavePage_BTN_Refreshtext;
    buttonStr_4=PassWordRandom_EDB_Registertext;
    buttonStr_5=PassWordRandom_EDB_GetSerialNotext;
    staticTextStr_0=Null_Arr;
    staticTextStr_1=Null_Arr;
    staticTextStr_2=Null_Arr;
    staticTextStr_3=MainInterface_OTE_29text;
    staticTextStr_4=MainInterface_OTE_28text;
    staticTextStr_5=MainInterface_OTE_27text;
    staticTextStr_6=MainInterface_OTE_26text;
    staticTextStr_7=Null_Arr;
    staticTextStr_8=MainInterface_OTE_25text;
    staticTextStr_9=MainInterface_OTE_24text;
    staticTextStr_10=FunctionPage_OTE_86text;
    staticTextStr_11=FunctionPage_OTE_84text;
    staticTextStr_12=FunctionPage_OTE_82text;
    staticTextStr_13=FunctionPage_OTE_80text;
    staticTextStr_14=FunctionPage_OTE_78text;
    staticTextStr_15=FunctionPage_OTE_73text;
    staticTextStr_16=FunctionPage_OTE_75text;
    staticTextStr_17=FunctionPage_OTE_71text;
    staticTextStr_18=FunctionPage_OTE_69text;
    staticTextStr_19=FunctionPage_OTE_68text;
    staticTextStr_20=Null_Arr;
    staticTextStr_21=Null_Arr;
    staticTextStr_22=Null_Arr;
    staticTextStr_23=Null_Arr;
    staticTextStr_24=Null_Arr;
    staticTextStr_25=Null_Arr;
    staticTextStr_26=Null_Arr;
    staticTextStr_27=PassWord_OTE_88text;
    staticTextStr_28=SavePage_OTE_438text;
    staticTextStr_29=SavePage_OTE_435text;
    staticTextStr_30=BackLightPage_OTE_261text;
    staticTextStr_31=BackLightPage_OTE_258text;
    staticTextStr_32=Null_Arr;
    staticTextStr_33=ManualPage_OTE_48text;
    staticTextStr_34=ManualPage_OTE_46text;
    staticTextStr_35=ManualPage_OTE_43text;
    staticTextStr_36=ManualPage_OTE_40text;
    staticTextStr_37=ManualPage_OTE_37text;
    staticTextStr_38=ManualPage_OTE_36text;
    staticTextStr_39=ManualSettingPage_OTE_423text;
    staticTextStr_40=ManualSettingPage_OTE_433text;

    staticTextStr_41=ManualSettingPage_OTE_430text;
    staticTextStr_42=ManualSettingPage_OTE_427text;
    staticTextStr_43=ManualSettingPage_OTE_424text;
    staticTextStr_44=MotorAdjustPage_OTE_Tip_S2;
    staticTextStr_45=MotorAdjustPage_STE_MacNegativetext;
    staticTextStr_46=MotorAdjustPage_OTE_443text;
    staticTextStr_47=MotorAdjustPage_OTE_443text;
    staticTextStr_48=MotorAdjustPage_STE_MacMTravBacktext;
    staticTextStr_49=MotorAdjustPage_STE_MacMTravForwtext;
    staticTextStr_50=MotorAdjustPage_STE_MacMPosBacktext;

    staticTextStr_51=MotorAdjustPage_STE_MacMPosForwtext;
    staticTextStr_52=MotorAdjustPage_STE_MacMainDowntext;
    staticTextStr_53=MotorAdjustPage_STE_MacMainUptext;
    staticTextStr_54=MotorAdjustPage_OTE_Tip_S2;
    staticTextStr_55=MotorAdjustPage_STE_MacNegativetext;
    staticTextStr_56=MotorAdjustPage_OTE_457text;
    staticTextStr_57=MotorAdjustPage_OTE_457text;
    staticTextStr_58=MotorAdjustPage_STE_MacSTravBacktext;
    staticTextStr_59=MotorAdjustPage_STE_MacSTravForwtext;
    staticTextStr_60=MotorAdjustPage_STE_MacSPosBacktext;

    staticTextStr_61=MotorAdjustPage_STE_MacSPosForwtext;
    staticTextStr_62=MotorAdjustPage_STE_MacSubDowntext;
    staticTextStr_63=MotorAdjustPage_STE_MacSubUptext;
    staticTextStr_64=Null_Arr;
    staticTextStr_65=AutoRunPage_OTE_64text;
    staticTextStr_66=AutoRunPage_OTE_61text;
    staticTextStr_67=AutoRunPage_OTE_58text;
    staticTextStr_68=AutoRunPage_OTE_55text;
    staticTextStr_69=AutoRunPage_OTE_53text;
    staticTextStr_70=AutoRunPage_OTE_51text;

    staticTextStr_71=PassWordFunc1Page0_OTE_111text;
    staticTextStr_72=PassWordFunc1Page0_OTE_109text;
    staticTextStr_73=PassWordFunc1Page0_OTE_106text;
    staticTextStr_74=PassWordFunc1Page0_OTE_104text;
    staticTextStr_75=PassWordFunc1Page0_OTE_102text;
    staticTextStr_76=PassWordFunc1Page0_OTE_100text;
    staticTextStr_77=PassWordFunc1Page0_OTE_98text;
    staticTextStr_78=PassWordFunc1Page0_OTE_96text;
    staticTextStr_79=PassWordFunc1Page0_OTE_94text;
    staticTextStr_80=PassWordFunc1Page0_OTE_90text;

    staticTextStr_81=Null_Arr;
    staticTextStr_82=Null_Arr;
    staticTextStr_83=Null_Arr;
    staticTextStr_84=Null_Arr;
    staticTextStr_85=Null_Arr;
    staticTextStr_86=Null_Arr;
    staticTextStr_87=Null_Arr;
    staticTextStr_88=PassWordFunc1Page1_OTE_125text;
    staticTextStr_89=PassWordFunc1Page1_OTE_124text;
    staticTextStr_90=PassWordFunc1Page1_OTE_123text;

    staticTextStr_91=PassWordFunc1Page1_OTE_121text;
    staticTextStr_92=PassWordFunc1Page1_OTE_120text;
    staticTextStr_93=PassWordFunc1Page1_OTE_119text;
    staticTextStr_94=PassWordFunc1Page1_OTE_118text;
    staticTextStr_95=PassWordFunc1Page1_OTE_117text;
    staticTextStr_96=PassWordFunc1Page1_OTE_116text;
    staticTextStr_97=PassWordFunc1Page1_OTE_113text;
    staticTextStr_98=Null_Arr;
    staticTextStr_99=Null_Arr;
    staticTextStr_100=Null_Arr;

    staticTextStr_101=Null_Arr;
    staticTextStr_102=PassWordFunc1Page2_OTE_147text;
    staticTextStr_103=PassWordFunc1Page2_OTE_146text;
    staticTextStr_104=PassWordFunc1Page2_OTE_145text;
    staticTextStr_105=PassWordFunc1Page2_OTE_143text;
    staticTextStr_106=PassWordFunc1Page2_OTE_142text;
    staticTextStr_107=PassWordFunc1Page2_OTE_141text;
    staticTextStr_108=PassWordFunc1Page2_OTE_157text;
    staticTextStr_109=PassWordFunc1Page2_OTE_140text;
    staticTextStr_110=PassWordFunc1Page2_OTE_139text;

    staticTextStr_111=PassWordFunc1Page2_OTE_138text;
    staticTextStr_112=PassWordFunc1Page2_OTE_135text;
    staticTextStr_113=Null_Arr;
    staticTextStr_114=Null_Arr;
    staticTextStr_115=Null_Arr;
    staticTextStr_116=Null_Arr;
    staticTextStr_117=Null_Arr;
    staticTextStr_118=Null_Arr;
    staticTextStr_119=PassWordFunc1Page3_OTE_494text;
    staticTextStr_120=PrepareTestMouldtext;

    staticTextStr_121=PassWordFunc1Page3_OTE_493text;
    staticTextStr_122=PassWordFunc1Page3_OTE_492text;
    staticTextStr_123=PassWordFunc1Page3_OTE_475text;
    staticTextStr_124=PassWordFunc1Page3_OTE_473text;
    staticTextStr_125=Null_Arr;
    staticTextStr_126=Null_Arr;
    staticTextStr_127=Null_Arr;
    staticTextStr_128=PassWordFunc2Page_OTE_210text;
    staticTextStr_129=PassWordFunc2Page_OTE_216text;
    staticTextStr_130=PassWordFunc2Page_OTE_204text;

    staticTextStr_131=PassWordFunc2Page_OTE_203text;
    staticTextStr_132=PassWordFunc2Page_OTE_202text;
    staticTextStr_133=PassWordFunc2Page_OTE_201text;
    staticTextStr_134=PassWordFunc2Page_OTE_200text;
    staticTextStr_135=PassWordFunc2Page_OTE_199text;
    staticTextStr_136=PassWordFunc2Page_OTE_198text;
    staticTextStr_137=PassWordFunc2Page_OTE_196text;
    staticTextStr_138=PassWordFunc2Page_OTE_194text;
    staticTextStr_139=Null_Arr;
    staticTextStr_140=Null_Arr;

    staticTextStr_141=PassWordFunc2Page2_OTE_151text;
    staticTextStr_142=MainInterface_OTE_26_S2text;
    staticTextStr_143=Null_Arr;
    staticTextStr_144=Null_Arr;
    staticTextStr_145=Null_Arr;
    staticTextStr_146=Null_Arr;
    staticTextStr_147=Null_Arr;
    staticTextStr_148=ParamPage_OTE_268text;
    staticTextStr_149=ParamPage_OTE_267text;
    staticTextStr_150=ParamPage_OTE_266text;

    staticTextStr_151=ParamPage_OTE_265text;
    staticTextStr_152=Null_Arr;
    staticTextStr_153=Null_Arr;
    staticTextStr_154=Null_Arr;
    staticTextStr_155=Null_Arr;
    staticTextStr_156=Null_Arr;
    staticTextStr_157=Null_Arr;
    staticTextStr_158=AlarmInfoPage_OTE_274text;
    staticTextStr_159=Null_Arr;
    staticTextStr_160=Null_Arr;

    staticTextStr_161=Null_Arr;
    staticTextStr_162=Null_Arr;
    staticTextStr_163=Null_Arr;
    staticTextStr_164=CycleTimePage_OTE_285text;
    staticTextStr_165=LimitTimePage_OTE_186text;
    staticTextStr_166=LimitTimePage_OTE_185text;
    staticTextStr_167=LimitTimePage_OTE_184text;
    staticTextStr_168=LimitTimePage_OTE_183text;
    staticTextStr_169=LimitTimePage_OTE_182text;
    staticTextStr_170=LimitTimePage_OTE_181text;

    staticTextStr_171=LimitTimePage_OTE_180text;
    staticTextStr_172=LimitTimePage_OTE_178text;
    staticTextStr_173=LimitSettingPage_OTE_251text;
    staticTextStr_174=LimitSettingPage_OTE_245text;
    staticTextStr_175=LimitSettingPage_OTE_243text;
    staticTextStr_176=LimitSettingPage_OTE_242text;
    staticTextStr_177=LimitSettingPage_OTE_240text;
    staticTextStr_178=LimitSettingPage_OTE_239text;
    staticTextStr_179=LimitSettingPage_OTE_252text;
    staticTextStr_180=LimitSettingPage_OTE_249text;

    staticTextStr_181=LimitSettingPage_OTE_247text;
    staticTextStr_182=Null_Arr;
    staticTextStr_183=Null_Arr;
    staticTextStr_184=Null_Arr;
    staticTextStr_185=Null_Arr;
    staticTextStr_186=Null_Arr;
    staticTextStr_187=Null_Arr;
    staticTextStr_188=Null_Arr;
    staticTextStr_189=Null_Arr;
    staticTextStr_190=Null_Arr;

    staticTextStr_191=InputLimitPage0_OTE_326text;
    staticTextStr_192=InputLimitPage0_OTE_327text;
    staticTextStr_193=InputLimitPage0_OTE_325text;
    staticTextStr_194=InputLimitPage0_OTE_324text;
    staticTextStr_195=InputLimitPage0_OTE_323text;
    staticTextStr_196=InputLimitPage0_OTE_322text;
    staticTextStr_197=InputLimitPage0_OTE_321text;
//    staticTextStr_198=Null_Arr;
    staticTextStr_199=InputLimitPage0_OTE_319text;
    staticTextStr_200=InputLimitPage0_OTE_318text;

    staticTextStr_201=InputLimitPage0_OTE_317text;
    staticTextStr_202=InputLimitPage0_OTE_316text;
    staticTextStr_203=InputLimitPage0_OTE_315text;
    staticTextStr_204=InputLimitPage0_OTE_314text;
    staticTextStr_205=InputLimitPage0_OTE_313text;
    staticTextStr_206=InputLimitPage0_OTE_312text;
    staticTextStr_207=InputLimitPage1_OTE_351text;
    staticTextStr_208=InputLimitPage1_OTE_350text;
    staticTextStr_209=InputLimitPage1_OTE_349text;
    staticTextStr_210=InputLimitPage1_OTE_348text;

    staticTextStr_211=InputLimitPage1_OTE_347text;
    staticTextStr_212=InputLimitPage1_OTE_346text;
    staticTextStr_213=InputLimitPage1_OTE_345text;
    staticTextStr_214=InputLimitPage1_OTE_358text;
    staticTextStr_215=InputLimitPage1_OTE_359text;
    staticTextStr_216=InputLimitPage1_OTE_357text;
    staticTextStr_217=InputLimitPage1_OTE_356text;
    staticTextStr_218=InputLimitPage1_OTE_355text;
    staticTextStr_219=InputLimitPage1_OTE_354text;
    staticTextStr_220=InputLimitPage1_OTE_353text;

    staticTextStr_221=InputLimitPage1_OTE_352text;
    staticTextStr_222=InputLimitPage1_OTE_344text;
    staticTextStr_223=Null_Arr;
    staticTextStr_224=Null_Arr;
    staticTextStr_225=Null_Arr;
    staticTextStr_226=Null_Arr;
    staticTextStr_227=Null_Arr;
    staticTextStr_228=Null_Arr;
    staticTextStr_229=Null_Arr;
    staticTextStr_230=Null_Arr;

    staticTextStr_231=OutputValuePage0_OTE_390text;
    staticTextStr_232=OutputValuePage0_OTE_391text;
    staticTextStr_233=OutputValuePage0_OTE_389text;
    staticTextStr_234=OutputValuePage0_OTE_388text;
    staticTextStr_235=OutputValuePage0_OTE_387text;
    staticTextStr_236=OutputValuePage0_OTE_386text;
    staticTextStr_237=OutputValuePage0_OTE_385text;
    staticTextStr_238=OutputValuePage0_OTE_384text;
    staticTextStr_239=OutputValuePage0_OTE_383text;
    staticTextStr_240=OutputValuePage0_OTE_382text;

    staticTextStr_241=OutputValuePage0_OTE_381text;
    staticTextStr_242=OutputValuePage0_OTE_380text;
    staticTextStr_243=OutputValuePage0_OTE_379text;
    staticTextStr_244=OutputValuePage0_OTE_378text;
    staticTextStr_245=OutputValuePage0_OTE_377text;
    staticTextStr_246=OutputValuePage0_OTE_376text;
//    staticTextStr_247=Null_Arr;
//    staticTextStr_248=Null_Arr;
//    staticTextStr_249=Null_Arr;
    staticTextStr_250=OutputValuePage1_OTE_420text;

    staticTextStr_251=OutputValuePage1_OTE_419text;
    staticTextStr_252=OutputValuePage1_OTE_418text;
    staticTextStr_253=OutputValuePage1_OTE_417text;
    staticTextStr_254=OutputValuePage1_OTE_416text;
    staticTextStr_255=OutputValuePage1_OTE_415text;
    staticTextStr_256=OutputValuePage1_OTE_414text;
    staticTextStr_257=OutputValuePage1_OTE_413text;
    staticTextStr_258=OutputValuePage1_OTE_412text;
    staticTextStr_259=OutputValuePage1_OTE_411text;
    staticTextStr_260=OutputValuePage1_OTE_410text;

    staticTextStr_261=OutputValuePage1_OTE_409text;
    staticTextStr_262=OutputValuePage1_OTE_408text;
    staticTextStr_263=Null_Arr;
    staticTextStr_264=Null_Arr;
    staticTextStr_265=Null_Arr;
    staticTextStr_266=Null_Arr;
    staticTextStr_267=Null_Arr;
    staticTextStr_268=Null_Arr;
    staticTextStr_269=Null_Arr;
    staticTextStr_270=ResetFcSettingPage_OTE_159text;

//    staticTextStr_271=Null_Arr;
//    staticTextStr_272=Null_Arr;
//    staticTextStr_273=Null_Arr;
    staticTextStr_274=ProgramInfoPage_OTE_164text;
    staticTextStr_275=ProgramInfoPage_OTE_162text;
    staticTextStr_276=ProgramInfoPage_OTE_160text;
    staticTextStr_277=ClockTimePage_OTE_168text;
    staticTextStr_278=ClockTimePage_OTE_166text;
//    staticTextStr_279=Null_Arr;
//    staticTextStr_280=Null_Arr;
//
//    staticTextStr_281=Null_Arr;
    staticTextStr_282=CompanyInfoPage_OTE_232text;
    staticTextStr_283=PassWordRandom_OTE_146text;
    staticTextStr_284=PassWordRandom_OTE_142text;
    staticTextStr_285=PassWordRandom_OTE_140text;
    staticTextStr_286=PassWordRandom_OTE_138text;
    staticTextStr_287=PassWordRandom_OTE_136text;
    staticTextStr_288=FactoryTimePage_OTE_230text;
    staticTextStr_289=FactoryTimePage_OTE_229text;
    staticTextStr_290=FactoryTimePage_OTE_225text;

    staticTextStr_291=FactoryTimePage_OTE_223text;
    staticTextStr_292=Null_Arr;
    staticTextStr_293=MoniValuetext;
    staticTextStr_294=MoniParatext;
    staticTextStr_295=ZMoniValuetext;
    staticTextStr_296=ZMoniParatext;
    staticTextStr_297=ERROR_CODEtext;
    staticTextStr_298=HINK_TEMPtext;
    staticTextStr_299=DC_BUS_VOLTAGEtext;
    staticTextStr_300=DB_POWERtext;

    staticTextStr_301=TRQ_BURDEN2text;
    staticTextStr_302=TRQ_BURDEN1text;
    staticTextStr_303=P_ERRORtext;
    staticTextStr_304=DO_PORT_STATUStext;
    staticTextStr_305=DI_PORT_STATUStext;
    staticTextStr_306=ELEC_ANGLEtext;
    staticTextStr_307=MECH_ANGLEtext;
    staticTextStr_308=SPD_FBKtext;
    staticTextStr_309=ZERROR_CODEtext;
    staticTextStr_310=ZHINK_TEMPtext;

    staticTextStr_311=ZDC_BUS_VOLTAGEtext;
    staticTextStr_312=ZDB_POWERtext;
    staticTextStr_313=ZTRQ_BURDEN2text;
    staticTextStr_314=ZTRQ_BURDEN1text;
    staticTextStr_315=ZP_ERRORtext;
    staticTextStr_316=ZDO_PORT_STATUStext;
    staticTextStr_317=ZDI_PORT_STATUStext;
    staticTextStr_318=ZELEC_ANGLEtext;
    staticTextStr_319=ZMECH_ANGLEtext;
    staticTextStr_320=ZSPD_FBKtext;

    staticTextStr_321=RotationalInertiaRatiotext;
    staticTextStr_322=PositionLoopGaintext;
    staticTextStr_323=SpeedLoopIntegraltext;
    staticTextStr_324=SpeedLoopGaintext;
    staticTextStr_325=SettingValuetext;
    staticTextStr_326=ParaSettingtext;
    staticTextStr_327=ZRotationalInertiaRatiotext;
    staticTextStr_328=ZPositionLoopGaintext;
    staticTextStr_329=ZSpeedLoopIntegraltext;
    staticTextStr_330=ZSpeedLoopGaintext;

    staticTextStr_331=ZSettingValuetext;
    staticTextStr_332=ZParaSettingtext;
}

/******************************************************************************
  Function:
    HGC_SCREEN_STATES GFX_HGC_GetScreenState ( void )

  Remarks:
    This function returns the screen state
 */
HGC_SCREEN_STATES GFX_HGC_GetScreenState ( void )
{
    return hgcObj.screenState;
}


/******************************************************************************
  Function:
    void GFX_HGC_SetScreenState ( HGC_SCREEN_STATES newState )

  Remarks:
    This function sets the screen state machine to a new state
 */
void GFX_HGC_SetScreenState ( HGC_SCREEN_STATES newState )
{
    hgcObj.prevRefreshState = hgcObj.screenState;
    hgcObj.screenState = newState;
}


/******************************************************************************
  Function:
    void GFX_HGC_Initialize ( void )

  Summary:
    This function initializes the HGC state machine.  
 */
void GFX_HGC_Initialize ( void )
{
    hgcState = HGC_STATE_INIT;
    hgcObj.screenState = HGC_SCREEN_STATE_INIT;
}


/******************************************************************************
  Function:
    void GFX_HGC_Setup ( void )

  Summary:
    This function sets up the GOL message callback and draw callbacks.  
 */
void GFX_HGC_Setup ( void )
{
    GFX_GOL_MessageCallbackSet(GFX_INDEX_0, &GFX_HGC_MessageCallback);
    GFX_GOL_DrawCallbackSet(GFX_INDEX_0, &GFX_HGC_DrawCallback);

    GFX_HGC_InitializeSchemes();

}

/******************************************************************************
  Function:
    void GFX_HGC_Tasks (SYS_MODULE_OBJ gfxObject);

  Summary:
    This function is called in SYS_Tasks.  The intent wait until the GFX library
    is initialized before supplying items to draw
*/
void GFX_HGC_Tasks  (SYS_MODULE_OBJ gfxObject)
{
    switch ( hgcState )
    {
        case HGC_STATE_INIT:
            if (GFX_Status(gfxObject)==SYS_STATUS_READY)
            {
                GFX_HGC_Setup();
                hgcState = HGC_STATE_RUNNING;
            }
            break;

        case HGC_STATE_RUNNING:
            break;

        default:
            break;
    }
}

/******************************************************************************
  Function:
    void GFX_HGC_SchemeCreate ( void )

  Summary:
    Allocates memory for a new scheme
 */
GFX_GOL_OBJ_SCHEME *GFX_HGC_SchemeCreate(void)
{
    GFX_GOL_OBJ_SCHEME  *pTemp;

    pTemp = (GFX_GOL_OBJ_SCHEME *)GFX_malloc(sizeof(GFX_GOL_OBJ_SCHEME));

    if(pTemp != NULL)
    {
        memcpy(pTemp, &GFX_SCHEMEDEFAULT, sizeof(GFX_GOL_OBJ_SCHEME));
    }

    return (pTemp);
}

/******************************************************************************
  Function:
    void GFX_HGC_InitializeSchemes ( void )

  Summary:
    Initializes all HGC-specified schemes
 */
void GFX_HGC_InitializeSchemes( void )
{
    gfxScheme0 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme0->AlphaValue =        GFX_SCHEME_ALPHA_0;
#endif
    gfxScheme0->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_0, GFX_SCHEME_PRIMARY_COLOR_GREEN_0, GFX_SCHEME_PRIMARY_COLOR_BLUE_0);
    gfxScheme0->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_0, GFX_SCHEME_SECONDARY_COLOR_GREEN_0, GFX_SCHEME_SECONDARY_COLOR_BLUE_0);
    gfxScheme0->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_0, GFX_SCHEME_DISABLED_COLOR_GREEN_0, GFX_SCHEME_DISABLED_COLOR_BLUE_0);
    gfxScheme0->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_0, GFX_SCHEME_BACKGROUND_COLOR_GREEN_0, GFX_SCHEME_BACKGROUND_COLOR_BLUE_0);
	gfxScheme0->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_0;
    gfxScheme0->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_0, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_0, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_0);
    gfxScheme0->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_0, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_0, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_0);
	gfxScheme0->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_0, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_0, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_0);
    gfxScheme0->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_0, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_0, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_0);
    gfxScheme0->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_0, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_0, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_0);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme0->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_0, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_0, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_0);
	gfxScheme0->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_0, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_0, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_0);
#endif
    gfxScheme0->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_0;
    gfxScheme0->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_0;
    gfxScheme0->pFont =             (GFX_RESOURCE_HDR*)&simsun_16;
    gfxScheme0->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme0->fillStyle =         GFX_SCHEME_FILL_STYLE_0;
	gfxScheme0->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_0;

    gfxScheme1 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme1->AlphaValue =        GFX_SCHEME_ALPHA_1;
#endif
    gfxScheme1->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_1, GFX_SCHEME_PRIMARY_COLOR_GREEN_1, GFX_SCHEME_PRIMARY_COLOR_BLUE_1);
    gfxScheme1->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_1, GFX_SCHEME_SECONDARY_COLOR_GREEN_1, GFX_SCHEME_SECONDARY_COLOR_BLUE_1);
    gfxScheme1->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_1, GFX_SCHEME_DISABLED_COLOR_GREEN_1, GFX_SCHEME_DISABLED_COLOR_BLUE_1);
    gfxScheme1->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_1, GFX_SCHEME_BACKGROUND_COLOR_GREEN_1, GFX_SCHEME_BACKGROUND_COLOR_BLUE_1);
	gfxScheme1->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_1;
    gfxScheme1->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_1, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_1, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_1);
    gfxScheme1->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_1, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_1, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_1);
	gfxScheme1->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_1, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_1, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_1);
    gfxScheme1->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_1, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_1, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_1);
    gfxScheme1->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_1, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_1, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_1);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme1->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_1, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_1, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_1);
	gfxScheme1->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_1, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_1, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_1);
#endif
    gfxScheme1->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_1;
    gfxScheme1->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_1;
    gfxScheme1->pFont =             (GFX_RESOURCE_HDR*)&simsun_16;
    gfxScheme1->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme1->fillStyle =         GFX_SCHEME_FILL_STYLE_1;
	gfxScheme1->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_1;

    gfxScheme2 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme2->AlphaValue =        GFX_SCHEME_ALPHA_2;
#endif
    gfxScheme2->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_2, GFX_SCHEME_PRIMARY_COLOR_GREEN_2, GFX_SCHEME_PRIMARY_COLOR_BLUE_2);
    gfxScheme2->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_2, GFX_SCHEME_SECONDARY_COLOR_GREEN_2, GFX_SCHEME_SECONDARY_COLOR_BLUE_2);
    gfxScheme2->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_2, GFX_SCHEME_DISABLED_COLOR_GREEN_2, GFX_SCHEME_DISABLED_COLOR_BLUE_2);
    gfxScheme2->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_2, GFX_SCHEME_BACKGROUND_COLOR_GREEN_2, GFX_SCHEME_BACKGROUND_COLOR_BLUE_2);
	gfxScheme2->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_2;
    gfxScheme2->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_2, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_2, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_2);
    gfxScheme2->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_2, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_2, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_2);
	gfxScheme2->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_2, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_2, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_2);
    gfxScheme2->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_2, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_2, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_2);
    gfxScheme2->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_2, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_2, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_2);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme2->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_2, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_2, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_2);
	gfxScheme2->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_2, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_2, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_2);
#endif
    gfxScheme2->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_2;
    gfxScheme2->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_2;
    gfxScheme2->pFont =             (GFX_RESOURCE_HDR*)&simsun_16;
    gfxScheme2->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme2->fillStyle =         GFX_SCHEME_FILL_STYLE_2;
	gfxScheme2->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_2;

    gfxScheme3 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme3->AlphaValue =        GFX_SCHEME_ALPHA_3;
#endif
    gfxScheme3->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_3, GFX_SCHEME_PRIMARY_COLOR_GREEN_3, GFX_SCHEME_PRIMARY_COLOR_BLUE_3);
    gfxScheme3->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_3, GFX_SCHEME_SECONDARY_COLOR_GREEN_3, GFX_SCHEME_SECONDARY_COLOR_BLUE_3);
    gfxScheme3->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_3, GFX_SCHEME_DISABLED_COLOR_GREEN_3, GFX_SCHEME_DISABLED_COLOR_BLUE_3);
    gfxScheme3->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_3, GFX_SCHEME_BACKGROUND_COLOR_GREEN_3, GFX_SCHEME_BACKGROUND_COLOR_BLUE_3);
	gfxScheme3->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_3;
    gfxScheme3->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_3, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_3, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_3);
    gfxScheme3->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_3, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_3, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_3);
	gfxScheme3->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_3, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_3, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_3);
    gfxScheme3->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_3, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_3, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_3);
    gfxScheme3->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_3, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_3, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_3);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme3->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_3, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_3, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_3);
	gfxScheme3->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_3, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_3, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_3);
#endif
    gfxScheme3->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_3;
    gfxScheme3->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_3;
    gfxScheme3->pFont =             (GFX_RESOURCE_HDR*)&simsun_16;
    gfxScheme3->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme3->fillStyle =         GFX_SCHEME_FILL_STYLE_3;
	gfxScheme3->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_3;

    gfxScheme4 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme4->AlphaValue =        GFX_SCHEME_ALPHA_4;
#endif
    gfxScheme4->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_4, GFX_SCHEME_PRIMARY_COLOR_GREEN_4, GFX_SCHEME_PRIMARY_COLOR_BLUE_4);
    gfxScheme4->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_4, GFX_SCHEME_SECONDARY_COLOR_GREEN_4, GFX_SCHEME_SECONDARY_COLOR_BLUE_4);
    gfxScheme4->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_4, GFX_SCHEME_DISABLED_COLOR_GREEN_4, GFX_SCHEME_DISABLED_COLOR_BLUE_4);
    gfxScheme4->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_4, GFX_SCHEME_BACKGROUND_COLOR_GREEN_4, GFX_SCHEME_BACKGROUND_COLOR_BLUE_4);
	gfxScheme4->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_4;
    gfxScheme4->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_4, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_4, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_4);
    gfxScheme4->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_4, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_4, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_4);
	gfxScheme4->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_4, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_4, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_4);
    gfxScheme4->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_4, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_4, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_4);
    gfxScheme4->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_4, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_4, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_4);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme4->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_4, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_4, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_4);
	gfxScheme4->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_4, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_4, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_4);
#endif
    gfxScheme4->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_4;
    gfxScheme4->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_4;
    gfxScheme4->pFont =             (GFX_RESOURCE_HDR*)&simsun_16;
    gfxScheme4->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme4->fillStyle =         GFX_SCHEME_FILL_STYLE_4;
	gfxScheme4->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_4;

    gfxScheme5 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme5->AlphaValue =        GFX_SCHEME_ALPHA_5;
#endif
    gfxScheme5->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_5, GFX_SCHEME_PRIMARY_COLOR_GREEN_5, GFX_SCHEME_PRIMARY_COLOR_BLUE_5);
    gfxScheme5->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_5, GFX_SCHEME_SECONDARY_COLOR_GREEN_5, GFX_SCHEME_SECONDARY_COLOR_BLUE_5);
    gfxScheme5->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_5, GFX_SCHEME_DISABLED_COLOR_GREEN_5, GFX_SCHEME_DISABLED_COLOR_BLUE_5);
    gfxScheme5->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_5, GFX_SCHEME_BACKGROUND_COLOR_GREEN_5, GFX_SCHEME_BACKGROUND_COLOR_BLUE_5);
	gfxScheme5->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_5;
    gfxScheme5->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_5, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_5, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_5);
    gfxScheme5->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_5, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_5, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_5);
	gfxScheme5->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_5, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_5, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_5);
    gfxScheme5->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_5, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_5, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_5);
    gfxScheme5->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_5, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_5, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_5);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme5->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_5, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_5, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_5);
	gfxScheme5->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_5, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_5, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_5);
#endif
    gfxScheme5->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_5;
    gfxScheme5->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_5;
    gfxScheme5->pFont =             (GFX_RESOURCE_HDR*)&simsun_16;
    gfxScheme5->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme5->fillStyle =         GFX_SCHEME_FILL_STYLE_5;
	gfxScheme5->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_5;

    gfxScheme6 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme6->AlphaValue =        GFX_SCHEME_ALPHA_6;
#endif
    gfxScheme6->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_6, GFX_SCHEME_PRIMARY_COLOR_GREEN_6, GFX_SCHEME_PRIMARY_COLOR_BLUE_6);
    gfxScheme6->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_6, GFX_SCHEME_SECONDARY_COLOR_GREEN_6, GFX_SCHEME_SECONDARY_COLOR_BLUE_6);
    gfxScheme6->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_6, GFX_SCHEME_DISABLED_COLOR_GREEN_6, GFX_SCHEME_DISABLED_COLOR_BLUE_6);
    gfxScheme6->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_6, GFX_SCHEME_BACKGROUND_COLOR_GREEN_6, GFX_SCHEME_BACKGROUND_COLOR_BLUE_6);
	gfxScheme6->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_6;
    gfxScheme6->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_6, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_6, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_6);
    gfxScheme6->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_6, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_6, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_6);
	gfxScheme6->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_6, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_6, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_6);
    gfxScheme6->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_6, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_6, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_6);
    gfxScheme6->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_6, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_6, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_6);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme6->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_6, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_6, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_6);
	gfxScheme6->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_6, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_6, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_6);
#endif
    gfxScheme6->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_6;
    gfxScheme6->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_6;
    gfxScheme6->pFont =             (GFX_RESOURCE_HDR*)&simsun_16;
    gfxScheme6->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme6->fillStyle =         GFX_SCHEME_FILL_STYLE_6;
	gfxScheme6->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_6;

    gfxScheme7 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme7->AlphaValue =        GFX_SCHEME_ALPHA_7;
#endif
    gfxScheme7->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_7, GFX_SCHEME_PRIMARY_COLOR_GREEN_7, GFX_SCHEME_PRIMARY_COLOR_BLUE_7);
    gfxScheme7->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_7, GFX_SCHEME_SECONDARY_COLOR_GREEN_7, GFX_SCHEME_SECONDARY_COLOR_BLUE_7);
    gfxScheme7->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_7, GFX_SCHEME_DISABLED_COLOR_GREEN_7, GFX_SCHEME_DISABLED_COLOR_BLUE_7);
    gfxScheme7->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_7, GFX_SCHEME_BACKGROUND_COLOR_GREEN_7, GFX_SCHEME_BACKGROUND_COLOR_BLUE_7);
	gfxScheme7->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_7;
    gfxScheme7->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_7, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_7, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_7);
    gfxScheme7->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_7, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_7, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_7);
	gfxScheme7->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_7, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_7, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_7);
    gfxScheme7->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_7, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_7, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_7);
    gfxScheme7->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_7, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_7, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_7);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme7->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_7, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_7, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_7);
	gfxScheme7->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_7, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_7, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_7);
#endif
    gfxScheme7->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_7;
    gfxScheme7->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_7;
    gfxScheme7->pFont =             (GFX_RESOURCE_HDR*)&simsun_16;
    gfxScheme7->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme7->fillStyle =         GFX_SCHEME_FILL_STYLE_7;
	gfxScheme7->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_7;

    gfxScheme8 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme8->AlphaValue =        GFX_SCHEME_ALPHA_8;
#endif
    gfxScheme8->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_8, GFX_SCHEME_PRIMARY_COLOR_GREEN_8, GFX_SCHEME_PRIMARY_COLOR_BLUE_8);
    gfxScheme8->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_8, GFX_SCHEME_SECONDARY_COLOR_GREEN_8, GFX_SCHEME_SECONDARY_COLOR_BLUE_8);
    gfxScheme8->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_8, GFX_SCHEME_DISABLED_COLOR_GREEN_8, GFX_SCHEME_DISABLED_COLOR_BLUE_8);
    gfxScheme8->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_8, GFX_SCHEME_BACKGROUND_COLOR_GREEN_8, GFX_SCHEME_BACKGROUND_COLOR_BLUE_8);
	gfxScheme8->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_8;
    gfxScheme8->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_8, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_8, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_8);
    gfxScheme8->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_8, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_8, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_8);
	gfxScheme8->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_8, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_8, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_8);
    gfxScheme8->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_8, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_8, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_8);
    gfxScheme8->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_8, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_8, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_8);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme8->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_8, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_8, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_8);
	gfxScheme8->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_8, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_8, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_8);
#endif
    gfxScheme8->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_8;
    gfxScheme8->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_8;
    gfxScheme8->pFont =             (GFX_RESOURCE_HDR*)&simsun_16;
    gfxScheme8->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme8->fillStyle =         GFX_SCHEME_FILL_STYLE_8;
	gfxScheme8->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_8;

    gfxScheme9 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme9->AlphaValue =        GFX_SCHEME_ALPHA_9;
#endif
    gfxScheme9->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_9, GFX_SCHEME_PRIMARY_COLOR_GREEN_9, GFX_SCHEME_PRIMARY_COLOR_BLUE_9);
    gfxScheme9->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_9, GFX_SCHEME_SECONDARY_COLOR_GREEN_9, GFX_SCHEME_SECONDARY_COLOR_BLUE_9);
    gfxScheme9->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_9, GFX_SCHEME_DISABLED_COLOR_GREEN_9, GFX_SCHEME_DISABLED_COLOR_BLUE_9);
    gfxScheme9->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_9, GFX_SCHEME_BACKGROUND_COLOR_GREEN_9, GFX_SCHEME_BACKGROUND_COLOR_BLUE_9);
	gfxScheme9->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_9;
    gfxScheme9->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_9, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_9, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_9);
    gfxScheme9->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_9, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_9, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_9);
	gfxScheme9->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_9, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_9, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_9);
    gfxScheme9->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_9, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_9, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_9);
    gfxScheme9->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_9, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_9, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_9);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme9->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_9, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_9, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_9);
	gfxScheme9->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_9, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_9, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_9);
#endif
    gfxScheme9->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_9;
    gfxScheme9->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_9;
    gfxScheme9->pFont =             (GFX_RESOURCE_HDR*)&simsun_16;
    gfxScheme9->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme9->fillStyle =         GFX_SCHEME_FILL_STYLE_9;
	gfxScheme9->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_9;

    WarningSte=gfxScheme7;
    WarningDm=gfxScheme9;
    defscheme=*gfxScheme2;
    motorAdjscheme=*gfxScheme5;
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MESSAGECallback(uint16_t objMsg, GFX_GOL_OBJ_HEADER* pObj, GFX_GOL_MESSAGE* pMsg)

  Input: 
    objMsg - translated message for the object,
    pObj - pointer to the object,
    pMsg - pointer to the non-translated, raw GOL message

  Output: 
    If the function returns non-zero the message will be processed by default

  Remarks: 
    GFX_GOL_MESSAGECallback() function calls it each time the valid message for the GOL object is received.
 */
bool GFX_HGC_MessageCallback(GFX_GOL_TRANSLATED_ACTION objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    // process messages for demo screens
    switch (hgcObj.screenState)
    {
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_StartUpScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_StopPage:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MainInterface:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_FunctionScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_PasswordScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ProgramSelectScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_BrightnessAdjustScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ManualScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ManualParaSetScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_EleTonemeScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_EleToneme2Screen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AutoOperaScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen1_1:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen1_2:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen1_3:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen1_4:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen2_1:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen2_2:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ParaInstructScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AlarmReportScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_CycleTimeReportScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_LimitTimeScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MachineLimitScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_InputWatchScreen1_1:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_InputWatchScreen1_2:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_InputWatchScreen1_3:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_OutputWatchScreen1_1:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_OutputWatchScreen1_2:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_OutputWatchScreen1_3:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_OutputRecoverScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ProgramInfoScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_DateTimeSetScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_CompanyInfoScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_PasswordRandomScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_FactoryTimeScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AllMonitorParaPage:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AllMonitorParaPageZ:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MonitorParaPage:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MonitorParaPage1:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ServoPage0:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ServoPage1:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ServoPage2:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ServoPage3:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
      default:
            // process message by default
            return true;
    }
    return true;
}

/******************************************************************************
  Function: 
    bool GFX_HGC_DrawCallback( void )

  Output: 
    If the function returns non-zero the draw control will be passed to GOL

  Remarks: 
    GFX_GOL_Draw() function calls it each time when GOL objects drawing is 
    completed. HGC-specified draw data is grouped by screens states. It takes 
    two states to complete the drawing of each screen.  GFX GOL objects are drawn
    first and then GFX Primitives are drawn next to ensure primitives are not
    covered by GOL objects.
 */
bool GFX_HGC_DrawCallback( void )
{
    switch (hgcObj.screenState)
    {
        case HGC_SCREEN_STATE_INIT:
            //Draw the primary screen as selected in the Composer
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_StartUpScreen);
            return true;
        case HGC_SCREEN_STATE_SETUP_SCREEN_StartUpScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_StartUpScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_StartUpScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_StartUpScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_StartUpScreen:
            GFX_HGC_SetupScreen(StartUpScreen);
            GFX_HGC_DrawScreen_GOL(StartUpScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_StartUpScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_StartUpScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_StartUpScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_StartUpScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_StartUpScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_StartUpScreen:
            GFX_HGC_DrawScreen_Primitives(StartUpScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_StartUpScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_StartUpScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_StartUpScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_StartUpScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_StopPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_StopPage);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_StopPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_StopPage);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_StopPage:
            GFX_HGC_SetupScreen(StopPage);
            GFX_HGC_DrawScreen_GOL(StopPage);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_StopPage);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_StopPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_StopPage);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_StopPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_StopPage);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_StopPage:
            GFX_HGC_DrawScreen_Primitives(StopPage);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_StopPage);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_StopPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_StopPage);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_StopPage:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_MainInterface:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MainInterface);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MainInterface:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MainInterface);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MainInterface:
            GFX_HGC_SetupScreen(MainInterface);
            GFX_HGC_DrawScreen_GOL(MainInterface);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MainInterface);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MainInterface:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MainInterface);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MainInterface:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MainInterface);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MainInterface:
            GFX_HGC_DrawScreen_Primitives(MainInterface);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MainInterface);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MainInterface:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_MainInterface);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MainInterface:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_FunctionScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_FunctionScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_FunctionScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_FunctionScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_FunctionScreen:
            GFX_HGC_SetupScreen(FunctionScreen);
            GFX_HGC_DrawScreen_GOL(FunctionScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_FunctionScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_FunctionScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_FunctionScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_FunctionScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_FunctionScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_FunctionScreen:
            GFX_HGC_DrawScreen_Primitives(FunctionScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_FunctionScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_FunctionScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_FunctionScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_FunctionScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_PasswordScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_PasswordScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_PasswordScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_PasswordScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_PasswordScreen:
            GFX_HGC_SetupScreen(PasswordScreen);
            GFX_HGC_DrawScreen_GOL(PasswordScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_PasswordScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_PasswordScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_PasswordScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_PasswordScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_PasswordScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_PasswordScreen:
            GFX_HGC_DrawScreen_Primitives(PasswordScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_PasswordScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_PasswordScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_PasswordScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_PasswordScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ProgramSelectScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ProgramSelectScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ProgramSelectScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ProgramSelectScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ProgramSelectScreen:
            GFX_HGC_SetupScreen(ProgramSelectScreen);
            GFX_HGC_DrawScreen_GOL(ProgramSelectScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ProgramSelectScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ProgramSelectScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ProgramSelectScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ProgramSelectScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ProgramSelectScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ProgramSelectScreen:
            GFX_HGC_DrawScreen_Primitives(ProgramSelectScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ProgramSelectScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ProgramSelectScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ProgramSelectScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ProgramSelectScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_BrightnessAdjustScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_BrightnessAdjustScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_BrightnessAdjustScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_BrightnessAdjustScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_BrightnessAdjustScreen:
            GFX_HGC_SetupScreen(BrightnessAdjustScreen);
            GFX_HGC_DrawScreen_GOL(BrightnessAdjustScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_BrightnessAdjustScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_BrightnessAdjustScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_BrightnessAdjustScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_BrightnessAdjustScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_BrightnessAdjustScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_BrightnessAdjustScreen:
            GFX_HGC_DrawScreen_Primitives(BrightnessAdjustScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_BrightnessAdjustScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_BrightnessAdjustScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_BrightnessAdjustScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_BrightnessAdjustScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ManualScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ManualScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ManualScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ManualScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ManualScreen:
            GFX_HGC_SetupScreen(ManualScreen);
            GFX_HGC_DrawScreen_GOL(ManualScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ManualScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ManualScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ManualScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ManualScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ManualScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ManualScreen:
            GFX_HGC_DrawScreen_Primitives(ManualScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ManualScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ManualScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ManualScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ManualScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ManualParaSetScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ManualParaSetScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ManualParaSetScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ManualParaSetScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ManualParaSetScreen:
            GFX_HGC_SetupScreen(ManualParaSetScreen);
            GFX_HGC_DrawScreen_GOL(ManualParaSetScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ManualParaSetScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ManualParaSetScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ManualParaSetScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ManualParaSetScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ManualParaSetScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ManualParaSetScreen:
            GFX_HGC_DrawScreen_Primitives(ManualParaSetScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ManualParaSetScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ManualParaSetScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ManualParaSetScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ManualParaSetScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_EleTonemeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_EleTonemeScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_EleTonemeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_EleTonemeScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_EleTonemeScreen:
            GFX_HGC_SetupScreen(EleTonemeScreen);
            GFX_HGC_DrawScreen_GOL(EleTonemeScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_EleTonemeScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_EleTonemeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_EleTonemeScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_EleTonemeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_EleTonemeScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_EleTonemeScreen:
            GFX_HGC_DrawScreen_Primitives(EleTonemeScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_EleTonemeScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_EleTonemeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_EleTonemeScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_EleTonemeScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_EleToneme2Screen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_EleToneme2Screen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_EleToneme2Screen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_EleToneme2Screen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_EleToneme2Screen:
            GFX_HGC_SetupScreen(EleToneme2Screen);
            GFX_HGC_DrawScreen_GOL(EleToneme2Screen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_EleToneme2Screen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_EleToneme2Screen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_EleToneme2Screen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_EleToneme2Screen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_EleToneme2Screen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_EleToneme2Screen:
            GFX_HGC_DrawScreen_Primitives(EleToneme2Screen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_EleToneme2Screen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_EleToneme2Screen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_EleToneme2Screen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_EleToneme2Screen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_AutoOperaScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_AutoOperaScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_AutoOperaScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_AutoOperaScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_AutoOperaScreen:
            GFX_HGC_SetupScreen(AutoOperaScreen);
            GFX_HGC_DrawScreen_GOL(AutoOperaScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_AutoOperaScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_AutoOperaScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_AutoOperaScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_AutoOperaScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_AutoOperaScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_AutoOperaScreen:
            GFX_HGC_DrawScreen_Primitives(AutoOperaScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_AutoOperaScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_AutoOperaScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_AutoOperaScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AutoOperaScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_SpecialFuncSetScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_1);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_1:
            GFX_HGC_SetupScreen(SpecialFuncSetScreen1_1);
            GFX_HGC_DrawScreen_GOL(SpecialFuncSetScreen1_1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_1);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_1:
            GFX_HGC_DrawScreen_Primitives(SpecialFuncSetScreen1_1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen1_1);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen1_1:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_SpecialFuncSetScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_2);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_2);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_2:
            GFX_HGC_SetupScreen(SpecialFuncSetScreen1_2);
            GFX_HGC_DrawScreen_GOL(SpecialFuncSetScreen1_2);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_2);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_2);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_2);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_2:
            GFX_HGC_DrawScreen_Primitives(SpecialFuncSetScreen1_2);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_2);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen1_2);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen1_2:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_SpecialFuncSetScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_3);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_3);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_3:
            GFX_HGC_SetupScreen(SpecialFuncSetScreen1_3);
            GFX_HGC_DrawScreen_GOL(SpecialFuncSetScreen1_3);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_3);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_3);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_3);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_3:
            GFX_HGC_DrawScreen_Primitives(SpecialFuncSetScreen1_3);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_3);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen1_3);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen1_3:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_SpecialFuncSetScreen1_4:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_4);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_4:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_4);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_4:
            GFX_HGC_SetupScreen(SpecialFuncSetScreen1_4);
            GFX_HGC_DrawScreen_GOL(SpecialFuncSetScreen1_4);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_4);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SpecialFuncSetScreen1_4:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_4);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_4:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_4);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_4:
            GFX_HGC_DrawScreen_Primitives(SpecialFuncSetScreen1_4);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_4);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen1_4:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen1_4);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen1_4:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_SpecialFuncSetScreen2_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SpecialFuncSetScreen2_1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SpecialFuncSetScreen2_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SpecialFuncSetScreen2_1);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SpecialFuncSetScreen2_1:
            GFX_HGC_SetupScreen(SpecialFuncSetScreen2_1);
            GFX_HGC_DrawScreen_GOL(SpecialFuncSetScreen2_1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SpecialFuncSetScreen2_1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SpecialFuncSetScreen2_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen2_1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen2_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen2_1);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen2_1:
            GFX_HGC_DrawScreen_Primitives(SpecialFuncSetScreen2_1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen2_1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen2_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen2_1);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen2_1:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_SpecialFuncSetScreen2_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SpecialFuncSetScreen2_2);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SpecialFuncSetScreen2_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SpecialFuncSetScreen2_2);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SpecialFuncSetScreen2_2:
            GFX_HGC_SetupScreen(SpecialFuncSetScreen2_2);
            GFX_HGC_DrawScreen_GOL(SpecialFuncSetScreen2_2);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SpecialFuncSetScreen2_2);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SpecialFuncSetScreen2_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen2_2);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen2_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen2_2);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen2_2:
            GFX_HGC_DrawScreen_Primitives(SpecialFuncSetScreen2_2);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen2_2);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SpecialFuncSetScreen2_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen2_2);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SpecialFuncSetScreen2_2:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ParaInstructScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ParaInstructScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ParaInstructScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ParaInstructScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ParaInstructScreen:
            GFX_HGC_SetupScreen(ParaInstructScreen);
            GFX_HGC_DrawScreen_GOL(ParaInstructScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ParaInstructScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ParaInstructScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ParaInstructScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ParaInstructScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ParaInstructScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ParaInstructScreen:
            GFX_HGC_DrawScreen_Primitives(ParaInstructScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ParaInstructScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ParaInstructScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ParaInstructScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ParaInstructScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_AlarmReportScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_AlarmReportScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_AlarmReportScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_AlarmReportScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_AlarmReportScreen:
            GFX_HGC_SetupScreen(AlarmReportScreen);
            GFX_HGC_DrawScreen_GOL(AlarmReportScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_AlarmReportScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_AlarmReportScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_AlarmReportScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_AlarmReportScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_AlarmReportScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_AlarmReportScreen:
            GFX_HGC_DrawScreen_Primitives(AlarmReportScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_AlarmReportScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_AlarmReportScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_AlarmReportScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AlarmReportScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_CycleTimeReportScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_CycleTimeReportScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_CycleTimeReportScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_CycleTimeReportScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_CycleTimeReportScreen:
            GFX_HGC_SetupScreen(CycleTimeReportScreen);
            GFX_HGC_DrawScreen_GOL(CycleTimeReportScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_CycleTimeReportScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_CycleTimeReportScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_CycleTimeReportScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_CycleTimeReportScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_CycleTimeReportScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_CycleTimeReportScreen:
            GFX_HGC_DrawScreen_Primitives(CycleTimeReportScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_CycleTimeReportScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_CycleTimeReportScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_CycleTimeReportScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_CycleTimeReportScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_LimitTimeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_LimitTimeScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_LimitTimeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_LimitTimeScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_LimitTimeScreen:
            GFX_HGC_SetupScreen(LimitTimeScreen);
            GFX_HGC_DrawScreen_GOL(LimitTimeScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_LimitTimeScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_LimitTimeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_LimitTimeScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_LimitTimeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_LimitTimeScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_LimitTimeScreen:
            GFX_HGC_DrawScreen_Primitives(LimitTimeScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_LimitTimeScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_LimitTimeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_LimitTimeScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_LimitTimeScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_MachineLimitScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MachineLimitScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MachineLimitScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MachineLimitScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MachineLimitScreen:
            GFX_HGC_SetupScreen(MachineLimitScreen);
            GFX_HGC_DrawScreen_GOL(MachineLimitScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MachineLimitScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MachineLimitScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MachineLimitScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MachineLimitScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MachineLimitScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MachineLimitScreen:
            GFX_HGC_DrawScreen_Primitives(MachineLimitScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MachineLimitScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MachineLimitScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_MachineLimitScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MachineLimitScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_InputWatchScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_InputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_InputWatchScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_InputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_InputWatchScreen1_1:
            GFX_HGC_SetupScreen(InputWatchScreen1_1);
            GFX_HGC_DrawScreen_GOL(InputWatchScreen1_1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_InputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_InputWatchScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_1:
            GFX_HGC_DrawScreen_Primitives(InputWatchScreen1_1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_InputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_InputWatchScreen1_1:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_InputWatchScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_InputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_InputWatchScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_InputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_InputWatchScreen1_2:
            GFX_HGC_SetupScreen(InputWatchScreen1_2);
            GFX_HGC_DrawScreen_GOL(InputWatchScreen1_2);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_InputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_InputWatchScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_2:
            GFX_HGC_DrawScreen_Primitives(InputWatchScreen1_2);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_InputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_InputWatchScreen1_2:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_InputWatchScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_InputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_InputWatchScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_InputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_InputWatchScreen1_3:
            GFX_HGC_SetupScreen(InputWatchScreen1_3);
            GFX_HGC_DrawScreen_GOL(InputWatchScreen1_3);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_InputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_InputWatchScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_3:
            GFX_HGC_DrawScreen_Primitives(InputWatchScreen1_3);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_InputWatchScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_InputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_InputWatchScreen1_3:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_OutputWatchScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_OutputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_OutputWatchScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_OutputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_OutputWatchScreen1_1:
            GFX_HGC_SetupScreen(OutputWatchScreen1_1);
            GFX_HGC_DrawScreen_GOL(OutputWatchScreen1_1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_OutputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_OutputWatchScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_1:
            GFX_HGC_DrawScreen_Primitives(OutputWatchScreen1_1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_OutputWatchScreen1_1);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_OutputWatchScreen1_1:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_OutputWatchScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_OutputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_OutputWatchScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_OutputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_OutputWatchScreen1_2:
            GFX_HGC_SetupScreen(OutputWatchScreen1_2);
            GFX_HGC_DrawScreen_GOL(OutputWatchScreen1_2);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_OutputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_OutputWatchScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_2:
            GFX_HGC_DrawScreen_Primitives(OutputWatchScreen1_2);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_OutputWatchScreen1_2);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_OutputWatchScreen1_2:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_OutputWatchScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_OutputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_OutputWatchScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_OutputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_OutputWatchScreen1_3:
            GFX_HGC_SetupScreen(OutputWatchScreen1_3);
            GFX_HGC_DrawScreen_GOL(OutputWatchScreen1_3);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_OutputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_OutputWatchScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_3:
            GFX_HGC_DrawScreen_Primitives(OutputWatchScreen1_3);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_OutputWatchScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_OutputWatchScreen1_3);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_OutputWatchScreen1_3:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_OutputRecoverScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_OutputRecoverScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_OutputRecoverScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_OutputRecoverScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_OutputRecoverScreen:
            GFX_HGC_SetupScreen(OutputRecoverScreen);
            GFX_HGC_DrawScreen_GOL(OutputRecoverScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_OutputRecoverScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_OutputRecoverScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_OutputRecoverScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_OutputRecoverScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_OutputRecoverScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_OutputRecoverScreen:
            GFX_HGC_DrawScreen_Primitives(OutputRecoverScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_OutputRecoverScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_OutputRecoverScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_OutputRecoverScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_OutputRecoverScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ProgramInfoScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ProgramInfoScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ProgramInfoScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ProgramInfoScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ProgramInfoScreen:
            GFX_HGC_SetupScreen(ProgramInfoScreen);
            GFX_HGC_DrawScreen_GOL(ProgramInfoScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ProgramInfoScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ProgramInfoScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ProgramInfoScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ProgramInfoScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ProgramInfoScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ProgramInfoScreen:
            GFX_HGC_DrawScreen_Primitives(ProgramInfoScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ProgramInfoScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ProgramInfoScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ProgramInfoScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ProgramInfoScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_DateTimeSetScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_DateTimeSetScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_DateTimeSetScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_DateTimeSetScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_DateTimeSetScreen:
            GFX_HGC_SetupScreen(DateTimeSetScreen);
            GFX_HGC_DrawScreen_GOL(DateTimeSetScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_DateTimeSetScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_DateTimeSetScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_DateTimeSetScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_DateTimeSetScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_DateTimeSetScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_DateTimeSetScreen:
            GFX_HGC_DrawScreen_Primitives(DateTimeSetScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_DateTimeSetScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_DateTimeSetScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_DateTimeSetScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_DateTimeSetScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_CompanyInfoScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_CompanyInfoScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_CompanyInfoScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_CompanyInfoScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_CompanyInfoScreen:
            GFX_HGC_SetupScreen(CompanyInfoScreen);
            GFX_HGC_DrawScreen_GOL(CompanyInfoScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_CompanyInfoScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_CompanyInfoScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_CompanyInfoScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_CompanyInfoScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_CompanyInfoScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_CompanyInfoScreen:
            GFX_HGC_DrawScreen_Primitives(CompanyInfoScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_CompanyInfoScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_CompanyInfoScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_CompanyInfoScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_CompanyInfoScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_PasswordRandomScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_PasswordRandomScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_PasswordRandomScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_PasswordRandomScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_PasswordRandomScreen:
            GFX_HGC_SetupScreen(PasswordRandomScreen);
            GFX_HGC_DrawScreen_GOL(PasswordRandomScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_PasswordRandomScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_PasswordRandomScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_PasswordRandomScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_PasswordRandomScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_PasswordRandomScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_PasswordRandomScreen:
            GFX_HGC_DrawScreen_Primitives(PasswordRandomScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_PasswordRandomScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_PasswordRandomScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_PasswordRandomScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_PasswordRandomScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_FactoryTimeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_FactoryTimeScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_FactoryTimeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_FactoryTimeScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_FactoryTimeScreen:
            GFX_HGC_SetupScreen(FactoryTimeScreen);
            GFX_HGC_DrawScreen_GOL(FactoryTimeScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_FactoryTimeScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_FactoryTimeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_FactoryTimeScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_FactoryTimeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_FactoryTimeScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_FactoryTimeScreen:
            GFX_HGC_DrawScreen_Primitives(FactoryTimeScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_FactoryTimeScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_FactoryTimeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_FactoryTimeScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_FactoryTimeScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_AllMonitorParaPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_AllMonitorParaPage);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_AllMonitorParaPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_AllMonitorParaPage);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_AllMonitorParaPage:
            GFX_HGC_SetupScreen(AllMonitorParaPage);
            GFX_HGC_DrawScreen_GOL(AllMonitorParaPage);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_AllMonitorParaPage);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_AllMonitorParaPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_AllMonitorParaPage);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_AllMonitorParaPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_AllMonitorParaPage);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_AllMonitorParaPage:
            GFX_HGC_DrawScreen_Primitives(AllMonitorParaPage);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_AllMonitorParaPage);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_AllMonitorParaPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_AllMonitorParaPage);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AllMonitorParaPage:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_AllMonitorParaPageZ:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_AllMonitorParaPageZ);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_AllMonitorParaPageZ:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_AllMonitorParaPageZ);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_AllMonitorParaPageZ:
            GFX_HGC_SetupScreen(AllMonitorParaPageZ);
            GFX_HGC_DrawScreen_GOL(AllMonitorParaPageZ);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_AllMonitorParaPageZ);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_AllMonitorParaPageZ:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_AllMonitorParaPageZ);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_AllMonitorParaPageZ:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_AllMonitorParaPageZ);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_AllMonitorParaPageZ:
            GFX_HGC_DrawScreen_Primitives(AllMonitorParaPageZ);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_AllMonitorParaPageZ);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_AllMonitorParaPageZ:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_AllMonitorParaPageZ);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AllMonitorParaPageZ:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_MonitorParaPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MonitorParaPage);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MonitorParaPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MonitorParaPage);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MonitorParaPage:
            GFX_HGC_SetupScreen(MonitorParaPage);
            GFX_HGC_DrawScreen_GOL(MonitorParaPage);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MonitorParaPage);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MonitorParaPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MonitorParaPage);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MonitorParaPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MonitorParaPage);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MonitorParaPage:
            GFX_HGC_DrawScreen_Primitives(MonitorParaPage);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MonitorParaPage);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MonitorParaPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_MonitorParaPage);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MonitorParaPage:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_MonitorParaPage1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MonitorParaPage1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MonitorParaPage1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MonitorParaPage1);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MonitorParaPage1:
            GFX_HGC_SetupScreen(MonitorParaPage1);
            GFX_HGC_DrawScreen_GOL(MonitorParaPage1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MonitorParaPage1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MonitorParaPage1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MonitorParaPage1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MonitorParaPage1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MonitorParaPage1);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MonitorParaPage1:
            GFX_HGC_DrawScreen_Primitives(MonitorParaPage1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MonitorParaPage1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MonitorParaPage1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_MonitorParaPage1);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MonitorParaPage1:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ServoPage0:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ServoPage0);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ServoPage0:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ServoPage0);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ServoPage0:
            GFX_HGC_SetupScreen(ServoPage0);
            GFX_HGC_DrawScreen_GOL(ServoPage0);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ServoPage0);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ServoPage0:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ServoPage0);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ServoPage0:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ServoPage0);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ServoPage0:
            GFX_HGC_DrawScreen_Primitives(ServoPage0);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ServoPage0);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ServoPage0:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ServoPage0);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ServoPage0:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ServoPage1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ServoPage1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ServoPage1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ServoPage1);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ServoPage1:
            GFX_HGC_SetupScreen(ServoPage1);
            GFX_HGC_DrawScreen_GOL(ServoPage1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ServoPage1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ServoPage1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ServoPage1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ServoPage1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ServoPage1);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ServoPage1:
            GFX_HGC_DrawScreen_Primitives(ServoPage1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ServoPage1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ServoPage1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ServoPage1);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ServoPage1:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ServoPage2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ServoPage2);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ServoPage2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ServoPage2);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ServoPage2:
            GFX_HGC_SetupScreen(ServoPage2);
            GFX_HGC_DrawScreen_GOL(ServoPage2);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ServoPage2);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ServoPage2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ServoPage2);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ServoPage2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ServoPage2);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ServoPage2:
            GFX_HGC_DrawScreen_Primitives(ServoPage2);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ServoPage2);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ServoPage2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ServoPage2);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ServoPage2:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ServoPage3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ServoPage3);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ServoPage3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ServoPage3);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ServoPage3:
            GFX_HGC_SetupScreen(ServoPage3);
            GFX_HGC_DrawScreen_GOL(ServoPage3);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ServoPage3);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ServoPage3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ServoPage3);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ServoPage3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ServoPage3);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ServoPage3:
            GFX_HGC_DrawScreen_Primitives(ServoPage3);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ServoPage3);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ServoPage3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ServoPage3);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ServoPage3:
            break;
        default:
            return true; // release drawing control to GOL by default
    }

    return true; // release drawing control to GOL
}

/******************************************************************************
  Function: 
    void GFX_HGC_SetupScreen( uint8_t  screenId )

  Remarks: 
    Clears current screen and starts a fresh screen with its background color
 */
void GFX_HGC_SetupScreen(uint8_t screenId)
{
    switch (screenId)
    {
        case StartUpScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF,0xFF,0xFF));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case StopPage:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case MainInterface:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case FunctionScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case PasswordScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ProgramSelectScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case BrightnessAdjustScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ManualScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ManualParaSetScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case EleTonemeScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case EleToneme2Screen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case AutoOperaScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case SpecialFuncSetScreen1_1:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case SpecialFuncSetScreen1_2:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case SpecialFuncSetScreen1_3:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case SpecialFuncSetScreen1_4:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case SpecialFuncSetScreen2_1:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case SpecialFuncSetScreen2_2:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ParaInstructScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case AlarmReportScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case CycleTimeReportScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case LimitTimeScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case MachineLimitScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case InputWatchScreen1_1:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case InputWatchScreen1_2:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case InputWatchScreen1_3:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case OutputWatchScreen1_1:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case OutputWatchScreen1_2:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case OutputWatchScreen1_3:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case OutputRecoverScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ProgramInfoScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case DateTimeSetScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case CompanyInfoScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case PasswordRandomScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case FactoryTimeScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case AllMonitorParaPage:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case AllMonitorParaPageZ:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case MonitorParaPage:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case MonitorParaPage1:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ServoPage0:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ServoPage1:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ServoPage2:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ServoPage3:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8,0xBC,0xB8));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        default:
            break;
    }
}


/******************************************************************************
  Function: 
    bool GFX_HGC_ChangeScreen( uint8_t  screenId )

  Output: 
    Returns true if a screenId matches an existing screen identifier

  Remarks: 
    Can be called to initiate GFX Library to draw a new screen
 */
bool GFX_HGC_ChangeScreen(uint8_t screenId)
{
    switch (screenId)
    {
        case StartUpScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_StartUpScreen);
            break;
        case StopPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_StopPage);
            break;
        case MainInterface:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_MainInterface);
            break;
        case FunctionScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_FunctionScreen);
            break;
        case PasswordScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_PasswordScreen);
            break;
        case ProgramSelectScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ProgramSelectScreen);
            break;
        case BrightnessAdjustScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_BrightnessAdjustScreen);
            break;
        case ManualScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ManualScreen);
            break;
        case ManualParaSetScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ManualParaSetScreen);
            break;
        case EleTonemeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_EleTonemeScreen);
            break;
        case EleToneme2Screen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_EleToneme2Screen);
            break;
        case AutoOperaScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_AutoOperaScreen);
            break;
        case SpecialFuncSetScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_SpecialFuncSetScreen1_1);
            break;
        case SpecialFuncSetScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_SpecialFuncSetScreen1_2);
            break;
        case SpecialFuncSetScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_SpecialFuncSetScreen1_3);
            break;
        case SpecialFuncSetScreen1_4:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_SpecialFuncSetScreen1_4);
            break;
        case SpecialFuncSetScreen2_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_SpecialFuncSetScreen2_1);
            break;
        case SpecialFuncSetScreen2_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_SpecialFuncSetScreen2_2);
            break;
        case ParaInstructScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ParaInstructScreen);
            break;
        case AlarmReportScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_AlarmReportScreen);
            break;
        case CycleTimeReportScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_CycleTimeReportScreen);
            break;
        case LimitTimeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_LimitTimeScreen);
            break;
        case MachineLimitScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_MachineLimitScreen);
            break;
        case InputWatchScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_InputWatchScreen1_1);
            break;
        case InputWatchScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_InputWatchScreen1_2);
            break;
        case InputWatchScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_InputWatchScreen1_3);
            break;
        case OutputWatchScreen1_1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_OutputWatchScreen1_1);
            break;
        case OutputWatchScreen1_2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_OutputWatchScreen1_2);
            break;
        case OutputWatchScreen1_3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_OutputWatchScreen1_3);
            break;
        case OutputRecoverScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_OutputRecoverScreen);
            break;
        case ProgramInfoScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ProgramInfoScreen);
            break;
        case DateTimeSetScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_DateTimeSetScreen);
            break;
        case CompanyInfoScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_CompanyInfoScreen);
            break;
        case PasswordRandomScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_PasswordRandomScreen);
            break;
        case FactoryTimeScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_FactoryTimeScreen);
            break;
        case AllMonitorParaPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_AllMonitorParaPage);
            break;
        case AllMonitorParaPageZ:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_AllMonitorParaPageZ);
            break;
        case MonitorParaPage:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_MonitorParaPage);
            break;
        case MonitorParaPage1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_MonitorParaPage1);
            break;
        case ServoPage0:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ServoPage0);
            break;
        case ServoPage1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ServoPage1);
            break;
        case ServoPage2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ServoPage2);
            break;
        case ServoPage3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ServoPage3);
            break;
        default:
            return false;
    }

    return true; // release drawing control to GOL
}

/******************************************************************************
  Function: 
    bool GFX_HGC_DrawScreen_GOL( uint8_t  screenId )

  Output: 
    Returns true if a screenId matches an existing screen identifier

  Remarks: 
    HGC-specified GFX GOL objects are drawn here, grouped by screen.
    The draw order is reverse Z-ordered.
 */
bool GFX_HGC_DrawScreen_GOL(uint8_t screenId)
{
    if(screenId!=StartUpScreen)
    {
        CreateMainInterfaceGOL();
    }
    switch (screenId)
    {
        case StartUpScreen:
            GFX_HGC_DrawItem(Picture1);
            break;
        case StopPage:
            GFX_HGC_DrawItem(PIC_StopPage);
            break;
        case MainInterface:
            GFX_HGC_DrawItem(STE_ModeNum);
            GFX_HGC_DrawItem(STE_CurrPosZ);
            GFX_HGC_DrawItem(STE_CurrActionStatus);
            GFX_HGC_DrawItem(STE_OpenMold);
            GFX_HGC_DrawItem(PCB_OpenM_Gray);
            GFX_HGC_DrawItem(PCB_SafeD_Gray);
            GFX_HGC_DrawItem(STE_SafetyGate);
            GFX_HGC_DrawItem(PCB_CloseD_Green);
            GFX_HGC_DrawItem(STE_CloseMold);
            GFX_HGC_DrawItem(PCB_Thimb_Red);
            GFX_HGC_DrawItem(STE_Thimble);
            GFX_HGC_DrawItem(PCB_Function);
            GFX_HGC_DrawItem(PCB_Instruct);
            GFX_HGC_DrawItem(PCB_Param);
            GFX_HGC_DrawItem(PCB_Monitor);
            GFX_HGC_DrawItem(PCB_AutoRun);
            GFX_HGC_DrawItem(STE_Time);
            GFX_HGC_DrawItem(STE_Data);
            GFX_HGC_DrawItem(PCB_Manual);
            GFX_HGC_DrawItem(PCB_Information);
            GFX_HGC_DrawItem(DMT_CurrMode);
            GFX_HGC_DrawItem(DMT_CurrPosZ);
            GFX_HGC_DrawItem(STE_WarningInfor);
            GFX_HGC_DrawItem(DMT_AlarmNum);
            GFX_HGC_DrawItem(PCB_Warning_Gray);
            GFX_HGC_DrawItem(STE_PageIndex);
            break;
        case FunctionScreen:
            GFX_HGC_DrawItem(STE_Language);
            GFX_HGC_DrawItem(DMT_SetMold);
            GFX_HGC_DrawItem(DMT_OpenDly);
            GFX_HGC_DrawItem(DMT_ThimbDly);
            GFX_HGC_DrawItem(STE_ChkMFix);
            GFX_HGC_DrawItem(STE_ChkVFix);
            GFX_HGC_DrawItem(STE_ChkVaccu);
            GFX_HGC_DrawItem(STE_ChkHold);
            GFX_HGC_DrawItem(STE_ClearPro);
            GFX_HGC_DrawItem(STE_KeySound);
            GFX_HGC_DrawItem(DIS_FCLanguage);
            GFX_HGC_DrawItem(DIS_FCSetMold);
            GFX_HGC_DrawItem(DIS_FCOpenDly);
            GFX_HGC_DrawItem(DIS_FCChkMFix);
            GFX_HGC_DrawItem(DIS_FCThimb);
            GFX_HGC_DrawItem(DIS_FCChkVFix);
            GFX_HGC_DrawItem(DIS_FCChkVaccu);
            GFX_HGC_DrawItem(DIS_FCChkHold);
            GFX_HGC_DrawItem(DIS_FCClearPro);
            GFX_HGC_DrawItem(DIS_FCKeySound);
            break;
        case PasswordScreen:
            GFX_HGC_DrawItem(DIS_Password);
            GFX_HGC_DrawItem(EDB_PSW);
            break;
        case ProgramSelectScreen:
            GFX_HGC_DrawItem(DMT_SaveRead);
            GFX_HGC_DrawItem(DMT_SaveWrite);
            GFX_HGC_DrawItem(ProgSlecRefresh);
            GFX_HGC_DrawItem(ProgSlecLeadout);
            GFX_HGC_DrawItem(ProgSlecLeadin);
            GFX_HGC_DrawItem(ProgSlecPop);
            GFX_HGC_DrawItem(DIS_ProgSlecRead);
            GFX_HGC_DrawItem(DIS_ProgSlecWrite);
            break;
        case BrightnessAdjustScreen:
            GFX_HGC_DrawItem(SLD_Brightness);
            GFX_HGC_DrawItem(DIS_BrigAdjBrigness);
            GFX_HGC_DrawItem(DIS_BrigAdjLabel);
            GFX_HGC_DrawItem(DMT_Brightness);
            break;
        case ManualScreen:
            GFX_HGC_DrawItem(DIS_ManuTransv);
            GFX_HGC_DrawItem(DIS_ManuSpeed);
            GFX_HGC_DrawItem(DIS_ManuPos);
            GFX_HGC_DrawItem(DIS_ManuInchSpeed);
            GFX_HGC_DrawItem(DIS_ManuActuPro);
            GFX_HGC_DrawItem(DMT_ManSpd);
            GFX_HGC_DrawItem(DMT_ManPos);
            GFX_HGC_DrawItem(DMT_DotSpd);
            GFX_HGC_DrawItem(DMT_FnshCnt);
            GFX_HGC_DrawItem(DIS_ManuCurAct);
            GFX_HGC_DrawItem(STE_TravMode);
            GFX_HGC_DrawItem(LSB_CurrAction);
            break;
        case ManualParaSetScreen:
            GFX_HGC_DrawItem(DMT_ManualSpd);
            GFX_HGC_DrawItem(DMT_ManualPos);
            GFX_HGC_DrawItem(DMT_ManualPageDotSpd);
            GFX_HGC_DrawItem(DMT_TackPos);
            GFX_HGC_DrawItem(DMT_DotRange);
            GFX_HGC_DrawItem(DIS_MauParaSpeed);
            GFX_HGC_DrawItem(DIS_MauParaPos);
            GFX_HGC_DrawItem(DIS_MauParaInchSpeed);
            GFX_HGC_DrawItem(DIS_MauParaFetchPos);
            GFX_HGC_DrawItem(DIS_DotRange);
            break;
        case EleTonemeScreen:
            GFX_HGC_DrawItem(STE_MDownAdd);
            GFX_HGC_DrawItem(STE_MDownSub);
            GFX_HGC_DrawItem(STE_MBackAdd);
            GFX_HGC_DrawItem(STE_MBackSub);
            GFX_HGC_DrawItem(STE_MForwardAdd);
            GFX_HGC_DrawItem(STE_MForwardSub);
            GFX_HGC_DrawItem(DIS_EleInput1);
            GFX_HGC_DrawItem(DIS_EleInput2);
            GFX_HGC_DrawItem(STE_MY46Reverse);
            GFX_HGC_DrawItem(STE_MPressHPAdj);
            GFX_HGC_DrawItem(PCB_MacMUD);
            GFX_HGC_DrawItem(PCB_MacMDown);
            GFX_HGC_DrawItem(PCB_MacMPosFB);
            GFX_HGC_DrawItem(PCB_MacMPosBack);
            GFX_HGC_DrawItem(PCB_MacTravFB);
            GFX_HGC_DrawItem(PCB_MacMTravForw);
            GFX_HGC_DrawItem(PCB_MacNegativeM);
            break;
        case EleToneme2Screen:
            GFX_HGC_DrawItem(STE_VDownAdd);
            GFX_HGC_DrawItem(STE_VDownSub);
            GFX_HGC_DrawItem(STE_VBackAdd);
            GFX_HGC_DrawItem(STE_VBackSub);
            GFX_HGC_DrawItem(STE_VForwardAdd);
            GFX_HGC_DrawItem(STE_VForwardSub);
            GFX_HGC_DrawItem(DIS_EleInput3);
            GFX_HGC_DrawItem(DIS_EleInput4);
            GFX_HGC_DrawItem(DIS_VY46Reverse);
            GFX_HGC_DrawItem(DIS_VPressHPAdj);
            GFX_HGC_DrawItem(PCB_MacSubUD);
            GFX_HGC_DrawItem(PCB_MacSubDown);
            GFX_HGC_DrawItem(PCB_MacSPosFB);
            GFX_HGC_DrawItem(PCB_MacSPosBack);
            GFX_HGC_DrawItem(PCB_MacSTravFB);
            GFX_HGC_DrawItem(PCB_MacSTravForw);
            GFX_HGC_DrawItem(PCB_MacNegativeV);
            break;
        case AutoOperaScreen:
            GFX_HGC_DrawItem(DIS_AutoSetPro);
            GFX_HGC_DrawItem(DIS_AutoActuPro);
            GFX_HGC_DrawItem(DIS_AutoCycle);
            GFX_HGC_DrawItem(DIS_AutoFetchTime);
            GFX_HGC_DrawItem(DIS_AutoActTime);
            GFX_HGC_DrawItem(DIS_AutoCurAct);
            GFX_HGC_DrawItem(DMT_PtrNo);
            GFX_HGC_DrawItem(DMT_ActProNo);
            GFX_HGC_DrawItem(DMT_TackTime);
            GFX_HGC_DrawItem(DMT_ProcTime);
            GFX_HGC_DrawItem(DMT_AutoCycle);
            GFX_HGC_DrawItem(STE_CurrAct);
            GFX_HGC_DrawItem(MTR_Speed);
            break;
        case SpecialFuncSetScreen1_1:
            GFX_HGC_DrawItem(DMT_CycleTime);
            GFX_HGC_DrawItem(STE_Thimb);
            GFX_HGC_DrawItem(STE_SafeDoor);
            GFX_HGC_DrawItem(STE_MidMold);
            GFX_HGC_DrawItem(STE_StdbyGes);
            GFX_HGC_DrawItem(STE_StdbyPos);
            GFX_HGC_DrawItem(STE_StopSafe);
            GFX_HGC_DrawItem(DMT_SubPutDe);
            GFX_HGC_DrawItem(DMT_StartPos);
            GFX_HGC_DrawItem(STE_EmbInMld);
            GFX_HGC_DrawItem(DIS_FCSet1_1CycleTime);
            GFX_HGC_DrawItem(DIS_FCSet1_1Thimb);
            GFX_HGC_DrawItem(DIS_FCSet1_1SafeDoor);
            GFX_HGC_DrawItem(DIS_FCSet1_1MidMold);
            GFX_HGC_DrawItem(DIS_FCSet1_1StdbyGes);
            GFX_HGC_DrawItem(DIS_FCSet1_1StdbyPos);
            GFX_HGC_DrawItem(DIS_FCSet1_1StopStatus);
            GFX_HGC_DrawItem(DIS_FCSet1_1SubPutDe);
            GFX_HGC_DrawItem(DIS_FCSet1_1StartPos);
            GFX_HGC_DrawItem(DIS_FCSet1_1EmbInMld);
            break;
        case SpecialFuncSetScreen1_2:
            GFX_HGC_DrawItem(DMT_PointCnt);
            GFX_HGC_DrawItem(DMT_Space);
            GFX_HGC_DrawItem(DMT_ConvCnt);
            GFX_HGC_DrawItem(DMT_Reservl);
            GFX_HGC_DrawItem(DMT_ClsScrTim);
            GFX_HGC_DrawItem(DMT_Reserv2);
            GFX_HGC_DrawItem(STE_ChckPress);
            GFX_HGC_DrawItem(STE_ChckDfPrd);
            GFX_HGC_DrawItem(STE_Injection);
            GFX_HGC_DrawItem(STE_ClpAbDect);
            GFX_HGC_DrawItem(DIS_FCSet1_2PointCnt);
            GFX_HGC_DrawItem(DIS_FCSet1_2Space);
            GFX_HGC_DrawItem(DIS_FCSet1_2ConvCnt);
            GFX_HGC_DrawItem(DIS_FCSet1_2Reserv1);
            GFX_HGC_DrawItem(DIS_FCSet1_2ClScrTim);
            GFX_HGC_DrawItem(DIS_FCSet1_2Reserv2);
            GFX_HGC_DrawItem(DIS_FCSet1_2ChckPress);
            GFX_HGC_DrawItem(DIS_FCSet1_2ChckDfPrd);
            GFX_HGC_DrawItem(DIS_FCSet1_2ChckClsMld);
            GFX_HGC_DrawItem(DIS_FCSet1_2ClpAbDect);
            break;
        case SpecialFuncSetScreen1_3:
            GFX_HGC_DrawItem(DMT_SafeDoor);
            GFX_HGC_DrawItem(DMT_OutStdby);
            GFX_HGC_DrawItem(DMT_SafeInMld);
            GFX_HGC_DrawItem(DMT_SlowDelay);
            GFX_HGC_DrawItem(DMT_StartPoint);
            GFX_HGC_DrawItem(STE_AutoLimit);
            GFX_HGC_DrawItem(STE_PressSw);
            GFX_HGC_DrawItem(STE_QuickDown);
            GFX_HGC_DrawItem(STE_TrvOutPst);
            GFX_HGC_DrawItem(STE_TrvInPst);
            GFX_HGC_DrawItem(STE_OpenSafeD);
            GFX_HGC_DrawItem(DIS_FCSet1_3SafeDoor);
            GFX_HGC_DrawItem(DIS_FCSet1_2OutStdby);
            GFX_HGC_DrawItem(DIS_FCSet1_2SafeInMold);
            GFX_HGC_DrawItem(DIS_FCSet1_2SlowDelay);
            GFX_HGC_DrawItem(DIS_FCSet1_2StartPoint);
            GFX_HGC_DrawItem(DIS_FCSet1_2AutoLinit);
            GFX_HGC_DrawItem(DIS_FCSet1_2PressSw);
            GFX_HGC_DrawItem(DIS_FCSet1_2SlowDown);
            GFX_HGC_DrawItem(DIS_FCSet1_2TrvOutPst);
            GFX_HGC_DrawItem(DIS_FCSet1_2TrvInPst);
            GFX_HGC_DrawItem(DIS_FCSet1_2FetchFail);
            break;
        case SpecialFuncSetScreen1_4:
            GFX_HGC_DrawItem(STE_OpenDoorAlarm);
            GFX_HGC_DrawItem(DMT_ReservOnTime);
            GFX_HGC_DrawItem(DMT_ConveyorOnTime);
            GFX_HGC_DrawItem(STE_StackClear);
            GFX_HGC_DrawItem(DMT_PrepareTestMould);
            GFX_HGC_DrawItem(STE_ZStackDrt);
            GFX_HGC_DrawItem(DIS_FCSet1_4OpDAlarm);
            GFX_HGC_DrawItem(DIS_FCSet1_4Reser1Time);
            GFX_HGC_DrawItem(DIS_FCSet1_4ConveyOn);
            GFX_HGC_DrawItem(DIS_FCSet1_4StkClear);
            GFX_HGC_DrawItem(DIS_FCSet1_4TestMould);
            GFX_HGC_DrawItem(DIS_FCSet1_4StkDrt);
            break;
        case SpecialFuncSetScreen2_1:
            GFX_HGC_DrawItem(DMT_MaxPos);
            GFX_HGC_DrawItem(DMT_PolseIn);
            GFX_HGC_DrawItem(STE_FeedBack);
            GFX_HGC_DrawItem(STE_DownGest);
            GFX_HGC_DrawItem(DMT_OriSpeed);
            GFX_HGC_DrawItem(DMT_FBkPulseIn);
            GFX_HGC_DrawItem(DMT_FBPulseOut);
            GFX_HGC_DrawItem(DMT_AlarmTime);
            GFX_HGC_DrawItem(DMT_AccDecTime);
            GFX_HGC_DrawItem(DMT_MaxSpeed);
            GFX_HGC_DrawItem(DMT_WholeSpeed);
            GFX_HGC_DrawItem(DIS_FCSet2_1MaxPos);
            GFX_HGC_DrawItem(DIS_FCSet2_1PolseIn);
            GFX_HGC_DrawItem(DIS_FCSet2_1FeedBack);
            GFX_HGC_DrawItem(DIS_FCSet2_1DownGest);
            GFX_HGC_DrawItem(DMT_FBPulseIn);
            GFX_HGC_DrawItem(DIS_FCSet2_1FBPulseOut);
            GFX_HGC_DrawItem(DIS_FCSet2_1AlarmTime);
            GFX_HGC_DrawItem(DIS_FCSet2_1AccDecTime);
            GFX_HGC_DrawItem(DIS_FCSet2_1MaxSpeed);
            GFX_HGC_DrawItem(DIS_FCSet2_1WholeSpeed);
            GFX_HGC_DrawItem(DIS_FCSet2_1OriSpeed);
            break;
        case SpecialFuncSetScreen2_2:
            GFX_HGC_DrawItem(STE_MoldOpenWait);
            GFX_HGC_DrawItem(STE_FixRev);
            GFX_HGC_DrawItem(DIS_FCSet2_2WiatSig);
            GFX_HGC_DrawItem(DIS_FCSet2_2FixReverse);
            break;
        case ParaInstructScreen:
            GFX_HGC_DrawItem(STE_ParamCurrAct);
            GFX_HGC_DrawItem(DMT_ParamTime);
            GFX_HGC_DrawItem(DMT_ParamSpeed);
            GFX_HGC_DrawItem(DMT_ParamDistance);
            GFX_HGC_DrawItem(DIS_ParaInstAct);
            GFX_HGC_DrawItem(DIS_ParaInstDist);
            GFX_HGC_DrawItem(DIS_ParaInstSpeed);
            GFX_HGC_DrawItem(DIS_ParaInstTime);
            GFX_HGC_DrawItem(DMT_ParamPage1);
            GFX_HGC_DrawItem(DIS_ParaInstS);
            GFX_HGC_DrawItem(DIS_ParaInstPER);
            GFX_HGC_DrawItem(DIS_ParaInstMM);
            GFX_HGC_DrawItem(LSB_Parameter);
            break;
        case AlarmReportScreen:
            GFX_HGC_DrawItem(DIS_AlaRptNO);
            GFX_HGC_DrawItem(STE_AlarmInfo2);
            GFX_HGC_DrawItem(STE_AlarmInfo3);
            GFX_HGC_DrawItem(STE_AlarmInfo4);
            GFX_HGC_DrawItem(STE_AlarmInfo5);
            GFX_HGC_DrawItem(STE_AlarmInfo1);
            break;
        case CycleTimeReportScreen:
            GFX_HGC_DrawItem(CycTimRptNO);
            GFX_HGC_DrawItem(STE_CycleTime1);
            GFX_HGC_DrawItem(STE_CycleTime2);
            GFX_HGC_DrawItem(STE_CycleTime3);
            GFX_HGC_DrawItem(STE_CycleTime4);
            GFX_HGC_DrawItem(STE_CycleTime5);
            break;
        case LimitTimeScreen:
            GFX_HGC_DrawItem(DMT_MainUpDowm);
            GFX_HGC_DrawItem(DMT_MainForwBk);
            GFX_HGC_DrawItem(DMT_ViceUpDown);
            GFX_HGC_DrawItem(DMT_ViceForwBk);
            GFX_HGC_DrawItem(DMT_Trav);
            GFX_HGC_DrawItem(DMT_Posture);
            GFX_HGC_DrawItem(DMT_Process1);
            GFX_HGC_DrawItem(DMT_Reversed2);
            GFX_HGC_DrawItem(DIS_LinitTimMainUpDown);
            GFX_HGC_DrawItem(DIS_LinitTimMainForwBk);
            GFX_HGC_DrawItem(DIS_LinitTimViceUpDown);
            GFX_HGC_DrawItem(DIS_LinitTimViceForwBk);
            GFX_HGC_DrawItem(DIS_LinitTimTrav);
            GFX_HGC_DrawItem(DIS_LinitTimPosture);
            GFX_HGC_DrawItem(DIS_LinitTimProcess1);
            GFX_HGC_DrawItem(DIS_LinitTimReser2);
            break;
        case MachineLimitScreen:
            GFX_HGC_DrawItem(STE_TravAxis);
            GFX_HGC_DrawItem(STE_MainDown);
            GFX_HGC_DrawItem(STE_MainForw);
            GFX_HGC_DrawItem(STE_MainBack);
            GFX_HGC_DrawItem(STE_ViceDown);
            GFX_HGC_DrawItem(STE_ViceForw);
            GFX_HGC_DrawItem(STE_ViceBack);
            GFX_HGC_DrawItem(STE_FreqDecel);
            GFX_HGC_DrawItem(STE_FBPulse);
            GFX_HGC_DrawItem(DIS_MacLimitViceForw);
            GFX_HGC_DrawItem(DIS_MacLimitViceBack);
            GFX_HGC_DrawItem(DIS_MacLimitFBPulse);
            GFX_HGC_DrawItem(DIS_MacLimitTravAxis);
            GFX_HGC_DrawItem(DIS_MacLimitMainDown);
            GFX_HGC_DrawItem(DIS_MacLimitMainFrow);
            GFX_HGC_DrawItem(DIS_MacLimitMainBack);
            GFX_HGC_DrawItem(DIS_MacLimitViceDown);
            GFX_HGC_DrawItem(DIS_MacLimitFreqDecel);
            break;
        case InputWatchScreen1_1:
            GFX_HGC_DrawItem(DIS_InWatchHori);
            GFX_HGC_DrawItem(PCB_X10Hori);
            GFX_HGC_DrawItem(DIS_InWatchVerti);
            GFX_HGC_DrawItem(PCB_X11Verti);
            GFX_HGC_DrawItem(DIS_InWatchMainFix);
            GFX_HGC_DrawItem(DIS_InWatchHold);
            GFX_HGC_DrawItem(DIS_InWatchVacuum);
            GFX_HGC_DrawItem(DIS_InWatchMainForw);
            GFX_HGC_DrawItem(DIS_InWatchMainBack);
            GFX_HGC_DrawItem(DIS_InWatchDownMax);
            GFX_HGC_DrawItem(DIS_InWatchUpMax);
            GFX_HGC_DrawItem(DIS_InWatchInjection);
            GFX_HGC_DrawItem(PCB_X20Reserve);
            GFX_HGC_DrawItem(DIS_InWatchCheckPress);
            GFX_HGC_DrawItem(DIS_InWatchInSafe);
            GFX_HGC_DrawItem(DIS_InWatchOutSafe);
            GFX_HGC_DrawItem(DIS_InWatchZOrigin);
            GFX_HGC_DrawItem(DIS_InWatchTravInLmt);
            GFX_HGC_DrawItem(DIS_InWatchTravOutLmt);
            GFX_HGC_DrawItem(PCB_X12MainFix);
            GFX_HGC_DrawItem(PCB_X13Hold);
            GFX_HGC_DrawItem(PCB_X14Vacuum);
            GFX_HGC_DrawItem(PCB_X15MainForw);
            GFX_HGC_DrawItem(PCB_X16MainBack);
            GFX_HGC_DrawItem(PCB_X17MainDown);
            GFX_HGC_DrawItem(PCB_X21Injection);
            GFX_HGC_DrawItem(PCB_X22CheckPress);
            GFX_HGC_DrawItem(PCB_X23InSafe);
            GFX_HGC_DrawItem(PCB_X24OutSafe);
            GFX_HGC_DrawItem(PCB_X25Origin);
            GFX_HGC_DrawItem(PCB_X26TravInLmt);
            GFX_HGC_DrawItem(PCB_X27TravOutLmt);
            break;
        case InputWatchScreen1_2:
            GFX_HGC_DrawItem(DIS_InWatchViceForw);
            GFX_HGC_DrawItem(DIS_InWatchSafeGate);
            GFX_HGC_DrawItem(DIS_InWatchOpenF);
            GFX_HGC_DrawItem(DIS_InWatchCloseF);
            GFX_HGC_DrawItem(DIS_InWatchDefPro);
            GFX_HGC_DrawItem(DIS_InWatchAuto);
            GFX_HGC_DrawItem(DIS_InWatchMidMold);
            GFX_HGC_DrawItem(DIS_InWatchThimble);
            GFX_HGC_DrawItem(DIS_InWatchEmergency);
            GFX_HGC_DrawItem(PCB_SafeDoor);
            GFX_HGC_DrawItem(PCB_OpenFini);
            GFX_HGC_DrawItem(PCB_CloFini);
            GFX_HGC_DrawItem(PCB_DefProd);
            GFX_HGC_DrawItem(PCB_AutoLmt);
            GFX_HGC_DrawItem(PCB_MidMold);
            GFX_HGC_DrawItem(PCB_Thimble);
            GFX_HGC_DrawItem(PCB_EmergStop);
            GFX_HGC_DrawItem(DIS_InWatchViceBack);
            GFX_HGC_DrawItem(DIS_InWatchSubUp);
            GFX_HGC_DrawItem(DIS_InWatchViceDown);
            GFX_HGC_DrawItem(DIS_InWatchSubFix);
            GFX_HGC_DrawItem(DIS_InWatchYOrigin);
            GFX_HGC_DrawItem(DIS_InWatchProcess1);
            GFX_HGC_DrawItem(DIS_InWatchReserv2);
            GFX_HGC_DrawItem(PCB_X30ViceForw);
            GFX_HGC_DrawItem(PCB_X31ViceBack);
            GFX_HGC_DrawItem(PCB_X32SubUp);
            GFX_HGC_DrawItem(PCB_X33ViceDown);
            GFX_HGC_DrawItem(PCB_X34SubFix);
            GFX_HGC_DrawItem(PCB_X35MainUp);
            GFX_HGC_DrawItem(PCB_X36Process1);
            GFX_HGC_DrawItem(PCB_X37Reserve2);
            break;
        case InputWatchScreen1_3:
            GFX_HGC_DrawItem(DIS_InWatchHold2);
            GFX_HGC_DrawItem(PCB_X40Hold2);
            GFX_HGC_DrawItem(DIS_InWatchVacuum2);
            GFX_HGC_DrawItem(PCB_X41Vacuum2);
            GFX_HGC_DrawItem(DIS_InWatchReserve1);
            GFX_HGC_DrawItem(DIS_InWatchReserve2);
            GFX_HGC_DrawItem(DIS_InWatchReserve3);
            GFX_HGC_DrawItem(DIS_InWatchReserve4);
            GFX_HGC_DrawItem(DIS_InWatchReserve5);
            GFX_HGC_DrawItem(DIS_InWatchReserve6);
            GFX_HGC_DrawItem(PCB_X42Reserve1);
            GFX_HGC_DrawItem(PCB_X43Reserve2);
            GFX_HGC_DrawItem(PCB_X44Reserve3);
            GFX_HGC_DrawItem(PCB_X45Reserve4);
            GFX_HGC_DrawItem(PCB_X46Reserve5);
            GFX_HGC_DrawItem(PCB_X47Reserve6);
            break;
        case OutputWatchScreen1_1:
            GFX_HGC_DrawItem(DIS_OutWatchHori);
            GFX_HGC_DrawItem(DIS_OutWatchVerti);
            GFX_HGC_DrawItem(DIS_OutWatchMainFix);
            GFX_HGC_DrawItem(DIS_OutWatchHold);
            GFX_HGC_DrawItem(DIS_OutWatchVacuum);
            GFX_HGC_DrawItem(DIS_OutWatchMainForw);
            GFX_HGC_DrawItem(DIS_OutWatchMainBack);
            GFX_HGC_DrawItem(DIS_OutWatchAlarm);
            GFX_HGC_DrawItem(PCB_Y10Hori);
            GFX_HGC_DrawItem(PCB_Y11Verti);
            GFX_HGC_DrawItem(PCB_Y12MainFix);
            GFX_HGC_DrawItem(PCB_Y13Hold);
            GFX_HGC_DrawItem(PCB_Y14Vacuum);
            GFX_HGC_DrawItem(PCB_Y15MainForw);
            GFX_HGC_DrawItem(PCB_Y16MainBack);
            GFX_HGC_DrawItem(PCB_Y17Alarm);
            GFX_HGC_DrawItem(DIS_OutWatchMainUp);
            GFX_HGC_DrawItem(DIS_OutWatchMainDown);
            GFX_HGC_DrawItem(DIS_OutWatchLowPress);
            GFX_HGC_DrawItem(DIS_OutWatchSlowDown);
            GFX_HGC_DrawItem(DIS_OutWatchReserv1);
            GFX_HGC_DrawItem(DIS_OutWatchReserv2);
            GFX_HGC_DrawItem(DIS_OutWatchTravIn);
            GFX_HGC_DrawItem(DIS_OutWatchTravOut);
            GFX_HGC_DrawItem(PCB_Y20MainUp);
            GFX_HGC_DrawItem(PCB_Y21MainDown);
            GFX_HGC_DrawItem(PCB_Y22LowPress);
            GFX_HGC_DrawItem(PCB_Y23SlowDown);
            GFX_HGC_DrawItem(PCB_Y24Reserv1);
            GFX_HGC_DrawItem(PCB_Y25Reserv2);
            GFX_HGC_DrawItem(PCB_Y26TravIn);
            GFX_HGC_DrawItem(PCB_Y27TravOut);
            break;
        case OutputWatchScreen1_2:
            GFX_HGC_DrawItem(DIS_OutWatchSubForw);
            GFX_HGC_DrawItem(DIS_OutWatchSubBack);
            GFX_HGC_DrawItem(DIS_OutWatchSubUp);
            GFX_HGC_DrawItem(DIS_OutWatchSubDown);
            GFX_HGC_DrawItem(DIS_OutWatchSubFix);
            GFX_HGC_DrawItem(DIS_OutWatchProcess1);
            GFX_HGC_DrawItem(DIS_OutWatchScissor);
            GFX_HGC_DrawItem(DIS_OutWatchConeryor);
            GFX_HGC_DrawItem(DIS_OutWatchEmergStop);
            GFX_HGC_DrawItem(DIS_OutWatchCloseSafe);
            GFX_HGC_DrawItem(DIS_OutWatchOpenSafe);
            GFX_HGC_DrawItem(DIS_OutWatchRecycling);
            GFX_HGC_DrawItem(DIS_OutWatchThimSafe);
            GFX_HGC_DrawItem(DIS_OutWatchYReserv1);
            GFX_HGC_DrawItem(DIS_OutWatchYReserv2);
            GFX_HGC_DrawItem(DIS_OutWatchYReserv3);
            GFX_HGC_DrawItem(PCB_Y30SubForw);
            GFX_HGC_DrawItem(PCB_Y31SubBack);
            GFX_HGC_DrawItem(PCB_Y32SubUp);
            GFX_HGC_DrawItem(PCB_Y33SubDown);
            GFX_HGC_DrawItem(PCB_Y34SubFix);
            GFX_HGC_DrawItem(PCB_Y35Process1);
            GFX_HGC_DrawItem(PCB_Y36Scissor);
            GFX_HGC_DrawItem(PCB_Y37Coneryor);
            GFX_HGC_DrawItem(PCB_Y47EmergStop);
            GFX_HGC_DrawItem(PCB_CloseSafe);
            GFX_HGC_DrawItem(PCB_OpenSafe);
            GFX_HGC_DrawItem(PCB_Recycling);
            GFX_HGC_DrawItem(PCB_ThjmSafe);
            GFX_HGC_DrawItem(OutWatchPicYReserv1);
            GFX_HGC_DrawItem(OutWatchPicYReserv2);
            GFX_HGC_DrawItem(OutWatchPicYReserv3);
            break;
        case OutputWatchScreen1_3:
            GFX_HGC_DrawItem(DIS_OutWatchHold2);
            GFX_HGC_DrawItem(PCB_Y40Hold2);
            GFX_HGC_DrawItem(DIS_OutWatchVacuum2);
            GFX_HGC_DrawItem(PCB_Y41Vacuum2);
            GFX_HGC_DrawItem(DIS_OutWatchReserve1);
            GFX_HGC_DrawItem(DIS_OutWatchReserve2);
            GFX_HGC_DrawItem(DIS_OutWatchReserve3);
            GFX_HGC_DrawItem(DIS_OutWatchReserve4);
            GFX_HGC_DrawItem(DIS_OutWatchReserve5);
            GFX_HGC_DrawItem(PCB_Y42Reserve1);
            GFX_HGC_DrawItem(PCB_Y43Reserve2);
            GFX_HGC_DrawItem(PCB_Y44Reserve3);
            GFX_HGC_DrawItem(PCB_Y45Reserve4);
            GFX_HGC_DrawItem(PCB_Y46Reserve5);
            break;
        case OutputRecoverScreen:
            GFX_HGC_DrawItem(PRB_ResetFactorySetting);
            GFX_HGC_DrawItem(DIS_OutRecoverHint);
            break;
        case ProgramInfoScreen:
            GFX_HGC_DrawItem(DIS_ProgInfoType);
            GFX_HGC_DrawItem(DIS_ProgInfoDate);
            GFX_HGC_DrawItem(DIS_ProgInfoVersion);
            GFX_HGC_DrawItem(DIS_DMT_ProgInfoType);
            GFX_HGC_DrawItem(DIS_DMT_ProgInfoDate);
            GFX_HGC_DrawItem(DIS_DMT_ProgInfoVersion);
            break;
        case DateTimeSetScreen:
            GFX_HGC_DrawItem(DMT_TimerYear);
            GFX_HGC_DrawItem(DMT_TimerMonth);
            GFX_HGC_DrawItem(DMT_TimerDate);
            GFX_HGC_DrawItem(DMT_TimerHour);
            GFX_HGC_DrawItem(DMT_TimerMin);
            GFX_HGC_DrawItem(DMT_TimerSecond);
            GFX_HGC_DrawItem(DIS_Date);
            GFX_HGC_DrawItem(DIS_Time);
            break;
        case CompanyInfoScreen:
            GFX_HGC_DrawItem(DIS_CompInfoName);
            GFX_HGC_DrawItem(DIS_CompInfoTel);
            GFX_HGC_DrawItem(DIS_CompInfoFax);
            GFX_HGC_DrawItem(DIS_CompInfoWeb);
            GFX_HGC_DrawItem(PicCompanyLogo);
            break;
        case PasswordRandomScreen:
            GFX_HGC_DrawItem(EDB_SerialNo);
            GFX_HGC_DrawItem(BTN_GetSerialNo);
            GFX_HGC_DrawItem(EDB_RegisterCode);
            GFX_HGC_DrawItem(BTN_Register);
            GFX_HGC_DrawItem(DIS_PsdRamSeriNo);
            GFX_HGC_DrawItem(DIS_PsdRamRegCode);
            GFX_HGC_DrawItem(DIS_PsdRamWeekSet);
            GFX_HGC_DrawItem(DIS_PsdRamWeekUsed);
            GFX_HGC_DrawItem(DMT_WeekLimit);
            GFX_HGC_DrawItem(DMT_WeekUsed);
            GFX_HGC_DrawItem(DIS_PsdRamTimeNoLimit);
            break;
        case FactoryTimeScreen:
            GFX_HGC_DrawItem(DMT_SetWeekCnt);
            GFX_HGC_DrawItem(STE_ClrTimeCnt);
            GFX_HGC_DrawItem(DIS_FacTimSetWekCnt);
            GFX_HGC_DrawItem(DIS_FacTimClrTimCnt);
            GFX_HGC_DrawItem(DIS_FacTimUseWekCnt);
            GFX_HGC_DrawItem(DIS_FacTimUseHourCnt);
            GFX_HGC_DrawItem(DMT_UseWeekCnt);
            GFX_HGC_DrawItem(DMT_UseHourCnt);
            break;
        case AllMonitorParaPage:
            GFX_HGC_DrawItem(DMT_MoniPara);
            GFX_HGC_DrawItem(DIS_ALLMonitorPara);
            GFX_HGC_DrawItem(DIS_AllMonitorValue);
            GFX_HGC_DrawItem(DMT_MoniValue);
            break;
        case AllMonitorParaPageZ:
            GFX_HGC_DrawItem(DMT_MoniParaZ);
            GFX_HGC_DrawItem(DIS_ALLMonitorParaZ);
            GFX_HGC_DrawItem(DIS_AllMonitorValueZ);
            GFX_HGC_DrawItem(DMT_MoniValueZ);
            break;
        case MonitorParaPage:
            GFX_HGC_DrawItem(DIS_SPD_FBK);
            GFX_HGC_DrawItem(DIS_MECH_ANGLE);
            GFX_HGC_DrawItem(DIS_ELEC_ANGLE);
            GFX_HGC_DrawItem(DIS_DI_PORT_STATUS);
            GFX_HGC_DrawItem(DIS_DO_PORT_STATUS);
            GFX_HGC_DrawItem(DIS_P_ERROR);
            GFX_HGC_DrawItem(DMT_MECH_ANGLE);
            GFX_HGC_DrawItem(DMT_ELEC_ANGLE);
            GFX_HGC_DrawItem(DMT_DI_PORT_STATUS);
            GFX_HGC_DrawItem(DMT_SPD_FBK);
            GFX_HGC_DrawItem(DMT_DO_PORT_STATUS);
            GFX_HGC_DrawItem(DMT_P_ERROR);
            GFX_HGC_DrawItem(DIS_TRQ_BURDEN1);
            GFX_HGC_DrawItem(DIS_TRQ_BURDEN2);
            GFX_HGC_DrawItem(DIS_DB_POWER);
            GFX_HGC_DrawItem(DIS_DC_BUS_VOLTAGE);
            GFX_HGC_DrawItem(DIS_HINK_TEMP);
            GFX_HGC_DrawItem(DIS_ERROR_CODE);
            GFX_HGC_DrawItem(DMT_TRQ_BURDEN2);
            GFX_HGC_DrawItem(DMT_DB_POWER);
            GFX_HGC_DrawItem(DMT_DC_BUS_VOLTAGE);
            GFX_HGC_DrawItem(DMT_TRQ_BURDEN1);
            GFX_HGC_DrawItem(DMT_HINK_TEMP);
            GFX_HGC_DrawItem(DMT_ERROR_CODE);
            break;
        case MonitorParaPage1:
            GFX_HGC_DrawItem(DIS_ZSPD_FBK);
            GFX_HGC_DrawItem(DIS_ZMECH_ANGLE);
            GFX_HGC_DrawItem(DIS_ZELEC_ANGLE);
            GFX_HGC_DrawItem(DIS_ZDI_PORT_STATUS);
            GFX_HGC_DrawItem(DIS_ZDO_PORT_STATUS);
            GFX_HGC_DrawItem(DIS_ZP_ERROR);
            GFX_HGC_DrawItem(DMT_MECH_ANGLEZ);
            GFX_HGC_DrawItem(DMT_ELEC_ANGLEZ);
            GFX_HGC_DrawItem(DMT_DI_PORT_STATUSZ);
            GFX_HGC_DrawItem(DMT_SPD_FBKZ);
            GFX_HGC_DrawItem(DMT_DO_PORT_STATUSZ);
            GFX_HGC_DrawItem(DMT_P_ERRORZ);
            GFX_HGC_DrawItem(DIS_ZTRQ_BURDEN1);
            GFX_HGC_DrawItem(DIS_ZTRQ_BURDEN2);
            GFX_HGC_DrawItem(DIS_ZDB_POWER);
            GFX_HGC_DrawItem(DIS_ZDC_BUS_VOLTAGE);
            GFX_HGC_DrawItem(DIS_ZHINK_TEMP);
            GFX_HGC_DrawItem(DIS_ZERROR_CODE);
            GFX_HGC_DrawItem(DMT_TRQ_BURDEN2Z);
            GFX_HGC_DrawItem(DMT_DB_POWERZ);
            GFX_HGC_DrawItem(DMT_DC_BUS_VOLTAGEZ);
            GFX_HGC_DrawItem(DMT_TRQ_BURDEN1Z);
            GFX_HGC_DrawItem(DMT_HINK_TEMPZ);
            GFX_HGC_DrawItem(DMT_ERROR_CODEZ);
            break;
        case ServoPage0:
            GFX_HGC_DrawItem(DMT_SPD_P1);
            GFX_HGC_DrawItem(DMT_SPD_TI1);
            GFX_HGC_DrawItem(DMT_POS_P1);
            GFX_HGC_DrawItem(DMT_INERTIA);
            GFX_HGC_DrawItem(DIS_SpeedLoopGain);
            GFX_HGC_DrawItem(DIS_SpeedLoopIntegral);
            GFX_HGC_DrawItem(DIS_PositionLoopGain);
            GFX_HGC_DrawItem(DIS_RotInertiaRatio);
            break;
        case ServoPage1:
            GFX_HGC_DrawItem(DMT_CMDID);
            GFX_HGC_DrawItem(DMT_CMDVALUE);
            GFX_HGC_DrawItem(DIS_ParaSetting);
            GFX_HGC_DrawItem(DIS_SettingValue);
            break;
        case ServoPage2:
            GFX_HGC_DrawItem(DMT_SPD_P1Z);
            GFX_HGC_DrawItem(DMT_SPD_TI1Z);
            GFX_HGC_DrawItem(DMT_POS_P1Z);
            GFX_HGC_DrawItem(DMT_INERTIAZ);
            GFX_HGC_DrawItem(DIS_ZSpeedLoopGain);
            GFX_HGC_DrawItem(DIS_ZSpeedLoopIntegral);
            GFX_HGC_DrawItem(DIS_ZPositionLoopGain);
            GFX_HGC_DrawItem(DIS_ZRotInertiaRatio);
            break;
        case ServoPage3:
            GFX_HGC_DrawItem(DMT_CMDIDZ);
            GFX_HGC_DrawItem(DMT_CMDVALUEZ);
            GFX_HGC_DrawItem(DIS_ZParaSetting);
            GFX_HGC_DrawItem(DIS_ZSettingValue);
            break;
        default:
            return false;
    }

    return true; // release drawing control to GOL
}


/******************************************************************************
  Function: 
    bool GFX_HGC_DrawScreen_Primitives( uint8_t  screenId )

  Output:
    Returns true if a screenId matches an existing screen identifier

  Remarks: 
    HGC-specified GFX Primitives are drawn here, grouped by screen.
    GFX Primitives are drawn after GFX GOL Objects to make sure GFX GOL Objects
    do not cover GFX Primitives
 */
bool GFX_HGC_DrawScreen_Primitives(uint8_t screenId)
{
    if(screenId!=StartUpScreen)
    {
        CreateMainInterfacePrimitives();
    }
    switch (screenId)
    {
        case StartUpScreen:
            GFX_HGC_DrawItem(Text1);
            break;
        case StopPage:
            break;
        case MainInterface:
            GFX_HGC_DrawItem(Line4);
            GFX_HGC_DrawItem(Line3);
            GFX_HGC_DrawItem(Line1);
            GFX_HGC_DrawItem(Line2);
            GFX_HGC_DrawItem(Line5);
            GFX_HGC_DrawItem(Line6);
            GFX_HGC_DrawItem(Line7);
            GFX_HGC_DrawItem(Line8);
            GFX_HGC_DrawItem(Line9);
            GFX_HGC_DrawItem(Line10);
            break;
        case FunctionScreen:
            break;
        case PasswordScreen:
            break;
        case ProgramSelectScreen:
            break;
        case BrightnessAdjustScreen:
            break;
        case ManualScreen:
            break;
        case ManualParaSetScreen:
            break;
        case EleTonemeScreen:
            break;
        case EleToneme2Screen:
            break;
        case AutoOperaScreen:
            break;
        case SpecialFuncSetScreen1_1:
            break;
        case SpecialFuncSetScreen1_2:
            break;
        case SpecialFuncSetScreen1_3:
            break;
        case SpecialFuncSetScreen1_4:
            break;
        case SpecialFuncSetScreen2_1:
            break;
        case SpecialFuncSetScreen2_2:
            break;
        case ParaInstructScreen:
            break;
        case AlarmReportScreen:
            GFX_HGC_DrawItem(AlaRptLine1);
            GFX_HGC_DrawItem(AlaRptLine2);
            GFX_HGC_DrawItem(AlaRptLine3);
            GFX_HGC_DrawItem(AlaRptLine4);
            GFX_HGC_DrawItem(AlaRptLine5);
            break;
        case CycleTimeReportScreen:
            GFX_HGC_DrawItem(CycTimRptLine1);
            GFX_HGC_DrawItem(CycTimRptLine2);
            GFX_HGC_DrawItem(CycTimRptLine3);
            GFX_HGC_DrawItem(CycTimRptLine4);
            GFX_HGC_DrawItem(CycTimRptLine5);
            break;
        case LimitTimeScreen:
            break;
        case MachineLimitScreen:
            break;
        case InputWatchScreen1_1:
            break;
        case InputWatchScreen1_2:
            break;
        case InputWatchScreen1_3:
            break;
        case OutputWatchScreen1_1:
            break;
        case OutputWatchScreen1_2:
            break;
        case OutputWatchScreen1_3:
            break;
        case OutputRecoverScreen:
            break;
        case ProgramInfoScreen:
            break;
        case DateTimeSetScreen:
            GFX_HGC_DrawItem(Text3);
            GFX_HGC_DrawItem(Text4);
            GFX_HGC_DrawItem(Text5);
            GFX_HGC_DrawItem(Text6);
            break;
        case CompanyInfoScreen:
            break;
        case PasswordRandomScreen:
            break;
        case FactoryTimeScreen:
            break;
        case AllMonitorParaPage:
            break;
        case AllMonitorParaPageZ:
            break;
        case MonitorParaPage:
            break;
        case MonitorParaPage1:
            break;
        case ServoPage0:
            break;
        case ServoPage1:
            break;
        case ServoPage2:
            break;
        case ServoPage3:
            break;
        default:
            return true;
    }

    return true; // release drawing control to GOL
}


/******************************************************************************
  Function: 
    bool GFX_HGC_DrawItem(int itemId)

  Output:
    Returns true if a itemId matches an existing item identifier

  Remarks: 
    Every item specified in every screen in HGC is listed in this function
 */
bool GFX_HGC_DrawItem(int itemId)
{
    switch(itemId)
    {
    case ProgSlecPop:
        hgcObj.pProgSlecPopObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 ProgSlecPop,      // button ID
                 GFX_BUTTON_LEFT_0,    // left
                 GFX_BUTTON_TOP_0,     // top
                 GFX_BUTTON_RIGHT_0,   // right
                 GFX_BUTTON_BOTTOM_0,  // bottom
                 GFX_BUTTON_RADIUS_0,  // radius
                 GFX_BUTTON_STATE_0,   // state
                 GFX_BUTTON_PRESS_IMAGE_0,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_0,   // release image
                 (GFX_XCHAR*)buttonStr_0,    // text
                 GFX_BUTTON_ALIGNMENT_0,       //alignment
                 GFX_BUTTON_SCHEME_0
                 ); // use alternate scheme
        break;
    case ProgSlecLeadin:
        hgcObj.pProgSlecLeadinObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 ProgSlecLeadin,      // button ID
                 GFX_BUTTON_LEFT_1,    // left
                 GFX_BUTTON_TOP_1,     // top
                 GFX_BUTTON_RIGHT_1,   // right
                 GFX_BUTTON_BOTTOM_1,  // bottom
                 GFX_BUTTON_RADIUS_1,  // radius
                 GFX_BUTTON_STATE_1,   // state
                 GFX_BUTTON_PRESS_IMAGE_1,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_1,   // release image
                 (GFX_XCHAR*)buttonStr_1,    // text
                 GFX_BUTTON_ALIGNMENT_1,       //alignment
                 GFX_BUTTON_SCHEME_1
                 ); // use alternate scheme
        break;
    case ProgSlecLeadout:
        hgcObj.pProgSlecLeadoutObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 ProgSlecLeadout,      // button ID
                 GFX_BUTTON_LEFT_2,    // left
                 GFX_BUTTON_TOP_2,     // top
                 GFX_BUTTON_RIGHT_2,   // right
                 GFX_BUTTON_BOTTOM_2,  // bottom
                 GFX_BUTTON_RADIUS_2,  // radius
                 GFX_BUTTON_STATE_2,   // state
                 GFX_BUTTON_PRESS_IMAGE_2,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_2,   // release image
                 (GFX_XCHAR*)buttonStr_2,    // text
                 GFX_BUTTON_ALIGNMENT_2,       //alignment
                 GFX_BUTTON_SCHEME_2
                 ); // use alternate scheme
        break;
    case ProgSlecRefresh:
        hgcObj.pProgSlecRefreshObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 ProgSlecRefresh,      // button ID
                 GFX_BUTTON_LEFT_3,    // left
                 GFX_BUTTON_TOP_3,     // top
                 GFX_BUTTON_RIGHT_3,   // right
                 GFX_BUTTON_BOTTOM_3,  // bottom
                 GFX_BUTTON_RADIUS_3,  // radius
                 GFX_BUTTON_STATE_3,   // state
                 GFX_BUTTON_PRESS_IMAGE_3,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_3,   // release image
                 (GFX_XCHAR*)buttonStr_3,    // text
                 GFX_BUTTON_ALIGNMENT_3,       //alignment
                 GFX_BUTTON_SCHEME_3
                 ); // use alternate scheme
        break;
    case BTN_Register:
        hgcObj.pBTN_RegisterObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 BTN_Register,      // button ID
                 GFX_BUTTON_LEFT_4,    // left
                 GFX_BUTTON_TOP_4,     // top
                 GFX_BUTTON_RIGHT_4,   // right
                 GFX_BUTTON_BOTTOM_4,  // bottom
                 GFX_BUTTON_RADIUS_4,  // radius
                 GFX_BUTTON_STATE_4,   // state
                 GFX_BUTTON_PRESS_IMAGE_4,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_4,   // release image
                 (GFX_XCHAR*)buttonStr_4,    // text
                 GFX_BUTTON_ALIGNMENT_4,       //alignment
                 GFX_BUTTON_SCHEME_4
                 ); // use alternate scheme
        break;
    case BTN_GetSerialNo:
        hgcObj.pBTN_GetSerialNoObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 BTN_GetSerialNo,      // button ID
                 GFX_BUTTON_LEFT_5,    // left
                 GFX_BUTTON_TOP_5,     // top
                 GFX_BUTTON_RIGHT_5,   // right
                 GFX_BUTTON_BOTTOM_5,  // bottom
                 GFX_BUTTON_RADIUS_5,  // radius
                 GFX_BUTTON_STATE_5,   // state
                 GFX_BUTTON_PRESS_IMAGE_5,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_5,   // release image
                 (GFX_XCHAR*)buttonStr_5,    // text
                 GFX_BUTTON_ALIGNMENT_5,       //alignment
                 GFX_BUTTON_SCHEME_5
                 ); // use alternate scheme
        break;
    case DMT_AlarmNum:
        hgcObj.pDMT_AlarmNumObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_AlarmNum,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_0,    // left
                 GFX_DGTL_MTR_TOP_0,     // top
                 GFX_DGTL_MTR_RIGHT_0,   // right
                 GFX_DGTL_MTR_BOTTOM_0,  // bottom             
                 GFX_DGTL_MTR_STATE_0,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_0,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_0, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_0,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_0,//alignment
                 GFX_DGTL_MTR_SCHEME_0	//scheme
                 ); // use alternate scheme
        break;
    case DMT_CurrPosZ:
        hgcObj.pDMT_CurrPosZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_CurrPosZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_1,    // left
                 GFX_DGTL_MTR_TOP_1,     // top
                 GFX_DGTL_MTR_RIGHT_1,   // right
                 GFX_DGTL_MTR_BOTTOM_1,  // bottom             
                 GFX_DGTL_MTR_STATE_1,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_1,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_1, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_1,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_1,//alignment
                 GFX_DGTL_MTR_SCHEME_1	//scheme
                 ); // use alternate scheme
        break;
    case DMT_CurrMode:
        hgcObj.pDMT_CurrModeObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_CurrMode,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_2,    // left
                 GFX_DGTL_MTR_TOP_2,     // top
                 GFX_DGTL_MTR_RIGHT_2,   // right
                 GFX_DGTL_MTR_BOTTOM_2,  // bottom             
                 GFX_DGTL_MTR_STATE_2,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_2,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_2, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_2,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_2,//alignment
                 GFX_DGTL_MTR_SCHEME_2	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ThimbDly:
        hgcObj.pDMT_ThimbDlyObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ThimbDly,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_3,    // left
                 GFX_DGTL_MTR_TOP_3,     // top
                 GFX_DGTL_MTR_RIGHT_3,   // right
                 GFX_DGTL_MTR_BOTTOM_3,  // bottom             
                 GFX_DGTL_MTR_STATE_3,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_3,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_3, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_3,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_3,//alignment
                 GFX_DGTL_MTR_SCHEME_3	//scheme
                 ); // use alternate scheme
        break;
    case DMT_OpenDly:
        hgcObj.pDMT_OpenDlyObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_OpenDly,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_4,    // left
                 GFX_DGTL_MTR_TOP_4,     // top
                 GFX_DGTL_MTR_RIGHT_4,   // right
                 GFX_DGTL_MTR_BOTTOM_4,  // bottom             
                 GFX_DGTL_MTR_STATE_4,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_4,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_4, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_4,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_4,//alignment
                 GFX_DGTL_MTR_SCHEME_4	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SetMold:
        hgcObj.pDMT_SetMoldObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SetMold,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_5,    // left
                 GFX_DGTL_MTR_TOP_5,     // top
                 GFX_DGTL_MTR_RIGHT_5,   // right
                 GFX_DGTL_MTR_BOTTOM_5,  // bottom             
                 GFX_DGTL_MTR_STATE_5,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_5,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_5, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_5,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_5,//alignment
                 GFX_DGTL_MTR_SCHEME_5	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SaveWrite:
        hgcObj.pDMT_SaveWriteObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SaveWrite,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_6,    // left
                 GFX_DGTL_MTR_TOP_6,     // top
                 GFX_DGTL_MTR_RIGHT_6,   // right
                 GFX_DGTL_MTR_BOTTOM_6,  // bottom             
                 GFX_DGTL_MTR_STATE_6,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_6,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_6, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_6,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_6,//alignment
                 GFX_DGTL_MTR_SCHEME_6	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SaveRead:
        hgcObj.pDMT_SaveReadObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SaveRead,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_7,    // left
                 GFX_DGTL_MTR_TOP_7,     // top
                 GFX_DGTL_MTR_RIGHT_7,   // right
                 GFX_DGTL_MTR_BOTTOM_7,  // bottom             
                 GFX_DGTL_MTR_STATE_7,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_7,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_7, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_7,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_7,//alignment
                 GFX_DGTL_MTR_SCHEME_7	//scheme
                 ); // use alternate scheme
        break;
    case DMT_Brightness:
        hgcObj.pDMT_BrightnessObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_Brightness,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_8,    // left
                 GFX_DGTL_MTR_TOP_8,     // top
                 GFX_DGTL_MTR_RIGHT_8,   // right
                 GFX_DGTL_MTR_BOTTOM_8,  // bottom             
                 GFX_DGTL_MTR_STATE_8,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_8,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_8, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_8,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_8,//alignment
                 GFX_DGTL_MTR_SCHEME_8	//scheme
                 ); // use alternate scheme
        break;
    case DMT_FnshCnt:
        hgcObj.pDMT_FnshCntObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_FnshCnt,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_9,    // left
                 GFX_DGTL_MTR_TOP_9,     // top
                 GFX_DGTL_MTR_RIGHT_9,   // right
                 GFX_DGTL_MTR_BOTTOM_9,  // bottom             
                 GFX_DGTL_MTR_STATE_9,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_9,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_9, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_9,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_9,//alignment
                 GFX_DGTL_MTR_SCHEME_9	//scheme
                 ); // use alternate scheme
        break;
    case DMT_DotSpd:
        hgcObj.pDMT_DotSpdObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_DotSpd,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_10,    // left
                 GFX_DGTL_MTR_TOP_10,     // top
                 GFX_DGTL_MTR_RIGHT_10,   // right
                 GFX_DGTL_MTR_BOTTOM_10,  // bottom             
                 GFX_DGTL_MTR_STATE_10,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_10,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_10, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_10,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_10,//alignment
                 GFX_DGTL_MTR_SCHEME_10	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ManPos:
        hgcObj.pDMT_ManPosObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ManPos,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_11,    // left
                 GFX_DGTL_MTR_TOP_11,     // top
                 GFX_DGTL_MTR_RIGHT_11,   // right
                 GFX_DGTL_MTR_BOTTOM_11,  // bottom             
                 GFX_DGTL_MTR_STATE_11,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_11,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_11, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_11,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_11,//alignment
                 GFX_DGTL_MTR_SCHEME_11	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ManSpd:
        hgcObj.pDMT_ManSpdObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ManSpd,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_12,    // left
                 GFX_DGTL_MTR_TOP_12,     // top
                 GFX_DGTL_MTR_RIGHT_12,   // right
                 GFX_DGTL_MTR_BOTTOM_12,  // bottom             
                 GFX_DGTL_MTR_STATE_12,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_12,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_12, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_12,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_12,//alignment
                 GFX_DGTL_MTR_SCHEME_12	//scheme
                 ); // use alternate scheme
        break;
    case DMT_DotRange:
        hgcObj.pDMT_DotRangeObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_DotRange,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_13,    // left
                 GFX_DGTL_MTR_TOP_13,     // top
                 GFX_DGTL_MTR_RIGHT_13,   // right
                 GFX_DGTL_MTR_BOTTOM_13,  // bottom             
                 GFX_DGTL_MTR_STATE_13,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_13,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_13, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_13,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_13,//alignment
                 GFX_DGTL_MTR_SCHEME_13	//scheme
                 ); // use alternate scheme
        break;
    case DMT_TackPos:
        hgcObj.pDMT_TackPosObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_TackPos,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_14,    // left
                 GFX_DGTL_MTR_TOP_14,     // top
                 GFX_DGTL_MTR_RIGHT_14,   // right
                 GFX_DGTL_MTR_BOTTOM_14,  // bottom             
                 GFX_DGTL_MTR_STATE_14,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_14,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_14, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_14,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_14,//alignment
                 GFX_DGTL_MTR_SCHEME_14	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ManualPageDotSpd:
        hgcObj.pDMT_ManualPageDotSpdObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ManualPageDotSpd,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_15,    // left
                 GFX_DGTL_MTR_TOP_15,     // top
                 GFX_DGTL_MTR_RIGHT_15,   // right
                 GFX_DGTL_MTR_BOTTOM_15,  // bottom             
                 GFX_DGTL_MTR_STATE_15,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_15,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_15, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_15,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_15,//alignment
                 GFX_DGTL_MTR_SCHEME_15	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ManualPos:
        hgcObj.pDMT_ManualPosObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ManualPos,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_16,    // left
                 GFX_DGTL_MTR_TOP_16,     // top
                 GFX_DGTL_MTR_RIGHT_16,   // right
                 GFX_DGTL_MTR_BOTTOM_16,  // bottom             
                 GFX_DGTL_MTR_STATE_16,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_16,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_16, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_16,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_16,//alignment
                 GFX_DGTL_MTR_SCHEME_16	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ManualSpd:
        hgcObj.pDMT_ManualSpdObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ManualSpd,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_17,    // left
                 GFX_DGTL_MTR_TOP_17,     // top
                 GFX_DGTL_MTR_RIGHT_17,   // right
                 GFX_DGTL_MTR_BOTTOM_17,  // bottom             
                 GFX_DGTL_MTR_STATE_17,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_17,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_17, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_17,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_17,//alignment
                 GFX_DGTL_MTR_SCHEME_17	//scheme
                 ); // use alternate scheme
        break;
    case DMT_AutoCycle:
        hgcObj.pDMT_AutoCycleObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_AutoCycle,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_18,    // left
                 GFX_DGTL_MTR_TOP_18,     // top
                 GFX_DGTL_MTR_RIGHT_18,   // right
                 GFX_DGTL_MTR_BOTTOM_18,  // bottom             
                 GFX_DGTL_MTR_STATE_18,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_18,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_18, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_18,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_18,//alignment
                 GFX_DGTL_MTR_SCHEME_18	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ProcTime:
        hgcObj.pDMT_ProcTimeObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ProcTime,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_19,    // left
                 GFX_DGTL_MTR_TOP_19,     // top
                 GFX_DGTL_MTR_RIGHT_19,   // right
                 GFX_DGTL_MTR_BOTTOM_19,  // bottom             
                 GFX_DGTL_MTR_STATE_19,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_19,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_19, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_19,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_19,//alignment
                 GFX_DGTL_MTR_SCHEME_19	//scheme
                 ); // use alternate scheme
        break;
    case DMT_TackTime:
        hgcObj.pDMT_TackTimeObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_TackTime,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_20,    // left
                 GFX_DGTL_MTR_TOP_20,     // top
                 GFX_DGTL_MTR_RIGHT_20,   // right
                 GFX_DGTL_MTR_BOTTOM_20,  // bottom             
                 GFX_DGTL_MTR_STATE_20,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_20,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_20, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_20,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_20,//alignment
                 GFX_DGTL_MTR_SCHEME_20	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ActProNo:
        hgcObj.pDMT_ActProNoObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ActProNo,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_21,    // left
                 GFX_DGTL_MTR_TOP_21,     // top
                 GFX_DGTL_MTR_RIGHT_21,   // right
                 GFX_DGTL_MTR_BOTTOM_21,  // bottom             
                 GFX_DGTL_MTR_STATE_21,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_21,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_21, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_21,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_21,//alignment
                 GFX_DGTL_MTR_SCHEME_21	//scheme
                 ); // use alternate scheme
        break;
    case DMT_PtrNo:
        hgcObj.pDMT_PtrNoObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_PtrNo,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_22,    // left
                 GFX_DGTL_MTR_TOP_22,     // top
                 GFX_DGTL_MTR_RIGHT_22,   // right
                 GFX_DGTL_MTR_BOTTOM_22,  // bottom             
                 GFX_DGTL_MTR_STATE_22,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_22,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_22, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_22,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_22,//alignment
                 GFX_DGTL_MTR_SCHEME_22	//scheme
                 ); // use alternate scheme
        break;
    case DMT_StartPos:
        hgcObj.pDMT_StartPosObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_StartPos,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_23,    // left
                 GFX_DGTL_MTR_TOP_23,     // top
                 GFX_DGTL_MTR_RIGHT_23,   // right
                 GFX_DGTL_MTR_BOTTOM_23,  // bottom             
                 GFX_DGTL_MTR_STATE_23,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_23,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_23, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_23,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_23,//alignment
                 GFX_DGTL_MTR_SCHEME_23	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SubPutDe:
        hgcObj.pDMT_SubPutDeObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SubPutDe,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_24,    // left
                 GFX_DGTL_MTR_TOP_24,     // top
                 GFX_DGTL_MTR_RIGHT_24,   // right
                 GFX_DGTL_MTR_BOTTOM_24,  // bottom             
                 GFX_DGTL_MTR_STATE_24,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_24,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_24, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_24,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_24,//alignment
                 GFX_DGTL_MTR_SCHEME_24	//scheme
                 ); // use alternate scheme
        break;
    case DMT_CycleTime:
        hgcObj.pDMT_CycleTimeObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_CycleTime,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_25,    // left
                 GFX_DGTL_MTR_TOP_25,     // top
                 GFX_DGTL_MTR_RIGHT_25,   // right
                 GFX_DGTL_MTR_BOTTOM_25,  // bottom             
                 GFX_DGTL_MTR_STATE_25,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_25,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_25, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_25,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_25,//alignment
                 GFX_DGTL_MTR_SCHEME_25	//scheme
                 ); // use alternate scheme
        break;
    case DMT_Reserv2:
        hgcObj.pDMT_Reserv2Obj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_Reserv2,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_26,    // left
                 GFX_DGTL_MTR_TOP_26,     // top
                 GFX_DGTL_MTR_RIGHT_26,   // right
                 GFX_DGTL_MTR_BOTTOM_26,  // bottom             
                 GFX_DGTL_MTR_STATE_26,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_26,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_26, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_26,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_26,//alignment
                 GFX_DGTL_MTR_SCHEME_26	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ClsScrTim:
        hgcObj.pDMT_ClsScrTimObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ClsScrTim,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_27,    // left
                 GFX_DGTL_MTR_TOP_27,     // top
                 GFX_DGTL_MTR_RIGHT_27,   // right
                 GFX_DGTL_MTR_BOTTOM_27,  // bottom             
                 GFX_DGTL_MTR_STATE_27,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_27,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_27, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_27,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_27,//alignment
                 GFX_DGTL_MTR_SCHEME_27	//scheme
                 ); // use alternate scheme
        break;
    case DMT_Reservl:
        hgcObj.pDMT_ReservlObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_Reservl,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_28,    // left
                 GFX_DGTL_MTR_TOP_28,     // top
                 GFX_DGTL_MTR_RIGHT_28,   // right
                 GFX_DGTL_MTR_BOTTOM_28,  // bottom             
                 GFX_DGTL_MTR_STATE_28,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_28,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_28, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_28,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_28,//alignment
                 GFX_DGTL_MTR_SCHEME_28	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ConvCnt:
        hgcObj.pDMT_ConvCntObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ConvCnt,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_29,    // left
                 GFX_DGTL_MTR_TOP_29,     // top
                 GFX_DGTL_MTR_RIGHT_29,   // right
                 GFX_DGTL_MTR_BOTTOM_29,  // bottom             
                 GFX_DGTL_MTR_STATE_29,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_29,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_29, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_29,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_29,//alignment
                 GFX_DGTL_MTR_SCHEME_29	//scheme
                 ); // use alternate scheme
        break;
    case DMT_Space:
        hgcObj.pDMT_SpaceObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_Space,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_30,    // left
                 GFX_DGTL_MTR_TOP_30,     // top
                 GFX_DGTL_MTR_RIGHT_30,   // right
                 GFX_DGTL_MTR_BOTTOM_30,  // bottom             
                 GFX_DGTL_MTR_STATE_30,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_30,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_30, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_30,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_30,//alignment
                 GFX_DGTL_MTR_SCHEME_30	//scheme
                 ); // use alternate scheme
        break;
    case DMT_PointCnt:
        hgcObj.pDMT_PointCntObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_PointCnt,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_31,    // left
                 GFX_DGTL_MTR_TOP_31,     // top
                 GFX_DGTL_MTR_RIGHT_31,   // right
                 GFX_DGTL_MTR_BOTTOM_31,  // bottom             
                 GFX_DGTL_MTR_STATE_31,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_31,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_31, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_31,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_31,//alignment
                 GFX_DGTL_MTR_SCHEME_31	//scheme
                 ); // use alternate scheme
        break;
    case DMT_StartPoint:
        hgcObj.pDMT_StartPointObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_StartPoint,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_32,    // left
                 GFX_DGTL_MTR_TOP_32,     // top
                 GFX_DGTL_MTR_RIGHT_32,   // right
                 GFX_DGTL_MTR_BOTTOM_32,  // bottom             
                 GFX_DGTL_MTR_STATE_32,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_32,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_32, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_32,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_32,//alignment
                 GFX_DGTL_MTR_SCHEME_32	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SlowDelay:
        hgcObj.pDMT_SlowDelayObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SlowDelay,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_33,    // left
                 GFX_DGTL_MTR_TOP_33,     // top
                 GFX_DGTL_MTR_RIGHT_33,   // right
                 GFX_DGTL_MTR_BOTTOM_33,  // bottom             
                 GFX_DGTL_MTR_STATE_33,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_33,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_33, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_33,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_33,//alignment
                 GFX_DGTL_MTR_SCHEME_33	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SafeInMld:
        hgcObj.pDMT_SafeInMldObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SafeInMld,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_34,    // left
                 GFX_DGTL_MTR_TOP_34,     // top
                 GFX_DGTL_MTR_RIGHT_34,   // right
                 GFX_DGTL_MTR_BOTTOM_34,  // bottom             
                 GFX_DGTL_MTR_STATE_34,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_34,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_34, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_34,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_34,//alignment
                 GFX_DGTL_MTR_SCHEME_34	//scheme
                 ); // use alternate scheme
        break;
    case DMT_OutStdby:
        hgcObj.pDMT_OutStdbyObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_OutStdby,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_35,    // left
                 GFX_DGTL_MTR_TOP_35,     // top
                 GFX_DGTL_MTR_RIGHT_35,   // right
                 GFX_DGTL_MTR_BOTTOM_35,  // bottom             
                 GFX_DGTL_MTR_STATE_35,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_35,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_35, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_35,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_35,//alignment
                 GFX_DGTL_MTR_SCHEME_35	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SafeDoor:
        hgcObj.pDMT_SafeDoorObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SafeDoor,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_36,    // left
                 GFX_DGTL_MTR_TOP_36,     // top
                 GFX_DGTL_MTR_RIGHT_36,   // right
                 GFX_DGTL_MTR_BOTTOM_36,  // bottom             
                 GFX_DGTL_MTR_STATE_36,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_36,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_36, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_36,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_36,//alignment
                 GFX_DGTL_MTR_SCHEME_36	//scheme
                 ); // use alternate scheme
        break;
    case DMT_PrepareTestMould:
        hgcObj.pDMT_PrepareTestMouldObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_PrepareTestMould,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_37,    // left
                 GFX_DGTL_MTR_TOP_37,     // top
                 GFX_DGTL_MTR_RIGHT_37,   // right
                 GFX_DGTL_MTR_BOTTOM_37,  // bottom             
                 GFX_DGTL_MTR_STATE_37,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_37,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_37, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_37,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_37,//alignment
                 GFX_DGTL_MTR_SCHEME_37	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ConveyorOnTime:
        hgcObj.pDMT_ConveyorOnTimeObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ConveyorOnTime,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_38,    // left
                 GFX_DGTL_MTR_TOP_38,     // top
                 GFX_DGTL_MTR_RIGHT_38,   // right
                 GFX_DGTL_MTR_BOTTOM_38,  // bottom             
                 GFX_DGTL_MTR_STATE_38,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_38,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_38, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_38,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_38,//alignment
                 GFX_DGTL_MTR_SCHEME_38	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ReservOnTime:
        hgcObj.pDMT_ReservOnTimeObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ReservOnTime,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_39,    // left
                 GFX_DGTL_MTR_TOP_39,     // top
                 GFX_DGTL_MTR_RIGHT_39,   // right
                 GFX_DGTL_MTR_BOTTOM_39,  // bottom             
                 GFX_DGTL_MTR_STATE_39,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_39,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_39, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_39,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_39,//alignment
                 GFX_DGTL_MTR_SCHEME_39	//scheme
                 ); // use alternate scheme
        break;
    case DMT_WholeSpeed:
        hgcObj.pDMT_WholeSpeedObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_WholeSpeed,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_40,    // left
                 GFX_DGTL_MTR_TOP_40,     // top
                 GFX_DGTL_MTR_RIGHT_40,   // right
                 GFX_DGTL_MTR_BOTTOM_40,  // bottom             
                 GFX_DGTL_MTR_STATE_40,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_40,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_40, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_40,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_40,//alignment
                 GFX_DGTL_MTR_SCHEME_40	//scheme
                 ); // use alternate scheme
        break;
    case DMT_MaxSpeed:
        hgcObj.pDMT_MaxSpeedObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_MaxSpeed,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_41,    // left
                 GFX_DGTL_MTR_TOP_41,     // top
                 GFX_DGTL_MTR_RIGHT_41,   // right
                 GFX_DGTL_MTR_BOTTOM_41,  // bottom             
                 GFX_DGTL_MTR_STATE_41,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_41,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_41, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_41,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_41,//alignment
                 GFX_DGTL_MTR_SCHEME_41	//scheme
                 ); // use alternate scheme
        break;
    case DMT_AccDecTime:
        hgcObj.pDMT_AccDecTimeObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_AccDecTime,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_42,    // left
                 GFX_DGTL_MTR_TOP_42,     // top
                 GFX_DGTL_MTR_RIGHT_42,   // right
                 GFX_DGTL_MTR_BOTTOM_42,  // bottom             
                 GFX_DGTL_MTR_STATE_42,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_42,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_42, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_42,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_42,//alignment
                 GFX_DGTL_MTR_SCHEME_42	//scheme
                 ); // use alternate scheme
        break;
    case DMT_AlarmTime:
        hgcObj.pDMT_AlarmTimeObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_AlarmTime,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_43,    // left
                 GFX_DGTL_MTR_TOP_43,     // top
                 GFX_DGTL_MTR_RIGHT_43,   // right
                 GFX_DGTL_MTR_BOTTOM_43,  // bottom             
                 GFX_DGTL_MTR_STATE_43,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_43,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_43, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_43,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_43,//alignment
                 GFX_DGTL_MTR_SCHEME_43	//scheme
                 ); // use alternate scheme
        break;
    case DMT_FBPulseOut:
        hgcObj.pDMT_FBPulseOutObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_FBPulseOut,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_44,    // left
                 GFX_DGTL_MTR_TOP_44,     // top
                 GFX_DGTL_MTR_RIGHT_44,   // right
                 GFX_DGTL_MTR_BOTTOM_44,  // bottom             
                 GFX_DGTL_MTR_STATE_44,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_44,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_44, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_44,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_44,//alignment
                 GFX_DGTL_MTR_SCHEME_44	//scheme
                 ); // use alternate scheme
        break;
    case DMT_FBkPulseIn:
        hgcObj.pDMT_FBkPulseInObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_FBkPulseIn,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_45,    // left
                 GFX_DGTL_MTR_TOP_45,     // top
                 GFX_DGTL_MTR_RIGHT_45,   // right
                 GFX_DGTL_MTR_BOTTOM_45,  // bottom             
                 GFX_DGTL_MTR_STATE_45,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_45,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_45, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_45,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_45,//alignment
                 GFX_DGTL_MTR_SCHEME_45	//scheme
                 ); // use alternate scheme
        break;
    case DMT_OriSpeed:
        hgcObj.pDMT_OriSpeedObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_OriSpeed,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_46,    // left
                 GFX_DGTL_MTR_TOP_46,     // top
                 GFX_DGTL_MTR_RIGHT_46,   // right
                 GFX_DGTL_MTR_BOTTOM_46,  // bottom             
                 GFX_DGTL_MTR_STATE_46,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_46,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_46, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_46,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_46,//alignment
                 GFX_DGTL_MTR_SCHEME_46	//scheme
                 ); // use alternate scheme
        break;
    case DMT_PolseIn:
        hgcObj.pDMT_PolseInObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_PolseIn,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_47,    // left
                 GFX_DGTL_MTR_TOP_47,     // top
                 GFX_DGTL_MTR_RIGHT_47,   // right
                 GFX_DGTL_MTR_BOTTOM_47,  // bottom             
                 GFX_DGTL_MTR_STATE_47,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_47,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_47, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_47,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_47,//alignment
                 GFX_DGTL_MTR_SCHEME_47	//scheme
                 ); // use alternate scheme
        break;
    case DMT_MaxPos:
        hgcObj.pDMT_MaxPosObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_MaxPos,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_48,    // left
                 GFX_DGTL_MTR_TOP_48,     // top
                 GFX_DGTL_MTR_RIGHT_48,   // right
                 GFX_DGTL_MTR_BOTTOM_48,  // bottom             
                 GFX_DGTL_MTR_STATE_48,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_48,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_48, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_48,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_48,//alignment
                 GFX_DGTL_MTR_SCHEME_48	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ParamPage1:
        hgcObj.pDMT_ParamPage1Obj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ParamPage1,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_49,    // left
                 GFX_DGTL_MTR_TOP_49,     // top
                 GFX_DGTL_MTR_RIGHT_49,   // right
                 GFX_DGTL_MTR_BOTTOM_49,  // bottom             
                 GFX_DGTL_MTR_STATE_49,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_49,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_49, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_49,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_49,//alignment
                 GFX_DGTL_MTR_SCHEME_49	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ParamDistance:
        hgcObj.pDMT_ParamDistanceObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ParamDistance,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_50,    // left
                 GFX_DGTL_MTR_TOP_50,     // top
                 GFX_DGTL_MTR_RIGHT_50,   // right
                 GFX_DGTL_MTR_BOTTOM_50,  // bottom             
                 GFX_DGTL_MTR_STATE_50,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_50,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_50, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_50,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_50,//alignment
                 GFX_DGTL_MTR_SCHEME_50	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ParamSpeed:
        hgcObj.pDMT_ParamSpeedObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ParamSpeed,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_51,    // left
                 GFX_DGTL_MTR_TOP_51,     // top
                 GFX_DGTL_MTR_RIGHT_51,   // right
                 GFX_DGTL_MTR_BOTTOM_51,  // bottom             
                 GFX_DGTL_MTR_STATE_51,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_51,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_51, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_51,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_51,//alignment
                 GFX_DGTL_MTR_SCHEME_51	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ParamTime:
        hgcObj.pDMT_ParamTimeObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ParamTime,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_52,    // left
                 GFX_DGTL_MTR_TOP_52,     // top
                 GFX_DGTL_MTR_RIGHT_52,   // right
                 GFX_DGTL_MTR_BOTTOM_52,  // bottom             
                 GFX_DGTL_MTR_STATE_52,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_52,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_52, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_52,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_52,//alignment
                 GFX_DGTL_MTR_SCHEME_52	//scheme
                 ); // use alternate scheme
        break;
    case DMT_Reversed2:
        hgcObj.pDMT_Reversed2Obj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_Reversed2,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_53,    // left
                 GFX_DGTL_MTR_TOP_53,     // top
                 GFX_DGTL_MTR_RIGHT_53,   // right
                 GFX_DGTL_MTR_BOTTOM_53,  // bottom             
                 GFX_DGTL_MTR_STATE_53,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_53,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_53, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_53,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_53,//alignment
                 GFX_DGTL_MTR_SCHEME_53	//scheme
                 ); // use alternate scheme
        break;
    case DMT_Process1:
        hgcObj.pDMT_Process1Obj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_Process1,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_54,    // left
                 GFX_DGTL_MTR_TOP_54,     // top
                 GFX_DGTL_MTR_RIGHT_54,   // right
                 GFX_DGTL_MTR_BOTTOM_54,  // bottom             
                 GFX_DGTL_MTR_STATE_54,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_54,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_54, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_54,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_54,//alignment
                 GFX_DGTL_MTR_SCHEME_54	//scheme
                 ); // use alternate scheme
        break;
    case DMT_Posture:
        hgcObj.pDMT_PostureObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_Posture,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_55,    // left
                 GFX_DGTL_MTR_TOP_55,     // top
                 GFX_DGTL_MTR_RIGHT_55,   // right
                 GFX_DGTL_MTR_BOTTOM_55,  // bottom             
                 GFX_DGTL_MTR_STATE_55,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_55,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_55, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_55,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_55,//alignment
                 GFX_DGTL_MTR_SCHEME_55	//scheme
                 ); // use alternate scheme
        break;
    case DMT_Trav:
        hgcObj.pDMT_TravObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_Trav,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_56,    // left
                 GFX_DGTL_MTR_TOP_56,     // top
                 GFX_DGTL_MTR_RIGHT_56,   // right
                 GFX_DGTL_MTR_BOTTOM_56,  // bottom             
                 GFX_DGTL_MTR_STATE_56,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_56,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_56, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_56,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_56,//alignment
                 GFX_DGTL_MTR_SCHEME_56	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ViceForwBk:
        hgcObj.pDMT_ViceForwBkObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ViceForwBk,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_57,    // left
                 GFX_DGTL_MTR_TOP_57,     // top
                 GFX_DGTL_MTR_RIGHT_57,   // right
                 GFX_DGTL_MTR_BOTTOM_57,  // bottom             
                 GFX_DGTL_MTR_STATE_57,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_57,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_57, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_57,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_57,//alignment
                 GFX_DGTL_MTR_SCHEME_57	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ViceUpDown:
        hgcObj.pDMT_ViceUpDownObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ViceUpDown,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_58,    // left
                 GFX_DGTL_MTR_TOP_58,     // top
                 GFX_DGTL_MTR_RIGHT_58,   // right
                 GFX_DGTL_MTR_BOTTOM_58,  // bottom             
                 GFX_DGTL_MTR_STATE_58,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_58,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_58, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_58,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_58,//alignment
                 GFX_DGTL_MTR_SCHEME_58	//scheme
                 ); // use alternate scheme
        break;
    case DMT_MainForwBk:
        hgcObj.pDMT_MainForwBkObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_MainForwBk,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_59,    // left
                 GFX_DGTL_MTR_TOP_59,     // top
                 GFX_DGTL_MTR_RIGHT_59,   // right
                 GFX_DGTL_MTR_BOTTOM_59,  // bottom             
                 GFX_DGTL_MTR_STATE_59,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_59,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_59, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_59,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_59,//alignment
                 GFX_DGTL_MTR_SCHEME_59	//scheme
                 ); // use alternate scheme
        break;
    case DMT_MainUpDowm:
        hgcObj.pDMT_MainUpDowmObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_MainUpDowm,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_60,    // left
                 GFX_DGTL_MTR_TOP_60,     // top
                 GFX_DGTL_MTR_RIGHT_60,   // right
                 GFX_DGTL_MTR_BOTTOM_60,  // bottom             
                 GFX_DGTL_MTR_STATE_60,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_60,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_60, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_60,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_60,//alignment
                 GFX_DGTL_MTR_SCHEME_60	//scheme
                 ); // use alternate scheme
        break;
    case DMT_TimerSecond:
        hgcObj.pDMT_TimerSecondObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_TimerSecond,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_61,    // left
                 GFX_DGTL_MTR_TOP_61,     // top
                 GFX_DGTL_MTR_RIGHT_61,   // right
                 GFX_DGTL_MTR_BOTTOM_61,  // bottom             
                 GFX_DGTL_MTR_STATE_61,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_61,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_61, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_61,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_61,//alignment
                 GFX_DGTL_MTR_SCHEME_61	//scheme
                 ); // use alternate scheme
        break;
    case DMT_TimerMin:
        hgcObj.pDMT_TimerMinObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_TimerMin,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_62,    // left
                 GFX_DGTL_MTR_TOP_62,     // top
                 GFX_DGTL_MTR_RIGHT_62,   // right
                 GFX_DGTL_MTR_BOTTOM_62,  // bottom             
                 GFX_DGTL_MTR_STATE_62,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_62,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_62, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_62,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_62,//alignment
                 GFX_DGTL_MTR_SCHEME_62	//scheme
                 ); // use alternate scheme
        break;
    case DMT_TimerHour:
        hgcObj.pDMT_TimerHourObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_TimerHour,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_63,    // left
                 GFX_DGTL_MTR_TOP_63,     // top
                 GFX_DGTL_MTR_RIGHT_63,   // right
                 GFX_DGTL_MTR_BOTTOM_63,  // bottom             
                 GFX_DGTL_MTR_STATE_63,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_63,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_63, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_63,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_63,//alignment
                 GFX_DGTL_MTR_SCHEME_63	//scheme
                 ); // use alternate scheme
        break;
    case DMT_TimerDate:
        hgcObj.pDMT_TimerDateObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_TimerDate,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_64,    // left
                 GFX_DGTL_MTR_TOP_64,     // top
                 GFX_DGTL_MTR_RIGHT_64,   // right
                 GFX_DGTL_MTR_BOTTOM_64,  // bottom             
                 GFX_DGTL_MTR_STATE_64,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_64,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_64, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_64,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_64,//alignment
                 GFX_DGTL_MTR_SCHEME_64	//scheme
                 ); // use alternate scheme
        break;
    case DMT_TimerMonth:
        hgcObj.pDMT_TimerMonthObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_TimerMonth,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_65,    // left
                 GFX_DGTL_MTR_TOP_65,     // top
                 GFX_DGTL_MTR_RIGHT_65,   // right
                 GFX_DGTL_MTR_BOTTOM_65,  // bottom             
                 GFX_DGTL_MTR_STATE_65,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_65,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_65, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_65,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_65,//alignment
                 GFX_DGTL_MTR_SCHEME_65	//scheme
                 ); // use alternate scheme
        break;
    case DMT_TimerYear:
        hgcObj.pDMT_TimerYearObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_TimerYear,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_66,    // left
                 GFX_DGTL_MTR_TOP_66,     // top
                 GFX_DGTL_MTR_RIGHT_66,   // right
                 GFX_DGTL_MTR_BOTTOM_66,  // bottom             
                 GFX_DGTL_MTR_STATE_66,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_66,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_66, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_66,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_66,//alignment
                 GFX_DGTL_MTR_SCHEME_66	//scheme
                 ); // use alternate scheme
        break;
    case DMT_WeekUsed:
        hgcObj.pDMT_WeekUsedObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_WeekUsed,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_67,    // left
                 GFX_DGTL_MTR_TOP_67,     // top
                 GFX_DGTL_MTR_RIGHT_67,   // right
                 GFX_DGTL_MTR_BOTTOM_67,  // bottom             
                 GFX_DGTL_MTR_STATE_67,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_67,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_67, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_67,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_67,//alignment
                 GFX_DGTL_MTR_SCHEME_67	//scheme
                 ); // use alternate scheme
        break;
    case DMT_WeekLimit:
        hgcObj.pDMT_WeekLimitObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_WeekLimit,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_68,    // left
                 GFX_DGTL_MTR_TOP_68,     // top
                 GFX_DGTL_MTR_RIGHT_68,   // right
                 GFX_DGTL_MTR_BOTTOM_68,  // bottom             
                 GFX_DGTL_MTR_STATE_68,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_68,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_68, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_68,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_68,//alignment
                 GFX_DGTL_MTR_SCHEME_68	//scheme
                 ); // use alternate scheme
        break;
    case DMT_UseHourCnt:
        hgcObj.pDMT_UseHourCntObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_UseHourCnt,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_69,    // left
                 GFX_DGTL_MTR_TOP_69,     // top
                 GFX_DGTL_MTR_RIGHT_69,   // right
                 GFX_DGTL_MTR_BOTTOM_69,  // bottom             
                 GFX_DGTL_MTR_STATE_69,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_69,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_69, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_69,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_69,//alignment
                 GFX_DGTL_MTR_SCHEME_69	//scheme
                 ); // use alternate scheme
        break;
    case DMT_UseWeekCnt:
        hgcObj.pDMT_UseWeekCntObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_UseWeekCnt,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_70,    // left
                 GFX_DGTL_MTR_TOP_70,     // top
                 GFX_DGTL_MTR_RIGHT_70,   // right
                 GFX_DGTL_MTR_BOTTOM_70,  // bottom             
                 GFX_DGTL_MTR_STATE_70,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_70,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_70, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_70,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_70,//alignment
                 GFX_DGTL_MTR_SCHEME_70	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SetWeekCnt:
        hgcObj.pDMT_SetWeekCntObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SetWeekCnt,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_71,    // left
                 GFX_DGTL_MTR_TOP_71,     // top
                 GFX_DGTL_MTR_RIGHT_71,   // right
                 GFX_DGTL_MTR_BOTTOM_71,  // bottom             
                 GFX_DGTL_MTR_STATE_71,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_71,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_71, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_71,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_71,//alignment
                 GFX_DGTL_MTR_SCHEME_71	//scheme
                 ); // use alternate scheme
        break;
    case DMT_MoniValue:
        hgcObj.pDMT_MoniValueObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_MoniValue,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_72,    // left
                 GFX_DGTL_MTR_TOP_72,     // top
                 GFX_DGTL_MTR_RIGHT_72,   // right
                 GFX_DGTL_MTR_BOTTOM_72,  // bottom             
                 GFX_DGTL_MTR_STATE_72,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_72,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_72, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_72,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_72,//alignment
                 GFX_DGTL_MTR_SCHEME_72	//scheme
                 ); // use alternate scheme
        break;
    case DMT_MoniPara:
        hgcObj.pDMT_MoniParaObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_MoniPara,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_73,    // left
                 GFX_DGTL_MTR_TOP_73,     // top
                 GFX_DGTL_MTR_RIGHT_73,   // right
                 GFX_DGTL_MTR_BOTTOM_73,  // bottom             
                 GFX_DGTL_MTR_STATE_73,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_73,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_73, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_73,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_73,//alignment
                 GFX_DGTL_MTR_SCHEME_73	//scheme
                 ); // use alternate scheme
        break;
    case DMT_MoniValueZ:
        hgcObj.pDMT_MoniValueZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_MoniValueZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_74,    // left
                 GFX_DGTL_MTR_TOP_74,     // top
                 GFX_DGTL_MTR_RIGHT_74,   // right
                 GFX_DGTL_MTR_BOTTOM_74,  // bottom             
                 GFX_DGTL_MTR_STATE_74,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_74,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_74, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_74,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_74,//alignment
                 GFX_DGTL_MTR_SCHEME_74	//scheme
                 ); // use alternate scheme
        break;
    case DMT_MoniParaZ:
        hgcObj.pDMT_MoniParaZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_MoniParaZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_75,    // left
                 GFX_DGTL_MTR_TOP_75,     // top
                 GFX_DGTL_MTR_RIGHT_75,   // right
                 GFX_DGTL_MTR_BOTTOM_75,  // bottom             
                 GFX_DGTL_MTR_STATE_75,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_75,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_75, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_75,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_75,//alignment
                 GFX_DGTL_MTR_SCHEME_75	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ERROR_CODE:
        hgcObj.pDMT_ERROR_CODEObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ERROR_CODE,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_76,    // left
                 GFX_DGTL_MTR_TOP_76,     // top
                 GFX_DGTL_MTR_RIGHT_76,   // right
                 GFX_DGTL_MTR_BOTTOM_76,  // bottom             
                 GFX_DGTL_MTR_STATE_76,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_76,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_76, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_76,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_76,//alignment
                 GFX_DGTL_MTR_SCHEME_76	//scheme
                 ); // use alternate scheme
        break;
    case DMT_HINK_TEMP:
        hgcObj.pDMT_HINK_TEMPObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_HINK_TEMP,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_77,    // left
                 GFX_DGTL_MTR_TOP_77,     // top
                 GFX_DGTL_MTR_RIGHT_77,   // right
                 GFX_DGTL_MTR_BOTTOM_77,  // bottom             
                 GFX_DGTL_MTR_STATE_77,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_77,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_77, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_77,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_77,//alignment
                 GFX_DGTL_MTR_SCHEME_77	//scheme
                 ); // use alternate scheme
        break;
    case DMT_TRQ_BURDEN1:
        hgcObj.pDMT_TRQ_BURDEN1Obj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_TRQ_BURDEN1,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_78,    // left
                 GFX_DGTL_MTR_TOP_78,     // top
                 GFX_DGTL_MTR_RIGHT_78,   // right
                 GFX_DGTL_MTR_BOTTOM_78,  // bottom             
                 GFX_DGTL_MTR_STATE_78,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_78,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_78, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_78,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_78,//alignment
                 GFX_DGTL_MTR_SCHEME_78	//scheme
                 ); // use alternate scheme
        break;
    case DMT_DC_BUS_VOLTAGE:
        hgcObj.pDMT_DC_BUS_VOLTAGEObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_DC_BUS_VOLTAGE,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_79,    // left
                 GFX_DGTL_MTR_TOP_79,     // top
                 GFX_DGTL_MTR_RIGHT_79,   // right
                 GFX_DGTL_MTR_BOTTOM_79,  // bottom             
                 GFX_DGTL_MTR_STATE_79,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_79,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_79, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_79,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_79,//alignment
                 GFX_DGTL_MTR_SCHEME_79	//scheme
                 ); // use alternate scheme
        break;
    case DMT_DB_POWER:
        hgcObj.pDMT_DB_POWERObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_DB_POWER,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_80,    // left
                 GFX_DGTL_MTR_TOP_80,     // top
                 GFX_DGTL_MTR_RIGHT_80,   // right
                 GFX_DGTL_MTR_BOTTOM_80,  // bottom             
                 GFX_DGTL_MTR_STATE_80,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_80,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_80, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_80,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_80,//alignment
                 GFX_DGTL_MTR_SCHEME_80	//scheme
                 ); // use alternate scheme
        break;
    case DMT_TRQ_BURDEN2:
        hgcObj.pDMT_TRQ_BURDEN2Obj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_TRQ_BURDEN2,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_81,    // left
                 GFX_DGTL_MTR_TOP_81,     // top
                 GFX_DGTL_MTR_RIGHT_81,   // right
                 GFX_DGTL_MTR_BOTTOM_81,  // bottom             
                 GFX_DGTL_MTR_STATE_81,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_81,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_81, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_81,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_81,//alignment
                 GFX_DGTL_MTR_SCHEME_81	//scheme
                 ); // use alternate scheme
        break;
    case DMT_P_ERROR:
        hgcObj.pDMT_P_ERRORObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_P_ERROR,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_82,    // left
                 GFX_DGTL_MTR_TOP_82,     // top
                 GFX_DGTL_MTR_RIGHT_82,   // right
                 GFX_DGTL_MTR_BOTTOM_82,  // bottom             
                 GFX_DGTL_MTR_STATE_82,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_82,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_82, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_82,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_82,//alignment
                 GFX_DGTL_MTR_SCHEME_82	//scheme
                 ); // use alternate scheme
        break;
    case DMT_DO_PORT_STATUS:
        hgcObj.pDMT_DO_PORT_STATUSObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_DO_PORT_STATUS,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_83,    // left
                 GFX_DGTL_MTR_TOP_83,     // top
                 GFX_DGTL_MTR_RIGHT_83,   // right
                 GFX_DGTL_MTR_BOTTOM_83,  // bottom             
                 GFX_DGTL_MTR_STATE_83,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_83,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_83, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_83,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_83,//alignment
                 GFX_DGTL_MTR_SCHEME_83	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SPD_FBK:
        hgcObj.pDMT_SPD_FBKObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SPD_FBK,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_84,    // left
                 GFX_DGTL_MTR_TOP_84,     // top
                 GFX_DGTL_MTR_RIGHT_84,   // right
                 GFX_DGTL_MTR_BOTTOM_84,  // bottom             
                 GFX_DGTL_MTR_STATE_84,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_84,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_84, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_84,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_84,//alignment
                 GFX_DGTL_MTR_SCHEME_84	//scheme
                 ); // use alternate scheme
        break;
    case DMT_DI_PORT_STATUS:
        hgcObj.pDMT_DI_PORT_STATUSObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_DI_PORT_STATUS,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_85,    // left
                 GFX_DGTL_MTR_TOP_85,     // top
                 GFX_DGTL_MTR_RIGHT_85,   // right
                 GFX_DGTL_MTR_BOTTOM_85,  // bottom             
                 GFX_DGTL_MTR_STATE_85,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_85,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_85, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_85,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_85,//alignment
                 GFX_DGTL_MTR_SCHEME_85	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ELEC_ANGLE:
        hgcObj.pDMT_ELEC_ANGLEObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ELEC_ANGLE,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_86,    // left
                 GFX_DGTL_MTR_TOP_86,     // top
                 GFX_DGTL_MTR_RIGHT_86,   // right
                 GFX_DGTL_MTR_BOTTOM_86,  // bottom             
                 GFX_DGTL_MTR_STATE_86,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_86,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_86, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_86,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_86,//alignment
                 GFX_DGTL_MTR_SCHEME_86	//scheme
                 ); // use alternate scheme
        break;
    case DMT_MECH_ANGLE:
        hgcObj.pDMT_MECH_ANGLEObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_MECH_ANGLE,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_87,    // left
                 GFX_DGTL_MTR_TOP_87,     // top
                 GFX_DGTL_MTR_RIGHT_87,   // right
                 GFX_DGTL_MTR_BOTTOM_87,  // bottom             
                 GFX_DGTL_MTR_STATE_87,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_87,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_87, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_87,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_87,//alignment
                 GFX_DGTL_MTR_SCHEME_87	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ERROR_CODEZ:
        hgcObj.pDMT_ERROR_CODEZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ERROR_CODEZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_88,    // left
                 GFX_DGTL_MTR_TOP_88,     // top
                 GFX_DGTL_MTR_RIGHT_88,   // right
                 GFX_DGTL_MTR_BOTTOM_88,  // bottom             
                 GFX_DGTL_MTR_STATE_88,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_88,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_88, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_88,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_88,//alignment
                 GFX_DGTL_MTR_SCHEME_88	//scheme
                 ); // use alternate scheme
        break;
    case DMT_HINK_TEMPZ:
        hgcObj.pDMT_HINK_TEMPZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_HINK_TEMPZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_89,    // left
                 GFX_DGTL_MTR_TOP_89,     // top
                 GFX_DGTL_MTR_RIGHT_89,   // right
                 GFX_DGTL_MTR_BOTTOM_89,  // bottom             
                 GFX_DGTL_MTR_STATE_89,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_89,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_89, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_89,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_89,//alignment
                 GFX_DGTL_MTR_SCHEME_89	//scheme
                 ); // use alternate scheme
        break;
    case DMT_TRQ_BURDEN1Z:
        hgcObj.pDMT_TRQ_BURDEN1ZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_TRQ_BURDEN1Z,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_90,    // left
                 GFX_DGTL_MTR_TOP_90,     // top
                 GFX_DGTL_MTR_RIGHT_90,   // right
                 GFX_DGTL_MTR_BOTTOM_90,  // bottom             
                 GFX_DGTL_MTR_STATE_90,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_90,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_90, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_90,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_90,//alignment
                 GFX_DGTL_MTR_SCHEME_90	//scheme
                 ); // use alternate scheme
        break;
    case DMT_DC_BUS_VOLTAGEZ:
        hgcObj.pDMT_DC_BUS_VOLTAGEZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_DC_BUS_VOLTAGEZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_91,    // left
                 GFX_DGTL_MTR_TOP_91,     // top
                 GFX_DGTL_MTR_RIGHT_91,   // right
                 GFX_DGTL_MTR_BOTTOM_91,  // bottom             
                 GFX_DGTL_MTR_STATE_91,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_91,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_91, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_91,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_91,//alignment
                 GFX_DGTL_MTR_SCHEME_91	//scheme
                 ); // use alternate scheme
        break;
    case DMT_DB_POWERZ:
        hgcObj.pDMT_DB_POWERZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_DB_POWERZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_92,    // left
                 GFX_DGTL_MTR_TOP_92,     // top
                 GFX_DGTL_MTR_RIGHT_92,   // right
                 GFX_DGTL_MTR_BOTTOM_92,  // bottom             
                 GFX_DGTL_MTR_STATE_92,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_92,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_92, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_92,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_92,//alignment
                 GFX_DGTL_MTR_SCHEME_92	//scheme
                 ); // use alternate scheme
        break;
    case DMT_TRQ_BURDEN2Z:
        hgcObj.pDMT_TRQ_BURDEN2ZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_TRQ_BURDEN2Z,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_93,    // left
                 GFX_DGTL_MTR_TOP_93,     // top
                 GFX_DGTL_MTR_RIGHT_93,   // right
                 GFX_DGTL_MTR_BOTTOM_93,  // bottom             
                 GFX_DGTL_MTR_STATE_93,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_93,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_93, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_93,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_93,//alignment
                 GFX_DGTL_MTR_SCHEME_93	//scheme
                 ); // use alternate scheme
        break;
    case DMT_P_ERRORZ:
        hgcObj.pDMT_P_ERRORZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_P_ERRORZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_94,    // left
                 GFX_DGTL_MTR_TOP_94,     // top
                 GFX_DGTL_MTR_RIGHT_94,   // right
                 GFX_DGTL_MTR_BOTTOM_94,  // bottom             
                 GFX_DGTL_MTR_STATE_94,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_94,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_94, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_94,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_94,//alignment
                 GFX_DGTL_MTR_SCHEME_94	//scheme
                 ); // use alternate scheme
        break;
    case DMT_DO_PORT_STATUSZ:
        hgcObj.pDMT_DO_PORT_STATUSZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_DO_PORT_STATUSZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_95,    // left
                 GFX_DGTL_MTR_TOP_95,     // top
                 GFX_DGTL_MTR_RIGHT_95,   // right
                 GFX_DGTL_MTR_BOTTOM_95,  // bottom             
                 GFX_DGTL_MTR_STATE_95,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_95,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_95, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_95,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_95,//alignment
                 GFX_DGTL_MTR_SCHEME_95	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SPD_FBKZ:
        hgcObj.pDMT_SPD_FBKZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SPD_FBKZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_96,    // left
                 GFX_DGTL_MTR_TOP_96,     // top
                 GFX_DGTL_MTR_RIGHT_96,   // right
                 GFX_DGTL_MTR_BOTTOM_96,  // bottom             
                 GFX_DGTL_MTR_STATE_96,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_96,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_96, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_96,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_96,//alignment
                 GFX_DGTL_MTR_SCHEME_96	//scheme
                 ); // use alternate scheme
        break;
    case DMT_DI_PORT_STATUSZ:
        hgcObj.pDMT_DI_PORT_STATUSZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_DI_PORT_STATUSZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_97,    // left
                 GFX_DGTL_MTR_TOP_97,     // top
                 GFX_DGTL_MTR_RIGHT_97,   // right
                 GFX_DGTL_MTR_BOTTOM_97,  // bottom             
                 GFX_DGTL_MTR_STATE_97,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_97,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_97, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_97,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_97,//alignment
                 GFX_DGTL_MTR_SCHEME_97	//scheme
                 ); // use alternate scheme
        break;
    case DMT_ELEC_ANGLEZ:
        hgcObj.pDMT_ELEC_ANGLEZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_ELEC_ANGLEZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_98,    // left
                 GFX_DGTL_MTR_TOP_98,     // top
                 GFX_DGTL_MTR_RIGHT_98,   // right
                 GFX_DGTL_MTR_BOTTOM_98,  // bottom             
                 GFX_DGTL_MTR_STATE_98,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_98,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_98, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_98,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_98,//alignment
                 GFX_DGTL_MTR_SCHEME_98	//scheme
                 ); // use alternate scheme
        break;
    case DMT_MECH_ANGLEZ:
        hgcObj.pDMT_MECH_ANGLEZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_MECH_ANGLEZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_99,    // left
                 GFX_DGTL_MTR_TOP_99,     // top
                 GFX_DGTL_MTR_RIGHT_99,   // right
                 GFX_DGTL_MTR_BOTTOM_99,  // bottom             
                 GFX_DGTL_MTR_STATE_99,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_99,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_99, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_99,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_99,//alignment
                 GFX_DGTL_MTR_SCHEME_99	//scheme
                 ); // use alternate scheme
        break;
    case DMT_INERTIA:
        hgcObj.pDMT_INERTIAObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_INERTIA,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_100,    // left
                 GFX_DGTL_MTR_TOP_100,     // top
                 GFX_DGTL_MTR_RIGHT_100,   // right
                 GFX_DGTL_MTR_BOTTOM_100,  // bottom             
                 GFX_DGTL_MTR_STATE_100,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_100,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_100, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_100,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_100,//alignment
                 GFX_DGTL_MTR_SCHEME_100	//scheme
                 ); // use alternate scheme
        break;
    case DMT_POS_P1:
        hgcObj.pDMT_POS_P1Obj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_POS_P1,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_101,    // left
                 GFX_DGTL_MTR_TOP_101,     // top
                 GFX_DGTL_MTR_RIGHT_101,   // right
                 GFX_DGTL_MTR_BOTTOM_101,  // bottom             
                 GFX_DGTL_MTR_STATE_101,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_101,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_101, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_101,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_101,//alignment
                 GFX_DGTL_MTR_SCHEME_101	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SPD_TI1:
        hgcObj.pDMT_SPD_TI1Obj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SPD_TI1,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_102,    // left
                 GFX_DGTL_MTR_TOP_102,     // top
                 GFX_DGTL_MTR_RIGHT_102,   // right
                 GFX_DGTL_MTR_BOTTOM_102,  // bottom             
                 GFX_DGTL_MTR_STATE_102,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_102,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_102, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_102,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_102,//alignment
                 GFX_DGTL_MTR_SCHEME_102	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SPD_P1:
        hgcObj.pDMT_SPD_P1Obj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SPD_P1,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_103,    // left
                 GFX_DGTL_MTR_TOP_103,     // top
                 GFX_DGTL_MTR_RIGHT_103,   // right
                 GFX_DGTL_MTR_BOTTOM_103,  // bottom             
                 GFX_DGTL_MTR_STATE_103,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_103,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_103, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_103,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_103,//alignment
                 GFX_DGTL_MTR_SCHEME_103	//scheme
                 ); // use alternate scheme
        break;
    case DMT_CMDVALUE:
        hgcObj.pDMT_CMDVALUEObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_CMDVALUE,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_104,    // left
                 GFX_DGTL_MTR_TOP_104,     // top
                 GFX_DGTL_MTR_RIGHT_104,   // right
                 GFX_DGTL_MTR_BOTTOM_104,  // bottom             
                 GFX_DGTL_MTR_STATE_104,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_104,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_104, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_104,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_104,//alignment
                 GFX_DGTL_MTR_SCHEME_104	//scheme
                 ); // use alternate scheme
        break;
    case DMT_CMDID:
        hgcObj.pDMT_CMDIDObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_CMDID,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_105,    // left
                 GFX_DGTL_MTR_TOP_105,     // top
                 GFX_DGTL_MTR_RIGHT_105,   // right
                 GFX_DGTL_MTR_BOTTOM_105,  // bottom             
                 GFX_DGTL_MTR_STATE_105,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_105,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_105, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_105,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_105,//alignment
                 GFX_DGTL_MTR_SCHEME_105	//scheme
                 ); // use alternate scheme
        break;
    case DMT_INERTIAZ:
        hgcObj.pDMT_INERTIAZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_INERTIAZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_106,    // left
                 GFX_DGTL_MTR_TOP_106,     // top
                 GFX_DGTL_MTR_RIGHT_106,   // right
                 GFX_DGTL_MTR_BOTTOM_106,  // bottom             
                 GFX_DGTL_MTR_STATE_106,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_106,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_106, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_106,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_106,//alignment
                 GFX_DGTL_MTR_SCHEME_106	//scheme
                 ); // use alternate scheme
        break;
    case DMT_POS_P1Z:
        hgcObj.pDMT_POS_P1ZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_POS_P1Z,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_107,    // left
                 GFX_DGTL_MTR_TOP_107,     // top
                 GFX_DGTL_MTR_RIGHT_107,   // right
                 GFX_DGTL_MTR_BOTTOM_107,  // bottom             
                 GFX_DGTL_MTR_STATE_107,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_107,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_107, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_107,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_107,//alignment
                 GFX_DGTL_MTR_SCHEME_107	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SPD_TI1Z:
        hgcObj.pDMT_SPD_TI1ZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SPD_TI1Z,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_108,    // left
                 GFX_DGTL_MTR_TOP_108,     // top
                 GFX_DGTL_MTR_RIGHT_108,   // right
                 GFX_DGTL_MTR_BOTTOM_108,  // bottom             
                 GFX_DGTL_MTR_STATE_108,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_108,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_108, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_108,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_108,//alignment
                 GFX_DGTL_MTR_SCHEME_108	//scheme
                 ); // use alternate scheme
        break;
    case DMT_SPD_P1Z:
        hgcObj.pDMT_SPD_P1ZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_SPD_P1Z,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_109,    // left
                 GFX_DGTL_MTR_TOP_109,     // top
                 GFX_DGTL_MTR_RIGHT_109,   // right
                 GFX_DGTL_MTR_BOTTOM_109,  // bottom             
                 GFX_DGTL_MTR_STATE_109,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_109,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_109, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_109,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_109,//alignment
                 GFX_DGTL_MTR_SCHEME_109	//scheme
                 ); // use alternate scheme
        break;
    case DMT_CMDVALUEZ:
        hgcObj.pDMT_CMDVALUEZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_CMDVALUEZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_110,    // left
                 GFX_DGTL_MTR_TOP_110,     // top
                 GFX_DGTL_MTR_RIGHT_110,   // right
                 GFX_DGTL_MTR_BOTTOM_110,  // bottom             
                 GFX_DGTL_MTR_STATE_110,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_110,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_110, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_110,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_110,//alignment
                 GFX_DGTL_MTR_SCHEME_110	//scheme
                 ); // use alternate scheme
        break;
    case DMT_CMDIDZ:
        hgcObj.pDMT_CMDIDZObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DMT_CMDIDZ,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_111,    // left
                 GFX_DGTL_MTR_TOP_111,     // top
                 GFX_DGTL_MTR_RIGHT_111,   // right
                 GFX_DGTL_MTR_BOTTOM_111,  // bottom             
                 GFX_DGTL_MTR_STATE_111,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_111,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_111, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_111,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_111,//alignment
                 GFX_DGTL_MTR_SCHEME_111	//scheme
                 ); // use alternate scheme
        break;
    case SLD_Brightness:
        hgcObj.pSLD_BrightnessObj = GFX_GOL_ScrollBarCreate
                (
                 GFX_INDEX_0,
                 SLD_Brightness,           // Check Box ID
                 GFX_SCROLLBAR_LEFT_0,        // left
                 GFX_SCROLLBAR_TOP_0,        // top
                 GFX_SCROLLBAR_RIGHT_0,     // right
                 GFX_SCROLLBAR_BOTTOM_0,   // bottom 				 
                 GFX_SCROLLBAR_STATE_0,   //State
                 GFX_SCROLLBAR_RANGE_0,  // range
                 GFX_SCROLLBAR_PAGE_0,  // page 
                 GFX_SCROLLBAR_POS_0,  // pos 
                 GFX_SCROLLBAR_SCHEME_0	//scheme
                 ); // use alternate scheme
        break;
    case PRB_ResetFactorySetting:
        hgcObj.pPRB_ResetFactorySettingObj = GFX_GOL_ProgressBarCreate
                (
                 GFX_INDEX_0,
                 PRB_ResetFactorySetting,      // progressbar ID
                 GFX_PROGRESSBAR_LEFT_0,    // left
                 GFX_PROGRESSBAR_TOP_0,     // top
                 GFX_PROGRESSBAR_RIGHT_0,   // right				 
                 GFX_PROGRESSBAR_BOTTOM_0,  // bottom
				 GFX_PROGRESSBAR_STATE_0,   // state
				 GFX_PROGRESSBAR_POS_0,     //position                 
                 GFX_PROGRESSBAR_RANGE_0,   // range				 
                 GFX_PROGRESSBAR_SCHEME_0
                 );
        GFX_GOL_ProgressBarPositionSet(hgcObj.pPRB_ResetFactorySettingObj, GFX_PROGRESSBAR_POS_0);
        break;
    case MTR_Speed:
        hgcObj.pMTR_SpeedObj = GFX_GOL_MeterCreate
                (
                 GFX_INDEX_0,
                 MTR_Speed,      // meter ID
                 GFX_METER_LEFT_0,    // left
                 GFX_METER_TOP_0,     // top
                 GFX_METER_RIGHT_0,   // right				 
                 GFX_METER_BOTTOM_0,  // bottom
				 GFX_METER_STATE_0,   // state
                 GFX_METER_TYPE_0, // type
				 GFX_METER_VALUE_0,     //value                 
                 GFX_METER_MIN_VALUE_0,   // min value
                 GFX_METER_MAX_VALUE_0,   // max value
                 (GFX_RESOURCE_HDR*) &simsun_16,   // title font
                 (GFX_RESOURCE_HDR*) &simsun_16,   // value font
                 (GFX_XCHAR*)meterStr_0,    // text
                 GFX_METER_SCHEME_0
                 );
        GFX_GOL_MeterScaleColorsSet(hgcObj.pMTR_SpeedObj, 
                        GFX_RGBConvert(GFX_METER_COLOR1_RED_0, GFX_METER_COLOR1_GREEN_0, GFX_METER_COLOR1_BLUE_0),
                        GFX_RGBConvert(GFX_METER_COLOR2_RED_0, GFX_METER_COLOR2_GREEN_0, GFX_METER_COLOR2_BLUE_0),
                        GFX_RGBConvert(GFX_METER_COLOR3_RED_0, GFX_METER_COLOR3_GREEN_0, GFX_METER_COLOR3_BLUE_0),
                        GFX_RGBConvert(GFX_METER_COLOR4_RED_0, GFX_METER_COLOR4_GREEN_0, GFX_METER_COLOR4_BLUE_0),
                        GFX_RGBConvert(GFX_METER_COLOR5_RED_0, GFX_METER_COLOR5_GREEN_0, GFX_METER_COLOR5_BLUE_0),
                        GFX_RGBConvert(GFX_METER_COLOR6_RED_0, GFX_METER_COLOR6_GREEN_0, GFX_METER_COLOR6_BLUE_0));
        break;
    case EDB_PSW:
        hgcObj.pEDB_PSWObj = GFX_GOL_EditBoxCreate
                (
                 GFX_INDEX_0,
                 EDB_PSW,      // button ID
                 GFX_EDITBOX_LEFT_0,    // left
                 GFX_EDITBOX_TOP_0,     // top
                 GFX_EDITBOX_RIGHT_0,   // right
                 GFX_EDITBOX_BOTTOM_0,  // bottom
				 GFX_EDITBOX_STATE_0,   // state
				 (GFX_XCHAR*)editBoxStr_0,    // text
                 GFX_EDITBOX_NOOFCHARS_0,   // no. of chars
                 GFX_EDITBOX_ALIGNMENT_0,       //alignment
                 GFX_EDITBOX_SCHEME_0
                 ); // use alternate scheme
        break;
    case EDB_RegisterCode:
        hgcObj.pEDB_RegisterCodeObj = GFX_GOL_EditBoxCreate
                (
                 GFX_INDEX_0,
                 EDB_RegisterCode,      // button ID
                 GFX_EDITBOX_LEFT_1,    // left
                 GFX_EDITBOX_TOP_1,     // top
                 GFX_EDITBOX_RIGHT_1,   // right
                 GFX_EDITBOX_BOTTOM_1,  // bottom
				 GFX_EDITBOX_STATE_1,   // state
				 (GFX_XCHAR*)editBoxStr_1,    // text
                 GFX_EDITBOX_NOOFCHARS_1,   // no. of chars
                 GFX_EDITBOX_ALIGNMENT_1,       //alignment
                 GFX_EDITBOX_SCHEME_1
                 ); // use alternate scheme
        break;
    case EDB_SerialNo:
        hgcObj.pEDB_SerialNoObj = GFX_GOL_EditBoxCreate
                (
                 GFX_INDEX_0,
                 EDB_SerialNo,      // button ID
                 GFX_EDITBOX_LEFT_2,    // left
                 GFX_EDITBOX_TOP_2,     // top
                 GFX_EDITBOX_RIGHT_2,   // right
                 GFX_EDITBOX_BOTTOM_2,  // bottom
				 GFX_EDITBOX_STATE_2,   // state
				 (GFX_XCHAR*)editBoxStr_2,    // text
                 GFX_EDITBOX_NOOFCHARS_2,   // no. of chars
                 GFX_EDITBOX_ALIGNMENT_2,       //alignment
                 GFX_EDITBOX_SCHEME_2
                 ); // use alternate scheme
        break;
    case LSB_CurrAction:
        hgcObj.pLSB_CurrActionObj = GFX_GOL_ListBoxCreate(
                GFX_INDEX_0,
                LSB_CurrAction, // id
                GFX_LISTBOX_LEFT_0, // left
                GFX_LISTBOX_TOP_0, // top
                GFX_LISTBOX_RIGHT_0, // right
                GFX_LISTBOX_BOTTOM_0, // bottom
				GFX_LISTBOX_STATE_0, // state
				NULL, // default text
                GFX_LISTBOX_ALIGNMENT_0, //alignment
                GFX_LISTBOX_SCHEME_0); // scheme
		
        break;
    case LSB_Parameter:
        hgcObj.pLSB_ParameterObj = GFX_GOL_ListBoxCreate(
                GFX_INDEX_0,
                LSB_Parameter, // id
                GFX_LISTBOX_LEFT_1, // left
                GFX_LISTBOX_TOP_1, // top
                GFX_LISTBOX_RIGHT_1, // right
                GFX_LISTBOX_BOTTOM_1, // bottom
				GFX_LISTBOX_STATE_1, // state
				NULL, // default text
                GFX_LISTBOX_ALIGNMENT_1, //alignment
                GFX_LISTBOX_SCHEME_1); // scheme
		
        break;
    case STE_PageIndex:
        hgcObj.pSTE_PageIndexObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_PageIndex,      // button ID
                 GFX_STATICTEXT_LEFT_0,    // left
                 GFX_STATICTEXT_TOP_0,     // top
                 GFX_STATICTEXT_RIGHT_0,   // right
                 GFX_STATICTEXT_BOTTOM_0,  // bottom
                 GFX_STATICTEXT_STATE_0,   // state
                 (GFX_XCHAR*)staticTextStr_0,    // text
                 GFX_STATICTEXT_ALIGNMENT_0,       //alignment
                 GFX_STATICTEXT_SCHEME_0
                 ); // use alternate scheme
        break;
    case STE_WarningInfor:
        hgcObj.pSTE_WarningInforObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_WarningInfor,      // button ID
                 GFX_STATICTEXT_LEFT_1,    // left
                 GFX_STATICTEXT_TOP_1,     // top
                 GFX_STATICTEXT_RIGHT_1,   // right
                 GFX_STATICTEXT_BOTTOM_1,  // bottom
                 GFX_STATICTEXT_STATE_1,   // state
                 (GFX_XCHAR*)staticTextStr_1,    // text
                 GFX_STATICTEXT_ALIGNMENT_1,       //alignment
                 GFX_STATICTEXT_SCHEME_1
                 ); // use alternate scheme
        break;
    case STE_Data:
        hgcObj.pSTE_DataObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_Data,      // button ID
                 GFX_STATICTEXT_LEFT_2,    // left
                 GFX_STATICTEXT_TOP_2,     // top
                 GFX_STATICTEXT_RIGHT_2,   // right
                 GFX_STATICTEXT_BOTTOM_2,  // bottom
                 GFX_STATICTEXT_STATE_2,   // state
                 (GFX_XCHAR*)staticTextStr_2,    // text
                 GFX_STATICTEXT_ALIGNMENT_2,       //alignment
                 GFX_STATICTEXT_SCHEME_2
                 ); // use alternate scheme
        break;
    case STE_Time:
        hgcObj.pSTE_TimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_Time,      // button ID
                 GFX_STATICTEXT_LEFT_3,    // left
                 GFX_STATICTEXT_TOP_3,     // top
                 GFX_STATICTEXT_RIGHT_3,   // right
                 GFX_STATICTEXT_BOTTOM_3,  // bottom
                 GFX_STATICTEXT_STATE_3,   // state
                 (GFX_XCHAR*)staticTextStr_3,    // text
                 GFX_STATICTEXT_ALIGNMENT_3,       //alignment
                 GFX_STATICTEXT_SCHEME_3
                 ); // use alternate scheme
        break;
    case STE_Thimble:
        hgcObj.pSTE_ThimbleObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_Thimble,      // button ID
                 GFX_STATICTEXT_LEFT_4,    // left
                 GFX_STATICTEXT_TOP_4,     // top
                 GFX_STATICTEXT_RIGHT_4,   // right
                 GFX_STATICTEXT_BOTTOM_4,  // bottom
                 GFX_STATICTEXT_STATE_4,   // state
                 (GFX_XCHAR*)staticTextStr_4,    // text
                 GFX_STATICTEXT_ALIGNMENT_4,       //alignment
                 GFX_STATICTEXT_SCHEME_4
                 ); // use alternate scheme
        break;
    case STE_CloseMold:
        hgcObj.pSTE_CloseMoldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_CloseMold,      // button ID
                 GFX_STATICTEXT_LEFT_5,    // left
                 GFX_STATICTEXT_TOP_5,     // top
                 GFX_STATICTEXT_RIGHT_5,   // right
                 GFX_STATICTEXT_BOTTOM_5,  // bottom
                 GFX_STATICTEXT_STATE_5,   // state
                 (GFX_XCHAR*)staticTextStr_5,    // text
                 GFX_STATICTEXT_ALIGNMENT_5,       //alignment
                 GFX_STATICTEXT_SCHEME_5
                 ); // use alternate scheme
        break;
    case STE_SafetyGate:
        hgcObj.pSTE_SafetyGateObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_SafetyGate,      // button ID
                 GFX_STATICTEXT_LEFT_6,    // left
                 GFX_STATICTEXT_TOP_6,     // top
                 GFX_STATICTEXT_RIGHT_6,   // right
                 GFX_STATICTEXT_BOTTOM_6,  // bottom
                 GFX_STATICTEXT_STATE_6,   // state
                 (GFX_XCHAR*)staticTextStr_6,    // text
                 GFX_STATICTEXT_ALIGNMENT_6,       //alignment
                 GFX_STATICTEXT_SCHEME_6
                 ); // use alternate scheme
        break;
    case STE_OpenMold:
        hgcObj.pSTE_OpenMoldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_OpenMold,      // button ID
                 GFX_STATICTEXT_LEFT_7,    // left
                 GFX_STATICTEXT_TOP_7,     // top
                 GFX_STATICTEXT_RIGHT_7,   // right
                 GFX_STATICTEXT_BOTTOM_7,  // bottom
                 GFX_STATICTEXT_STATE_7,   // state
                 (GFX_XCHAR*)staticTextStr_7,    // text
                 GFX_STATICTEXT_ALIGNMENT_7,       //alignment
                 GFX_STATICTEXT_SCHEME_7
                 ); // use alternate scheme
        break;
    case STE_CurrActionStatus:
        hgcObj.pSTE_CurrActionStatusObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_CurrActionStatus,      // button ID
                 GFX_STATICTEXT_LEFT_8,    // left
                 GFX_STATICTEXT_TOP_8,     // top
                 GFX_STATICTEXT_RIGHT_8,   // right
                 GFX_STATICTEXT_BOTTOM_8,  // bottom
                 GFX_STATICTEXT_STATE_8,   // state
                 (GFX_XCHAR*)staticTextStr_8,    // text
                 GFX_STATICTEXT_ALIGNMENT_8,       //alignment
                 GFX_STATICTEXT_SCHEME_8
                 ); // use alternate scheme
        break;
    case STE_CurrPosZ:
        hgcObj.pSTE_CurrPosZObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_CurrPosZ,      // button ID
                 GFX_STATICTEXT_LEFT_9,    // left
                 GFX_STATICTEXT_TOP_9,     // top
                 GFX_STATICTEXT_RIGHT_9,   // right
                 GFX_STATICTEXT_BOTTOM_9,  // bottom
                 GFX_STATICTEXT_STATE_9,   // state
                 (GFX_XCHAR*)staticTextStr_9,    // text
                 GFX_STATICTEXT_ALIGNMENT_9,       //alignment
                 GFX_STATICTEXT_SCHEME_9
                 ); // use alternate scheme
        break;
    case STE_ModeNum:
        hgcObj.pSTE_ModeNumObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ModeNum,      // button ID
                 GFX_STATICTEXT_LEFT_10,    // left
                 GFX_STATICTEXT_TOP_10,     // top
                 GFX_STATICTEXT_RIGHT_10,   // right
                 GFX_STATICTEXT_BOTTOM_10,  // bottom
                 GFX_STATICTEXT_STATE_10,   // state
                 (GFX_XCHAR*)staticTextStr_10,    // text
                 GFX_STATICTEXT_ALIGNMENT_10,       //alignment
                 GFX_STATICTEXT_SCHEME_10
                 ); // use alternate scheme
        break;
    case DIS_FCKeySound:
        hgcObj.pDIS_FCKeySoundObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCKeySound,      // button ID
                 GFX_STATICTEXT_LEFT_11,    // left
                 GFX_STATICTEXT_TOP_11,     // top
                 GFX_STATICTEXT_RIGHT_11,   // right
                 GFX_STATICTEXT_BOTTOM_11,  // bottom
                 GFX_STATICTEXT_STATE_11,   // state
                 (GFX_XCHAR*)staticTextStr_11,    // text
                 GFX_STATICTEXT_ALIGNMENT_11,       //alignment
                 GFX_STATICTEXT_SCHEME_11
                 ); // use alternate scheme
        break;
    case DIS_FCClearPro:
        hgcObj.pDIS_FCClearProObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCClearPro,      // button ID
                 GFX_STATICTEXT_LEFT_12,    // left
                 GFX_STATICTEXT_TOP_12,     // top
                 GFX_STATICTEXT_RIGHT_12,   // right
                 GFX_STATICTEXT_BOTTOM_12,  // bottom
                 GFX_STATICTEXT_STATE_12,   // state
                 (GFX_XCHAR*)staticTextStr_12,    // text
                 GFX_STATICTEXT_ALIGNMENT_12,       //alignment
                 GFX_STATICTEXT_SCHEME_12
                 ); // use alternate scheme
        break;
    case DIS_FCChkHold:
        hgcObj.pDIS_FCChkHoldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCChkHold,      // button ID
                 GFX_STATICTEXT_LEFT_13,    // left
                 GFX_STATICTEXT_TOP_13,     // top
                 GFX_STATICTEXT_RIGHT_13,   // right
                 GFX_STATICTEXT_BOTTOM_13,  // bottom
                 GFX_STATICTEXT_STATE_13,   // state
                 (GFX_XCHAR*)staticTextStr_13,    // text
                 GFX_STATICTEXT_ALIGNMENT_13,       //alignment
                 GFX_STATICTEXT_SCHEME_13
                 ); // use alternate scheme
        break;
    case DIS_FCChkVaccu:
        hgcObj.pDIS_FCChkVaccuObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCChkVaccu,      // button ID
                 GFX_STATICTEXT_LEFT_14,    // left
                 GFX_STATICTEXT_TOP_14,     // top
                 GFX_STATICTEXT_RIGHT_14,   // right
                 GFX_STATICTEXT_BOTTOM_14,  // bottom
                 GFX_STATICTEXT_STATE_14,   // state
                 (GFX_XCHAR*)staticTextStr_14,    // text
                 GFX_STATICTEXT_ALIGNMENT_14,       //alignment
                 GFX_STATICTEXT_SCHEME_14
                 ); // use alternate scheme
        break;
    case DIS_FCChkVFix:
        hgcObj.pDIS_FCChkVFixObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCChkVFix,      // button ID
                 GFX_STATICTEXT_LEFT_15,    // left
                 GFX_STATICTEXT_TOP_15,     // top
                 GFX_STATICTEXT_RIGHT_15,   // right
                 GFX_STATICTEXT_BOTTOM_15,  // bottom
                 GFX_STATICTEXT_STATE_15,   // state
                 (GFX_XCHAR*)staticTextStr_15,    // text
                 GFX_STATICTEXT_ALIGNMENT_15,       //alignment
                 GFX_STATICTEXT_SCHEME_15
                 ); // use alternate scheme
        break;
    case DIS_FCThimb:
        hgcObj.pDIS_FCThimbObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCThimb,      // button ID
                 GFX_STATICTEXT_LEFT_16,    // left
                 GFX_STATICTEXT_TOP_16,     // top
                 GFX_STATICTEXT_RIGHT_16,   // right
                 GFX_STATICTEXT_BOTTOM_16,  // bottom
                 GFX_STATICTEXT_STATE_16,   // state
                 (GFX_XCHAR*)staticTextStr_16,    // text
                 GFX_STATICTEXT_ALIGNMENT_16,       //alignment
                 GFX_STATICTEXT_SCHEME_16
                 ); // use alternate scheme
        break;
    case DIS_FCChkMFix:
        hgcObj.pDIS_FCChkMFixObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCChkMFix,      // button ID
                 GFX_STATICTEXT_LEFT_17,    // left
                 GFX_STATICTEXT_TOP_17,     // top
                 GFX_STATICTEXT_RIGHT_17,   // right
                 GFX_STATICTEXT_BOTTOM_17,  // bottom
                 GFX_STATICTEXT_STATE_17,   // state
                 (GFX_XCHAR*)staticTextStr_17,    // text
                 GFX_STATICTEXT_ALIGNMENT_17,       //alignment
                 GFX_STATICTEXT_SCHEME_17
                 ); // use alternate scheme
        break;
    case DIS_FCOpenDly:
        hgcObj.pDIS_FCOpenDlyObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCOpenDly,      // button ID
                 GFX_STATICTEXT_LEFT_18,    // left
                 GFX_STATICTEXT_TOP_18,     // top
                 GFX_STATICTEXT_RIGHT_18,   // right
                 GFX_STATICTEXT_BOTTOM_18,  // bottom
                 GFX_STATICTEXT_STATE_18,   // state
                 (GFX_XCHAR*)staticTextStr_18,    // text
                 GFX_STATICTEXT_ALIGNMENT_18,       //alignment
                 GFX_STATICTEXT_SCHEME_18
                 ); // use alternate scheme
        break;
    case DIS_FCSetMold:
        hgcObj.pDIS_FCSetMoldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSetMold,      // button ID
                 GFX_STATICTEXT_LEFT_19,    // left
                 GFX_STATICTEXT_TOP_19,     // top
                 GFX_STATICTEXT_RIGHT_19,   // right
                 GFX_STATICTEXT_BOTTOM_19,  // bottom
                 GFX_STATICTEXT_STATE_19,   // state
                 (GFX_XCHAR*)staticTextStr_19,    // text
                 GFX_STATICTEXT_ALIGNMENT_19,       //alignment
                 GFX_STATICTEXT_SCHEME_19
                 ); // use alternate scheme
        break;
    case DIS_FCLanguage:
        hgcObj.pDIS_FCLanguageObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCLanguage,      // button ID
                 GFX_STATICTEXT_LEFT_20,    // left
                 GFX_STATICTEXT_TOP_20,     // top
                 GFX_STATICTEXT_RIGHT_20,   // right
                 GFX_STATICTEXT_BOTTOM_20,  // bottom
                 GFX_STATICTEXT_STATE_20,   // state
                 (GFX_XCHAR*)staticTextStr_20,    // text
                 GFX_STATICTEXT_ALIGNMENT_20,       //alignment
                 GFX_STATICTEXT_SCHEME_20
                 ); // use alternate scheme
        break;
    case STE_KeySound:
        hgcObj.pSTE_KeySoundObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_KeySound,      // button ID
                 GFX_STATICTEXT_LEFT_21,    // left
                 GFX_STATICTEXT_TOP_21,     // top
                 GFX_STATICTEXT_RIGHT_21,   // right
                 GFX_STATICTEXT_BOTTOM_21,  // bottom
                 GFX_STATICTEXT_STATE_21,   // state
                 (GFX_XCHAR*)staticTextStr_21,    // text
                 GFX_STATICTEXT_ALIGNMENT_21,       //alignment
                 GFX_STATICTEXT_SCHEME_21
                 ); // use alternate scheme
        break;
    case STE_ClearPro:
        hgcObj.pSTE_ClearProObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ClearPro,      // button ID
                 GFX_STATICTEXT_LEFT_22,    // left
                 GFX_STATICTEXT_TOP_22,     // top
                 GFX_STATICTEXT_RIGHT_22,   // right
                 GFX_STATICTEXT_BOTTOM_22,  // bottom
                 GFX_STATICTEXT_STATE_22,   // state
                 (GFX_XCHAR*)staticTextStr_22,    // text
                 GFX_STATICTEXT_ALIGNMENT_22,       //alignment
                 GFX_STATICTEXT_SCHEME_22
                 ); // use alternate scheme
        break;
    case STE_ChkHold:
        hgcObj.pSTE_ChkHoldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ChkHold,      // button ID
                 GFX_STATICTEXT_LEFT_23,    // left
                 GFX_STATICTEXT_TOP_23,     // top
                 GFX_STATICTEXT_RIGHT_23,   // right
                 GFX_STATICTEXT_BOTTOM_23,  // bottom
                 GFX_STATICTEXT_STATE_23,   // state
                 (GFX_XCHAR*)staticTextStr_23,    // text
                 GFX_STATICTEXT_ALIGNMENT_23,       //alignment
                 GFX_STATICTEXT_SCHEME_23
                 ); // use alternate scheme
        break;
    case STE_ChkVaccu:
        hgcObj.pSTE_ChkVaccuObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ChkVaccu,      // button ID
                 GFX_STATICTEXT_LEFT_24,    // left
                 GFX_STATICTEXT_TOP_24,     // top
                 GFX_STATICTEXT_RIGHT_24,   // right
                 GFX_STATICTEXT_BOTTOM_24,  // bottom
                 GFX_STATICTEXT_STATE_24,   // state
                 (GFX_XCHAR*)staticTextStr_24,    // text
                 GFX_STATICTEXT_ALIGNMENT_24,       //alignment
                 GFX_STATICTEXT_SCHEME_24
                 ); // use alternate scheme
        break;
    case STE_ChkVFix:
        hgcObj.pSTE_ChkVFixObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ChkVFix,      // button ID
                 GFX_STATICTEXT_LEFT_25,    // left
                 GFX_STATICTEXT_TOP_25,     // top
                 GFX_STATICTEXT_RIGHT_25,   // right
                 GFX_STATICTEXT_BOTTOM_25,  // bottom
                 GFX_STATICTEXT_STATE_25,   // state
                 (GFX_XCHAR*)staticTextStr_25,    // text
                 GFX_STATICTEXT_ALIGNMENT_25,       //alignment
                 GFX_STATICTEXT_SCHEME_25
                 ); // use alternate scheme
        break;
    case STE_ChkMFix:
        hgcObj.pSTE_ChkMFixObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ChkMFix,      // button ID
                 GFX_STATICTEXT_LEFT_26,    // left
                 GFX_STATICTEXT_TOP_26,     // top
                 GFX_STATICTEXT_RIGHT_26,   // right
                 GFX_STATICTEXT_BOTTOM_26,  // bottom
                 GFX_STATICTEXT_STATE_26,   // state
                 (GFX_XCHAR*)staticTextStr_26,    // text
                 GFX_STATICTEXT_ALIGNMENT_26,       //alignment
                 GFX_STATICTEXT_SCHEME_26
                 ); // use alternate scheme
        break;
    case STE_Language:
        hgcObj.pSTE_LanguageObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_Language,      // button ID
                 GFX_STATICTEXT_LEFT_27,    // left
                 GFX_STATICTEXT_TOP_27,     // top
                 GFX_STATICTEXT_RIGHT_27,   // right
                 GFX_STATICTEXT_BOTTOM_27,  // bottom
                 GFX_STATICTEXT_STATE_27,   // state
                 (GFX_XCHAR*)staticTextStr_27,    // text
                 GFX_STATICTEXT_ALIGNMENT_27,       //alignment
                 GFX_STATICTEXT_SCHEME_27
                 ); // use alternate scheme
        break;
    case DIS_Password:
        hgcObj.pDIS_PasswordObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_Password,      // button ID
                 GFX_STATICTEXT_LEFT_28,    // left
                 GFX_STATICTEXT_TOP_28,     // top
                 GFX_STATICTEXT_RIGHT_28,   // right
                 GFX_STATICTEXT_BOTTOM_28,  // bottom
                 GFX_STATICTEXT_STATE_28,   // state
                 (GFX_XCHAR*)staticTextStr_28,    // text
                 GFX_STATICTEXT_ALIGNMENT_28,       //alignment
                 GFX_STATICTEXT_SCHEME_28
                 ); // use alternate scheme
        break;
    case DIS_ProgSlecWrite:
        hgcObj.pDIS_ProgSlecWriteObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ProgSlecWrite,      // button ID
                 GFX_STATICTEXT_LEFT_29,    // left
                 GFX_STATICTEXT_TOP_29,     // top
                 GFX_STATICTEXT_RIGHT_29,   // right
                 GFX_STATICTEXT_BOTTOM_29,  // bottom
                 GFX_STATICTEXT_STATE_29,   // state
                 (GFX_XCHAR*)staticTextStr_29,    // text
                 GFX_STATICTEXT_ALIGNMENT_29,       //alignment
                 GFX_STATICTEXT_SCHEME_29
                 ); // use alternate scheme
        break;
    case DIS_ProgSlecRead:
        hgcObj.pDIS_ProgSlecReadObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ProgSlecRead,      // button ID
                 GFX_STATICTEXT_LEFT_30,    // left
                 GFX_STATICTEXT_TOP_30,     // top
                 GFX_STATICTEXT_RIGHT_30,   // right
                 GFX_STATICTEXT_BOTTOM_30,  // bottom
                 GFX_STATICTEXT_STATE_30,   // state
                 (GFX_XCHAR*)staticTextStr_30,    // text
                 GFX_STATICTEXT_ALIGNMENT_30,       //alignment
                 GFX_STATICTEXT_SCHEME_30
                 ); // use alternate scheme
        break;
    case DIS_BrigAdjLabel:
        hgcObj.pDIS_BrigAdjLabelObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_BrigAdjLabel,      // button ID
                 GFX_STATICTEXT_LEFT_31,    // left
                 GFX_STATICTEXT_TOP_31,     // top
                 GFX_STATICTEXT_RIGHT_31,   // right
                 GFX_STATICTEXT_BOTTOM_31,  // bottom
                 GFX_STATICTEXT_STATE_31,   // state
                 (GFX_XCHAR*)staticTextStr_31,    // text
                 GFX_STATICTEXT_ALIGNMENT_31,       //alignment
                 GFX_STATICTEXT_SCHEME_31
                 ); // use alternate scheme
        break;
    case DIS_BrigAdjBrigness:
        hgcObj.pDIS_BrigAdjBrignessObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_BrigAdjBrigness,      // button ID
                 GFX_STATICTEXT_LEFT_32,    // left
                 GFX_STATICTEXT_TOP_32,     // top
                 GFX_STATICTEXT_RIGHT_32,   // right
                 GFX_STATICTEXT_BOTTOM_32,  // bottom
                 GFX_STATICTEXT_STATE_32,   // state
                 (GFX_XCHAR*)staticTextStr_32,    // text
                 GFX_STATICTEXT_ALIGNMENT_32,       //alignment
                 GFX_STATICTEXT_SCHEME_32
                 ); // use alternate scheme
        break;
    case STE_TravMode:
        hgcObj.pSTE_TravModeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_TravMode,      // button ID
                 GFX_STATICTEXT_LEFT_33,    // left
                 GFX_STATICTEXT_TOP_33,     // top
                 GFX_STATICTEXT_RIGHT_33,   // right
                 GFX_STATICTEXT_BOTTOM_33,  // bottom
                 GFX_STATICTEXT_STATE_33,   // state
                 (GFX_XCHAR*)staticTextStr_33,    // text
                 GFX_STATICTEXT_ALIGNMENT_33,       //alignment
                 GFX_STATICTEXT_SCHEME_33
                 ); // use alternate scheme
        break;
    case DIS_ManuCurAct:
        hgcObj.pDIS_ManuCurActObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ManuCurAct,      // button ID
                 GFX_STATICTEXT_LEFT_34,    // left
                 GFX_STATICTEXT_TOP_34,     // top
                 GFX_STATICTEXT_RIGHT_34,   // right
                 GFX_STATICTEXT_BOTTOM_34,  // bottom
                 GFX_STATICTEXT_STATE_34,   // state
                 (GFX_XCHAR*)staticTextStr_34,    // text
                 GFX_STATICTEXT_ALIGNMENT_34,       //alignment
                 GFX_STATICTEXT_SCHEME_34
                 ); // use alternate scheme
        break;
    case DIS_ManuActuPro:
        hgcObj.pDIS_ManuActuProObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ManuActuPro,      // button ID
                 GFX_STATICTEXT_LEFT_35,    // left
                 GFX_STATICTEXT_TOP_35,     // top
                 GFX_STATICTEXT_RIGHT_35,   // right
                 GFX_STATICTEXT_BOTTOM_35,  // bottom
                 GFX_STATICTEXT_STATE_35,   // state
                 (GFX_XCHAR*)staticTextStr_35,    // text
                 GFX_STATICTEXT_ALIGNMENT_35,       //alignment
                 GFX_STATICTEXT_SCHEME_35
                 ); // use alternate scheme
        break;
    case DIS_ManuInchSpeed:
        hgcObj.pDIS_ManuInchSpeedObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ManuInchSpeed,      // button ID
                 GFX_STATICTEXT_LEFT_36,    // left
                 GFX_STATICTEXT_TOP_36,     // top
                 GFX_STATICTEXT_RIGHT_36,   // right
                 GFX_STATICTEXT_BOTTOM_36,  // bottom
                 GFX_STATICTEXT_STATE_36,   // state
                 (GFX_XCHAR*)staticTextStr_36,    // text
                 GFX_STATICTEXT_ALIGNMENT_36,       //alignment
                 GFX_STATICTEXT_SCHEME_36
                 ); // use alternate scheme
        break;
    case DIS_ManuPos:
        hgcObj.pDIS_ManuPosObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ManuPos,      // button ID
                 GFX_STATICTEXT_LEFT_37,    // left
                 GFX_STATICTEXT_TOP_37,     // top
                 GFX_STATICTEXT_RIGHT_37,   // right
                 GFX_STATICTEXT_BOTTOM_37,  // bottom
                 GFX_STATICTEXT_STATE_37,   // state
                 (GFX_XCHAR*)staticTextStr_37,    // text
                 GFX_STATICTEXT_ALIGNMENT_37,       //alignment
                 GFX_STATICTEXT_SCHEME_37
                 ); // use alternate scheme
        break;
    case DIS_ManuSpeed:
        hgcObj.pDIS_ManuSpeedObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ManuSpeed,      // button ID
                 GFX_STATICTEXT_LEFT_38,    // left
                 GFX_STATICTEXT_TOP_38,     // top
                 GFX_STATICTEXT_RIGHT_38,   // right
                 GFX_STATICTEXT_BOTTOM_38,  // bottom
                 GFX_STATICTEXT_STATE_38,   // state
                 (GFX_XCHAR*)staticTextStr_38,    // text
                 GFX_STATICTEXT_ALIGNMENT_38,       //alignment
                 GFX_STATICTEXT_SCHEME_38
                 ); // use alternate scheme
        break;
    case DIS_ManuTransv:
        hgcObj.pDIS_ManuTransvObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ManuTransv,      // button ID
                 GFX_STATICTEXT_LEFT_39,    // left
                 GFX_STATICTEXT_TOP_39,     // top
                 GFX_STATICTEXT_RIGHT_39,   // right
                 GFX_STATICTEXT_BOTTOM_39,  // bottom
                 GFX_STATICTEXT_STATE_39,   // state
                 (GFX_XCHAR*)staticTextStr_39,    // text
                 GFX_STATICTEXT_ALIGNMENT_39,       //alignment
                 GFX_STATICTEXT_SCHEME_39
                 ); // use alternate scheme
        break;
    case DIS_DotRange:
        hgcObj.pDIS_DotRangeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_DotRange,      // button ID
                 GFX_STATICTEXT_LEFT_40,    // left
                 GFX_STATICTEXT_TOP_40,     // top
                 GFX_STATICTEXT_RIGHT_40,   // right
                 GFX_STATICTEXT_BOTTOM_40,  // bottom
                 GFX_STATICTEXT_STATE_40,   // state
                 (GFX_XCHAR*)staticTextStr_40,    // text
                 GFX_STATICTEXT_ALIGNMENT_40,       //alignment
                 GFX_STATICTEXT_SCHEME_40
                 ); // use alternate scheme
        break;
    case DIS_MauParaFetchPos:
        hgcObj.pDIS_MauParaFetchPosObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MauParaFetchPos,      // button ID
                 GFX_STATICTEXT_LEFT_41,    // left
                 GFX_STATICTEXT_TOP_41,     // top
                 GFX_STATICTEXT_RIGHT_41,   // right
                 GFX_STATICTEXT_BOTTOM_41,  // bottom
                 GFX_STATICTEXT_STATE_41,   // state
                 (GFX_XCHAR*)staticTextStr_41,    // text
                 GFX_STATICTEXT_ALIGNMENT_41,       //alignment
                 GFX_STATICTEXT_SCHEME_41
                 ); // use alternate scheme
        break;
    case DIS_MauParaInchSpeed:
        hgcObj.pDIS_MauParaInchSpeedObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MauParaInchSpeed,      // button ID
                 GFX_STATICTEXT_LEFT_42,    // left
                 GFX_STATICTEXT_TOP_42,     // top
                 GFX_STATICTEXT_RIGHT_42,   // right
                 GFX_STATICTEXT_BOTTOM_42,  // bottom
                 GFX_STATICTEXT_STATE_42,   // state
                 (GFX_XCHAR*)staticTextStr_42,    // text
                 GFX_STATICTEXT_ALIGNMENT_42,       //alignment
                 GFX_STATICTEXT_SCHEME_42
                 ); // use alternate scheme
        break;
    case DIS_MauParaPos:
        hgcObj.pDIS_MauParaPosObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MauParaPos,      // button ID
                 GFX_STATICTEXT_LEFT_43,    // left
                 GFX_STATICTEXT_TOP_43,     // top
                 GFX_STATICTEXT_RIGHT_43,   // right
                 GFX_STATICTEXT_BOTTOM_43,  // bottom
                 GFX_STATICTEXT_STATE_43,   // state
                 (GFX_XCHAR*)staticTextStr_43,    // text
                 GFX_STATICTEXT_ALIGNMENT_43,       //alignment
                 GFX_STATICTEXT_SCHEME_43
                 ); // use alternate scheme
        break;
    case DIS_MauParaSpeed:
        hgcObj.pDIS_MauParaSpeedObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MauParaSpeed,      // button ID
                 GFX_STATICTEXT_LEFT_44,    // left
                 GFX_STATICTEXT_TOP_44,     // top
                 GFX_STATICTEXT_RIGHT_44,   // right
                 GFX_STATICTEXT_BOTTOM_44,  // bottom
                 GFX_STATICTEXT_STATE_44,   // state
                 (GFX_XCHAR*)staticTextStr_44,    // text
                 GFX_STATICTEXT_ALIGNMENT_44,       //alignment
                 GFX_STATICTEXT_SCHEME_44
                 ); // use alternate scheme
        break;
    case STE_MPressHPAdj:
        hgcObj.pSTE_MPressHPAdjObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MPressHPAdj,      // button ID
                 GFX_STATICTEXT_LEFT_45,    // left
                 GFX_STATICTEXT_TOP_45,     // top
                 GFX_STATICTEXT_RIGHT_45,   // right
                 GFX_STATICTEXT_BOTTOM_45,  // bottom
                 GFX_STATICTEXT_STATE_45,   // state
                 (GFX_XCHAR*)staticTextStr_45,    // text
                 GFX_STATICTEXT_ALIGNMENT_45,       //alignment
                 GFX_STATICTEXT_SCHEME_45
                 ); // use alternate scheme
        break;
    case STE_MY46Reverse:
        hgcObj.pSTE_MY46ReverseObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MY46Reverse,      // button ID
                 GFX_STATICTEXT_LEFT_46,    // left
                 GFX_STATICTEXT_TOP_46,     // top
                 GFX_STATICTEXT_RIGHT_46,   // right
                 GFX_STATICTEXT_BOTTOM_46,  // bottom
                 GFX_STATICTEXT_STATE_46,   // state
                 (GFX_XCHAR*)staticTextStr_46,    // text
                 GFX_STATICTEXT_ALIGNMENT_46,       //alignment
                 GFX_STATICTEXT_SCHEME_46
                 ); // use alternate scheme
        break;
    case DIS_EleInput2:
        hgcObj.pDIS_EleInput2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_EleInput2,      // button ID
                 GFX_STATICTEXT_LEFT_47,    // left
                 GFX_STATICTEXT_TOP_47,     // top
                 GFX_STATICTEXT_RIGHT_47,   // right
                 GFX_STATICTEXT_BOTTOM_47,  // bottom
                 GFX_STATICTEXT_STATE_47,   // state
                 (GFX_XCHAR*)staticTextStr_47,    // text
                 GFX_STATICTEXT_ALIGNMENT_47,       //alignment
                 GFX_STATICTEXT_SCHEME_47
                 ); // use alternate scheme
        break;
    case DIS_EleInput1:
        hgcObj.pDIS_EleInput1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_EleInput1,      // button ID
                 GFX_STATICTEXT_LEFT_48,    // left
                 GFX_STATICTEXT_TOP_48,     // top
                 GFX_STATICTEXT_RIGHT_48,   // right
                 GFX_STATICTEXT_BOTTOM_48,  // bottom
                 GFX_STATICTEXT_STATE_48,   // state
                 (GFX_XCHAR*)staticTextStr_48,    // text
                 GFX_STATICTEXT_ALIGNMENT_48,       //alignment
                 GFX_STATICTEXT_SCHEME_48
                 ); // use alternate scheme
        break;
    case STE_MForwardSub:
        hgcObj.pSTE_MForwardSubObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MForwardSub,      // button ID
                 GFX_STATICTEXT_LEFT_49,    // left
                 GFX_STATICTEXT_TOP_49,     // top
                 GFX_STATICTEXT_RIGHT_49,   // right
                 GFX_STATICTEXT_BOTTOM_49,  // bottom
                 GFX_STATICTEXT_STATE_49,   // state
                 (GFX_XCHAR*)staticTextStr_49,    // text
                 GFX_STATICTEXT_ALIGNMENT_49,       //alignment
                 GFX_STATICTEXT_SCHEME_49
                 ); // use alternate scheme
        break;
    case STE_MForwardAdd:
        hgcObj.pSTE_MForwardAddObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MForwardAdd,      // button ID
                 GFX_STATICTEXT_LEFT_50,    // left
                 GFX_STATICTEXT_TOP_50,     // top
                 GFX_STATICTEXT_RIGHT_50,   // right
                 GFX_STATICTEXT_BOTTOM_50,  // bottom
                 GFX_STATICTEXT_STATE_50,   // state
                 (GFX_XCHAR*)staticTextStr_50,    // text
                 GFX_STATICTEXT_ALIGNMENT_50,       //alignment
                 GFX_STATICTEXT_SCHEME_50
                 ); // use alternate scheme
        break;
    case STE_MBackSub:
        hgcObj.pSTE_MBackSubObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MBackSub,      // button ID
                 GFX_STATICTEXT_LEFT_51,    // left
                 GFX_STATICTEXT_TOP_51,     // top
                 GFX_STATICTEXT_RIGHT_51,   // right
                 GFX_STATICTEXT_BOTTOM_51,  // bottom
                 GFX_STATICTEXT_STATE_51,   // state
                 (GFX_XCHAR*)staticTextStr_51,    // text
                 GFX_STATICTEXT_ALIGNMENT_51,       //alignment
                 GFX_STATICTEXT_SCHEME_51
                 ); // use alternate scheme
        break;
    case STE_MBackAdd:
        hgcObj.pSTE_MBackAddObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MBackAdd,      // button ID
                 GFX_STATICTEXT_LEFT_52,    // left
                 GFX_STATICTEXT_TOP_52,     // top
                 GFX_STATICTEXT_RIGHT_52,   // right
                 GFX_STATICTEXT_BOTTOM_52,  // bottom
                 GFX_STATICTEXT_STATE_52,   // state
                 (GFX_XCHAR*)staticTextStr_52,    // text
                 GFX_STATICTEXT_ALIGNMENT_52,       //alignment
                 GFX_STATICTEXT_SCHEME_52
                 ); // use alternate scheme
        break;
    case STE_MDownSub:
        hgcObj.pSTE_MDownSubObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MDownSub,      // button ID
                 GFX_STATICTEXT_LEFT_53,    // left
                 GFX_STATICTEXT_TOP_53,     // top
                 GFX_STATICTEXT_RIGHT_53,   // right
                 GFX_STATICTEXT_BOTTOM_53,  // bottom
                 GFX_STATICTEXT_STATE_53,   // state
                 (GFX_XCHAR*)staticTextStr_53,    // text
                 GFX_STATICTEXT_ALIGNMENT_53,       //alignment
                 GFX_STATICTEXT_SCHEME_53
                 ); // use alternate scheme
        break;
    case STE_MDownAdd:
        hgcObj.pSTE_MDownAddObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MDownAdd,      // button ID
                 GFX_STATICTEXT_LEFT_54,    // left
                 GFX_STATICTEXT_TOP_54,     // top
                 GFX_STATICTEXT_RIGHT_54,   // right
                 GFX_STATICTEXT_BOTTOM_54,  // bottom
                 GFX_STATICTEXT_STATE_54,   // state
                 (GFX_XCHAR*)staticTextStr_54,    // text
                 GFX_STATICTEXT_ALIGNMENT_54,       //alignment
                 GFX_STATICTEXT_SCHEME_54
                 ); // use alternate scheme
        break;
    case DIS_VPressHPAdj:
        hgcObj.pDIS_VPressHPAdjObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_VPressHPAdj,      // button ID
                 GFX_STATICTEXT_LEFT_55,    // left
                 GFX_STATICTEXT_TOP_55,     // top
                 GFX_STATICTEXT_RIGHT_55,   // right
                 GFX_STATICTEXT_BOTTOM_55,  // bottom
                 GFX_STATICTEXT_STATE_55,   // state
                 (GFX_XCHAR*)staticTextStr_55,    // text
                 GFX_STATICTEXT_ALIGNMENT_55,       //alignment
                 GFX_STATICTEXT_SCHEME_55
                 ); // use alternate scheme
        break;
    case DIS_VY46Reverse:
        hgcObj.pDIS_VY46ReverseObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_VY46Reverse,      // button ID
                 GFX_STATICTEXT_LEFT_56,    // left
                 GFX_STATICTEXT_TOP_56,     // top
                 GFX_STATICTEXT_RIGHT_56,   // right
                 GFX_STATICTEXT_BOTTOM_56,  // bottom
                 GFX_STATICTEXT_STATE_56,   // state
                 (GFX_XCHAR*)staticTextStr_56,    // text
                 GFX_STATICTEXT_ALIGNMENT_56,       //alignment
                 GFX_STATICTEXT_SCHEME_56
                 ); // use alternate scheme
        break;
    case DIS_EleInput4:
        hgcObj.pDIS_EleInput4Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_EleInput4,      // button ID
                 GFX_STATICTEXT_LEFT_57,    // left
                 GFX_STATICTEXT_TOP_57,     // top
                 GFX_STATICTEXT_RIGHT_57,   // right
                 GFX_STATICTEXT_BOTTOM_57,  // bottom
                 GFX_STATICTEXT_STATE_57,   // state
                 (GFX_XCHAR*)staticTextStr_57,    // text
                 GFX_STATICTEXT_ALIGNMENT_57,       //alignment
                 GFX_STATICTEXT_SCHEME_57
                 ); // use alternate scheme
        break;
    case DIS_EleInput3:
        hgcObj.pDIS_EleInput3Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_EleInput3,      // button ID
                 GFX_STATICTEXT_LEFT_58,    // left
                 GFX_STATICTEXT_TOP_58,     // top
                 GFX_STATICTEXT_RIGHT_58,   // right
                 GFX_STATICTEXT_BOTTOM_58,  // bottom
                 GFX_STATICTEXT_STATE_58,   // state
                 (GFX_XCHAR*)staticTextStr_58,    // text
                 GFX_STATICTEXT_ALIGNMENT_58,       //alignment
                 GFX_STATICTEXT_SCHEME_58
                 ); // use alternate scheme
        break;
    case STE_VForwardSub:
        hgcObj.pSTE_VForwardSubObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_VForwardSub,      // button ID
                 GFX_STATICTEXT_LEFT_59,    // left
                 GFX_STATICTEXT_TOP_59,     // top
                 GFX_STATICTEXT_RIGHT_59,   // right
                 GFX_STATICTEXT_BOTTOM_59,  // bottom
                 GFX_STATICTEXT_STATE_59,   // state
                 (GFX_XCHAR*)staticTextStr_59,    // text
                 GFX_STATICTEXT_ALIGNMENT_59,       //alignment
                 GFX_STATICTEXT_SCHEME_59
                 ); // use alternate scheme
        break;
    case STE_VForwardAdd:
        hgcObj.pSTE_VForwardAddObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_VForwardAdd,      // button ID
                 GFX_STATICTEXT_LEFT_60,    // left
                 GFX_STATICTEXT_TOP_60,     // top
                 GFX_STATICTEXT_RIGHT_60,   // right
                 GFX_STATICTEXT_BOTTOM_60,  // bottom
                 GFX_STATICTEXT_STATE_60,   // state
                 (GFX_XCHAR*)staticTextStr_60,    // text
                 GFX_STATICTEXT_ALIGNMENT_60,       //alignment
                 GFX_STATICTEXT_SCHEME_60
                 ); // use alternate scheme
        break;
    case STE_VBackSub:
        hgcObj.pSTE_VBackSubObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_VBackSub,      // button ID
                 GFX_STATICTEXT_LEFT_61,    // left
                 GFX_STATICTEXT_TOP_61,     // top
                 GFX_STATICTEXT_RIGHT_61,   // right
                 GFX_STATICTEXT_BOTTOM_61,  // bottom
                 GFX_STATICTEXT_STATE_61,   // state
                 (GFX_XCHAR*)staticTextStr_61,    // text
                 GFX_STATICTEXT_ALIGNMENT_61,       //alignment
                 GFX_STATICTEXT_SCHEME_61
                 ); // use alternate scheme
        break;
    case STE_VBackAdd:
        hgcObj.pSTE_VBackAddObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_VBackAdd,      // button ID
                 GFX_STATICTEXT_LEFT_62,    // left
                 GFX_STATICTEXT_TOP_62,     // top
                 GFX_STATICTEXT_RIGHT_62,   // right
                 GFX_STATICTEXT_BOTTOM_62,  // bottom
                 GFX_STATICTEXT_STATE_62,   // state
                 (GFX_XCHAR*)staticTextStr_62,    // text
                 GFX_STATICTEXT_ALIGNMENT_62,       //alignment
                 GFX_STATICTEXT_SCHEME_62
                 ); // use alternate scheme
        break;
    case STE_VDownSub:
        hgcObj.pSTE_VDownSubObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_VDownSub,      // button ID
                 GFX_STATICTEXT_LEFT_63,    // left
                 GFX_STATICTEXT_TOP_63,     // top
                 GFX_STATICTEXT_RIGHT_63,   // right
                 GFX_STATICTEXT_BOTTOM_63,  // bottom
                 GFX_STATICTEXT_STATE_63,   // state
                 (GFX_XCHAR*)staticTextStr_63,    // text
                 GFX_STATICTEXT_ALIGNMENT_63,       //alignment
                 GFX_STATICTEXT_SCHEME_63
                 ); // use alternate scheme
        break;
    case STE_VDownAdd:
        hgcObj.pSTE_VDownAddObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_VDownAdd,      // button ID
                 GFX_STATICTEXT_LEFT_64,    // left
                 GFX_STATICTEXT_TOP_64,     // top
                 GFX_STATICTEXT_RIGHT_64,   // right
                 GFX_STATICTEXT_BOTTOM_64,  // bottom
                 GFX_STATICTEXT_STATE_64,   // state
                 (GFX_XCHAR*)staticTextStr_64,    // text
                 GFX_STATICTEXT_ALIGNMENT_64,       //alignment
                 GFX_STATICTEXT_SCHEME_64
                 ); // use alternate scheme
        break;
    case STE_CurrAct:
        hgcObj.pSTE_CurrActObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_CurrAct,      // button ID
                 GFX_STATICTEXT_LEFT_65,    // left
                 GFX_STATICTEXT_TOP_65,     // top
                 GFX_STATICTEXT_RIGHT_65,   // right
                 GFX_STATICTEXT_BOTTOM_65,  // bottom
                 GFX_STATICTEXT_STATE_65,   // state
                 (GFX_XCHAR*)staticTextStr_65,    // text
                 GFX_STATICTEXT_ALIGNMENT_65,       //alignment
                 GFX_STATICTEXT_SCHEME_65
                 ); // use alternate scheme
        break;
    case DIS_AutoCurAct:
        hgcObj.pDIS_AutoCurActObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_AutoCurAct,      // button ID
                 GFX_STATICTEXT_LEFT_66,    // left
                 GFX_STATICTEXT_TOP_66,     // top
                 GFX_STATICTEXT_RIGHT_66,   // right
                 GFX_STATICTEXT_BOTTOM_66,  // bottom
                 GFX_STATICTEXT_STATE_66,   // state
                 (GFX_XCHAR*)staticTextStr_66,    // text
                 GFX_STATICTEXT_ALIGNMENT_66,       //alignment
                 GFX_STATICTEXT_SCHEME_66
                 ); // use alternate scheme
        break;
    case DIS_AutoActTime:
        hgcObj.pDIS_AutoActTimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_AutoActTime,      // button ID
                 GFX_STATICTEXT_LEFT_67,    // left
                 GFX_STATICTEXT_TOP_67,     // top
                 GFX_STATICTEXT_RIGHT_67,   // right
                 GFX_STATICTEXT_BOTTOM_67,  // bottom
                 GFX_STATICTEXT_STATE_67,   // state
                 (GFX_XCHAR*)staticTextStr_67,    // text
                 GFX_STATICTEXT_ALIGNMENT_67,       //alignment
                 GFX_STATICTEXT_SCHEME_67
                 ); // use alternate scheme
        break;
    case DIS_AutoFetchTime:
        hgcObj.pDIS_AutoFetchTimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_AutoFetchTime,      // button ID
                 GFX_STATICTEXT_LEFT_68,    // left
                 GFX_STATICTEXT_TOP_68,     // top
                 GFX_STATICTEXT_RIGHT_68,   // right
                 GFX_STATICTEXT_BOTTOM_68,  // bottom
                 GFX_STATICTEXT_STATE_68,   // state
                 (GFX_XCHAR*)staticTextStr_68,    // text
                 GFX_STATICTEXT_ALIGNMENT_68,       //alignment
                 GFX_STATICTEXT_SCHEME_68
                 ); // use alternate scheme
        break;
    case DIS_AutoCycle:
        hgcObj.pDIS_AutoCycleObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_AutoCycle,      // button ID
                 GFX_STATICTEXT_LEFT_69,    // left
                 GFX_STATICTEXT_TOP_69,     // top
                 GFX_STATICTEXT_RIGHT_69,   // right
                 GFX_STATICTEXT_BOTTOM_69,  // bottom
                 GFX_STATICTEXT_STATE_69,   // state
                 (GFX_XCHAR*)staticTextStr_69,    // text
                 GFX_STATICTEXT_ALIGNMENT_69,       //alignment
                 GFX_STATICTEXT_SCHEME_69
                 ); // use alternate scheme
        break;
    case DIS_AutoActuPro:
        hgcObj.pDIS_AutoActuProObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_AutoActuPro,      // button ID
                 GFX_STATICTEXT_LEFT_70,    // left
                 GFX_STATICTEXT_TOP_70,     // top
                 GFX_STATICTEXT_RIGHT_70,   // right
                 GFX_STATICTEXT_BOTTOM_70,  // bottom
                 GFX_STATICTEXT_STATE_70,   // state
                 (GFX_XCHAR*)staticTextStr_70,    // text
                 GFX_STATICTEXT_ALIGNMENT_70,       //alignment
                 GFX_STATICTEXT_SCHEME_70
                 ); // use alternate scheme
        break;
    case DIS_AutoSetPro:
        hgcObj.pDIS_AutoSetProObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_AutoSetPro,      // button ID
                 GFX_STATICTEXT_LEFT_71,    // left
                 GFX_STATICTEXT_TOP_71,     // top
                 GFX_STATICTEXT_RIGHT_71,   // right
                 GFX_STATICTEXT_BOTTOM_71,  // bottom
                 GFX_STATICTEXT_STATE_71,   // state
                 (GFX_XCHAR*)staticTextStr_71,    // text
                 GFX_STATICTEXT_ALIGNMENT_71,       //alignment
                 GFX_STATICTEXT_SCHEME_71
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_1EmbInMld:
        hgcObj.pDIS_FCSet1_1EmbInMldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_1EmbInMld,      // button ID
                 GFX_STATICTEXT_LEFT_72,    // left
                 GFX_STATICTEXT_TOP_72,     // top
                 GFX_STATICTEXT_RIGHT_72,   // right
                 GFX_STATICTEXT_BOTTOM_72,  // bottom
                 GFX_STATICTEXT_STATE_72,   // state
                 (GFX_XCHAR*)staticTextStr_72,    // text
                 GFX_STATICTEXT_ALIGNMENT_72,       //alignment
                 GFX_STATICTEXT_SCHEME_72
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_1StartPos:
        hgcObj.pDIS_FCSet1_1StartPosObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_1StartPos,      // button ID
                 GFX_STATICTEXT_LEFT_73,    // left
                 GFX_STATICTEXT_TOP_73,     // top
                 GFX_STATICTEXT_RIGHT_73,   // right
                 GFX_STATICTEXT_BOTTOM_73,  // bottom
                 GFX_STATICTEXT_STATE_73,   // state
                 (GFX_XCHAR*)staticTextStr_73,    // text
                 GFX_STATICTEXT_ALIGNMENT_73,       //alignment
                 GFX_STATICTEXT_SCHEME_73
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_1SubPutDe:
        hgcObj.pDIS_FCSet1_1SubPutDeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_1SubPutDe,      // button ID
                 GFX_STATICTEXT_LEFT_74,    // left
                 GFX_STATICTEXT_TOP_74,     // top
                 GFX_STATICTEXT_RIGHT_74,   // right
                 GFX_STATICTEXT_BOTTOM_74,  // bottom
                 GFX_STATICTEXT_STATE_74,   // state
                 (GFX_XCHAR*)staticTextStr_74,    // text
                 GFX_STATICTEXT_ALIGNMENT_74,       //alignment
                 GFX_STATICTEXT_SCHEME_74
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_1StopStatus:
        hgcObj.pDIS_FCSet1_1StopStatusObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_1StopStatus,      // button ID
                 GFX_STATICTEXT_LEFT_75,    // left
                 GFX_STATICTEXT_TOP_75,     // top
                 GFX_STATICTEXT_RIGHT_75,   // right
                 GFX_STATICTEXT_BOTTOM_75,  // bottom
                 GFX_STATICTEXT_STATE_75,   // state
                 (GFX_XCHAR*)staticTextStr_75,    // text
                 GFX_STATICTEXT_ALIGNMENT_75,       //alignment
                 GFX_STATICTEXT_SCHEME_75
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_1StdbyPos:
        hgcObj.pDIS_FCSet1_1StdbyPosObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_1StdbyPos,      // button ID
                 GFX_STATICTEXT_LEFT_76,    // left
                 GFX_STATICTEXT_TOP_76,     // top
                 GFX_STATICTEXT_RIGHT_76,   // right
                 GFX_STATICTEXT_BOTTOM_76,  // bottom
                 GFX_STATICTEXT_STATE_76,   // state
                 (GFX_XCHAR*)staticTextStr_76,    // text
                 GFX_STATICTEXT_ALIGNMENT_76,       //alignment
                 GFX_STATICTEXT_SCHEME_76
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_1StdbyGes:
        hgcObj.pDIS_FCSet1_1StdbyGesObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_1StdbyGes,      // button ID
                 GFX_STATICTEXT_LEFT_77,    // left
                 GFX_STATICTEXT_TOP_77,     // top
                 GFX_STATICTEXT_RIGHT_77,   // right
                 GFX_STATICTEXT_BOTTOM_77,  // bottom
                 GFX_STATICTEXT_STATE_77,   // state
                 (GFX_XCHAR*)staticTextStr_77,    // text
                 GFX_STATICTEXT_ALIGNMENT_77,       //alignment
                 GFX_STATICTEXT_SCHEME_77
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_1MidMold:
        hgcObj.pDIS_FCSet1_1MidMoldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_1MidMold,      // button ID
                 GFX_STATICTEXT_LEFT_78,    // left
                 GFX_STATICTEXT_TOP_78,     // top
                 GFX_STATICTEXT_RIGHT_78,   // right
                 GFX_STATICTEXT_BOTTOM_78,  // bottom
                 GFX_STATICTEXT_STATE_78,   // state
                 (GFX_XCHAR*)staticTextStr_78,    // text
                 GFX_STATICTEXT_ALIGNMENT_78,       //alignment
                 GFX_STATICTEXT_SCHEME_78
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_1SafeDoor:
        hgcObj.pDIS_FCSet1_1SafeDoorObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_1SafeDoor,      // button ID
                 GFX_STATICTEXT_LEFT_79,    // left
                 GFX_STATICTEXT_TOP_79,     // top
                 GFX_STATICTEXT_RIGHT_79,   // right
                 GFX_STATICTEXT_BOTTOM_79,  // bottom
                 GFX_STATICTEXT_STATE_79,   // state
                 (GFX_XCHAR*)staticTextStr_79,    // text
                 GFX_STATICTEXT_ALIGNMENT_79,       //alignment
                 GFX_STATICTEXT_SCHEME_79
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_1Thimb:
        hgcObj.pDIS_FCSet1_1ThimbObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_1Thimb,      // button ID
                 GFX_STATICTEXT_LEFT_80,    // left
                 GFX_STATICTEXT_TOP_80,     // top
                 GFX_STATICTEXT_RIGHT_80,   // right
                 GFX_STATICTEXT_BOTTOM_80,  // bottom
                 GFX_STATICTEXT_STATE_80,   // state
                 (GFX_XCHAR*)staticTextStr_80,    // text
                 GFX_STATICTEXT_ALIGNMENT_80,       //alignment
                 GFX_STATICTEXT_SCHEME_80
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_1CycleTime:
        hgcObj.pDIS_FCSet1_1CycleTimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_1CycleTime,      // button ID
                 GFX_STATICTEXT_LEFT_81,    // left
                 GFX_STATICTEXT_TOP_81,     // top
                 GFX_STATICTEXT_RIGHT_81,   // right
                 GFX_STATICTEXT_BOTTOM_81,  // bottom
                 GFX_STATICTEXT_STATE_81,   // state
                 (GFX_XCHAR*)staticTextStr_81,    // text
                 GFX_STATICTEXT_ALIGNMENT_81,       //alignment
                 GFX_STATICTEXT_SCHEME_81
                 ); // use alternate scheme
        break;
    case STE_EmbInMld:
        hgcObj.pSTE_EmbInMldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_EmbInMld,      // button ID
                 GFX_STATICTEXT_LEFT_82,    // left
                 GFX_STATICTEXT_TOP_82,     // top
                 GFX_STATICTEXT_RIGHT_82,   // right
                 GFX_STATICTEXT_BOTTOM_82,  // bottom
                 GFX_STATICTEXT_STATE_82,   // state
                 (GFX_XCHAR*)staticTextStr_82,    // text
                 GFX_STATICTEXT_ALIGNMENT_82,       //alignment
                 GFX_STATICTEXT_SCHEME_82
                 ); // use alternate scheme
        break;
    case STE_StopSafe:
        hgcObj.pSTE_StopSafeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_StopSafe,      // button ID
                 GFX_STATICTEXT_LEFT_83,    // left
                 GFX_STATICTEXT_TOP_83,     // top
                 GFX_STATICTEXT_RIGHT_83,   // right
                 GFX_STATICTEXT_BOTTOM_83,  // bottom
                 GFX_STATICTEXT_STATE_83,   // state
                 (GFX_XCHAR*)staticTextStr_83,    // text
                 GFX_STATICTEXT_ALIGNMENT_83,       //alignment
                 GFX_STATICTEXT_SCHEME_83
                 ); // use alternate scheme
        break;
    case STE_StdbyPos:
        hgcObj.pSTE_StdbyPosObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_StdbyPos,      // button ID
                 GFX_STATICTEXT_LEFT_84,    // left
                 GFX_STATICTEXT_TOP_84,     // top
                 GFX_STATICTEXT_RIGHT_84,   // right
                 GFX_STATICTEXT_BOTTOM_84,  // bottom
                 GFX_STATICTEXT_STATE_84,   // state
                 (GFX_XCHAR*)staticTextStr_84,    // text
                 GFX_STATICTEXT_ALIGNMENT_84,       //alignment
                 GFX_STATICTEXT_SCHEME_84
                 ); // use alternate scheme
        break;
    case STE_StdbyGes:
        hgcObj.pSTE_StdbyGesObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_StdbyGes,      // button ID
                 GFX_STATICTEXT_LEFT_85,    // left
                 GFX_STATICTEXT_TOP_85,     // top
                 GFX_STATICTEXT_RIGHT_85,   // right
                 GFX_STATICTEXT_BOTTOM_85,  // bottom
                 GFX_STATICTEXT_STATE_85,   // state
                 (GFX_XCHAR*)staticTextStr_85,    // text
                 GFX_STATICTEXT_ALIGNMENT_85,       //alignment
                 GFX_STATICTEXT_SCHEME_85
                 ); // use alternate scheme
        break;
    case STE_MidMold:
        hgcObj.pSTE_MidMoldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MidMold,      // button ID
                 GFX_STATICTEXT_LEFT_86,    // left
                 GFX_STATICTEXT_TOP_86,     // top
                 GFX_STATICTEXT_RIGHT_86,   // right
                 GFX_STATICTEXT_BOTTOM_86,  // bottom
                 GFX_STATICTEXT_STATE_86,   // state
                 (GFX_XCHAR*)staticTextStr_86,    // text
                 GFX_STATICTEXT_ALIGNMENT_86,       //alignment
                 GFX_STATICTEXT_SCHEME_86
                 ); // use alternate scheme
        break;
    case STE_SafeDoor:
        hgcObj.pSTE_SafeDoorObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_SafeDoor,      // button ID
                 GFX_STATICTEXT_LEFT_87,    // left
                 GFX_STATICTEXT_TOP_87,     // top
                 GFX_STATICTEXT_RIGHT_87,   // right
                 GFX_STATICTEXT_BOTTOM_87,  // bottom
                 GFX_STATICTEXT_STATE_87,   // state
                 (GFX_XCHAR*)staticTextStr_87,    // text
                 GFX_STATICTEXT_ALIGNMENT_87,       //alignment
                 GFX_STATICTEXT_SCHEME_87
                 ); // use alternate scheme
        break;
    case STE_Thimb:
        hgcObj.pSTE_ThimbObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_Thimb,      // button ID
                 GFX_STATICTEXT_LEFT_88,    // left
                 GFX_STATICTEXT_TOP_88,     // top
                 GFX_STATICTEXT_RIGHT_88,   // right
                 GFX_STATICTEXT_BOTTOM_88,  // bottom
                 GFX_STATICTEXT_STATE_88,   // state
                 (GFX_XCHAR*)staticTextStr_88,    // text
                 GFX_STATICTEXT_ALIGNMENT_88,       //alignment
                 GFX_STATICTEXT_SCHEME_88
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2ClpAbDect:
        hgcObj.pDIS_FCSet1_2ClpAbDectObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2ClpAbDect,      // button ID
                 GFX_STATICTEXT_LEFT_89,    // left
                 GFX_STATICTEXT_TOP_89,     // top
                 GFX_STATICTEXT_RIGHT_89,   // right
                 GFX_STATICTEXT_BOTTOM_89,  // bottom
                 GFX_STATICTEXT_STATE_89,   // state
                 (GFX_XCHAR*)staticTextStr_89,    // text
                 GFX_STATICTEXT_ALIGNMENT_89,       //alignment
                 GFX_STATICTEXT_SCHEME_89
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2ChckClsMld:
        hgcObj.pDIS_FCSet1_2ChckClsMldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2ChckClsMld,      // button ID
                 GFX_STATICTEXT_LEFT_90,    // left
                 GFX_STATICTEXT_TOP_90,     // top
                 GFX_STATICTEXT_RIGHT_90,   // right
                 GFX_STATICTEXT_BOTTOM_90,  // bottom
                 GFX_STATICTEXT_STATE_90,   // state
                 (GFX_XCHAR*)staticTextStr_90,    // text
                 GFX_STATICTEXT_ALIGNMENT_90,       //alignment
                 GFX_STATICTEXT_SCHEME_90
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2ChckDfPrd:
        hgcObj.pDIS_FCSet1_2ChckDfPrdObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2ChckDfPrd,      // button ID
                 GFX_STATICTEXT_LEFT_91,    // left
                 GFX_STATICTEXT_TOP_91,     // top
                 GFX_STATICTEXT_RIGHT_91,   // right
                 GFX_STATICTEXT_BOTTOM_91,  // bottom
                 GFX_STATICTEXT_STATE_91,   // state
                 (GFX_XCHAR*)staticTextStr_91,    // text
                 GFX_STATICTEXT_ALIGNMENT_91,       //alignment
                 GFX_STATICTEXT_SCHEME_91
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2ChckPress:
        hgcObj.pDIS_FCSet1_2ChckPressObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2ChckPress,      // button ID
                 GFX_STATICTEXT_LEFT_92,    // left
                 GFX_STATICTEXT_TOP_92,     // top
                 GFX_STATICTEXT_RIGHT_92,   // right
                 GFX_STATICTEXT_BOTTOM_92,  // bottom
                 GFX_STATICTEXT_STATE_92,   // state
                 (GFX_XCHAR*)staticTextStr_92,    // text
                 GFX_STATICTEXT_ALIGNMENT_92,       //alignment
                 GFX_STATICTEXT_SCHEME_92
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2Reserv2:
        hgcObj.pDIS_FCSet1_2Reserv2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2Reserv2,      // button ID
                 GFX_STATICTEXT_LEFT_93,    // left
                 GFX_STATICTEXT_TOP_93,     // top
                 GFX_STATICTEXT_RIGHT_93,   // right
                 GFX_STATICTEXT_BOTTOM_93,  // bottom
                 GFX_STATICTEXT_STATE_93,   // state
                 (GFX_XCHAR*)staticTextStr_93,    // text
                 GFX_STATICTEXT_ALIGNMENT_93,       //alignment
                 GFX_STATICTEXT_SCHEME_93
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2ClScrTim:
        hgcObj.pDIS_FCSet1_2ClScrTimObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2ClScrTim,      // button ID
                 GFX_STATICTEXT_LEFT_94,    // left
                 GFX_STATICTEXT_TOP_94,     // top
                 GFX_STATICTEXT_RIGHT_94,   // right
                 GFX_STATICTEXT_BOTTOM_94,  // bottom
                 GFX_STATICTEXT_STATE_94,   // state
                 (GFX_XCHAR*)staticTextStr_94,    // text
                 GFX_STATICTEXT_ALIGNMENT_94,       //alignment
                 GFX_STATICTEXT_SCHEME_94
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2Reserv1:
        hgcObj.pDIS_FCSet1_2Reserv1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2Reserv1,      // button ID
                 GFX_STATICTEXT_LEFT_95,    // left
                 GFX_STATICTEXT_TOP_95,     // top
                 GFX_STATICTEXT_RIGHT_95,   // right
                 GFX_STATICTEXT_BOTTOM_95,  // bottom
                 GFX_STATICTEXT_STATE_95,   // state
                 (GFX_XCHAR*)staticTextStr_95,    // text
                 GFX_STATICTEXT_ALIGNMENT_95,       //alignment
                 GFX_STATICTEXT_SCHEME_95
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2ConvCnt:
        hgcObj.pDIS_FCSet1_2ConvCntObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2ConvCnt,      // button ID
                 GFX_STATICTEXT_LEFT_96,    // left
                 GFX_STATICTEXT_TOP_96,     // top
                 GFX_STATICTEXT_RIGHT_96,   // right
                 GFX_STATICTEXT_BOTTOM_96,  // bottom
                 GFX_STATICTEXT_STATE_96,   // state
                 (GFX_XCHAR*)staticTextStr_96,    // text
                 GFX_STATICTEXT_ALIGNMENT_96,       //alignment
                 GFX_STATICTEXT_SCHEME_96
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2Space:
        hgcObj.pDIS_FCSet1_2SpaceObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2Space,      // button ID
                 GFX_STATICTEXT_LEFT_97,    // left
                 GFX_STATICTEXT_TOP_97,     // top
                 GFX_STATICTEXT_RIGHT_97,   // right
                 GFX_STATICTEXT_BOTTOM_97,  // bottom
                 GFX_STATICTEXT_STATE_97,   // state
                 (GFX_XCHAR*)staticTextStr_97,    // text
                 GFX_STATICTEXT_ALIGNMENT_97,       //alignment
                 GFX_STATICTEXT_SCHEME_97
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2PointCnt:
        hgcObj.pDIS_FCSet1_2PointCntObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2PointCnt,      // button ID
                 GFX_STATICTEXT_LEFT_98,    // left
                 GFX_STATICTEXT_TOP_98,     // top
                 GFX_STATICTEXT_RIGHT_98,   // right
                 GFX_STATICTEXT_BOTTOM_98,  // bottom
                 GFX_STATICTEXT_STATE_98,   // state
                 (GFX_XCHAR*)staticTextStr_98,    // text
                 GFX_STATICTEXT_ALIGNMENT_98,       //alignment
                 GFX_STATICTEXT_SCHEME_98
                 ); // use alternate scheme
        break;
    case STE_ClpAbDect:
        hgcObj.pSTE_ClpAbDectObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ClpAbDect,      // button ID
                 GFX_STATICTEXT_LEFT_99,    // left
                 GFX_STATICTEXT_TOP_99,     // top
                 GFX_STATICTEXT_RIGHT_99,   // right
                 GFX_STATICTEXT_BOTTOM_99,  // bottom
                 GFX_STATICTEXT_STATE_99,   // state
                 (GFX_XCHAR*)staticTextStr_99,    // text
                 GFX_STATICTEXT_ALIGNMENT_99,       //alignment
                 GFX_STATICTEXT_SCHEME_99
                 ); // use alternate scheme
        break;
    case STE_Injection:
        hgcObj.pSTE_InjectionObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_Injection,      // button ID
                 GFX_STATICTEXT_LEFT_100,    // left
                 GFX_STATICTEXT_TOP_100,     // top
                 GFX_STATICTEXT_RIGHT_100,   // right
                 GFX_STATICTEXT_BOTTOM_100,  // bottom
                 GFX_STATICTEXT_STATE_100,   // state
                 (GFX_XCHAR*)staticTextStr_100,    // text
                 GFX_STATICTEXT_ALIGNMENT_100,       //alignment
                 GFX_STATICTEXT_SCHEME_100
                 ); // use alternate scheme
        break;
    case STE_ChckDfPrd:
        hgcObj.pSTE_ChckDfPrdObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ChckDfPrd,      // button ID
                 GFX_STATICTEXT_LEFT_101,    // left
                 GFX_STATICTEXT_TOP_101,     // top
                 GFX_STATICTEXT_RIGHT_101,   // right
                 GFX_STATICTEXT_BOTTOM_101,  // bottom
                 GFX_STATICTEXT_STATE_101,   // state
                 (GFX_XCHAR*)staticTextStr_101,    // text
                 GFX_STATICTEXT_ALIGNMENT_101,       //alignment
                 GFX_STATICTEXT_SCHEME_101
                 ); // use alternate scheme
        break;
    case STE_ChckPress:
        hgcObj.pSTE_ChckPressObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ChckPress,      // button ID
                 GFX_STATICTEXT_LEFT_102,    // left
                 GFX_STATICTEXT_TOP_102,     // top
                 GFX_STATICTEXT_RIGHT_102,   // right
                 GFX_STATICTEXT_BOTTOM_102,  // bottom
                 GFX_STATICTEXT_STATE_102,   // state
                 (GFX_XCHAR*)staticTextStr_102,    // text
                 GFX_STATICTEXT_ALIGNMENT_102,       //alignment
                 GFX_STATICTEXT_SCHEME_102
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2FetchFail:
        hgcObj.pDIS_FCSet1_2FetchFailObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2FetchFail,      // button ID
                 GFX_STATICTEXT_LEFT_103,    // left
                 GFX_STATICTEXT_TOP_103,     // top
                 GFX_STATICTEXT_RIGHT_103,   // right
                 GFX_STATICTEXT_BOTTOM_103,  // bottom
                 GFX_STATICTEXT_STATE_103,   // state
                 (GFX_XCHAR*)staticTextStr_103,    // text
                 GFX_STATICTEXT_ALIGNMENT_103,       //alignment
                 GFX_STATICTEXT_SCHEME_103
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2TrvInPst:
        hgcObj.pDIS_FCSet1_2TrvInPstObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2TrvInPst,      // button ID
                 GFX_STATICTEXT_LEFT_104,    // left
                 GFX_STATICTEXT_TOP_104,     // top
                 GFX_STATICTEXT_RIGHT_104,   // right
                 GFX_STATICTEXT_BOTTOM_104,  // bottom
                 GFX_STATICTEXT_STATE_104,   // state
                 (GFX_XCHAR*)staticTextStr_104,    // text
                 GFX_STATICTEXT_ALIGNMENT_104,       //alignment
                 GFX_STATICTEXT_SCHEME_104
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2TrvOutPst:
        hgcObj.pDIS_FCSet1_2TrvOutPstObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2TrvOutPst,      // button ID
                 GFX_STATICTEXT_LEFT_105,    // left
                 GFX_STATICTEXT_TOP_105,     // top
                 GFX_STATICTEXT_RIGHT_105,   // right
                 GFX_STATICTEXT_BOTTOM_105,  // bottom
                 GFX_STATICTEXT_STATE_105,   // state
                 (GFX_XCHAR*)staticTextStr_105,    // text
                 GFX_STATICTEXT_ALIGNMENT_105,       //alignment
                 GFX_STATICTEXT_SCHEME_105
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2SlowDown:
        hgcObj.pDIS_FCSet1_2SlowDownObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2SlowDown,      // button ID
                 GFX_STATICTEXT_LEFT_106,    // left
                 GFX_STATICTEXT_TOP_106,     // top
                 GFX_STATICTEXT_RIGHT_106,   // right
                 GFX_STATICTEXT_BOTTOM_106,  // bottom
                 GFX_STATICTEXT_STATE_106,   // state
                 (GFX_XCHAR*)staticTextStr_106,    // text
                 GFX_STATICTEXT_ALIGNMENT_106,       //alignment
                 GFX_STATICTEXT_SCHEME_106
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2PressSw:
        hgcObj.pDIS_FCSet1_2PressSwObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2PressSw,      // button ID
                 GFX_STATICTEXT_LEFT_107,    // left
                 GFX_STATICTEXT_TOP_107,     // top
                 GFX_STATICTEXT_RIGHT_107,   // right
                 GFX_STATICTEXT_BOTTOM_107,  // bottom
                 GFX_STATICTEXT_STATE_107,   // state
                 (GFX_XCHAR*)staticTextStr_107,    // text
                 GFX_STATICTEXT_ALIGNMENT_107,       //alignment
                 GFX_STATICTEXT_SCHEME_107
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2AutoLinit:
        hgcObj.pDIS_FCSet1_2AutoLinitObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2AutoLinit,      // button ID
                 GFX_STATICTEXT_LEFT_108,    // left
                 GFX_STATICTEXT_TOP_108,     // top
                 GFX_STATICTEXT_RIGHT_108,   // right
                 GFX_STATICTEXT_BOTTOM_108,  // bottom
                 GFX_STATICTEXT_STATE_108,   // state
                 (GFX_XCHAR*)staticTextStr_108,    // text
                 GFX_STATICTEXT_ALIGNMENT_108,       //alignment
                 GFX_STATICTEXT_SCHEME_108
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2StartPoint:
        hgcObj.pDIS_FCSet1_2StartPointObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2StartPoint,      // button ID
                 GFX_STATICTEXT_LEFT_109,    // left
                 GFX_STATICTEXT_TOP_109,     // top
                 GFX_STATICTEXT_RIGHT_109,   // right
                 GFX_STATICTEXT_BOTTOM_109,  // bottom
                 GFX_STATICTEXT_STATE_109,   // state
                 (GFX_XCHAR*)staticTextStr_109,    // text
                 GFX_STATICTEXT_ALIGNMENT_109,       //alignment
                 GFX_STATICTEXT_SCHEME_109
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2SlowDelay:
        hgcObj.pDIS_FCSet1_2SlowDelayObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2SlowDelay,      // button ID
                 GFX_STATICTEXT_LEFT_110,    // left
                 GFX_STATICTEXT_TOP_110,     // top
                 GFX_STATICTEXT_RIGHT_110,   // right
                 GFX_STATICTEXT_BOTTOM_110,  // bottom
                 GFX_STATICTEXT_STATE_110,   // state
                 (GFX_XCHAR*)staticTextStr_110,    // text
                 GFX_STATICTEXT_ALIGNMENT_110,       //alignment
                 GFX_STATICTEXT_SCHEME_110
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2SafeInMold:
        hgcObj.pDIS_FCSet1_2SafeInMoldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2SafeInMold,      // button ID
                 GFX_STATICTEXT_LEFT_111,    // left
                 GFX_STATICTEXT_TOP_111,     // top
                 GFX_STATICTEXT_RIGHT_111,   // right
                 GFX_STATICTEXT_BOTTOM_111,  // bottom
                 GFX_STATICTEXT_STATE_111,   // state
                 (GFX_XCHAR*)staticTextStr_111,    // text
                 GFX_STATICTEXT_ALIGNMENT_111,       //alignment
                 GFX_STATICTEXT_SCHEME_111
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_2OutStdby:
        hgcObj.pDIS_FCSet1_2OutStdbyObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_2OutStdby,      // button ID
                 GFX_STATICTEXT_LEFT_112,    // left
                 GFX_STATICTEXT_TOP_112,     // top
                 GFX_STATICTEXT_RIGHT_112,   // right
                 GFX_STATICTEXT_BOTTOM_112,  // bottom
                 GFX_STATICTEXT_STATE_112,   // state
                 (GFX_XCHAR*)staticTextStr_112,    // text
                 GFX_STATICTEXT_ALIGNMENT_112,       //alignment
                 GFX_STATICTEXT_SCHEME_112
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_3SafeDoor:
        hgcObj.pDIS_FCSet1_3SafeDoorObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_3SafeDoor,      // button ID
                 GFX_STATICTEXT_LEFT_113,    // left
                 GFX_STATICTEXT_TOP_113,     // top
                 GFX_STATICTEXT_RIGHT_113,   // right
                 GFX_STATICTEXT_BOTTOM_113,  // bottom
                 GFX_STATICTEXT_STATE_113,   // state
                 (GFX_XCHAR*)staticTextStr_113,    // text
                 GFX_STATICTEXT_ALIGNMENT_113,       //alignment
                 GFX_STATICTEXT_SCHEME_113
                 ); // use alternate scheme
        break;
    case STE_OpenSafeD:
        hgcObj.pSTE_OpenSafeDObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_OpenSafeD,      // button ID
                 GFX_STATICTEXT_LEFT_114,    // left
                 GFX_STATICTEXT_TOP_114,     // top
                 GFX_STATICTEXT_RIGHT_114,   // right
                 GFX_STATICTEXT_BOTTOM_114,  // bottom
                 GFX_STATICTEXT_STATE_114,   // state
                 (GFX_XCHAR*)staticTextStr_114,    // text
                 GFX_STATICTEXT_ALIGNMENT_114,       //alignment
                 GFX_STATICTEXT_SCHEME_114
                 ); // use alternate scheme
        break;
    case STE_TrvInPst:
        hgcObj.pSTE_TrvInPstObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_TrvInPst,      // button ID
                 GFX_STATICTEXT_LEFT_115,    // left
                 GFX_STATICTEXT_TOP_115,     // top
                 GFX_STATICTEXT_RIGHT_115,   // right
                 GFX_STATICTEXT_BOTTOM_115,  // bottom
                 GFX_STATICTEXT_STATE_115,   // state
                 (GFX_XCHAR*)staticTextStr_115,    // text
                 GFX_STATICTEXT_ALIGNMENT_115,       //alignment
                 GFX_STATICTEXT_SCHEME_115
                 ); // use alternate scheme
        break;
    case STE_TrvOutPst:
        hgcObj.pSTE_TrvOutPstObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_TrvOutPst,      // button ID
                 GFX_STATICTEXT_LEFT_116,    // left
                 GFX_STATICTEXT_TOP_116,     // top
                 GFX_STATICTEXT_RIGHT_116,   // right
                 GFX_STATICTEXT_BOTTOM_116,  // bottom
                 GFX_STATICTEXT_STATE_116,   // state
                 (GFX_XCHAR*)staticTextStr_116,    // text
                 GFX_STATICTEXT_ALIGNMENT_116,       //alignment
                 GFX_STATICTEXT_SCHEME_116
                 ); // use alternate scheme
        break;
    case STE_QuickDown:
        hgcObj.pSTE_QuickDownObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_QuickDown,      // button ID
                 GFX_STATICTEXT_LEFT_117,    // left
                 GFX_STATICTEXT_TOP_117,     // top
                 GFX_STATICTEXT_RIGHT_117,   // right
                 GFX_STATICTEXT_BOTTOM_117,  // bottom
                 GFX_STATICTEXT_STATE_117,   // state
                 (GFX_XCHAR*)staticTextStr_117,    // text
                 GFX_STATICTEXT_ALIGNMENT_117,       //alignment
                 GFX_STATICTEXT_SCHEME_117
                 ); // use alternate scheme
        break;
    case STE_PressSw:
        hgcObj.pSTE_PressSwObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_PressSw,      // button ID
                 GFX_STATICTEXT_LEFT_118,    // left
                 GFX_STATICTEXT_TOP_118,     // top
                 GFX_STATICTEXT_RIGHT_118,   // right
                 GFX_STATICTEXT_BOTTOM_118,  // bottom
                 GFX_STATICTEXT_STATE_118,   // state
                 (GFX_XCHAR*)staticTextStr_118,    // text
                 GFX_STATICTEXT_ALIGNMENT_118,       //alignment
                 GFX_STATICTEXT_SCHEME_118
                 ); // use alternate scheme
        break;
    case STE_AutoLimit:
        hgcObj.pSTE_AutoLimitObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_AutoLimit,      // button ID
                 GFX_STATICTEXT_LEFT_119,    // left
                 GFX_STATICTEXT_TOP_119,     // top
                 GFX_STATICTEXT_RIGHT_119,   // right
                 GFX_STATICTEXT_BOTTOM_119,  // bottom
                 GFX_STATICTEXT_STATE_119,   // state
                 (GFX_XCHAR*)staticTextStr_119,    // text
                 GFX_STATICTEXT_ALIGNMENT_119,       //alignment
                 GFX_STATICTEXT_SCHEME_119
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_4StkDrt:
        hgcObj.pDIS_FCSet1_4StkDrtObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_4StkDrt,      // button ID
                 GFX_STATICTEXT_LEFT_120,    // left
                 GFX_STATICTEXT_TOP_120,     // top
                 GFX_STATICTEXT_RIGHT_120,   // right
                 GFX_STATICTEXT_BOTTOM_120,  // bottom
                 GFX_STATICTEXT_STATE_120,   // state
                 (GFX_XCHAR*)staticTextStr_120,    // text
                 GFX_STATICTEXT_ALIGNMENT_120,       //alignment
                 GFX_STATICTEXT_SCHEME_120
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_4TestMould:
        hgcObj.pDIS_FCSet1_4TestMouldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_4TestMould,      // button ID
                 GFX_STATICTEXT_LEFT_121,    // left
                 GFX_STATICTEXT_TOP_121,     // top
                 GFX_STATICTEXT_RIGHT_121,   // right
                 GFX_STATICTEXT_BOTTOM_121,  // bottom
                 GFX_STATICTEXT_STATE_121,   // state
                 (GFX_XCHAR*)staticTextStr_121,    // text
                 GFX_STATICTEXT_ALIGNMENT_121,       //alignment
                 GFX_STATICTEXT_SCHEME_121
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_4StkClear:
        hgcObj.pDIS_FCSet1_4StkClearObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_4StkClear,      // button ID
                 GFX_STATICTEXT_LEFT_122,    // left
                 GFX_STATICTEXT_TOP_122,     // top
                 GFX_STATICTEXT_RIGHT_122,   // right
                 GFX_STATICTEXT_BOTTOM_122,  // bottom
                 GFX_STATICTEXT_STATE_122,   // state
                 (GFX_XCHAR*)staticTextStr_122,    // text
                 GFX_STATICTEXT_ALIGNMENT_122,       //alignment
                 GFX_STATICTEXT_SCHEME_122
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_4ConveyOn:
        hgcObj.pDIS_FCSet1_4ConveyOnObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_4ConveyOn,      // button ID
                 GFX_STATICTEXT_LEFT_123,    // left
                 GFX_STATICTEXT_TOP_123,     // top
                 GFX_STATICTEXT_RIGHT_123,   // right
                 GFX_STATICTEXT_BOTTOM_123,  // bottom
                 GFX_STATICTEXT_STATE_123,   // state
                 (GFX_XCHAR*)staticTextStr_123,    // text
                 GFX_STATICTEXT_ALIGNMENT_123,       //alignment
                 GFX_STATICTEXT_SCHEME_123
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_4Reser1Time:
        hgcObj.pDIS_FCSet1_4Reser1TimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_4Reser1Time,      // button ID
                 GFX_STATICTEXT_LEFT_124,    // left
                 GFX_STATICTEXT_TOP_124,     // top
                 GFX_STATICTEXT_RIGHT_124,   // right
                 GFX_STATICTEXT_BOTTOM_124,  // bottom
                 GFX_STATICTEXT_STATE_124,   // state
                 (GFX_XCHAR*)staticTextStr_124,    // text
                 GFX_STATICTEXT_ALIGNMENT_124,       //alignment
                 GFX_STATICTEXT_SCHEME_124
                 ); // use alternate scheme
        break;
    case DIS_FCSet1_4OpDAlarm:
        hgcObj.pDIS_FCSet1_4OpDAlarmObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet1_4OpDAlarm,      // button ID
                 GFX_STATICTEXT_LEFT_125,    // left
                 GFX_STATICTEXT_TOP_125,     // top
                 GFX_STATICTEXT_RIGHT_125,   // right
                 GFX_STATICTEXT_BOTTOM_125,  // bottom
                 GFX_STATICTEXT_STATE_125,   // state
                 (GFX_XCHAR*)staticTextStr_125,    // text
                 GFX_STATICTEXT_ALIGNMENT_125,       //alignment
                 GFX_STATICTEXT_SCHEME_125
                 ); // use alternate scheme
        break;
    case STE_ZStackDrt:
        hgcObj.pSTE_ZStackDrtObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ZStackDrt,      // button ID
                 GFX_STATICTEXT_LEFT_126,    // left
                 GFX_STATICTEXT_TOP_126,     // top
                 GFX_STATICTEXT_RIGHT_126,   // right
                 GFX_STATICTEXT_BOTTOM_126,  // bottom
                 GFX_STATICTEXT_STATE_126,   // state
                 (GFX_XCHAR*)staticTextStr_126,    // text
                 GFX_STATICTEXT_ALIGNMENT_126,       //alignment
                 GFX_STATICTEXT_SCHEME_126
                 ); // use alternate scheme
        break;
    case STE_StackClear:
        hgcObj.pSTE_StackClearObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_StackClear,      // button ID
                 GFX_STATICTEXT_LEFT_127,    // left
                 GFX_STATICTEXT_TOP_127,     // top
                 GFX_STATICTEXT_RIGHT_127,   // right
                 GFX_STATICTEXT_BOTTOM_127,  // bottom
                 GFX_STATICTEXT_STATE_127,   // state
                 (GFX_XCHAR*)staticTextStr_127,    // text
                 GFX_STATICTEXT_ALIGNMENT_127,       //alignment
                 GFX_STATICTEXT_SCHEME_127
                 ); // use alternate scheme
        break;
    case STE_OpenDoorAlarm:
        hgcObj.pSTE_OpenDoorAlarmObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_OpenDoorAlarm,      // button ID
                 GFX_STATICTEXT_LEFT_128,    // left
                 GFX_STATICTEXT_TOP_128,     // top
                 GFX_STATICTEXT_RIGHT_128,   // right
                 GFX_STATICTEXT_BOTTOM_128,  // bottom
                 GFX_STATICTEXT_STATE_128,   // state
                 (GFX_XCHAR*)staticTextStr_128,    // text
                 GFX_STATICTEXT_ALIGNMENT_128,       //alignment
                 GFX_STATICTEXT_SCHEME_128
                 ); // use alternate scheme
        break;
    case DIS_FCSet2_1OriSpeed:
        hgcObj.pDIS_FCSet2_1OriSpeedObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet2_1OriSpeed,      // button ID
                 GFX_STATICTEXT_LEFT_129,    // left
                 GFX_STATICTEXT_TOP_129,     // top
                 GFX_STATICTEXT_RIGHT_129,   // right
                 GFX_STATICTEXT_BOTTOM_129,  // bottom
                 GFX_STATICTEXT_STATE_129,   // state
                 (GFX_XCHAR*)staticTextStr_129,    // text
                 GFX_STATICTEXT_ALIGNMENT_129,       //alignment
                 GFX_STATICTEXT_SCHEME_129
                 ); // use alternate scheme
        break;
    case DIS_FCSet2_1WholeSpeed:
        hgcObj.pDIS_FCSet2_1WholeSpeedObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet2_1WholeSpeed,      // button ID
                 GFX_STATICTEXT_LEFT_130,    // left
                 GFX_STATICTEXT_TOP_130,     // top
                 GFX_STATICTEXT_RIGHT_130,   // right
                 GFX_STATICTEXT_BOTTOM_130,  // bottom
                 GFX_STATICTEXT_STATE_130,   // state
                 (GFX_XCHAR*)staticTextStr_130,    // text
                 GFX_STATICTEXT_ALIGNMENT_130,       //alignment
                 GFX_STATICTEXT_SCHEME_130
                 ); // use alternate scheme
        break;
    case DIS_FCSet2_1MaxSpeed:
        hgcObj.pDIS_FCSet2_1MaxSpeedObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet2_1MaxSpeed,      // button ID
                 GFX_STATICTEXT_LEFT_131,    // left
                 GFX_STATICTEXT_TOP_131,     // top
                 GFX_STATICTEXT_RIGHT_131,   // right
                 GFX_STATICTEXT_BOTTOM_131,  // bottom
                 GFX_STATICTEXT_STATE_131,   // state
                 (GFX_XCHAR*)staticTextStr_131,    // text
                 GFX_STATICTEXT_ALIGNMENT_131,       //alignment
                 GFX_STATICTEXT_SCHEME_131
                 ); // use alternate scheme
        break;
    case DIS_FCSet2_1AccDecTime:
        hgcObj.pDIS_FCSet2_1AccDecTimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet2_1AccDecTime,      // button ID
                 GFX_STATICTEXT_LEFT_132,    // left
                 GFX_STATICTEXT_TOP_132,     // top
                 GFX_STATICTEXT_RIGHT_132,   // right
                 GFX_STATICTEXT_BOTTOM_132,  // bottom
                 GFX_STATICTEXT_STATE_132,   // state
                 (GFX_XCHAR*)staticTextStr_132,    // text
                 GFX_STATICTEXT_ALIGNMENT_132,       //alignment
                 GFX_STATICTEXT_SCHEME_132
                 ); // use alternate scheme
        break;
    case DIS_FCSet2_1AlarmTime:
        hgcObj.pDIS_FCSet2_1AlarmTimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet2_1AlarmTime,      // button ID
                 GFX_STATICTEXT_LEFT_133,    // left
                 GFX_STATICTEXT_TOP_133,     // top
                 GFX_STATICTEXT_RIGHT_133,   // right
                 GFX_STATICTEXT_BOTTOM_133,  // bottom
                 GFX_STATICTEXT_STATE_133,   // state
                 (GFX_XCHAR*)staticTextStr_133,    // text
                 GFX_STATICTEXT_ALIGNMENT_133,       //alignment
                 GFX_STATICTEXT_SCHEME_133
                 ); // use alternate scheme
        break;
    case DIS_FCSet2_1FBPulseOut:
        hgcObj.pDIS_FCSet2_1FBPulseOutObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet2_1FBPulseOut,      // button ID
                 GFX_STATICTEXT_LEFT_134,    // left
                 GFX_STATICTEXT_TOP_134,     // top
                 GFX_STATICTEXT_RIGHT_134,   // right
                 GFX_STATICTEXT_BOTTOM_134,  // bottom
                 GFX_STATICTEXT_STATE_134,   // state
                 (GFX_XCHAR*)staticTextStr_134,    // text
                 GFX_STATICTEXT_ALIGNMENT_134,       //alignment
                 GFX_STATICTEXT_SCHEME_134
                 ); // use alternate scheme
        break;
    case DMT_FBPulseIn:
        hgcObj.pDMT_FBPulseInObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DMT_FBPulseIn,      // button ID
                 GFX_STATICTEXT_LEFT_135,    // left
                 GFX_STATICTEXT_TOP_135,     // top
                 GFX_STATICTEXT_RIGHT_135,   // right
                 GFX_STATICTEXT_BOTTOM_135,  // bottom
                 GFX_STATICTEXT_STATE_135,   // state
                 (GFX_XCHAR*)staticTextStr_135,    // text
                 GFX_STATICTEXT_ALIGNMENT_135,       //alignment
                 GFX_STATICTEXT_SCHEME_135
                 ); // use alternate scheme
        break;
    case DIS_FCSet2_1DownGest:
        hgcObj.pDIS_FCSet2_1DownGestObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet2_1DownGest,      // button ID
                 GFX_STATICTEXT_LEFT_136,    // left
                 GFX_STATICTEXT_TOP_136,     // top
                 GFX_STATICTEXT_RIGHT_136,   // right
                 GFX_STATICTEXT_BOTTOM_136,  // bottom
                 GFX_STATICTEXT_STATE_136,   // state
                 (GFX_XCHAR*)staticTextStr_136,    // text
                 GFX_STATICTEXT_ALIGNMENT_136,       //alignment
                 GFX_STATICTEXT_SCHEME_136
                 ); // use alternate scheme
        break;
    case DIS_FCSet2_1FeedBack:
        hgcObj.pDIS_FCSet2_1FeedBackObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet2_1FeedBack,      // button ID
                 GFX_STATICTEXT_LEFT_137,    // left
                 GFX_STATICTEXT_TOP_137,     // top
                 GFX_STATICTEXT_RIGHT_137,   // right
                 GFX_STATICTEXT_BOTTOM_137,  // bottom
                 GFX_STATICTEXT_STATE_137,   // state
                 (GFX_XCHAR*)staticTextStr_137,    // text
                 GFX_STATICTEXT_ALIGNMENT_137,       //alignment
                 GFX_STATICTEXT_SCHEME_137
                 ); // use alternate scheme
        break;
    case DIS_FCSet2_1PolseIn:
        hgcObj.pDIS_FCSet2_1PolseInObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet2_1PolseIn,      // button ID
                 GFX_STATICTEXT_LEFT_138,    // left
                 GFX_STATICTEXT_TOP_138,     // top
                 GFX_STATICTEXT_RIGHT_138,   // right
                 GFX_STATICTEXT_BOTTOM_138,  // bottom
                 GFX_STATICTEXT_STATE_138,   // state
                 (GFX_XCHAR*)staticTextStr_138,    // text
                 GFX_STATICTEXT_ALIGNMENT_138,       //alignment
                 GFX_STATICTEXT_SCHEME_138
                 ); // use alternate scheme
        break;
    case DIS_FCSet2_1MaxPos:
        hgcObj.pDIS_FCSet2_1MaxPosObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet2_1MaxPos,      // button ID
                 GFX_STATICTEXT_LEFT_139,    // left
                 GFX_STATICTEXT_TOP_139,     // top
                 GFX_STATICTEXT_RIGHT_139,   // right
                 GFX_STATICTEXT_BOTTOM_139,  // bottom
                 GFX_STATICTEXT_STATE_139,   // state
                 (GFX_XCHAR*)staticTextStr_139,    // text
                 GFX_STATICTEXT_ALIGNMENT_139,       //alignment
                 GFX_STATICTEXT_SCHEME_139
                 ); // use alternate scheme
        break;
    case STE_DownGest:
        hgcObj.pSTE_DownGestObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_DownGest,      // button ID
                 GFX_STATICTEXT_LEFT_140,    // left
                 GFX_STATICTEXT_TOP_140,     // top
                 GFX_STATICTEXT_RIGHT_140,   // right
                 GFX_STATICTEXT_BOTTOM_140,  // bottom
                 GFX_STATICTEXT_STATE_140,   // state
                 (GFX_XCHAR*)staticTextStr_140,    // text
                 GFX_STATICTEXT_ALIGNMENT_140,       //alignment
                 GFX_STATICTEXT_SCHEME_140
                 ); // use alternate scheme
        break;
    case STE_FeedBack:
        hgcObj.pSTE_FeedBackObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_FeedBack,      // button ID
                 GFX_STATICTEXT_LEFT_141,    // left
                 GFX_STATICTEXT_TOP_141,     // top
                 GFX_STATICTEXT_RIGHT_141,   // right
                 GFX_STATICTEXT_BOTTOM_141,  // bottom
                 GFX_STATICTEXT_STATE_141,   // state
                 (GFX_XCHAR*)staticTextStr_141,    // text
                 GFX_STATICTEXT_ALIGNMENT_141,       //alignment
                 GFX_STATICTEXT_SCHEME_141
                 ); // use alternate scheme
        break;
    case DIS_FCSet2_2FixReverse:
        hgcObj.pDIS_FCSet2_2FixReverseObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet2_2FixReverse,      // button ID
                 GFX_STATICTEXT_LEFT_142,    // left
                 GFX_STATICTEXT_TOP_142,     // top
                 GFX_STATICTEXT_RIGHT_142,   // right
                 GFX_STATICTEXT_BOTTOM_142,  // bottom
                 GFX_STATICTEXT_STATE_142,   // state
                 (GFX_XCHAR*)staticTextStr_142,    // text
                 GFX_STATICTEXT_ALIGNMENT_142,       //alignment
                 GFX_STATICTEXT_SCHEME_142
                 ); // use alternate scheme
        break;
    case DIS_FCSet2_2WiatSig:
        hgcObj.pDIS_FCSet2_2WiatSigObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FCSet2_2WiatSig,      // button ID
                 GFX_STATICTEXT_LEFT_143,    // left
                 GFX_STATICTEXT_TOP_143,     // top
                 GFX_STATICTEXT_RIGHT_143,   // right
                 GFX_STATICTEXT_BOTTOM_143,  // bottom
                 GFX_STATICTEXT_STATE_143,   // state
                 (GFX_XCHAR*)staticTextStr_143,    // text
                 GFX_STATICTEXT_ALIGNMENT_143,       //alignment
                 GFX_STATICTEXT_SCHEME_143
                 ); // use alternate scheme
        break;
    case STE_FixRev:
        hgcObj.pSTE_FixRevObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_FixRev,      // button ID
                 GFX_STATICTEXT_LEFT_144,    // left
                 GFX_STATICTEXT_TOP_144,     // top
                 GFX_STATICTEXT_RIGHT_144,   // right
                 GFX_STATICTEXT_BOTTOM_144,  // bottom
                 GFX_STATICTEXT_STATE_144,   // state
                 (GFX_XCHAR*)staticTextStr_144,    // text
                 GFX_STATICTEXT_ALIGNMENT_144,       //alignment
                 GFX_STATICTEXT_SCHEME_144
                 ); // use alternate scheme
        break;
    case STE_MoldOpenWait:
        hgcObj.pSTE_MoldOpenWaitObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MoldOpenWait,      // button ID
                 GFX_STATICTEXT_LEFT_145,    // left
                 GFX_STATICTEXT_TOP_145,     // top
                 GFX_STATICTEXT_RIGHT_145,   // right
                 GFX_STATICTEXT_BOTTOM_145,  // bottom
                 GFX_STATICTEXT_STATE_145,   // state
                 (GFX_XCHAR*)staticTextStr_145,    // text
                 GFX_STATICTEXT_ALIGNMENT_145,       //alignment
                 GFX_STATICTEXT_SCHEME_145
                 ); // use alternate scheme
        break;
    case DIS_ParaInstMM:
        hgcObj.pDIS_ParaInstMMObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ParaInstMM,      // button ID
                 GFX_STATICTEXT_LEFT_146,    // left
                 GFX_STATICTEXT_TOP_146,     // top
                 GFX_STATICTEXT_RIGHT_146,   // right
                 GFX_STATICTEXT_BOTTOM_146,  // bottom
                 GFX_STATICTEXT_STATE_146,   // state
                 (GFX_XCHAR*)staticTextStr_146,    // text
                 GFX_STATICTEXT_ALIGNMENT_146,       //alignment
                 GFX_STATICTEXT_SCHEME_146
                 ); // use alternate scheme
        break;
    case DIS_ParaInstPER:
        hgcObj.pDIS_ParaInstPERObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ParaInstPER,      // button ID
                 GFX_STATICTEXT_LEFT_147,    // left
                 GFX_STATICTEXT_TOP_147,     // top
                 GFX_STATICTEXT_RIGHT_147,   // right
                 GFX_STATICTEXT_BOTTOM_147,  // bottom
                 GFX_STATICTEXT_STATE_147,   // state
                 (GFX_XCHAR*)staticTextStr_147,    // text
                 GFX_STATICTEXT_ALIGNMENT_147,       //alignment
                 GFX_STATICTEXT_SCHEME_147
                 ); // use alternate scheme
        break;
    case DIS_ParaInstS:
        hgcObj.pDIS_ParaInstSObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ParaInstS,      // button ID
                 GFX_STATICTEXT_LEFT_148,    // left
                 GFX_STATICTEXT_TOP_148,     // top
                 GFX_STATICTEXT_RIGHT_148,   // right
                 GFX_STATICTEXT_BOTTOM_148,  // bottom
                 GFX_STATICTEXT_STATE_148,   // state
                 (GFX_XCHAR*)staticTextStr_148,    // text
                 GFX_STATICTEXT_ALIGNMENT_148,       //alignment
                 GFX_STATICTEXT_SCHEME_148
                 ); // use alternate scheme
        break;
    case DIS_ParaInstTime:
        hgcObj.pDIS_ParaInstTimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ParaInstTime,      // button ID
                 GFX_STATICTEXT_LEFT_149,    // left
                 GFX_STATICTEXT_TOP_149,     // top
                 GFX_STATICTEXT_RIGHT_149,   // right
                 GFX_STATICTEXT_BOTTOM_149,  // bottom
                 GFX_STATICTEXT_STATE_149,   // state
                 (GFX_XCHAR*)staticTextStr_149,    // text
                 GFX_STATICTEXT_ALIGNMENT_149,       //alignment
                 GFX_STATICTEXT_SCHEME_149
                 ); // use alternate scheme
        break;
    case DIS_ParaInstSpeed:
        hgcObj.pDIS_ParaInstSpeedObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ParaInstSpeed,      // button ID
                 GFX_STATICTEXT_LEFT_150,    // left
                 GFX_STATICTEXT_TOP_150,     // top
                 GFX_STATICTEXT_RIGHT_150,   // right
                 GFX_STATICTEXT_BOTTOM_150,  // bottom
                 GFX_STATICTEXT_STATE_150,   // state
                 (GFX_XCHAR*)staticTextStr_150,    // text
                 GFX_STATICTEXT_ALIGNMENT_150,       //alignment
                 GFX_STATICTEXT_SCHEME_150
                 ); // use alternate scheme
        break;
    case DIS_ParaInstDist:
        hgcObj.pDIS_ParaInstDistObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ParaInstDist,      // button ID
                 GFX_STATICTEXT_LEFT_151,    // left
                 GFX_STATICTEXT_TOP_151,     // top
                 GFX_STATICTEXT_RIGHT_151,   // right
                 GFX_STATICTEXT_BOTTOM_151,  // bottom
                 GFX_STATICTEXT_STATE_151,   // state
                 (GFX_XCHAR*)staticTextStr_151,    // text
                 GFX_STATICTEXT_ALIGNMENT_151,       //alignment
                 GFX_STATICTEXT_SCHEME_151
                 ); // use alternate scheme
        break;
    case DIS_ParaInstAct:
        hgcObj.pDIS_ParaInstActObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ParaInstAct,      // button ID
                 GFX_STATICTEXT_LEFT_152,    // left
                 GFX_STATICTEXT_TOP_152,     // top
                 GFX_STATICTEXT_RIGHT_152,   // right
                 GFX_STATICTEXT_BOTTOM_152,  // bottom
                 GFX_STATICTEXT_STATE_152,   // state
                 (GFX_XCHAR*)staticTextStr_152,    // text
                 GFX_STATICTEXT_ALIGNMENT_152,       //alignment
                 GFX_STATICTEXT_SCHEME_152
                 ); // use alternate scheme
        break;
    case STE_ParamCurrAct:
        hgcObj.pSTE_ParamCurrActObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ParamCurrAct,      // button ID
                 GFX_STATICTEXT_LEFT_153,    // left
                 GFX_STATICTEXT_TOP_153,     // top
                 GFX_STATICTEXT_RIGHT_153,   // right
                 GFX_STATICTEXT_BOTTOM_153,  // bottom
                 GFX_STATICTEXT_STATE_153,   // state
                 (GFX_XCHAR*)staticTextStr_153,    // text
                 GFX_STATICTEXT_ALIGNMENT_153,       //alignment
                 GFX_STATICTEXT_SCHEME_153
                 ); // use alternate scheme
        break;
    case STE_AlarmInfo1:
        hgcObj.pSTE_AlarmInfo1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_AlarmInfo1,      // button ID
                 GFX_STATICTEXT_LEFT_154,    // left
                 GFX_STATICTEXT_TOP_154,     // top
                 GFX_STATICTEXT_RIGHT_154,   // right
                 GFX_STATICTEXT_BOTTOM_154,  // bottom
                 GFX_STATICTEXT_STATE_154,   // state
                 (GFX_XCHAR*)staticTextStr_154,    // text
                 GFX_STATICTEXT_ALIGNMENT_154,       //alignment
                 GFX_STATICTEXT_SCHEME_154
                 ); // use alternate scheme
        break;
    case STE_AlarmInfo5:
        hgcObj.pSTE_AlarmInfo5Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_AlarmInfo5,      // button ID
                 GFX_STATICTEXT_LEFT_155,    // left
                 GFX_STATICTEXT_TOP_155,     // top
                 GFX_STATICTEXT_RIGHT_155,   // right
                 GFX_STATICTEXT_BOTTOM_155,  // bottom
                 GFX_STATICTEXT_STATE_155,   // state
                 (GFX_XCHAR*)staticTextStr_155,    // text
                 GFX_STATICTEXT_ALIGNMENT_155,       //alignment
                 GFX_STATICTEXT_SCHEME_155
                 ); // use alternate scheme
        break;
    case STE_AlarmInfo4:
        hgcObj.pSTE_AlarmInfo4Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_AlarmInfo4,      // button ID
                 GFX_STATICTEXT_LEFT_156,    // left
                 GFX_STATICTEXT_TOP_156,     // top
                 GFX_STATICTEXT_RIGHT_156,   // right
                 GFX_STATICTEXT_BOTTOM_156,  // bottom
                 GFX_STATICTEXT_STATE_156,   // state
                 (GFX_XCHAR*)staticTextStr_156,    // text
                 GFX_STATICTEXT_ALIGNMENT_156,       //alignment
                 GFX_STATICTEXT_SCHEME_156
                 ); // use alternate scheme
        break;
    case STE_AlarmInfo3:
        hgcObj.pSTE_AlarmInfo3Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_AlarmInfo3,      // button ID
                 GFX_STATICTEXT_LEFT_157,    // left
                 GFX_STATICTEXT_TOP_157,     // top
                 GFX_STATICTEXT_RIGHT_157,   // right
                 GFX_STATICTEXT_BOTTOM_157,  // bottom
                 GFX_STATICTEXT_STATE_157,   // state
                 (GFX_XCHAR*)staticTextStr_157,    // text
                 GFX_STATICTEXT_ALIGNMENT_157,       //alignment
                 GFX_STATICTEXT_SCHEME_157
                 ); // use alternate scheme
        break;
    case STE_AlarmInfo2:
        hgcObj.pSTE_AlarmInfo2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_AlarmInfo2,      // button ID
                 GFX_STATICTEXT_LEFT_158,    // left
                 GFX_STATICTEXT_TOP_158,     // top
                 GFX_STATICTEXT_RIGHT_158,   // right
                 GFX_STATICTEXT_BOTTOM_158,  // bottom
                 GFX_STATICTEXT_STATE_158,   // state
                 (GFX_XCHAR*)staticTextStr_158,    // text
                 GFX_STATICTEXT_ALIGNMENT_158,       //alignment
                 GFX_STATICTEXT_SCHEME_158
                 ); // use alternate scheme
        break;
    case DIS_AlaRptNO:
        hgcObj.pDIS_AlaRptNOObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_AlaRptNO,      // button ID
                 GFX_STATICTEXT_LEFT_159,    // left
                 GFX_STATICTEXT_TOP_159,     // top
                 GFX_STATICTEXT_RIGHT_159,   // right
                 GFX_STATICTEXT_BOTTOM_159,  // bottom
                 GFX_STATICTEXT_STATE_159,   // state
                 (GFX_XCHAR*)staticTextStr_159,    // text
                 GFX_STATICTEXT_ALIGNMENT_159,       //alignment
                 GFX_STATICTEXT_SCHEME_159
                 ); // use alternate scheme
        break;
    case STE_CycleTime5:
        hgcObj.pSTE_CycleTime5Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_CycleTime5,      // button ID
                 GFX_STATICTEXT_LEFT_160,    // left
                 GFX_STATICTEXT_TOP_160,     // top
                 GFX_STATICTEXT_RIGHT_160,   // right
                 GFX_STATICTEXT_BOTTOM_160,  // bottom
                 GFX_STATICTEXT_STATE_160,   // state
                 (GFX_XCHAR*)staticTextStr_160,    // text
                 GFX_STATICTEXT_ALIGNMENT_160,       //alignment
                 GFX_STATICTEXT_SCHEME_160
                 ); // use alternate scheme
        break;
    case STE_CycleTime4:
        hgcObj.pSTE_CycleTime4Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_CycleTime4,      // button ID
                 GFX_STATICTEXT_LEFT_161,    // left
                 GFX_STATICTEXT_TOP_161,     // top
                 GFX_STATICTEXT_RIGHT_161,   // right
                 GFX_STATICTEXT_BOTTOM_161,  // bottom
                 GFX_STATICTEXT_STATE_161,   // state
                 (GFX_XCHAR*)staticTextStr_161,    // text
                 GFX_STATICTEXT_ALIGNMENT_161,       //alignment
                 GFX_STATICTEXT_SCHEME_161
                 ); // use alternate scheme
        break;
    case STE_CycleTime3:
        hgcObj.pSTE_CycleTime3Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_CycleTime3,      // button ID
                 GFX_STATICTEXT_LEFT_162,    // left
                 GFX_STATICTEXT_TOP_162,     // top
                 GFX_STATICTEXT_RIGHT_162,   // right
                 GFX_STATICTEXT_BOTTOM_162,  // bottom
                 GFX_STATICTEXT_STATE_162,   // state
                 (GFX_XCHAR*)staticTextStr_162,    // text
                 GFX_STATICTEXT_ALIGNMENT_162,       //alignment
                 GFX_STATICTEXT_SCHEME_162
                 ); // use alternate scheme
        break;
    case STE_CycleTime2:
        hgcObj.pSTE_CycleTime2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_CycleTime2,      // button ID
                 GFX_STATICTEXT_LEFT_163,    // left
                 GFX_STATICTEXT_TOP_163,     // top
                 GFX_STATICTEXT_RIGHT_163,   // right
                 GFX_STATICTEXT_BOTTOM_163,  // bottom
                 GFX_STATICTEXT_STATE_163,   // state
                 (GFX_XCHAR*)staticTextStr_163,    // text
                 GFX_STATICTEXT_ALIGNMENT_163,       //alignment
                 GFX_STATICTEXT_SCHEME_163
                 ); // use alternate scheme
        break;
    case STE_CycleTime1:
        hgcObj.pSTE_CycleTime1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_CycleTime1,      // button ID
                 GFX_STATICTEXT_LEFT_164,    // left
                 GFX_STATICTEXT_TOP_164,     // top
                 GFX_STATICTEXT_RIGHT_164,   // right
                 GFX_STATICTEXT_BOTTOM_164,  // bottom
                 GFX_STATICTEXT_STATE_164,   // state
                 (GFX_XCHAR*)staticTextStr_164,    // text
                 GFX_STATICTEXT_ALIGNMENT_164,       //alignment
                 GFX_STATICTEXT_SCHEME_164
                 ); // use alternate scheme
        break;
    case CycTimRptNO:
        hgcObj.pCycTimRptNOObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 CycTimRptNO,      // button ID
                 GFX_STATICTEXT_LEFT_165,    // left
                 GFX_STATICTEXT_TOP_165,     // top
                 GFX_STATICTEXT_RIGHT_165,   // right
                 GFX_STATICTEXT_BOTTOM_165,  // bottom
                 GFX_STATICTEXT_STATE_165,   // state
                 (GFX_XCHAR*)staticTextStr_165,    // text
                 GFX_STATICTEXT_ALIGNMENT_165,       //alignment
                 GFX_STATICTEXT_SCHEME_165
                 ); // use alternate scheme
        break;
    case DIS_LinitTimReser2:
        hgcObj.pDIS_LinitTimReser2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_LinitTimReser2,      // button ID
                 GFX_STATICTEXT_LEFT_166,    // left
                 GFX_STATICTEXT_TOP_166,     // top
                 GFX_STATICTEXT_RIGHT_166,   // right
                 GFX_STATICTEXT_BOTTOM_166,  // bottom
                 GFX_STATICTEXT_STATE_166,   // state
                 (GFX_XCHAR*)staticTextStr_166,    // text
                 GFX_STATICTEXT_ALIGNMENT_166,       //alignment
                 GFX_STATICTEXT_SCHEME_166
                 ); // use alternate scheme
        break;
    case DIS_LinitTimProcess1:
        hgcObj.pDIS_LinitTimProcess1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_LinitTimProcess1,      // button ID
                 GFX_STATICTEXT_LEFT_167,    // left
                 GFX_STATICTEXT_TOP_167,     // top
                 GFX_STATICTEXT_RIGHT_167,   // right
                 GFX_STATICTEXT_BOTTOM_167,  // bottom
                 GFX_STATICTEXT_STATE_167,   // state
                 (GFX_XCHAR*)staticTextStr_167,    // text
                 GFX_STATICTEXT_ALIGNMENT_167,       //alignment
                 GFX_STATICTEXT_SCHEME_167
                 ); // use alternate scheme
        break;
    case DIS_LinitTimPosture:
        hgcObj.pDIS_LinitTimPostureObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_LinitTimPosture,      // button ID
                 GFX_STATICTEXT_LEFT_168,    // left
                 GFX_STATICTEXT_TOP_168,     // top
                 GFX_STATICTEXT_RIGHT_168,   // right
                 GFX_STATICTEXT_BOTTOM_168,  // bottom
                 GFX_STATICTEXT_STATE_168,   // state
                 (GFX_XCHAR*)staticTextStr_168,    // text
                 GFX_STATICTEXT_ALIGNMENT_168,       //alignment
                 GFX_STATICTEXT_SCHEME_168
                 ); // use alternate scheme
        break;
    case DIS_LinitTimTrav:
        hgcObj.pDIS_LinitTimTravObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_LinitTimTrav,      // button ID
                 GFX_STATICTEXT_LEFT_169,    // left
                 GFX_STATICTEXT_TOP_169,     // top
                 GFX_STATICTEXT_RIGHT_169,   // right
                 GFX_STATICTEXT_BOTTOM_169,  // bottom
                 GFX_STATICTEXT_STATE_169,   // state
                 (GFX_XCHAR*)staticTextStr_169,    // text
                 GFX_STATICTEXT_ALIGNMENT_169,       //alignment
                 GFX_STATICTEXT_SCHEME_169
                 ); // use alternate scheme
        break;
    case DIS_LinitTimViceForwBk:
        hgcObj.pDIS_LinitTimViceForwBkObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_LinitTimViceForwBk,      // button ID
                 GFX_STATICTEXT_LEFT_170,    // left
                 GFX_STATICTEXT_TOP_170,     // top
                 GFX_STATICTEXT_RIGHT_170,   // right
                 GFX_STATICTEXT_BOTTOM_170,  // bottom
                 GFX_STATICTEXT_STATE_170,   // state
                 (GFX_XCHAR*)staticTextStr_170,    // text
                 GFX_STATICTEXT_ALIGNMENT_170,       //alignment
                 GFX_STATICTEXT_SCHEME_170
                 ); // use alternate scheme
        break;
    case DIS_LinitTimViceUpDown:
        hgcObj.pDIS_LinitTimViceUpDownObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_LinitTimViceUpDown,      // button ID
                 GFX_STATICTEXT_LEFT_171,    // left
                 GFX_STATICTEXT_TOP_171,     // top
                 GFX_STATICTEXT_RIGHT_171,   // right
                 GFX_STATICTEXT_BOTTOM_171,  // bottom
                 GFX_STATICTEXT_STATE_171,   // state
                 (GFX_XCHAR*)staticTextStr_171,    // text
                 GFX_STATICTEXT_ALIGNMENT_171,       //alignment
                 GFX_STATICTEXT_SCHEME_171
                 ); // use alternate scheme
        break;
    case DIS_LinitTimMainForwBk:
        hgcObj.pDIS_LinitTimMainForwBkObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_LinitTimMainForwBk,      // button ID
                 GFX_STATICTEXT_LEFT_172,    // left
                 GFX_STATICTEXT_TOP_172,     // top
                 GFX_STATICTEXT_RIGHT_172,   // right
                 GFX_STATICTEXT_BOTTOM_172,  // bottom
                 GFX_STATICTEXT_STATE_172,   // state
                 (GFX_XCHAR*)staticTextStr_172,    // text
                 GFX_STATICTEXT_ALIGNMENT_172,       //alignment
                 GFX_STATICTEXT_SCHEME_172
                 ); // use alternate scheme
        break;
    case DIS_LinitTimMainUpDown:
        hgcObj.pDIS_LinitTimMainUpDownObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_LinitTimMainUpDown,      // button ID
                 GFX_STATICTEXT_LEFT_173,    // left
                 GFX_STATICTEXT_TOP_173,     // top
                 GFX_STATICTEXT_RIGHT_173,   // right
                 GFX_STATICTEXT_BOTTOM_173,  // bottom
                 GFX_STATICTEXT_STATE_173,   // state
                 (GFX_XCHAR*)staticTextStr_173,    // text
                 GFX_STATICTEXT_ALIGNMENT_173,       //alignment
                 GFX_STATICTEXT_SCHEME_173
                 ); // use alternate scheme
        break;
    case DIS_MacLimitFreqDecel:
        hgcObj.pDIS_MacLimitFreqDecelObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MacLimitFreqDecel,      // button ID
                 GFX_STATICTEXT_LEFT_174,    // left
                 GFX_STATICTEXT_TOP_174,     // top
                 GFX_STATICTEXT_RIGHT_174,   // right
                 GFX_STATICTEXT_BOTTOM_174,  // bottom
                 GFX_STATICTEXT_STATE_174,   // state
                 (GFX_XCHAR*)staticTextStr_174,    // text
                 GFX_STATICTEXT_ALIGNMENT_174,       //alignment
                 GFX_STATICTEXT_SCHEME_174
                 ); // use alternate scheme
        break;
    case DIS_MacLimitViceDown:
        hgcObj.pDIS_MacLimitViceDownObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MacLimitViceDown,      // button ID
                 GFX_STATICTEXT_LEFT_175,    // left
                 GFX_STATICTEXT_TOP_175,     // top
                 GFX_STATICTEXT_RIGHT_175,   // right
                 GFX_STATICTEXT_BOTTOM_175,  // bottom
                 GFX_STATICTEXT_STATE_175,   // state
                 (GFX_XCHAR*)staticTextStr_175,    // text
                 GFX_STATICTEXT_ALIGNMENT_175,       //alignment
                 GFX_STATICTEXT_SCHEME_175
                 ); // use alternate scheme
        break;
    case DIS_MacLimitMainBack:
        hgcObj.pDIS_MacLimitMainBackObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MacLimitMainBack,      // button ID
                 GFX_STATICTEXT_LEFT_176,    // left
                 GFX_STATICTEXT_TOP_176,     // top
                 GFX_STATICTEXT_RIGHT_176,   // right
                 GFX_STATICTEXT_BOTTOM_176,  // bottom
                 GFX_STATICTEXT_STATE_176,   // state
                 (GFX_XCHAR*)staticTextStr_176,    // text
                 GFX_STATICTEXT_ALIGNMENT_176,       //alignment
                 GFX_STATICTEXT_SCHEME_176
                 ); // use alternate scheme
        break;
    case DIS_MacLimitMainFrow:
        hgcObj.pDIS_MacLimitMainFrowObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MacLimitMainFrow,      // button ID
                 GFX_STATICTEXT_LEFT_177,    // left
                 GFX_STATICTEXT_TOP_177,     // top
                 GFX_STATICTEXT_RIGHT_177,   // right
                 GFX_STATICTEXT_BOTTOM_177,  // bottom
                 GFX_STATICTEXT_STATE_177,   // state
                 (GFX_XCHAR*)staticTextStr_177,    // text
                 GFX_STATICTEXT_ALIGNMENT_177,       //alignment
                 GFX_STATICTEXT_SCHEME_177
                 ); // use alternate scheme
        break;
    case DIS_MacLimitMainDown:
        hgcObj.pDIS_MacLimitMainDownObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MacLimitMainDown,      // button ID
                 GFX_STATICTEXT_LEFT_178,    // left
                 GFX_STATICTEXT_TOP_178,     // top
                 GFX_STATICTEXT_RIGHT_178,   // right
                 GFX_STATICTEXT_BOTTOM_178,  // bottom
                 GFX_STATICTEXT_STATE_178,   // state
                 (GFX_XCHAR*)staticTextStr_178,    // text
                 GFX_STATICTEXT_ALIGNMENT_178,       //alignment
                 GFX_STATICTEXT_SCHEME_178
                 ); // use alternate scheme
        break;
    case DIS_MacLimitTravAxis:
        hgcObj.pDIS_MacLimitTravAxisObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MacLimitTravAxis,      // button ID
                 GFX_STATICTEXT_LEFT_179,    // left
                 GFX_STATICTEXT_TOP_179,     // top
                 GFX_STATICTEXT_RIGHT_179,   // right
                 GFX_STATICTEXT_BOTTOM_179,  // bottom
                 GFX_STATICTEXT_STATE_179,   // state
                 (GFX_XCHAR*)staticTextStr_179,    // text
                 GFX_STATICTEXT_ALIGNMENT_179,       //alignment
                 GFX_STATICTEXT_SCHEME_179
                 ); // use alternate scheme
        break;
    case DIS_MacLimitFBPulse:
        hgcObj.pDIS_MacLimitFBPulseObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MacLimitFBPulse,      // button ID
                 GFX_STATICTEXT_LEFT_180,    // left
                 GFX_STATICTEXT_TOP_180,     // top
                 GFX_STATICTEXT_RIGHT_180,   // right
                 GFX_STATICTEXT_BOTTOM_180,  // bottom
                 GFX_STATICTEXT_STATE_180,   // state
                 (GFX_XCHAR*)staticTextStr_180,    // text
                 GFX_STATICTEXT_ALIGNMENT_180,       //alignment
                 GFX_STATICTEXT_SCHEME_180
                 ); // use alternate scheme
        break;
    case DIS_MacLimitViceBack:
        hgcObj.pDIS_MacLimitViceBackObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MacLimitViceBack,      // button ID
                 GFX_STATICTEXT_LEFT_181,    // left
                 GFX_STATICTEXT_TOP_181,     // top
                 GFX_STATICTEXT_RIGHT_181,   // right
                 GFX_STATICTEXT_BOTTOM_181,  // bottom
                 GFX_STATICTEXT_STATE_181,   // state
                 (GFX_XCHAR*)staticTextStr_181,    // text
                 GFX_STATICTEXT_ALIGNMENT_181,       //alignment
                 GFX_STATICTEXT_SCHEME_181
                 ); // use alternate scheme
        break;
    case DIS_MacLimitViceForw:
        hgcObj.pDIS_MacLimitViceForwObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MacLimitViceForw,      // button ID
                 GFX_STATICTEXT_LEFT_182,    // left
                 GFX_STATICTEXT_TOP_182,     // top
                 GFX_STATICTEXT_RIGHT_182,   // right
                 GFX_STATICTEXT_BOTTOM_182,  // bottom
                 GFX_STATICTEXT_STATE_182,   // state
                 (GFX_XCHAR*)staticTextStr_182,    // text
                 GFX_STATICTEXT_ALIGNMENT_182,       //alignment
                 GFX_STATICTEXT_SCHEME_182
                 ); // use alternate scheme
        break;
    case STE_FBPulse:
        hgcObj.pSTE_FBPulseObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_FBPulse,      // button ID
                 GFX_STATICTEXT_LEFT_183,    // left
                 GFX_STATICTEXT_TOP_183,     // top
                 GFX_STATICTEXT_RIGHT_183,   // right
                 GFX_STATICTEXT_BOTTOM_183,  // bottom
                 GFX_STATICTEXT_STATE_183,   // state
                 (GFX_XCHAR*)staticTextStr_183,    // text
                 GFX_STATICTEXT_ALIGNMENT_183,       //alignment
                 GFX_STATICTEXT_SCHEME_183
                 ); // use alternate scheme
        break;
    case STE_FreqDecel:
        hgcObj.pSTE_FreqDecelObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_FreqDecel,      // button ID
                 GFX_STATICTEXT_LEFT_184,    // left
                 GFX_STATICTEXT_TOP_184,     // top
                 GFX_STATICTEXT_RIGHT_184,   // right
                 GFX_STATICTEXT_BOTTOM_184,  // bottom
                 GFX_STATICTEXT_STATE_184,   // state
                 (GFX_XCHAR*)staticTextStr_184,    // text
                 GFX_STATICTEXT_ALIGNMENT_184,       //alignment
                 GFX_STATICTEXT_SCHEME_184
                 ); // use alternate scheme
        break;
    case STE_ViceBack:
        hgcObj.pSTE_ViceBackObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ViceBack,      // button ID
                 GFX_STATICTEXT_LEFT_185,    // left
                 GFX_STATICTEXT_TOP_185,     // top
                 GFX_STATICTEXT_RIGHT_185,   // right
                 GFX_STATICTEXT_BOTTOM_185,  // bottom
                 GFX_STATICTEXT_STATE_185,   // state
                 (GFX_XCHAR*)staticTextStr_185,    // text
                 GFX_STATICTEXT_ALIGNMENT_185,       //alignment
                 GFX_STATICTEXT_SCHEME_185
                 ); // use alternate scheme
        break;
    case STE_ViceForw:
        hgcObj.pSTE_ViceForwObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ViceForw,      // button ID
                 GFX_STATICTEXT_LEFT_186,    // left
                 GFX_STATICTEXT_TOP_186,     // top
                 GFX_STATICTEXT_RIGHT_186,   // right
                 GFX_STATICTEXT_BOTTOM_186,  // bottom
                 GFX_STATICTEXT_STATE_186,   // state
                 (GFX_XCHAR*)staticTextStr_186,    // text
                 GFX_STATICTEXT_ALIGNMENT_186,       //alignment
                 GFX_STATICTEXT_SCHEME_186
                 ); // use alternate scheme
        break;
    case STE_ViceDown:
        hgcObj.pSTE_ViceDownObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ViceDown,      // button ID
                 GFX_STATICTEXT_LEFT_187,    // left
                 GFX_STATICTEXT_TOP_187,     // top
                 GFX_STATICTEXT_RIGHT_187,   // right
                 GFX_STATICTEXT_BOTTOM_187,  // bottom
                 GFX_STATICTEXT_STATE_187,   // state
                 (GFX_XCHAR*)staticTextStr_187,    // text
                 GFX_STATICTEXT_ALIGNMENT_187,       //alignment
                 GFX_STATICTEXT_SCHEME_187
                 ); // use alternate scheme
        break;
    case STE_MainBack:
        hgcObj.pSTE_MainBackObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MainBack,      // button ID
                 GFX_STATICTEXT_LEFT_188,    // left
                 GFX_STATICTEXT_TOP_188,     // top
                 GFX_STATICTEXT_RIGHT_188,   // right
                 GFX_STATICTEXT_BOTTOM_188,  // bottom
                 GFX_STATICTEXT_STATE_188,   // state
                 (GFX_XCHAR*)staticTextStr_188,    // text
                 GFX_STATICTEXT_ALIGNMENT_188,       //alignment
                 GFX_STATICTEXT_SCHEME_188
                 ); // use alternate scheme
        break;
    case STE_MainForw:
        hgcObj.pSTE_MainForwObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MainForw,      // button ID
                 GFX_STATICTEXT_LEFT_189,    // left
                 GFX_STATICTEXT_TOP_189,     // top
                 GFX_STATICTEXT_RIGHT_189,   // right
                 GFX_STATICTEXT_BOTTOM_189,  // bottom
                 GFX_STATICTEXT_STATE_189,   // state
                 (GFX_XCHAR*)staticTextStr_189,    // text
                 GFX_STATICTEXT_ALIGNMENT_189,       //alignment
                 GFX_STATICTEXT_SCHEME_189
                 ); // use alternate scheme
        break;
    case STE_MainDown:
        hgcObj.pSTE_MainDownObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_MainDown,      // button ID
                 GFX_STATICTEXT_LEFT_190,    // left
                 GFX_STATICTEXT_TOP_190,     // top
                 GFX_STATICTEXT_RIGHT_190,   // right
                 GFX_STATICTEXT_BOTTOM_190,  // bottom
                 GFX_STATICTEXT_STATE_190,   // state
                 (GFX_XCHAR*)staticTextStr_190,    // text
                 GFX_STATICTEXT_ALIGNMENT_190,       //alignment
                 GFX_STATICTEXT_SCHEME_190
                 ); // use alternate scheme
        break;
    case STE_TravAxis:
        hgcObj.pSTE_TravAxisObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_TravAxis,      // button ID
                 GFX_STATICTEXT_LEFT_191,    // left
                 GFX_STATICTEXT_TOP_191,     // top
                 GFX_STATICTEXT_RIGHT_191,   // right
                 GFX_STATICTEXT_BOTTOM_191,  // bottom
                 GFX_STATICTEXT_STATE_191,   // state
                 (GFX_XCHAR*)staticTextStr_191,    // text
                 GFX_STATICTEXT_ALIGNMENT_191,       //alignment
                 GFX_STATICTEXT_SCHEME_191
                 ); // use alternate scheme
        break;
    case DIS_InWatchTravOutLmt:
        hgcObj.pDIS_InWatchTravOutLmtObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchTravOutLmt,      // button ID
                 GFX_STATICTEXT_LEFT_192,    // left
                 GFX_STATICTEXT_TOP_192,     // top
                 GFX_STATICTEXT_RIGHT_192,   // right
                 GFX_STATICTEXT_BOTTOM_192,  // bottom
                 GFX_STATICTEXT_STATE_192,   // state
                 (GFX_XCHAR*)staticTextStr_192,    // text
                 GFX_STATICTEXT_ALIGNMENT_192,       //alignment
                 GFX_STATICTEXT_SCHEME_192
                 ); // use alternate scheme
        break;
    case DIS_InWatchTravInLmt:
        hgcObj.pDIS_InWatchTravInLmtObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchTravInLmt,      // button ID
                 GFX_STATICTEXT_LEFT_193,    // left
                 GFX_STATICTEXT_TOP_193,     // top
                 GFX_STATICTEXT_RIGHT_193,   // right
                 GFX_STATICTEXT_BOTTOM_193,  // bottom
                 GFX_STATICTEXT_STATE_193,   // state
                 (GFX_XCHAR*)staticTextStr_193,    // text
                 GFX_STATICTEXT_ALIGNMENT_193,       //alignment
                 GFX_STATICTEXT_SCHEME_193
                 ); // use alternate scheme
        break;
    case DIS_InWatchZOrigin:
        hgcObj.pDIS_InWatchZOriginObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchZOrigin,      // button ID
                 GFX_STATICTEXT_LEFT_194,    // left
                 GFX_STATICTEXT_TOP_194,     // top
                 GFX_STATICTEXT_RIGHT_194,   // right
                 GFX_STATICTEXT_BOTTOM_194,  // bottom
                 GFX_STATICTEXT_STATE_194,   // state
                 (GFX_XCHAR*)staticTextStr_194,    // text
                 GFX_STATICTEXT_ALIGNMENT_194,       //alignment
                 GFX_STATICTEXT_SCHEME_194
                 ); // use alternate scheme
        break;
    case DIS_InWatchOutSafe:
        hgcObj.pDIS_InWatchOutSafeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchOutSafe,      // button ID
                 GFX_STATICTEXT_LEFT_195,    // left
                 GFX_STATICTEXT_TOP_195,     // top
                 GFX_STATICTEXT_RIGHT_195,   // right
                 GFX_STATICTEXT_BOTTOM_195,  // bottom
                 GFX_STATICTEXT_STATE_195,   // state
                 (GFX_XCHAR*)staticTextStr_195,    // text
                 GFX_STATICTEXT_ALIGNMENT_195,       //alignment
                 GFX_STATICTEXT_SCHEME_195
                 ); // use alternate scheme
        break;
    case DIS_InWatchInSafe:
        hgcObj.pDIS_InWatchInSafeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchInSafe,      // button ID
                 GFX_STATICTEXT_LEFT_196,    // left
                 GFX_STATICTEXT_TOP_196,     // top
                 GFX_STATICTEXT_RIGHT_196,   // right
                 GFX_STATICTEXT_BOTTOM_196,  // bottom
                 GFX_STATICTEXT_STATE_196,   // state
                 (GFX_XCHAR*)staticTextStr_196,    // text
                 GFX_STATICTEXT_ALIGNMENT_196,       //alignment
                 GFX_STATICTEXT_SCHEME_196
                 ); // use alternate scheme
        break;
    case DIS_InWatchCheckPress:
        hgcObj.pDIS_InWatchCheckPressObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchCheckPress,      // button ID
                 GFX_STATICTEXT_LEFT_197,    // left
                 GFX_STATICTEXT_TOP_197,     // top
                 GFX_STATICTEXT_RIGHT_197,   // right
                 GFX_STATICTEXT_BOTTOM_197,  // bottom
                 GFX_STATICTEXT_STATE_197,   // state
                 (GFX_XCHAR*)staticTextStr_197,    // text
                 GFX_STATICTEXT_ALIGNMENT_197,       //alignment
                 GFX_STATICTEXT_SCHEME_197
                 ); // use alternate scheme
        break;
    case DIS_InWatchInjection:
        hgcObj.pDIS_InWatchInjectionObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchInjection,      // button ID
                 GFX_STATICTEXT_LEFT_198,    // left
                 GFX_STATICTEXT_TOP_198,     // top
                 GFX_STATICTEXT_RIGHT_198,   // right
                 GFX_STATICTEXT_BOTTOM_198,  // bottom
                 GFX_STATICTEXT_STATE_198,   // state
                 (GFX_XCHAR*)staticTextStr_198,    // text
                 GFX_STATICTEXT_ALIGNMENT_198,       //alignment
                 GFX_STATICTEXT_SCHEME_198
                 ); // use alternate scheme
        break;
    case DIS_InWatchUpMax:
        hgcObj.pDIS_InWatchUpMaxObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchUpMax,      // button ID
                 GFX_STATICTEXT_LEFT_199,    // left
                 GFX_STATICTEXT_TOP_199,     // top
                 GFX_STATICTEXT_RIGHT_199,   // right
                 GFX_STATICTEXT_BOTTOM_199,  // bottom
                 GFX_STATICTEXT_STATE_199,   // state
                 (GFX_XCHAR*)staticTextStr_199,    // text
                 GFX_STATICTEXT_ALIGNMENT_199,       //alignment
                 GFX_STATICTEXT_SCHEME_199
                 ); // use alternate scheme
        break;
    case DIS_InWatchDownMax:
        hgcObj.pDIS_InWatchDownMaxObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchDownMax,      // button ID
                 GFX_STATICTEXT_LEFT_200,    // left
                 GFX_STATICTEXT_TOP_200,     // top
                 GFX_STATICTEXT_RIGHT_200,   // right
                 GFX_STATICTEXT_BOTTOM_200,  // bottom
                 GFX_STATICTEXT_STATE_200,   // state
                 (GFX_XCHAR*)staticTextStr_200,    // text
                 GFX_STATICTEXT_ALIGNMENT_200,       //alignment
                 GFX_STATICTEXT_SCHEME_200
                 ); // use alternate scheme
        break;
    case DIS_InWatchMainBack:
        hgcObj.pDIS_InWatchMainBackObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchMainBack,      // button ID
                 GFX_STATICTEXT_LEFT_201,    // left
                 GFX_STATICTEXT_TOP_201,     // top
                 GFX_STATICTEXT_RIGHT_201,   // right
                 GFX_STATICTEXT_BOTTOM_201,  // bottom
                 GFX_STATICTEXT_STATE_201,   // state
                 (GFX_XCHAR*)staticTextStr_201,    // text
                 GFX_STATICTEXT_ALIGNMENT_201,       //alignment
                 GFX_STATICTEXT_SCHEME_201
                 ); // use alternate scheme
        break;
    case DIS_InWatchMainForw:
        hgcObj.pDIS_InWatchMainForwObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchMainForw,      // button ID
                 GFX_STATICTEXT_LEFT_202,    // left
                 GFX_STATICTEXT_TOP_202,     // top
                 GFX_STATICTEXT_RIGHT_202,   // right
                 GFX_STATICTEXT_BOTTOM_202,  // bottom
                 GFX_STATICTEXT_STATE_202,   // state
                 (GFX_XCHAR*)staticTextStr_202,    // text
                 GFX_STATICTEXT_ALIGNMENT_202,       //alignment
                 GFX_STATICTEXT_SCHEME_202
                 ); // use alternate scheme
        break;
    case DIS_InWatchVacuum:
        hgcObj.pDIS_InWatchVacuumObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchVacuum,      // button ID
                 GFX_STATICTEXT_LEFT_203,    // left
                 GFX_STATICTEXT_TOP_203,     // top
                 GFX_STATICTEXT_RIGHT_203,   // right
                 GFX_STATICTEXT_BOTTOM_203,  // bottom
                 GFX_STATICTEXT_STATE_203,   // state
                 (GFX_XCHAR*)staticTextStr_203,    // text
                 GFX_STATICTEXT_ALIGNMENT_203,       //alignment
                 GFX_STATICTEXT_SCHEME_203
                 ); // use alternate scheme
        break;
    case DIS_InWatchHold:
        hgcObj.pDIS_InWatchHoldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchHold,      // button ID
                 GFX_STATICTEXT_LEFT_204,    // left
                 GFX_STATICTEXT_TOP_204,     // top
                 GFX_STATICTEXT_RIGHT_204,   // right
                 GFX_STATICTEXT_BOTTOM_204,  // bottom
                 GFX_STATICTEXT_STATE_204,   // state
                 (GFX_XCHAR*)staticTextStr_204,    // text
                 GFX_STATICTEXT_ALIGNMENT_204,       //alignment
                 GFX_STATICTEXT_SCHEME_204
                 ); // use alternate scheme
        break;
    case DIS_InWatchMainFix:
        hgcObj.pDIS_InWatchMainFixObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchMainFix,      // button ID
                 GFX_STATICTEXT_LEFT_205,    // left
                 GFX_STATICTEXT_TOP_205,     // top
                 GFX_STATICTEXT_RIGHT_205,   // right
                 GFX_STATICTEXT_BOTTOM_205,  // bottom
                 GFX_STATICTEXT_STATE_205,   // state
                 (GFX_XCHAR*)staticTextStr_205,    // text
                 GFX_STATICTEXT_ALIGNMENT_205,       //alignment
                 GFX_STATICTEXT_SCHEME_205
                 ); // use alternate scheme
        break;
    case DIS_InWatchVerti:
        hgcObj.pDIS_InWatchVertiObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchVerti,      // button ID
                 GFX_STATICTEXT_LEFT_206,    // left
                 GFX_STATICTEXT_TOP_206,     // top
                 GFX_STATICTEXT_RIGHT_206,   // right
                 GFX_STATICTEXT_BOTTOM_206,  // bottom
                 GFX_STATICTEXT_STATE_206,   // state
                 (GFX_XCHAR*)staticTextStr_206,    // text
                 GFX_STATICTEXT_ALIGNMENT_206,       //alignment
                 GFX_STATICTEXT_SCHEME_206
                 ); // use alternate scheme
        break;
    case DIS_InWatchHori:
        hgcObj.pDIS_InWatchHoriObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchHori,      // button ID
                 GFX_STATICTEXT_LEFT_207,    // left
                 GFX_STATICTEXT_TOP_207,     // top
                 GFX_STATICTEXT_RIGHT_207,   // right
                 GFX_STATICTEXT_BOTTOM_207,  // bottom
                 GFX_STATICTEXT_STATE_207,   // state
                 (GFX_XCHAR*)staticTextStr_207,    // text
                 GFX_STATICTEXT_ALIGNMENT_207,       //alignment
                 GFX_STATICTEXT_SCHEME_207
                 ); // use alternate scheme
        break;
    case DIS_InWatchReserv2:
        hgcObj.pDIS_InWatchReserv2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchReserv2,      // button ID
                 GFX_STATICTEXT_LEFT_208,    // left
                 GFX_STATICTEXT_TOP_208,     // top
                 GFX_STATICTEXT_RIGHT_208,   // right
                 GFX_STATICTEXT_BOTTOM_208,  // bottom
                 GFX_STATICTEXT_STATE_208,   // state
                 (GFX_XCHAR*)staticTextStr_208,    // text
                 GFX_STATICTEXT_ALIGNMENT_208,       //alignment
                 GFX_STATICTEXT_SCHEME_208
                 ); // use alternate scheme
        break;
    case DIS_InWatchProcess1:
        hgcObj.pDIS_InWatchProcess1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchProcess1,      // button ID
                 GFX_STATICTEXT_LEFT_209,    // left
                 GFX_STATICTEXT_TOP_209,     // top
                 GFX_STATICTEXT_RIGHT_209,   // right
                 GFX_STATICTEXT_BOTTOM_209,  // bottom
                 GFX_STATICTEXT_STATE_209,   // state
                 (GFX_XCHAR*)staticTextStr_209,    // text
                 GFX_STATICTEXT_ALIGNMENT_209,       //alignment
                 GFX_STATICTEXT_SCHEME_209
                 ); // use alternate scheme
        break;
    case DIS_InWatchYOrigin:
        hgcObj.pDIS_InWatchYOriginObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchYOrigin,      // button ID
                 GFX_STATICTEXT_LEFT_210,    // left
                 GFX_STATICTEXT_TOP_210,     // top
                 GFX_STATICTEXT_RIGHT_210,   // right
                 GFX_STATICTEXT_BOTTOM_210,  // bottom
                 GFX_STATICTEXT_STATE_210,   // state
                 (GFX_XCHAR*)staticTextStr_210,    // text
                 GFX_STATICTEXT_ALIGNMENT_210,       //alignment
                 GFX_STATICTEXT_SCHEME_210
                 ); // use alternate scheme
        break;
    case DIS_InWatchSubFix:
        hgcObj.pDIS_InWatchSubFixObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchSubFix,      // button ID
                 GFX_STATICTEXT_LEFT_211,    // left
                 GFX_STATICTEXT_TOP_211,     // top
                 GFX_STATICTEXT_RIGHT_211,   // right
                 GFX_STATICTEXT_BOTTOM_211,  // bottom
                 GFX_STATICTEXT_STATE_211,   // state
                 (GFX_XCHAR*)staticTextStr_211,    // text
                 GFX_STATICTEXT_ALIGNMENT_211,       //alignment
                 GFX_STATICTEXT_SCHEME_211
                 ); // use alternate scheme
        break;
    case DIS_InWatchViceDown:
        hgcObj.pDIS_InWatchViceDownObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchViceDown,      // button ID
                 GFX_STATICTEXT_LEFT_212,    // left
                 GFX_STATICTEXT_TOP_212,     // top
                 GFX_STATICTEXT_RIGHT_212,   // right
                 GFX_STATICTEXT_BOTTOM_212,  // bottom
                 GFX_STATICTEXT_STATE_212,   // state
                 (GFX_XCHAR*)staticTextStr_212,    // text
                 GFX_STATICTEXT_ALIGNMENT_212,       //alignment
                 GFX_STATICTEXT_SCHEME_212
                 ); // use alternate scheme
        break;
    case DIS_InWatchSubUp:
        hgcObj.pDIS_InWatchSubUpObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchSubUp,      // button ID
                 GFX_STATICTEXT_LEFT_213,    // left
                 GFX_STATICTEXT_TOP_213,     // top
                 GFX_STATICTEXT_RIGHT_213,   // right
                 GFX_STATICTEXT_BOTTOM_213,  // bottom
                 GFX_STATICTEXT_STATE_213,   // state
                 (GFX_XCHAR*)staticTextStr_213,    // text
                 GFX_STATICTEXT_ALIGNMENT_213,       //alignment
                 GFX_STATICTEXT_SCHEME_213
                 ); // use alternate scheme
        break;
    case DIS_InWatchViceBack:
        hgcObj.pDIS_InWatchViceBackObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchViceBack,      // button ID
                 GFX_STATICTEXT_LEFT_214,    // left
                 GFX_STATICTEXT_TOP_214,     // top
                 GFX_STATICTEXT_RIGHT_214,   // right
                 GFX_STATICTEXT_BOTTOM_214,  // bottom
                 GFX_STATICTEXT_STATE_214,   // state
                 (GFX_XCHAR*)staticTextStr_214,    // text
                 GFX_STATICTEXT_ALIGNMENT_214,       //alignment
                 GFX_STATICTEXT_SCHEME_214
                 ); // use alternate scheme
        break;
    case DIS_InWatchEmergency:
        hgcObj.pDIS_InWatchEmergencyObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchEmergency,      // button ID
                 GFX_STATICTEXT_LEFT_215,    // left
                 GFX_STATICTEXT_TOP_215,     // top
                 GFX_STATICTEXT_RIGHT_215,   // right
                 GFX_STATICTEXT_BOTTOM_215,  // bottom
                 GFX_STATICTEXT_STATE_215,   // state
                 (GFX_XCHAR*)staticTextStr_215,    // text
                 GFX_STATICTEXT_ALIGNMENT_215,       //alignment
                 GFX_STATICTEXT_SCHEME_215
                 ); // use alternate scheme
        break;
    case DIS_InWatchThimble:
        hgcObj.pDIS_InWatchThimbleObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchThimble,      // button ID
                 GFX_STATICTEXT_LEFT_216,    // left
                 GFX_STATICTEXT_TOP_216,     // top
                 GFX_STATICTEXT_RIGHT_216,   // right
                 GFX_STATICTEXT_BOTTOM_216,  // bottom
                 GFX_STATICTEXT_STATE_216,   // state
                 (GFX_XCHAR*)staticTextStr_216,    // text
                 GFX_STATICTEXT_ALIGNMENT_216,       //alignment
                 GFX_STATICTEXT_SCHEME_216
                 ); // use alternate scheme
        break;
    case DIS_InWatchMidMold:
        hgcObj.pDIS_InWatchMidMoldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchMidMold,      // button ID
                 GFX_STATICTEXT_LEFT_217,    // left
                 GFX_STATICTEXT_TOP_217,     // top
                 GFX_STATICTEXT_RIGHT_217,   // right
                 GFX_STATICTEXT_BOTTOM_217,  // bottom
                 GFX_STATICTEXT_STATE_217,   // state
                 (GFX_XCHAR*)staticTextStr_217,    // text
                 GFX_STATICTEXT_ALIGNMENT_217,       //alignment
                 GFX_STATICTEXT_SCHEME_217
                 ); // use alternate scheme
        break;
    case DIS_InWatchAuto:
        hgcObj.pDIS_InWatchAutoObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchAuto,      // button ID
                 GFX_STATICTEXT_LEFT_218,    // left
                 GFX_STATICTEXT_TOP_218,     // top
                 GFX_STATICTEXT_RIGHT_218,   // right
                 GFX_STATICTEXT_BOTTOM_218,  // bottom
                 GFX_STATICTEXT_STATE_218,   // state
                 (GFX_XCHAR*)staticTextStr_218,    // text
                 GFX_STATICTEXT_ALIGNMENT_218,       //alignment
                 GFX_STATICTEXT_SCHEME_218
                 ); // use alternate scheme
        break;
    case DIS_InWatchDefPro:
        hgcObj.pDIS_InWatchDefProObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchDefPro,      // button ID
                 GFX_STATICTEXT_LEFT_219,    // left
                 GFX_STATICTEXT_TOP_219,     // top
                 GFX_STATICTEXT_RIGHT_219,   // right
                 GFX_STATICTEXT_BOTTOM_219,  // bottom
                 GFX_STATICTEXT_STATE_219,   // state
                 (GFX_XCHAR*)staticTextStr_219,    // text
                 GFX_STATICTEXT_ALIGNMENT_219,       //alignment
                 GFX_STATICTEXT_SCHEME_219
                 ); // use alternate scheme
        break;
    case DIS_InWatchCloseF:
        hgcObj.pDIS_InWatchCloseFObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchCloseF,      // button ID
                 GFX_STATICTEXT_LEFT_220,    // left
                 GFX_STATICTEXT_TOP_220,     // top
                 GFX_STATICTEXT_RIGHT_220,   // right
                 GFX_STATICTEXT_BOTTOM_220,  // bottom
                 GFX_STATICTEXT_STATE_220,   // state
                 (GFX_XCHAR*)staticTextStr_220,    // text
                 GFX_STATICTEXT_ALIGNMENT_220,       //alignment
                 GFX_STATICTEXT_SCHEME_220
                 ); // use alternate scheme
        break;
    case DIS_InWatchOpenF:
        hgcObj.pDIS_InWatchOpenFObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchOpenF,      // button ID
                 GFX_STATICTEXT_LEFT_221,    // left
                 GFX_STATICTEXT_TOP_221,     // top
                 GFX_STATICTEXT_RIGHT_221,   // right
                 GFX_STATICTEXT_BOTTOM_221,  // bottom
                 GFX_STATICTEXT_STATE_221,   // state
                 (GFX_XCHAR*)staticTextStr_221,    // text
                 GFX_STATICTEXT_ALIGNMENT_221,       //alignment
                 GFX_STATICTEXT_SCHEME_221
                 ); // use alternate scheme
        break;
    case DIS_InWatchSafeGate:
        hgcObj.pDIS_InWatchSafeGateObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchSafeGate,      // button ID
                 GFX_STATICTEXT_LEFT_222,    // left
                 GFX_STATICTEXT_TOP_222,     // top
                 GFX_STATICTEXT_RIGHT_222,   // right
                 GFX_STATICTEXT_BOTTOM_222,  // bottom
                 GFX_STATICTEXT_STATE_222,   // state
                 (GFX_XCHAR*)staticTextStr_222,    // text
                 GFX_STATICTEXT_ALIGNMENT_222,       //alignment
                 GFX_STATICTEXT_SCHEME_222
                 ); // use alternate scheme
        break;
    case DIS_InWatchViceForw:
        hgcObj.pDIS_InWatchViceForwObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchViceForw,      // button ID
                 GFX_STATICTEXT_LEFT_223,    // left
                 GFX_STATICTEXT_TOP_223,     // top
                 GFX_STATICTEXT_RIGHT_223,   // right
                 GFX_STATICTEXT_BOTTOM_223,  // bottom
                 GFX_STATICTEXT_STATE_223,   // state
                 (GFX_XCHAR*)staticTextStr_223,    // text
                 GFX_STATICTEXT_ALIGNMENT_223,       //alignment
                 GFX_STATICTEXT_SCHEME_223
                 ); // use alternate scheme
        break;
    case DIS_InWatchReserve6:
        hgcObj.pDIS_InWatchReserve6Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchReserve6,      // button ID
                 GFX_STATICTEXT_LEFT_224,    // left
                 GFX_STATICTEXT_TOP_224,     // top
                 GFX_STATICTEXT_RIGHT_224,   // right
                 GFX_STATICTEXT_BOTTOM_224,  // bottom
                 GFX_STATICTEXT_STATE_224,   // state
                 (GFX_XCHAR*)staticTextStr_224,    // text
                 GFX_STATICTEXT_ALIGNMENT_224,       //alignment
                 GFX_STATICTEXT_SCHEME_224
                 ); // use alternate scheme
        break;
    case DIS_InWatchReserve5:
        hgcObj.pDIS_InWatchReserve5Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchReserve5,      // button ID
                 GFX_STATICTEXT_LEFT_225,    // left
                 GFX_STATICTEXT_TOP_225,     // top
                 GFX_STATICTEXT_RIGHT_225,   // right
                 GFX_STATICTEXT_BOTTOM_225,  // bottom
                 GFX_STATICTEXT_STATE_225,   // state
                 (GFX_XCHAR*)staticTextStr_225,    // text
                 GFX_STATICTEXT_ALIGNMENT_225,       //alignment
                 GFX_STATICTEXT_SCHEME_225
                 ); // use alternate scheme
        break;
    case DIS_InWatchReserve4:
        hgcObj.pDIS_InWatchReserve4Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchReserve4,      // button ID
                 GFX_STATICTEXT_LEFT_226,    // left
                 GFX_STATICTEXT_TOP_226,     // top
                 GFX_STATICTEXT_RIGHT_226,   // right
                 GFX_STATICTEXT_BOTTOM_226,  // bottom
                 GFX_STATICTEXT_STATE_226,   // state
                 (GFX_XCHAR*)staticTextStr_226,    // text
                 GFX_STATICTEXT_ALIGNMENT_226,       //alignment
                 GFX_STATICTEXT_SCHEME_226
                 ); // use alternate scheme
        break;
    case DIS_InWatchReserve3:
        hgcObj.pDIS_InWatchReserve3Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchReserve3,      // button ID
                 GFX_STATICTEXT_LEFT_227,    // left
                 GFX_STATICTEXT_TOP_227,     // top
                 GFX_STATICTEXT_RIGHT_227,   // right
                 GFX_STATICTEXT_BOTTOM_227,  // bottom
                 GFX_STATICTEXT_STATE_227,   // state
                 (GFX_XCHAR*)staticTextStr_227,    // text
                 GFX_STATICTEXT_ALIGNMENT_227,       //alignment
                 GFX_STATICTEXT_SCHEME_227
                 ); // use alternate scheme
        break;
    case DIS_InWatchReserve2:
        hgcObj.pDIS_InWatchReserve2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchReserve2,      // button ID
                 GFX_STATICTEXT_LEFT_228,    // left
                 GFX_STATICTEXT_TOP_228,     // top
                 GFX_STATICTEXT_RIGHT_228,   // right
                 GFX_STATICTEXT_BOTTOM_228,  // bottom
                 GFX_STATICTEXT_STATE_228,   // state
                 (GFX_XCHAR*)staticTextStr_228,    // text
                 GFX_STATICTEXT_ALIGNMENT_228,       //alignment
                 GFX_STATICTEXT_SCHEME_228
                 ); // use alternate scheme
        break;
    case DIS_InWatchReserve1:
        hgcObj.pDIS_InWatchReserve1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchReserve1,      // button ID
                 GFX_STATICTEXT_LEFT_229,    // left
                 GFX_STATICTEXT_TOP_229,     // top
                 GFX_STATICTEXT_RIGHT_229,   // right
                 GFX_STATICTEXT_BOTTOM_229,  // bottom
                 GFX_STATICTEXT_STATE_229,   // state
                 (GFX_XCHAR*)staticTextStr_229,    // text
                 GFX_STATICTEXT_ALIGNMENT_229,       //alignment
                 GFX_STATICTEXT_SCHEME_229
                 ); // use alternate scheme
        break;
    case DIS_InWatchVacuum2:
        hgcObj.pDIS_InWatchVacuum2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchVacuum2,      // button ID
                 GFX_STATICTEXT_LEFT_230,    // left
                 GFX_STATICTEXT_TOP_230,     // top
                 GFX_STATICTEXT_RIGHT_230,   // right
                 GFX_STATICTEXT_BOTTOM_230,  // bottom
                 GFX_STATICTEXT_STATE_230,   // state
                 (GFX_XCHAR*)staticTextStr_230,    // text
                 GFX_STATICTEXT_ALIGNMENT_230,       //alignment
                 GFX_STATICTEXT_SCHEME_230
                 ); // use alternate scheme
        break;
    case DIS_InWatchHold2:
        hgcObj.pDIS_InWatchHold2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_InWatchHold2,      // button ID
                 GFX_STATICTEXT_LEFT_231,    // left
                 GFX_STATICTEXT_TOP_231,     // top
                 GFX_STATICTEXT_RIGHT_231,   // right
                 GFX_STATICTEXT_BOTTOM_231,  // bottom
                 GFX_STATICTEXT_STATE_231,   // state
                 (GFX_XCHAR*)staticTextStr_231,    // text
                 GFX_STATICTEXT_ALIGNMENT_231,       //alignment
                 GFX_STATICTEXT_SCHEME_231
                 ); // use alternate scheme
        break;
    case DIS_OutWatchTravOut:
        hgcObj.pDIS_OutWatchTravOutObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchTravOut,      // button ID
                 GFX_STATICTEXT_LEFT_232,    // left
                 GFX_STATICTEXT_TOP_232,     // top
                 GFX_STATICTEXT_RIGHT_232,   // right
                 GFX_STATICTEXT_BOTTOM_232,  // bottom
                 GFX_STATICTEXT_STATE_232,   // state
                 (GFX_XCHAR*)staticTextStr_232,    // text
                 GFX_STATICTEXT_ALIGNMENT_232,       //alignment
                 GFX_STATICTEXT_SCHEME_232
                 ); // use alternate scheme
        break;
    case DIS_OutWatchTravIn:
        hgcObj.pDIS_OutWatchTravInObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchTravIn,      // button ID
                 GFX_STATICTEXT_LEFT_233,    // left
                 GFX_STATICTEXT_TOP_233,     // top
                 GFX_STATICTEXT_RIGHT_233,   // right
                 GFX_STATICTEXT_BOTTOM_233,  // bottom
                 GFX_STATICTEXT_STATE_233,   // state
                 (GFX_XCHAR*)staticTextStr_233,    // text
                 GFX_STATICTEXT_ALIGNMENT_233,       //alignment
                 GFX_STATICTEXT_SCHEME_233
                 ); // use alternate scheme
        break;
    case DIS_OutWatchReserv2:
        hgcObj.pDIS_OutWatchReserv2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchReserv2,      // button ID
                 GFX_STATICTEXT_LEFT_234,    // left
                 GFX_STATICTEXT_TOP_234,     // top
                 GFX_STATICTEXT_RIGHT_234,   // right
                 GFX_STATICTEXT_BOTTOM_234,  // bottom
                 GFX_STATICTEXT_STATE_234,   // state
                 (GFX_XCHAR*)staticTextStr_234,    // text
                 GFX_STATICTEXT_ALIGNMENT_234,       //alignment
                 GFX_STATICTEXT_SCHEME_234
                 ); // use alternate scheme
        break;
    case DIS_OutWatchReserv1:
        hgcObj.pDIS_OutWatchReserv1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchReserv1,      // button ID
                 GFX_STATICTEXT_LEFT_235,    // left
                 GFX_STATICTEXT_TOP_235,     // top
                 GFX_STATICTEXT_RIGHT_235,   // right
                 GFX_STATICTEXT_BOTTOM_235,  // bottom
                 GFX_STATICTEXT_STATE_235,   // state
                 (GFX_XCHAR*)staticTextStr_235,    // text
                 GFX_STATICTEXT_ALIGNMENT_235,       //alignment
                 GFX_STATICTEXT_SCHEME_235
                 ); // use alternate scheme
        break;
    case DIS_OutWatchSlowDown:
        hgcObj.pDIS_OutWatchSlowDownObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchSlowDown,      // button ID
                 GFX_STATICTEXT_LEFT_236,    // left
                 GFX_STATICTEXT_TOP_236,     // top
                 GFX_STATICTEXT_RIGHT_236,   // right
                 GFX_STATICTEXT_BOTTOM_236,  // bottom
                 GFX_STATICTEXT_STATE_236,   // state
                 (GFX_XCHAR*)staticTextStr_236,    // text
                 GFX_STATICTEXT_ALIGNMENT_236,       //alignment
                 GFX_STATICTEXT_SCHEME_236
                 ); // use alternate scheme
        break;
    case DIS_OutWatchLowPress:
        hgcObj.pDIS_OutWatchLowPressObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchLowPress,      // button ID
                 GFX_STATICTEXT_LEFT_237,    // left
                 GFX_STATICTEXT_TOP_237,     // top
                 GFX_STATICTEXT_RIGHT_237,   // right
                 GFX_STATICTEXT_BOTTOM_237,  // bottom
                 GFX_STATICTEXT_STATE_237,   // state
                 (GFX_XCHAR*)staticTextStr_237,    // text
                 GFX_STATICTEXT_ALIGNMENT_237,       //alignment
                 GFX_STATICTEXT_SCHEME_237
                 ); // use alternate scheme
        break;
    case DIS_OutWatchMainDown:
        hgcObj.pDIS_OutWatchMainDownObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchMainDown,      // button ID
                 GFX_STATICTEXT_LEFT_238,    // left
                 GFX_STATICTEXT_TOP_238,     // top
                 GFX_STATICTEXT_RIGHT_238,   // right
                 GFX_STATICTEXT_BOTTOM_238,  // bottom
                 GFX_STATICTEXT_STATE_238,   // state
                 (GFX_XCHAR*)staticTextStr_238,    // text
                 GFX_STATICTEXT_ALIGNMENT_238,       //alignment
                 GFX_STATICTEXT_SCHEME_238
                 ); // use alternate scheme
        break;
    case DIS_OutWatchMainUp:
        hgcObj.pDIS_OutWatchMainUpObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchMainUp,      // button ID
                 GFX_STATICTEXT_LEFT_239,    // left
                 GFX_STATICTEXT_TOP_239,     // top
                 GFX_STATICTEXT_RIGHT_239,   // right
                 GFX_STATICTEXT_BOTTOM_239,  // bottom
                 GFX_STATICTEXT_STATE_239,   // state
                 (GFX_XCHAR*)staticTextStr_239,    // text
                 GFX_STATICTEXT_ALIGNMENT_239,       //alignment
                 GFX_STATICTEXT_SCHEME_239
                 ); // use alternate scheme
        break;
    case DIS_OutWatchAlarm:
        hgcObj.pDIS_OutWatchAlarmObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchAlarm,      // button ID
                 GFX_STATICTEXT_LEFT_240,    // left
                 GFX_STATICTEXT_TOP_240,     // top
                 GFX_STATICTEXT_RIGHT_240,   // right
                 GFX_STATICTEXT_BOTTOM_240,  // bottom
                 GFX_STATICTEXT_STATE_240,   // state
                 (GFX_XCHAR*)staticTextStr_240,    // text
                 GFX_STATICTEXT_ALIGNMENT_240,       //alignment
                 GFX_STATICTEXT_SCHEME_240
                 ); // use alternate scheme
        break;
    case DIS_OutWatchMainBack:
        hgcObj.pDIS_OutWatchMainBackObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchMainBack,      // button ID
                 GFX_STATICTEXT_LEFT_241,    // left
                 GFX_STATICTEXT_TOP_241,     // top
                 GFX_STATICTEXT_RIGHT_241,   // right
                 GFX_STATICTEXT_BOTTOM_241,  // bottom
                 GFX_STATICTEXT_STATE_241,   // state
                 (GFX_XCHAR*)staticTextStr_241,    // text
                 GFX_STATICTEXT_ALIGNMENT_241,       //alignment
                 GFX_STATICTEXT_SCHEME_241
                 ); // use alternate scheme
        break;
    case DIS_OutWatchMainForw:
        hgcObj.pDIS_OutWatchMainForwObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchMainForw,      // button ID
                 GFX_STATICTEXT_LEFT_242,    // left
                 GFX_STATICTEXT_TOP_242,     // top
                 GFX_STATICTEXT_RIGHT_242,   // right
                 GFX_STATICTEXT_BOTTOM_242,  // bottom
                 GFX_STATICTEXT_STATE_242,   // state
                 (GFX_XCHAR*)staticTextStr_242,    // text
                 GFX_STATICTEXT_ALIGNMENT_242,       //alignment
                 GFX_STATICTEXT_SCHEME_242
                 ); // use alternate scheme
        break;
    case DIS_OutWatchVacuum:
        hgcObj.pDIS_OutWatchVacuumObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchVacuum,      // button ID
                 GFX_STATICTEXT_LEFT_243,    // left
                 GFX_STATICTEXT_TOP_243,     // top
                 GFX_STATICTEXT_RIGHT_243,   // right
                 GFX_STATICTEXT_BOTTOM_243,  // bottom
                 GFX_STATICTEXT_STATE_243,   // state
                 (GFX_XCHAR*)staticTextStr_243,    // text
                 GFX_STATICTEXT_ALIGNMENT_243,       //alignment
                 GFX_STATICTEXT_SCHEME_243
                 ); // use alternate scheme
        break;
    case DIS_OutWatchHold:
        hgcObj.pDIS_OutWatchHoldObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchHold,      // button ID
                 GFX_STATICTEXT_LEFT_244,    // left
                 GFX_STATICTEXT_TOP_244,     // top
                 GFX_STATICTEXT_RIGHT_244,   // right
                 GFX_STATICTEXT_BOTTOM_244,  // bottom
                 GFX_STATICTEXT_STATE_244,   // state
                 (GFX_XCHAR*)staticTextStr_244,    // text
                 GFX_STATICTEXT_ALIGNMENT_244,       //alignment
                 GFX_STATICTEXT_SCHEME_244
                 ); // use alternate scheme
        break;
    case DIS_OutWatchMainFix:
        hgcObj.pDIS_OutWatchMainFixObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchMainFix,      // button ID
                 GFX_STATICTEXT_LEFT_245,    // left
                 GFX_STATICTEXT_TOP_245,     // top
                 GFX_STATICTEXT_RIGHT_245,   // right
                 GFX_STATICTEXT_BOTTOM_245,  // bottom
                 GFX_STATICTEXT_STATE_245,   // state
                 (GFX_XCHAR*)staticTextStr_245,    // text
                 GFX_STATICTEXT_ALIGNMENT_245,       //alignment
                 GFX_STATICTEXT_SCHEME_245
                 ); // use alternate scheme
        break;
    case DIS_OutWatchVerti:
        hgcObj.pDIS_OutWatchVertiObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchVerti,      // button ID
                 GFX_STATICTEXT_LEFT_246,    // left
                 GFX_STATICTEXT_TOP_246,     // top
                 GFX_STATICTEXT_RIGHT_246,   // right
                 GFX_STATICTEXT_BOTTOM_246,  // bottom
                 GFX_STATICTEXT_STATE_246,   // state
                 (GFX_XCHAR*)staticTextStr_246,    // text
                 GFX_STATICTEXT_ALIGNMENT_246,       //alignment
                 GFX_STATICTEXT_SCHEME_246
                 ); // use alternate scheme
        break;
    case DIS_OutWatchHori:
        hgcObj.pDIS_OutWatchHoriObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchHori,      // button ID
                 GFX_STATICTEXT_LEFT_247,    // left
                 GFX_STATICTEXT_TOP_247,     // top
                 GFX_STATICTEXT_RIGHT_247,   // right
                 GFX_STATICTEXT_BOTTOM_247,  // bottom
                 GFX_STATICTEXT_STATE_247,   // state
                 (GFX_XCHAR*)staticTextStr_247,    // text
                 GFX_STATICTEXT_ALIGNMENT_247,       //alignment
                 GFX_STATICTEXT_SCHEME_247
                 ); // use alternate scheme
        break;
    case DIS_OutWatchYReserv3:
        hgcObj.pDIS_OutWatchYReserv3Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchYReserv3,      // button ID
                 GFX_STATICTEXT_LEFT_248,    // left
                 GFX_STATICTEXT_TOP_248,     // top
                 GFX_STATICTEXT_RIGHT_248,   // right
                 GFX_STATICTEXT_BOTTOM_248,  // bottom
                 GFX_STATICTEXT_STATE_248,   // state
                 (GFX_XCHAR*)staticTextStr_248,    // text
                 GFX_STATICTEXT_ALIGNMENT_248,       //alignment
                 GFX_STATICTEXT_SCHEME_248
                 ); // use alternate scheme
        break;
    case DIS_OutWatchYReserv2:
        hgcObj.pDIS_OutWatchYReserv2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchYReserv2,      // button ID
                 GFX_STATICTEXT_LEFT_249,    // left
                 GFX_STATICTEXT_TOP_249,     // top
                 GFX_STATICTEXT_RIGHT_249,   // right
                 GFX_STATICTEXT_BOTTOM_249,  // bottom
                 GFX_STATICTEXT_STATE_249,   // state
                 (GFX_XCHAR*)staticTextStr_249,    // text
                 GFX_STATICTEXT_ALIGNMENT_249,       //alignment
                 GFX_STATICTEXT_SCHEME_249
                 ); // use alternate scheme
        break;
    case DIS_OutWatchYReserv1:
        hgcObj.pDIS_OutWatchYReserv1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchYReserv1,      // button ID
                 GFX_STATICTEXT_LEFT_250,    // left
                 GFX_STATICTEXT_TOP_250,     // top
                 GFX_STATICTEXT_RIGHT_250,   // right
                 GFX_STATICTEXT_BOTTOM_250,  // bottom
                 GFX_STATICTEXT_STATE_250,   // state
                 (GFX_XCHAR*)staticTextStr_250,    // text
                 GFX_STATICTEXT_ALIGNMENT_250,       //alignment
                 GFX_STATICTEXT_SCHEME_250
                 ); // use alternate scheme
        break;
    case DIS_OutWatchThimSafe:
        hgcObj.pDIS_OutWatchThimSafeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchThimSafe,      // button ID
                 GFX_STATICTEXT_LEFT_251,    // left
                 GFX_STATICTEXT_TOP_251,     // top
                 GFX_STATICTEXT_RIGHT_251,   // right
                 GFX_STATICTEXT_BOTTOM_251,  // bottom
                 GFX_STATICTEXT_STATE_251,   // state
                 (GFX_XCHAR*)staticTextStr_251,    // text
                 GFX_STATICTEXT_ALIGNMENT_251,       //alignment
                 GFX_STATICTEXT_SCHEME_251
                 ); // use alternate scheme
        break;
    case DIS_OutWatchRecycling:
        hgcObj.pDIS_OutWatchRecyclingObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchRecycling,      // button ID
                 GFX_STATICTEXT_LEFT_252,    // left
                 GFX_STATICTEXT_TOP_252,     // top
                 GFX_STATICTEXT_RIGHT_252,   // right
                 GFX_STATICTEXT_BOTTOM_252,  // bottom
                 GFX_STATICTEXT_STATE_252,   // state
                 (GFX_XCHAR*)staticTextStr_252,    // text
                 GFX_STATICTEXT_ALIGNMENT_252,       //alignment
                 GFX_STATICTEXT_SCHEME_252
                 ); // use alternate scheme
        break;
    case DIS_OutWatchOpenSafe:
        hgcObj.pDIS_OutWatchOpenSafeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchOpenSafe,      // button ID
                 GFX_STATICTEXT_LEFT_253,    // left
                 GFX_STATICTEXT_TOP_253,     // top
                 GFX_STATICTEXT_RIGHT_253,   // right
                 GFX_STATICTEXT_BOTTOM_253,  // bottom
                 GFX_STATICTEXT_STATE_253,   // state
                 (GFX_XCHAR*)staticTextStr_253,    // text
                 GFX_STATICTEXT_ALIGNMENT_253,       //alignment
                 GFX_STATICTEXT_SCHEME_253
                 ); // use alternate scheme
        break;
    case DIS_OutWatchCloseSafe:
        hgcObj.pDIS_OutWatchCloseSafeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchCloseSafe,      // button ID
                 GFX_STATICTEXT_LEFT_254,    // left
                 GFX_STATICTEXT_TOP_254,     // top
                 GFX_STATICTEXT_RIGHT_254,   // right
                 GFX_STATICTEXT_BOTTOM_254,  // bottom
                 GFX_STATICTEXT_STATE_254,   // state
                 (GFX_XCHAR*)staticTextStr_254,    // text
                 GFX_STATICTEXT_ALIGNMENT_254,       //alignment
                 GFX_STATICTEXT_SCHEME_254
                 ); // use alternate scheme
        break;
    case DIS_OutWatchEmergStop:
        hgcObj.pDIS_OutWatchEmergStopObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchEmergStop,      // button ID
                 GFX_STATICTEXT_LEFT_255,    // left
                 GFX_STATICTEXT_TOP_255,     // top
                 GFX_STATICTEXT_RIGHT_255,   // right
                 GFX_STATICTEXT_BOTTOM_255,  // bottom
                 GFX_STATICTEXT_STATE_255,   // state
                 (GFX_XCHAR*)staticTextStr_255,    // text
                 GFX_STATICTEXT_ALIGNMENT_255,       //alignment
                 GFX_STATICTEXT_SCHEME_255
                 ); // use alternate scheme
        break;
    case DIS_OutWatchConeryor:
        hgcObj.pDIS_OutWatchConeryorObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchConeryor,      // button ID
                 GFX_STATICTEXT_LEFT_256,    // left
                 GFX_STATICTEXT_TOP_256,     // top
                 GFX_STATICTEXT_RIGHT_256,   // right
                 GFX_STATICTEXT_BOTTOM_256,  // bottom
                 GFX_STATICTEXT_STATE_256,   // state
                 (GFX_XCHAR*)staticTextStr_256,    // text
                 GFX_STATICTEXT_ALIGNMENT_256,       //alignment
                 GFX_STATICTEXT_SCHEME_256
                 ); // use alternate scheme
        break;
    case DIS_OutWatchScissor:
        hgcObj.pDIS_OutWatchScissorObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchScissor,      // button ID
                 GFX_STATICTEXT_LEFT_257,    // left
                 GFX_STATICTEXT_TOP_257,     // top
                 GFX_STATICTEXT_RIGHT_257,   // right
                 GFX_STATICTEXT_BOTTOM_257,  // bottom
                 GFX_STATICTEXT_STATE_257,   // state
                 (GFX_XCHAR*)staticTextStr_257,    // text
                 GFX_STATICTEXT_ALIGNMENT_257,       //alignment
                 GFX_STATICTEXT_SCHEME_257
                 ); // use alternate scheme
        break;
    case DIS_OutWatchProcess1:
        hgcObj.pDIS_OutWatchProcess1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchProcess1,      // button ID
                 GFX_STATICTEXT_LEFT_258,    // left
                 GFX_STATICTEXT_TOP_258,     // top
                 GFX_STATICTEXT_RIGHT_258,   // right
                 GFX_STATICTEXT_BOTTOM_258,  // bottom
                 GFX_STATICTEXT_STATE_258,   // state
                 (GFX_XCHAR*)staticTextStr_258,    // text
                 GFX_STATICTEXT_ALIGNMENT_258,       //alignment
                 GFX_STATICTEXT_SCHEME_258
                 ); // use alternate scheme
        break;
    case DIS_OutWatchSubFix:
        hgcObj.pDIS_OutWatchSubFixObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchSubFix,      // button ID
                 GFX_STATICTEXT_LEFT_259,    // left
                 GFX_STATICTEXT_TOP_259,     // top
                 GFX_STATICTEXT_RIGHT_259,   // right
                 GFX_STATICTEXT_BOTTOM_259,  // bottom
                 GFX_STATICTEXT_STATE_259,   // state
                 (GFX_XCHAR*)staticTextStr_259,    // text
                 GFX_STATICTEXT_ALIGNMENT_259,       //alignment
                 GFX_STATICTEXT_SCHEME_259
                 ); // use alternate scheme
        break;
    case DIS_OutWatchSubDown:
        hgcObj.pDIS_OutWatchSubDownObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchSubDown,      // button ID
                 GFX_STATICTEXT_LEFT_260,    // left
                 GFX_STATICTEXT_TOP_260,     // top
                 GFX_STATICTEXT_RIGHT_260,   // right
                 GFX_STATICTEXT_BOTTOM_260,  // bottom
                 GFX_STATICTEXT_STATE_260,   // state
                 (GFX_XCHAR*)staticTextStr_260,    // text
                 GFX_STATICTEXT_ALIGNMENT_260,       //alignment
                 GFX_STATICTEXT_SCHEME_260
                 ); // use alternate scheme
        break;
    case DIS_OutWatchSubUp:
        hgcObj.pDIS_OutWatchSubUpObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchSubUp,      // button ID
                 GFX_STATICTEXT_LEFT_261,    // left
                 GFX_STATICTEXT_TOP_261,     // top
                 GFX_STATICTEXT_RIGHT_261,   // right
                 GFX_STATICTEXT_BOTTOM_261,  // bottom
                 GFX_STATICTEXT_STATE_261,   // state
                 (GFX_XCHAR*)staticTextStr_261,    // text
                 GFX_STATICTEXT_ALIGNMENT_261,       //alignment
                 GFX_STATICTEXT_SCHEME_261
                 ); // use alternate scheme
        break;
    case DIS_OutWatchSubBack:
        hgcObj.pDIS_OutWatchSubBackObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchSubBack,      // button ID
                 GFX_STATICTEXT_LEFT_262,    // left
                 GFX_STATICTEXT_TOP_262,     // top
                 GFX_STATICTEXT_RIGHT_262,   // right
                 GFX_STATICTEXT_BOTTOM_262,  // bottom
                 GFX_STATICTEXT_STATE_262,   // state
                 (GFX_XCHAR*)staticTextStr_262,    // text
                 GFX_STATICTEXT_ALIGNMENT_262,       //alignment
                 GFX_STATICTEXT_SCHEME_262
                 ); // use alternate scheme
        break;
    case DIS_OutWatchSubForw:
        hgcObj.pDIS_OutWatchSubForwObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchSubForw,      // button ID
                 GFX_STATICTEXT_LEFT_263,    // left
                 GFX_STATICTEXT_TOP_263,     // top
                 GFX_STATICTEXT_RIGHT_263,   // right
                 GFX_STATICTEXT_BOTTOM_263,  // bottom
                 GFX_STATICTEXT_STATE_263,   // state
                 (GFX_XCHAR*)staticTextStr_263,    // text
                 GFX_STATICTEXT_ALIGNMENT_263,       //alignment
                 GFX_STATICTEXT_SCHEME_263
                 ); // use alternate scheme
        break;
    case DIS_OutWatchReserve5:
        hgcObj.pDIS_OutWatchReserve5Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchReserve5,      // button ID
                 GFX_STATICTEXT_LEFT_264,    // left
                 GFX_STATICTEXT_TOP_264,     // top
                 GFX_STATICTEXT_RIGHT_264,   // right
                 GFX_STATICTEXT_BOTTOM_264,  // bottom
                 GFX_STATICTEXT_STATE_264,   // state
                 (GFX_XCHAR*)staticTextStr_264,    // text
                 GFX_STATICTEXT_ALIGNMENT_264,       //alignment
                 GFX_STATICTEXT_SCHEME_264
                 ); // use alternate scheme
        break;
    case DIS_OutWatchReserve4:
        hgcObj.pDIS_OutWatchReserve4Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchReserve4,      // button ID
                 GFX_STATICTEXT_LEFT_265,    // left
                 GFX_STATICTEXT_TOP_265,     // top
                 GFX_STATICTEXT_RIGHT_265,   // right
                 GFX_STATICTEXT_BOTTOM_265,  // bottom
                 GFX_STATICTEXT_STATE_265,   // state
                 (GFX_XCHAR*)staticTextStr_265,    // text
                 GFX_STATICTEXT_ALIGNMENT_265,       //alignment
                 GFX_STATICTEXT_SCHEME_265
                 ); // use alternate scheme
        break;
    case DIS_OutWatchReserve3:
        hgcObj.pDIS_OutWatchReserve3Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchReserve3,      // button ID
                 GFX_STATICTEXT_LEFT_266,    // left
                 GFX_STATICTEXT_TOP_266,     // top
                 GFX_STATICTEXT_RIGHT_266,   // right
                 GFX_STATICTEXT_BOTTOM_266,  // bottom
                 GFX_STATICTEXT_STATE_266,   // state
                 (GFX_XCHAR*)staticTextStr_266,    // text
                 GFX_STATICTEXT_ALIGNMENT_266,       //alignment
                 GFX_STATICTEXT_SCHEME_266
                 ); // use alternate scheme
        break;
    case DIS_OutWatchReserve2:
        hgcObj.pDIS_OutWatchReserve2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchReserve2,      // button ID
                 GFX_STATICTEXT_LEFT_267,    // left
                 GFX_STATICTEXT_TOP_267,     // top
                 GFX_STATICTEXT_RIGHT_267,   // right
                 GFX_STATICTEXT_BOTTOM_267,  // bottom
                 GFX_STATICTEXT_STATE_267,   // state
                 (GFX_XCHAR*)staticTextStr_267,    // text
                 GFX_STATICTEXT_ALIGNMENT_267,       //alignment
                 GFX_STATICTEXT_SCHEME_267
                 ); // use alternate scheme
        break;
    case DIS_OutWatchReserve1:
        hgcObj.pDIS_OutWatchReserve1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchReserve1,      // button ID
                 GFX_STATICTEXT_LEFT_268,    // left
                 GFX_STATICTEXT_TOP_268,     // top
                 GFX_STATICTEXT_RIGHT_268,   // right
                 GFX_STATICTEXT_BOTTOM_268,  // bottom
                 GFX_STATICTEXT_STATE_268,   // state
                 (GFX_XCHAR*)staticTextStr_268,    // text
                 GFX_STATICTEXT_ALIGNMENT_268,       //alignment
                 GFX_STATICTEXT_SCHEME_268
                 ); // use alternate scheme
        break;
    case DIS_OutWatchVacuum2:
        hgcObj.pDIS_OutWatchVacuum2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchVacuum2,      // button ID
                 GFX_STATICTEXT_LEFT_269,    // left
                 GFX_STATICTEXT_TOP_269,     // top
                 GFX_STATICTEXT_RIGHT_269,   // right
                 GFX_STATICTEXT_BOTTOM_269,  // bottom
                 GFX_STATICTEXT_STATE_269,   // state
                 (GFX_XCHAR*)staticTextStr_269,    // text
                 GFX_STATICTEXT_ALIGNMENT_269,       //alignment
                 GFX_STATICTEXT_SCHEME_269
                 ); // use alternate scheme
        break;
    case DIS_OutWatchHold2:
        hgcObj.pDIS_OutWatchHold2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutWatchHold2,      // button ID
                 GFX_STATICTEXT_LEFT_270,    // left
                 GFX_STATICTEXT_TOP_270,     // top
                 GFX_STATICTEXT_RIGHT_270,   // right
                 GFX_STATICTEXT_BOTTOM_270,  // bottom
                 GFX_STATICTEXT_STATE_270,   // state
                 (GFX_XCHAR*)staticTextStr_270,    // text
                 GFX_STATICTEXT_ALIGNMENT_270,       //alignment
                 GFX_STATICTEXT_SCHEME_270
                 ); // use alternate scheme
        break;
    case DIS_OutRecoverHint:
        hgcObj.pDIS_OutRecoverHintObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_OutRecoverHint,      // button ID
                 GFX_STATICTEXT_LEFT_271,    // left
                 GFX_STATICTEXT_TOP_271,     // top
                 GFX_STATICTEXT_RIGHT_271,   // right
                 GFX_STATICTEXT_BOTTOM_271,  // bottom
                 GFX_STATICTEXT_STATE_271,   // state
                 (GFX_XCHAR*)staticTextStr_271,    // text
                 GFX_STATICTEXT_ALIGNMENT_271,       //alignment
                 GFX_STATICTEXT_SCHEME_271
                 ); // use alternate scheme
        break;
    case DIS_DMT_ProgInfoVersion:
        hgcObj.pDIS_DMT_ProgInfoVersionObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_DMT_ProgInfoVersion,      // button ID
                 GFX_STATICTEXT_LEFT_272,    // left
                 GFX_STATICTEXT_TOP_272,     // top
                 GFX_STATICTEXT_RIGHT_272,   // right
                 GFX_STATICTEXT_BOTTOM_272,  // bottom
                 GFX_STATICTEXT_STATE_272,   // state
                 (GFX_XCHAR*)staticTextStr_272,    // text
                 GFX_STATICTEXT_ALIGNMENT_272,       //alignment
                 GFX_STATICTEXT_SCHEME_272
                 ); // use alternate scheme
        break;
    case DIS_DMT_ProgInfoDate:
        hgcObj.pDIS_DMT_ProgInfoDateObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_DMT_ProgInfoDate,      // button ID
                 GFX_STATICTEXT_LEFT_273,    // left
                 GFX_STATICTEXT_TOP_273,     // top
                 GFX_STATICTEXT_RIGHT_273,   // right
                 GFX_STATICTEXT_BOTTOM_273,  // bottom
                 GFX_STATICTEXT_STATE_273,   // state
                 (GFX_XCHAR*)staticTextStr_273,    // text
                 GFX_STATICTEXT_ALIGNMENT_273,       //alignment
                 GFX_STATICTEXT_SCHEME_273
                 ); // use alternate scheme
        break;
    case DIS_DMT_ProgInfoType:
        hgcObj.pDIS_DMT_ProgInfoTypeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_DMT_ProgInfoType,      // button ID
                 GFX_STATICTEXT_LEFT_274,    // left
                 GFX_STATICTEXT_TOP_274,     // top
                 GFX_STATICTEXT_RIGHT_274,   // right
                 GFX_STATICTEXT_BOTTOM_274,  // bottom
                 GFX_STATICTEXT_STATE_274,   // state
                 (GFX_XCHAR*)staticTextStr_274,    // text
                 GFX_STATICTEXT_ALIGNMENT_274,       //alignment
                 GFX_STATICTEXT_SCHEME_274
                 ); // use alternate scheme
        break;
    case DIS_ProgInfoVersion:
        hgcObj.pDIS_ProgInfoVersionObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ProgInfoVersion,      // button ID
                 GFX_STATICTEXT_LEFT_275,    // left
                 GFX_STATICTEXT_TOP_275,     // top
                 GFX_STATICTEXT_RIGHT_275,   // right
                 GFX_STATICTEXT_BOTTOM_275,  // bottom
                 GFX_STATICTEXT_STATE_275,   // state
                 (GFX_XCHAR*)staticTextStr_275,    // text
                 GFX_STATICTEXT_ALIGNMENT_275,       //alignment
                 GFX_STATICTEXT_SCHEME_275
                 ); // use alternate scheme
        break;
    case DIS_ProgInfoDate:
        hgcObj.pDIS_ProgInfoDateObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ProgInfoDate,      // button ID
                 GFX_STATICTEXT_LEFT_276,    // left
                 GFX_STATICTEXT_TOP_276,     // top
                 GFX_STATICTEXT_RIGHT_276,   // right
                 GFX_STATICTEXT_BOTTOM_276,  // bottom
                 GFX_STATICTEXT_STATE_276,   // state
                 (GFX_XCHAR*)staticTextStr_276,    // text
                 GFX_STATICTEXT_ALIGNMENT_276,       //alignment
                 GFX_STATICTEXT_SCHEME_276
                 ); // use alternate scheme
        break;
    case DIS_ProgInfoType:
        hgcObj.pDIS_ProgInfoTypeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ProgInfoType,      // button ID
                 GFX_STATICTEXT_LEFT_277,    // left
                 GFX_STATICTEXT_TOP_277,     // top
                 GFX_STATICTEXT_RIGHT_277,   // right
                 GFX_STATICTEXT_BOTTOM_277,  // bottom
                 GFX_STATICTEXT_STATE_277,   // state
                 (GFX_XCHAR*)staticTextStr_277,    // text
                 GFX_STATICTEXT_ALIGNMENT_277,       //alignment
                 GFX_STATICTEXT_SCHEME_277
                 ); // use alternate scheme
        break;
    case DIS_Time:
        hgcObj.pDIS_TimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_Time,      // button ID
                 GFX_STATICTEXT_LEFT_278,    // left
                 GFX_STATICTEXT_TOP_278,     // top
                 GFX_STATICTEXT_RIGHT_278,   // right
                 GFX_STATICTEXT_BOTTOM_278,  // bottom
                 GFX_STATICTEXT_STATE_278,   // state
                 (GFX_XCHAR*)staticTextStr_278,    // text
                 GFX_STATICTEXT_ALIGNMENT_278,       //alignment
                 GFX_STATICTEXT_SCHEME_278
                 ); // use alternate scheme
        break;
    case DIS_Date:
        hgcObj.pDIS_DateObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_Date,      // button ID
                 GFX_STATICTEXT_LEFT_279,    // left
                 GFX_STATICTEXT_TOP_279,     // top
                 GFX_STATICTEXT_RIGHT_279,   // right
                 GFX_STATICTEXT_BOTTOM_279,  // bottom
                 GFX_STATICTEXT_STATE_279,   // state
                 (GFX_XCHAR*)staticTextStr_279,    // text
                 GFX_STATICTEXT_ALIGNMENT_279,       //alignment
                 GFX_STATICTEXT_SCHEME_279
                 ); // use alternate scheme
        break;
    case DIS_CompInfoWeb:
        hgcObj.pDIS_CompInfoWebObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_CompInfoWeb,      // button ID
                 GFX_STATICTEXT_LEFT_280,    // left
                 GFX_STATICTEXT_TOP_280,     // top
                 GFX_STATICTEXT_RIGHT_280,   // right
                 GFX_STATICTEXT_BOTTOM_280,  // bottom
                 GFX_STATICTEXT_STATE_280,   // state
                 (GFX_XCHAR*)staticTextStr_280,    // text
                 GFX_STATICTEXT_ALIGNMENT_280,       //alignment
                 GFX_STATICTEXT_SCHEME_280
                 ); // use alternate scheme
        break;
    case DIS_CompInfoFax:
        hgcObj.pDIS_CompInfoFaxObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_CompInfoFax,      // button ID
                 GFX_STATICTEXT_LEFT_281,    // left
                 GFX_STATICTEXT_TOP_281,     // top
                 GFX_STATICTEXT_RIGHT_281,   // right
                 GFX_STATICTEXT_BOTTOM_281,  // bottom
                 GFX_STATICTEXT_STATE_281,   // state
                 (GFX_XCHAR*)staticTextStr_281,    // text
                 GFX_STATICTEXT_ALIGNMENT_281,       //alignment
                 GFX_STATICTEXT_SCHEME_281
                 ); // use alternate scheme
        break;
    case DIS_CompInfoTel:
        hgcObj.pDIS_CompInfoTelObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_CompInfoTel,      // button ID
                 GFX_STATICTEXT_LEFT_282,    // left
                 GFX_STATICTEXT_TOP_282,     // top
                 GFX_STATICTEXT_RIGHT_282,   // right
                 GFX_STATICTEXT_BOTTOM_282,  // bottom
                 GFX_STATICTEXT_STATE_282,   // state
                 (GFX_XCHAR*)staticTextStr_282,    // text
                 GFX_STATICTEXT_ALIGNMENT_282,       //alignment
                 GFX_STATICTEXT_SCHEME_282
                 ); // use alternate scheme
        break;
    case DIS_CompInfoName:
        hgcObj.pDIS_CompInfoNameObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_CompInfoName,      // button ID
                 GFX_STATICTEXT_LEFT_283,    // left
                 GFX_STATICTEXT_TOP_283,     // top
                 GFX_STATICTEXT_RIGHT_283,   // right
                 GFX_STATICTEXT_BOTTOM_283,  // bottom
                 GFX_STATICTEXT_STATE_283,   // state
                 (GFX_XCHAR*)staticTextStr_283,    // text
                 GFX_STATICTEXT_ALIGNMENT_283,       //alignment
                 GFX_STATICTEXT_SCHEME_283
                 ); // use alternate scheme
        break;
    case DIS_PsdRamTimeNoLimit:
        hgcObj.pDIS_PsdRamTimeNoLimitObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_PsdRamTimeNoLimit,      // button ID
                 GFX_STATICTEXT_LEFT_284,    // left
                 GFX_STATICTEXT_TOP_284,     // top
                 GFX_STATICTEXT_RIGHT_284,   // right
                 GFX_STATICTEXT_BOTTOM_284,  // bottom
                 GFX_STATICTEXT_STATE_284,   // state
                 (GFX_XCHAR*)staticTextStr_284,    // text
                 GFX_STATICTEXT_ALIGNMENT_284,       //alignment
                 GFX_STATICTEXT_SCHEME_284
                 ); // use alternate scheme
        break;
    case DIS_PsdRamWeekUsed:
        hgcObj.pDIS_PsdRamWeekUsedObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_PsdRamWeekUsed,      // button ID
                 GFX_STATICTEXT_LEFT_285,    // left
                 GFX_STATICTEXT_TOP_285,     // top
                 GFX_STATICTEXT_RIGHT_285,   // right
                 GFX_STATICTEXT_BOTTOM_285,  // bottom
                 GFX_STATICTEXT_STATE_285,   // state
                 (GFX_XCHAR*)staticTextStr_285,    // text
                 GFX_STATICTEXT_ALIGNMENT_285,       //alignment
                 GFX_STATICTEXT_SCHEME_285
                 ); // use alternate scheme
        break;
    case DIS_PsdRamWeekSet:
        hgcObj.pDIS_PsdRamWeekSetObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_PsdRamWeekSet,      // button ID
                 GFX_STATICTEXT_LEFT_286,    // left
                 GFX_STATICTEXT_TOP_286,     // top
                 GFX_STATICTEXT_RIGHT_286,   // right
                 GFX_STATICTEXT_BOTTOM_286,  // bottom
                 GFX_STATICTEXT_STATE_286,   // state
                 (GFX_XCHAR*)staticTextStr_286,    // text
                 GFX_STATICTEXT_ALIGNMENT_286,       //alignment
                 GFX_STATICTEXT_SCHEME_286
                 ); // use alternate scheme
        break;
    case DIS_PsdRamRegCode:
        hgcObj.pDIS_PsdRamRegCodeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_PsdRamRegCode,      // button ID
                 GFX_STATICTEXT_LEFT_287,    // left
                 GFX_STATICTEXT_TOP_287,     // top
                 GFX_STATICTEXT_RIGHT_287,   // right
                 GFX_STATICTEXT_BOTTOM_287,  // bottom
                 GFX_STATICTEXT_STATE_287,   // state
                 (GFX_XCHAR*)staticTextStr_287,    // text
                 GFX_STATICTEXT_ALIGNMENT_287,       //alignment
                 GFX_STATICTEXT_SCHEME_287
                 ); // use alternate scheme
        break;
    case DIS_PsdRamSeriNo:
        hgcObj.pDIS_PsdRamSeriNoObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_PsdRamSeriNo,      // button ID
                 GFX_STATICTEXT_LEFT_288,    // left
                 GFX_STATICTEXT_TOP_288,     // top
                 GFX_STATICTEXT_RIGHT_288,   // right
                 GFX_STATICTEXT_BOTTOM_288,  // bottom
                 GFX_STATICTEXT_STATE_288,   // state
                 (GFX_XCHAR*)staticTextStr_288,    // text
                 GFX_STATICTEXT_ALIGNMENT_288,       //alignment
                 GFX_STATICTEXT_SCHEME_288
                 ); // use alternate scheme
        break;
    case DIS_FacTimUseHourCnt:
        hgcObj.pDIS_FacTimUseHourCntObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FacTimUseHourCnt,      // button ID
                 GFX_STATICTEXT_LEFT_289,    // left
                 GFX_STATICTEXT_TOP_289,     // top
                 GFX_STATICTEXT_RIGHT_289,   // right
                 GFX_STATICTEXT_BOTTOM_289,  // bottom
                 GFX_STATICTEXT_STATE_289,   // state
                 (GFX_XCHAR*)staticTextStr_289,    // text
                 GFX_STATICTEXT_ALIGNMENT_289,       //alignment
                 GFX_STATICTEXT_SCHEME_289
                 ); // use alternate scheme
        break;
    case DIS_FacTimUseWekCnt:
        hgcObj.pDIS_FacTimUseWekCntObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FacTimUseWekCnt,      // button ID
                 GFX_STATICTEXT_LEFT_290,    // left
                 GFX_STATICTEXT_TOP_290,     // top
                 GFX_STATICTEXT_RIGHT_290,   // right
                 GFX_STATICTEXT_BOTTOM_290,  // bottom
                 GFX_STATICTEXT_STATE_290,   // state
                 (GFX_XCHAR*)staticTextStr_290,    // text
                 GFX_STATICTEXT_ALIGNMENT_290,       //alignment
                 GFX_STATICTEXT_SCHEME_290
                 ); // use alternate scheme
        break;
    case DIS_FacTimClrTimCnt:
        hgcObj.pDIS_FacTimClrTimCntObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FacTimClrTimCnt,      // button ID
                 GFX_STATICTEXT_LEFT_291,    // left
                 GFX_STATICTEXT_TOP_291,     // top
                 GFX_STATICTEXT_RIGHT_291,   // right
                 GFX_STATICTEXT_BOTTOM_291,  // bottom
                 GFX_STATICTEXT_STATE_291,   // state
                 (GFX_XCHAR*)staticTextStr_291,    // text
                 GFX_STATICTEXT_ALIGNMENT_291,       //alignment
                 GFX_STATICTEXT_SCHEME_291
                 ); // use alternate scheme
        break;
    case DIS_FacTimSetWekCnt:
        hgcObj.pDIS_FacTimSetWekCntObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_FacTimSetWekCnt,      // button ID
                 GFX_STATICTEXT_LEFT_292,    // left
                 GFX_STATICTEXT_TOP_292,     // top
                 GFX_STATICTEXT_RIGHT_292,   // right
                 GFX_STATICTEXT_BOTTOM_292,  // bottom
                 GFX_STATICTEXT_STATE_292,   // state
                 (GFX_XCHAR*)staticTextStr_292,    // text
                 GFX_STATICTEXT_ALIGNMENT_292,       //alignment
                 GFX_STATICTEXT_SCHEME_292
                 ); // use alternate scheme
        break;
    case STE_ClrTimeCnt:
        hgcObj.pSTE_ClrTimeCntObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 STE_ClrTimeCnt,      // button ID
                 GFX_STATICTEXT_LEFT_293,    // left
                 GFX_STATICTEXT_TOP_293,     // top
                 GFX_STATICTEXT_RIGHT_293,   // right
                 GFX_STATICTEXT_BOTTOM_293,  // bottom
                 GFX_STATICTEXT_STATE_293,   // state
                 (GFX_XCHAR*)staticTextStr_293,    // text
                 GFX_STATICTEXT_ALIGNMENT_293,       //alignment
                 GFX_STATICTEXT_SCHEME_293
                 ); // use alternate scheme
        break;
    case DIS_AllMonitorValue:
        hgcObj.pDIS_AllMonitorValueObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_AllMonitorValue,      // button ID
                 GFX_STATICTEXT_LEFT_294,    // left
                 GFX_STATICTEXT_TOP_294,     // top
                 GFX_STATICTEXT_RIGHT_294,   // right
                 GFX_STATICTEXT_BOTTOM_294,  // bottom
                 GFX_STATICTEXT_STATE_294,   // state
                 (GFX_XCHAR*)staticTextStr_294,    // text
                 GFX_STATICTEXT_ALIGNMENT_294,       //alignment
                 GFX_STATICTEXT_SCHEME_294
                 ); // use alternate scheme
        break;
    case DIS_ALLMonitorPara:
        hgcObj.pDIS_ALLMonitorParaObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ALLMonitorPara,      // button ID
                 GFX_STATICTEXT_LEFT_295,    // left
                 GFX_STATICTEXT_TOP_295,     // top
                 GFX_STATICTEXT_RIGHT_295,   // right
                 GFX_STATICTEXT_BOTTOM_295,  // bottom
                 GFX_STATICTEXT_STATE_295,   // state
                 (GFX_XCHAR*)staticTextStr_295,    // text
                 GFX_STATICTEXT_ALIGNMENT_295,       //alignment
                 GFX_STATICTEXT_SCHEME_295
                 ); // use alternate scheme
        break;
    case DIS_AllMonitorValueZ:
        hgcObj.pDIS_AllMonitorValueZObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_AllMonitorValueZ,      // button ID
                 GFX_STATICTEXT_LEFT_296,    // left
                 GFX_STATICTEXT_TOP_296,     // top
                 GFX_STATICTEXT_RIGHT_296,   // right
                 GFX_STATICTEXT_BOTTOM_296,  // bottom
                 GFX_STATICTEXT_STATE_296,   // state
                 (GFX_XCHAR*)staticTextStr_296,    // text
                 GFX_STATICTEXT_ALIGNMENT_296,       //alignment
                 GFX_STATICTEXT_SCHEME_296
                 ); // use alternate scheme
        break;
    case DIS_ALLMonitorParaZ:
        hgcObj.pDIS_ALLMonitorParaZObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ALLMonitorParaZ,      // button ID
                 GFX_STATICTEXT_LEFT_297,    // left
                 GFX_STATICTEXT_TOP_297,     // top
                 GFX_STATICTEXT_RIGHT_297,   // right
                 GFX_STATICTEXT_BOTTOM_297,  // bottom
                 GFX_STATICTEXT_STATE_297,   // state
                 (GFX_XCHAR*)staticTextStr_297,    // text
                 GFX_STATICTEXT_ALIGNMENT_297,       //alignment
                 GFX_STATICTEXT_SCHEME_297
                 ); // use alternate scheme
        break;
    case DIS_ERROR_CODE:
        hgcObj.pDIS_ERROR_CODEObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ERROR_CODE,      // button ID
                 GFX_STATICTEXT_LEFT_298,    // left
                 GFX_STATICTEXT_TOP_298,     // top
                 GFX_STATICTEXT_RIGHT_298,   // right
                 GFX_STATICTEXT_BOTTOM_298,  // bottom
                 GFX_STATICTEXT_STATE_298,   // state
                 (GFX_XCHAR*)staticTextStr_298,    // text
                 GFX_STATICTEXT_ALIGNMENT_298,       //alignment
                 GFX_STATICTEXT_SCHEME_298
                 ); // use alternate scheme
        break;
    case DIS_HINK_TEMP:
        hgcObj.pDIS_HINK_TEMPObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_HINK_TEMP,      // button ID
                 GFX_STATICTEXT_LEFT_299,    // left
                 GFX_STATICTEXT_TOP_299,     // top
                 GFX_STATICTEXT_RIGHT_299,   // right
                 GFX_STATICTEXT_BOTTOM_299,  // bottom
                 GFX_STATICTEXT_STATE_299,   // state
                 (GFX_XCHAR*)staticTextStr_299,    // text
                 GFX_STATICTEXT_ALIGNMENT_299,       //alignment
                 GFX_STATICTEXT_SCHEME_299
                 ); // use alternate scheme
        break;
    case DIS_DC_BUS_VOLTAGE:
        hgcObj.pDIS_DC_BUS_VOLTAGEObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_DC_BUS_VOLTAGE,      // button ID
                 GFX_STATICTEXT_LEFT_300,    // left
                 GFX_STATICTEXT_TOP_300,     // top
                 GFX_STATICTEXT_RIGHT_300,   // right
                 GFX_STATICTEXT_BOTTOM_300,  // bottom
                 GFX_STATICTEXT_STATE_300,   // state
                 (GFX_XCHAR*)staticTextStr_300,    // text
                 GFX_STATICTEXT_ALIGNMENT_300,       //alignment
                 GFX_STATICTEXT_SCHEME_300
                 ); // use alternate scheme
        break;
    case DIS_DB_POWER:
        hgcObj.pDIS_DB_POWERObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_DB_POWER,      // button ID
                 GFX_STATICTEXT_LEFT_301,    // left
                 GFX_STATICTEXT_TOP_301,     // top
                 GFX_STATICTEXT_RIGHT_301,   // right
                 GFX_STATICTEXT_BOTTOM_301,  // bottom
                 GFX_STATICTEXT_STATE_301,   // state
                 (GFX_XCHAR*)staticTextStr_301,    // text
                 GFX_STATICTEXT_ALIGNMENT_301,       //alignment
                 GFX_STATICTEXT_SCHEME_301
                 ); // use alternate scheme
        break;
    case DIS_TRQ_BURDEN2:
        hgcObj.pDIS_TRQ_BURDEN2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_TRQ_BURDEN2,      // button ID
                 GFX_STATICTEXT_LEFT_302,    // left
                 GFX_STATICTEXT_TOP_302,     // top
                 GFX_STATICTEXT_RIGHT_302,   // right
                 GFX_STATICTEXT_BOTTOM_302,  // bottom
                 GFX_STATICTEXT_STATE_302,   // state
                 (GFX_XCHAR*)staticTextStr_302,    // text
                 GFX_STATICTEXT_ALIGNMENT_302,       //alignment
                 GFX_STATICTEXT_SCHEME_302
                 ); // use alternate scheme
        break;
    case DIS_TRQ_BURDEN1:
        hgcObj.pDIS_TRQ_BURDEN1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_TRQ_BURDEN1,      // button ID
                 GFX_STATICTEXT_LEFT_303,    // left
                 GFX_STATICTEXT_TOP_303,     // top
                 GFX_STATICTEXT_RIGHT_303,   // right
                 GFX_STATICTEXT_BOTTOM_303,  // bottom
                 GFX_STATICTEXT_STATE_303,   // state
                 (GFX_XCHAR*)staticTextStr_303,    // text
                 GFX_STATICTEXT_ALIGNMENT_303,       //alignment
                 GFX_STATICTEXT_SCHEME_303
                 ); // use alternate scheme
        break;
    case DIS_P_ERROR:
        hgcObj.pDIS_P_ERRORObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_P_ERROR,      // button ID
                 GFX_STATICTEXT_LEFT_304,    // left
                 GFX_STATICTEXT_TOP_304,     // top
                 GFX_STATICTEXT_RIGHT_304,   // right
                 GFX_STATICTEXT_BOTTOM_304,  // bottom
                 GFX_STATICTEXT_STATE_304,   // state
                 (GFX_XCHAR*)staticTextStr_304,    // text
                 GFX_STATICTEXT_ALIGNMENT_304,       //alignment
                 GFX_STATICTEXT_SCHEME_304
                 ); // use alternate scheme
        break;
    case DIS_DO_PORT_STATUS:
        hgcObj.pDIS_DO_PORT_STATUSObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_DO_PORT_STATUS,      // button ID
                 GFX_STATICTEXT_LEFT_305,    // left
                 GFX_STATICTEXT_TOP_305,     // top
                 GFX_STATICTEXT_RIGHT_305,   // right
                 GFX_STATICTEXT_BOTTOM_305,  // bottom
                 GFX_STATICTEXT_STATE_305,   // state
                 (GFX_XCHAR*)staticTextStr_305,    // text
                 GFX_STATICTEXT_ALIGNMENT_305,       //alignment
                 GFX_STATICTEXT_SCHEME_305
                 ); // use alternate scheme
        break;
    case DIS_DI_PORT_STATUS:
        hgcObj.pDIS_DI_PORT_STATUSObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_DI_PORT_STATUS,      // button ID
                 GFX_STATICTEXT_LEFT_306,    // left
                 GFX_STATICTEXT_TOP_306,     // top
                 GFX_STATICTEXT_RIGHT_306,   // right
                 GFX_STATICTEXT_BOTTOM_306,  // bottom
                 GFX_STATICTEXT_STATE_306,   // state
                 (GFX_XCHAR*)staticTextStr_306,    // text
                 GFX_STATICTEXT_ALIGNMENT_306,       //alignment
                 GFX_STATICTEXT_SCHEME_306
                 ); // use alternate scheme
        break;
    case DIS_ELEC_ANGLE:
        hgcObj.pDIS_ELEC_ANGLEObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ELEC_ANGLE,      // button ID
                 GFX_STATICTEXT_LEFT_307,    // left
                 GFX_STATICTEXT_TOP_307,     // top
                 GFX_STATICTEXT_RIGHT_307,   // right
                 GFX_STATICTEXT_BOTTOM_307,  // bottom
                 GFX_STATICTEXT_STATE_307,   // state
                 (GFX_XCHAR*)staticTextStr_307,    // text
                 GFX_STATICTEXT_ALIGNMENT_307,       //alignment
                 GFX_STATICTEXT_SCHEME_307
                 ); // use alternate scheme
        break;
    case DIS_MECH_ANGLE:
        hgcObj.pDIS_MECH_ANGLEObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_MECH_ANGLE,      // button ID
                 GFX_STATICTEXT_LEFT_308,    // left
                 GFX_STATICTEXT_TOP_308,     // top
                 GFX_STATICTEXT_RIGHT_308,   // right
                 GFX_STATICTEXT_BOTTOM_308,  // bottom
                 GFX_STATICTEXT_STATE_308,   // state
                 (GFX_XCHAR*)staticTextStr_308,    // text
                 GFX_STATICTEXT_ALIGNMENT_308,       //alignment
                 GFX_STATICTEXT_SCHEME_308
                 ); // use alternate scheme
        break;
    case DIS_SPD_FBK:
        hgcObj.pDIS_SPD_FBKObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_SPD_FBK,      // button ID
                 GFX_STATICTEXT_LEFT_309,    // left
                 GFX_STATICTEXT_TOP_309,     // top
                 GFX_STATICTEXT_RIGHT_309,   // right
                 GFX_STATICTEXT_BOTTOM_309,  // bottom
                 GFX_STATICTEXT_STATE_309,   // state
                 (GFX_XCHAR*)staticTextStr_309,    // text
                 GFX_STATICTEXT_ALIGNMENT_309,       //alignment
                 GFX_STATICTEXT_SCHEME_309
                 ); // use alternate scheme
        break;
    case DIS_ZERROR_CODE:
        hgcObj.pDIS_ZERROR_CODEObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZERROR_CODE,      // button ID
                 GFX_STATICTEXT_LEFT_310,    // left
                 GFX_STATICTEXT_TOP_310,     // top
                 GFX_STATICTEXT_RIGHT_310,   // right
                 GFX_STATICTEXT_BOTTOM_310,  // bottom
                 GFX_STATICTEXT_STATE_310,   // state
                 (GFX_XCHAR*)staticTextStr_310,    // text
                 GFX_STATICTEXT_ALIGNMENT_310,       //alignment
                 GFX_STATICTEXT_SCHEME_310
                 ); // use alternate scheme
        break;
    case DIS_ZHINK_TEMP:
        hgcObj.pDIS_ZHINK_TEMPObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZHINK_TEMP,      // button ID
                 GFX_STATICTEXT_LEFT_311,    // left
                 GFX_STATICTEXT_TOP_311,     // top
                 GFX_STATICTEXT_RIGHT_311,   // right
                 GFX_STATICTEXT_BOTTOM_311,  // bottom
                 GFX_STATICTEXT_STATE_311,   // state
                 (GFX_XCHAR*)staticTextStr_311,    // text
                 GFX_STATICTEXT_ALIGNMENT_311,       //alignment
                 GFX_STATICTEXT_SCHEME_311
                 ); // use alternate scheme
        break;
    case DIS_ZDC_BUS_VOLTAGE:
        hgcObj.pDIS_ZDC_BUS_VOLTAGEObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZDC_BUS_VOLTAGE,      // button ID
                 GFX_STATICTEXT_LEFT_312,    // left
                 GFX_STATICTEXT_TOP_312,     // top
                 GFX_STATICTEXT_RIGHT_312,   // right
                 GFX_STATICTEXT_BOTTOM_312,  // bottom
                 GFX_STATICTEXT_STATE_312,   // state
                 (GFX_XCHAR*)staticTextStr_312,    // text
                 GFX_STATICTEXT_ALIGNMENT_312,       //alignment
                 GFX_STATICTEXT_SCHEME_312
                 ); // use alternate scheme
        break;
    case DIS_ZDB_POWER:
        hgcObj.pDIS_ZDB_POWERObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZDB_POWER,      // button ID
                 GFX_STATICTEXT_LEFT_313,    // left
                 GFX_STATICTEXT_TOP_313,     // top
                 GFX_STATICTEXT_RIGHT_313,   // right
                 GFX_STATICTEXT_BOTTOM_313,  // bottom
                 GFX_STATICTEXT_STATE_313,   // state
                 (GFX_XCHAR*)staticTextStr_313,    // text
                 GFX_STATICTEXT_ALIGNMENT_313,       //alignment
                 GFX_STATICTEXT_SCHEME_313
                 ); // use alternate scheme
        break;
    case DIS_ZTRQ_BURDEN2:
        hgcObj.pDIS_ZTRQ_BURDEN2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZTRQ_BURDEN2,      // button ID
                 GFX_STATICTEXT_LEFT_314,    // left
                 GFX_STATICTEXT_TOP_314,     // top
                 GFX_STATICTEXT_RIGHT_314,   // right
                 GFX_STATICTEXT_BOTTOM_314,  // bottom
                 GFX_STATICTEXT_STATE_314,   // state
                 (GFX_XCHAR*)staticTextStr_314,    // text
                 GFX_STATICTEXT_ALIGNMENT_314,       //alignment
                 GFX_STATICTEXT_SCHEME_314
                 ); // use alternate scheme
        break;
    case DIS_ZTRQ_BURDEN1:
        hgcObj.pDIS_ZTRQ_BURDEN1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZTRQ_BURDEN1,      // button ID
                 GFX_STATICTEXT_LEFT_315,    // left
                 GFX_STATICTEXT_TOP_315,     // top
                 GFX_STATICTEXT_RIGHT_315,   // right
                 GFX_STATICTEXT_BOTTOM_315,  // bottom
                 GFX_STATICTEXT_STATE_315,   // state
                 (GFX_XCHAR*)staticTextStr_315,    // text
                 GFX_STATICTEXT_ALIGNMENT_315,       //alignment
                 GFX_STATICTEXT_SCHEME_315
                 ); // use alternate scheme
        break;
    case DIS_ZP_ERROR:
        hgcObj.pDIS_ZP_ERRORObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZP_ERROR,      // button ID
                 GFX_STATICTEXT_LEFT_316,    // left
                 GFX_STATICTEXT_TOP_316,     // top
                 GFX_STATICTEXT_RIGHT_316,   // right
                 GFX_STATICTEXT_BOTTOM_316,  // bottom
                 GFX_STATICTEXT_STATE_316,   // state
                 (GFX_XCHAR*)staticTextStr_316,    // text
                 GFX_STATICTEXT_ALIGNMENT_316,       //alignment
                 GFX_STATICTEXT_SCHEME_316
                 ); // use alternate scheme
        break;
    case DIS_ZDO_PORT_STATUS:
        hgcObj.pDIS_ZDO_PORT_STATUSObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZDO_PORT_STATUS,      // button ID
                 GFX_STATICTEXT_LEFT_317,    // left
                 GFX_STATICTEXT_TOP_317,     // top
                 GFX_STATICTEXT_RIGHT_317,   // right
                 GFX_STATICTEXT_BOTTOM_317,  // bottom
                 GFX_STATICTEXT_STATE_317,   // state
                 (GFX_XCHAR*)staticTextStr_317,    // text
                 GFX_STATICTEXT_ALIGNMENT_317,       //alignment
                 GFX_STATICTEXT_SCHEME_317
                 ); // use alternate scheme
        break;
    case DIS_ZDI_PORT_STATUS:
        hgcObj.pDIS_ZDI_PORT_STATUSObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZDI_PORT_STATUS,      // button ID
                 GFX_STATICTEXT_LEFT_318,    // left
                 GFX_STATICTEXT_TOP_318,     // top
                 GFX_STATICTEXT_RIGHT_318,   // right
                 GFX_STATICTEXT_BOTTOM_318,  // bottom
                 GFX_STATICTEXT_STATE_318,   // state
                 (GFX_XCHAR*)staticTextStr_318,    // text
                 GFX_STATICTEXT_ALIGNMENT_318,       //alignment
                 GFX_STATICTEXT_SCHEME_318
                 ); // use alternate scheme
        break;
    case DIS_ZELEC_ANGLE:
        hgcObj.pDIS_ZELEC_ANGLEObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZELEC_ANGLE,      // button ID
                 GFX_STATICTEXT_LEFT_319,    // left
                 GFX_STATICTEXT_TOP_319,     // top
                 GFX_STATICTEXT_RIGHT_319,   // right
                 GFX_STATICTEXT_BOTTOM_319,  // bottom
                 GFX_STATICTEXT_STATE_319,   // state
                 (GFX_XCHAR*)staticTextStr_319,    // text
                 GFX_STATICTEXT_ALIGNMENT_319,       //alignment
                 GFX_STATICTEXT_SCHEME_319
                 ); // use alternate scheme
        break;
    case DIS_ZMECH_ANGLE:
        hgcObj.pDIS_ZMECH_ANGLEObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZMECH_ANGLE,      // button ID
                 GFX_STATICTEXT_LEFT_320,    // left
                 GFX_STATICTEXT_TOP_320,     // top
                 GFX_STATICTEXT_RIGHT_320,   // right
                 GFX_STATICTEXT_BOTTOM_320,  // bottom
                 GFX_STATICTEXT_STATE_320,   // state
                 (GFX_XCHAR*)staticTextStr_320,    // text
                 GFX_STATICTEXT_ALIGNMENT_320,       //alignment
                 GFX_STATICTEXT_SCHEME_320
                 ); // use alternate scheme
        break;
    case DIS_ZSPD_FBK:
        hgcObj.pDIS_ZSPD_FBKObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZSPD_FBK,      // button ID
                 GFX_STATICTEXT_LEFT_321,    // left
                 GFX_STATICTEXT_TOP_321,     // top
                 GFX_STATICTEXT_RIGHT_321,   // right
                 GFX_STATICTEXT_BOTTOM_321,  // bottom
                 GFX_STATICTEXT_STATE_321,   // state
                 (GFX_XCHAR*)staticTextStr_321,    // text
                 GFX_STATICTEXT_ALIGNMENT_321,       //alignment
                 GFX_STATICTEXT_SCHEME_321
                 ); // use alternate scheme
        break;
    case DIS_RotInertiaRatio:
        hgcObj.pDIS_RotInertiaRatioObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_RotInertiaRatio,      // button ID
                 GFX_STATICTEXT_LEFT_322,    // left
                 GFX_STATICTEXT_TOP_322,     // top
                 GFX_STATICTEXT_RIGHT_322,   // right
                 GFX_STATICTEXT_BOTTOM_322,  // bottom
                 GFX_STATICTEXT_STATE_322,   // state
                 (GFX_XCHAR*)staticTextStr_322,    // text
                 GFX_STATICTEXT_ALIGNMENT_322,       //alignment
                 GFX_STATICTEXT_SCHEME_322
                 ); // use alternate scheme
        break;
    case DIS_PositionLoopGain:
        hgcObj.pDIS_PositionLoopGainObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_PositionLoopGain,      // button ID
                 GFX_STATICTEXT_LEFT_323,    // left
                 GFX_STATICTEXT_TOP_323,     // top
                 GFX_STATICTEXT_RIGHT_323,   // right
                 GFX_STATICTEXT_BOTTOM_323,  // bottom
                 GFX_STATICTEXT_STATE_323,   // state
                 (GFX_XCHAR*)staticTextStr_323,    // text
                 GFX_STATICTEXT_ALIGNMENT_323,       //alignment
                 GFX_STATICTEXT_SCHEME_323
                 ); // use alternate scheme
        break;
    case DIS_SpeedLoopIntegral:
        hgcObj.pDIS_SpeedLoopIntegralObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_SpeedLoopIntegral,      // button ID
                 GFX_STATICTEXT_LEFT_324,    // left
                 GFX_STATICTEXT_TOP_324,     // top
                 GFX_STATICTEXT_RIGHT_324,   // right
                 GFX_STATICTEXT_BOTTOM_324,  // bottom
                 GFX_STATICTEXT_STATE_324,   // state
                 (GFX_XCHAR*)staticTextStr_324,    // text
                 GFX_STATICTEXT_ALIGNMENT_324,       //alignment
                 GFX_STATICTEXT_SCHEME_324
                 ); // use alternate scheme
        break;
    case DIS_SpeedLoopGain:
        hgcObj.pDIS_SpeedLoopGainObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_SpeedLoopGain,      // button ID
                 GFX_STATICTEXT_LEFT_325,    // left
                 GFX_STATICTEXT_TOP_325,     // top
                 GFX_STATICTEXT_RIGHT_325,   // right
                 GFX_STATICTEXT_BOTTOM_325,  // bottom
                 GFX_STATICTEXT_STATE_325,   // state
                 (GFX_XCHAR*)staticTextStr_325,    // text
                 GFX_STATICTEXT_ALIGNMENT_325,       //alignment
                 GFX_STATICTEXT_SCHEME_325
                 ); // use alternate scheme
        break;
    case DIS_SettingValue:
        hgcObj.pDIS_SettingValueObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_SettingValue,      // button ID
                 GFX_STATICTEXT_LEFT_326,    // left
                 GFX_STATICTEXT_TOP_326,     // top
                 GFX_STATICTEXT_RIGHT_326,   // right
                 GFX_STATICTEXT_BOTTOM_326,  // bottom
                 GFX_STATICTEXT_STATE_326,   // state
                 (GFX_XCHAR*)staticTextStr_326,    // text
                 GFX_STATICTEXT_ALIGNMENT_326,       //alignment
                 GFX_STATICTEXT_SCHEME_326
                 ); // use alternate scheme
        break;
    case DIS_ParaSetting:
        hgcObj.pDIS_ParaSettingObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ParaSetting,      // button ID
                 GFX_STATICTEXT_LEFT_327,    // left
                 GFX_STATICTEXT_TOP_327,     // top
                 GFX_STATICTEXT_RIGHT_327,   // right
                 GFX_STATICTEXT_BOTTOM_327,  // bottom
                 GFX_STATICTEXT_STATE_327,   // state
                 (GFX_XCHAR*)staticTextStr_327,    // text
                 GFX_STATICTEXT_ALIGNMENT_327,       //alignment
                 GFX_STATICTEXT_SCHEME_327
                 ); // use alternate scheme
        break;
    case DIS_ZRotInertiaRatio:
        hgcObj.pDIS_ZRotInertiaRatioObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZRotInertiaRatio,      // button ID
                 GFX_STATICTEXT_LEFT_328,    // left
                 GFX_STATICTEXT_TOP_328,     // top
                 GFX_STATICTEXT_RIGHT_328,   // right
                 GFX_STATICTEXT_BOTTOM_328,  // bottom
                 GFX_STATICTEXT_STATE_328,   // state
                 (GFX_XCHAR*)staticTextStr_328,    // text
                 GFX_STATICTEXT_ALIGNMENT_328,       //alignment
                 GFX_STATICTEXT_SCHEME_328
                 ); // use alternate scheme
        break;
    case DIS_ZPositionLoopGain:
        hgcObj.pDIS_ZPositionLoopGainObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZPositionLoopGain,      // button ID
                 GFX_STATICTEXT_LEFT_329,    // left
                 GFX_STATICTEXT_TOP_329,     // top
                 GFX_STATICTEXT_RIGHT_329,   // right
                 GFX_STATICTEXT_BOTTOM_329,  // bottom
                 GFX_STATICTEXT_STATE_329,   // state
                 (GFX_XCHAR*)staticTextStr_329,    // text
                 GFX_STATICTEXT_ALIGNMENT_329,       //alignment
                 GFX_STATICTEXT_SCHEME_329
                 ); // use alternate scheme
        break;
    case DIS_ZSpeedLoopIntegral:
        hgcObj.pDIS_ZSpeedLoopIntegralObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZSpeedLoopIntegral,      // button ID
                 GFX_STATICTEXT_LEFT_330,    // left
                 GFX_STATICTEXT_TOP_330,     // top
                 GFX_STATICTEXT_RIGHT_330,   // right
                 GFX_STATICTEXT_BOTTOM_330,  // bottom
                 GFX_STATICTEXT_STATE_330,   // state
                 (GFX_XCHAR*)staticTextStr_330,    // text
                 GFX_STATICTEXT_ALIGNMENT_330,       //alignment
                 GFX_STATICTEXT_SCHEME_330
                 ); // use alternate scheme
        break;
    case DIS_ZSpeedLoopGain:
        hgcObj.pDIS_ZSpeedLoopGainObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZSpeedLoopGain,      // button ID
                 GFX_STATICTEXT_LEFT_331,    // left
                 GFX_STATICTEXT_TOP_331,     // top
                 GFX_STATICTEXT_RIGHT_331,   // right
                 GFX_STATICTEXT_BOTTOM_331,  // bottom
                 GFX_STATICTEXT_STATE_331,   // state
                 (GFX_XCHAR*)staticTextStr_331,    // text
                 GFX_STATICTEXT_ALIGNMENT_331,       //alignment
                 GFX_STATICTEXT_SCHEME_331
                 ); // use alternate scheme
        break;
    case DIS_ZSettingValue:
        hgcObj.pDIS_ZSettingValueObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZSettingValue,      // button ID
                 GFX_STATICTEXT_LEFT_332,    // left
                 GFX_STATICTEXT_TOP_332,     // top
                 GFX_STATICTEXT_RIGHT_332,   // right
                 GFX_STATICTEXT_BOTTOM_332,  // bottom
                 GFX_STATICTEXT_STATE_332,   // state
                 (GFX_XCHAR*)staticTextStr_332,    // text
                 GFX_STATICTEXT_ALIGNMENT_332,       //alignment
                 GFX_STATICTEXT_SCHEME_332
                 ); // use alternate scheme
        break;
    case DIS_ZParaSetting:
        hgcObj.pDIS_ZParaSettingObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DIS_ZParaSetting,      // button ID
                 GFX_STATICTEXT_LEFT_333,    // left
                 GFX_STATICTEXT_TOP_333,     // top
                 GFX_STATICTEXT_RIGHT_333,   // right
                 GFX_STATICTEXT_BOTTOM_333,  // bottom
                 GFX_STATICTEXT_STATE_333,   // state
                 (GFX_XCHAR*)staticTextStr_333,    // text
                 GFX_STATICTEXT_ALIGNMENT_333,       //alignment
                 GFX_STATICTEXT_SCHEME_333
                 ); // use alternate scheme
        break;
    case Picture1:
        hgcObj.pPicture1Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture1,      // picture ID
                 GFX_PICTURE_LEFT_0,    // left
                 GFX_PICTURE_TOP_0,     // top
                 GFX_PICTURE_RIGHT_0,   // right				 
                 GFX_PICTURE_BOTTOM_0,  // bottom
				 GFX_PICTURE_STATE_0,   // state                 
                 GFX_PICTURE_SCALE_0,     // scale
                 (GFX_RESOURCE_HDR*)&StartUp,    // bitmap
                 GFX_PICTURE_SCHEME_0
                 );
        break;
    case PIC_StopPage:
        hgcObj.pPIC_StopPageObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PIC_StopPage,      // picture ID
                 GFX_PICTURE_LEFT_1,    // left
                 GFX_PICTURE_TOP_1,     // top
                 GFX_PICTURE_RIGHT_1,   // right				 
                 GFX_PICTURE_BOTTOM_1,  // bottom
				 GFX_PICTURE_STATE_1,   // state                 
                 GFX_PICTURE_SCALE_1,     // scale
                 (GFX_RESOURCE_HDR*)&StopPageDisp,    // bitmap
                 GFX_PICTURE_SCHEME_1
                 );
        break;
    case PCB_Warning_Gray:
        hgcObj.pPCB_Warning_GrayObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Warning_Gray,      // picture ID
                 GFX_PICTURE_LEFT_2,    // left
                 GFX_PICTURE_TOP_2,     // top
                 GFX_PICTURE_RIGHT_2,   // right				 
                 GFX_PICTURE_BOTTOM_2,  // bottom
				 GFX_PICTURE_STATE_2,   // state                 
                 GFX_PICTURE_SCALE_2,     // scale
                 (GFX_RESOURCE_HDR*)&Warning1,    // bitmap
                 GFX_PICTURE_SCHEME_2
                 );
        break;
    case PCB_Information:
        hgcObj.pPCB_InformationObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Information,      // picture ID
                 GFX_PICTURE_LEFT_3,    // left
                 GFX_PICTURE_TOP_3,     // top
                 GFX_PICTURE_RIGHT_3,   // right				 
                 GFX_PICTURE_BOTTOM_3,  // bottom
				 GFX_PICTURE_STATE_3,   // state                 
                 GFX_PICTURE_SCALE_3,     // scale
                 (GFX_RESOURCE_HDR*)&Information,    // bitmap
                 GFX_PICTURE_SCHEME_3
                 );
        break;
    case PCB_Manual:
        hgcObj.pPCB_ManualObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Manual,      // picture ID
                 GFX_PICTURE_LEFT_4,    // left
                 GFX_PICTURE_TOP_4,     // top
                 GFX_PICTURE_RIGHT_4,   // right				 
                 GFX_PICTURE_BOTTOM_4,  // bottom
				 GFX_PICTURE_STATE_4,   // state                 
                 GFX_PICTURE_SCALE_4,     // scale
                 (GFX_RESOURCE_HDR*)&Manual,    // bitmap
                 GFX_PICTURE_SCHEME_4
                 );
        break;
    case PCB_AutoRun:
        hgcObj.pPCB_AutoRunObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_AutoRun,      // picture ID
                 GFX_PICTURE_LEFT_5,    // left
                 GFX_PICTURE_TOP_5,     // top
                 GFX_PICTURE_RIGHT_5,   // right				 
                 GFX_PICTURE_BOTTOM_5,  // bottom
				 GFX_PICTURE_STATE_5,   // state                 
                 GFX_PICTURE_SCALE_5,     // scale
                 (GFX_RESOURCE_HDR*)&AutoRun1,    // bitmap
                 GFX_PICTURE_SCHEME_5
                 );
        break;
    case PCB_Monitor:
        hgcObj.pPCB_MonitorObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Monitor,      // picture ID
                 GFX_PICTURE_LEFT_6,    // left
                 GFX_PICTURE_TOP_6,     // top
                 GFX_PICTURE_RIGHT_6,   // right				 
                 GFX_PICTURE_BOTTOM_6,  // bottom
				 GFX_PICTURE_STATE_6,   // state                 
                 GFX_PICTURE_SCALE_6,     // scale
                 (GFX_RESOURCE_HDR*)&Monitor,    // bitmap
                 GFX_PICTURE_SCHEME_6
                 );
        break;
    case PCB_Param:
        hgcObj.pPCB_ParamObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Param,      // picture ID
                 GFX_PICTURE_LEFT_7,    // left
                 GFX_PICTURE_TOP_7,     // top
                 GFX_PICTURE_RIGHT_7,   // right				 
                 GFX_PICTURE_BOTTOM_7,  // bottom
				 GFX_PICTURE_STATE_7,   // state                 
                 GFX_PICTURE_SCALE_7,     // scale
                 (GFX_RESOURCE_HDR*)&Parameter,    // bitmap
                 GFX_PICTURE_SCHEME_7
                 );
        break;
    case PCB_Instruct:
        hgcObj.pPCB_InstructObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Instruct,      // picture ID
                 GFX_PICTURE_LEFT_8,    // left
                 GFX_PICTURE_TOP_8,     // top
                 GFX_PICTURE_RIGHT_8,   // right				 
                 GFX_PICTURE_BOTTOM_8,  // bottom
				 GFX_PICTURE_STATE_8,   // state                 
                 GFX_PICTURE_SCALE_8,     // scale
                 (GFX_RESOURCE_HDR*)&Instruct,    // bitmap
                 GFX_PICTURE_SCHEME_8
                 );
        break;
    case PCB_Function:
        hgcObj.pPCB_FunctionObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Function,      // picture ID
                 GFX_PICTURE_LEFT_9,    // left
                 GFX_PICTURE_TOP_9,     // top
                 GFX_PICTURE_RIGHT_9,   // right				 
                 GFX_PICTURE_BOTTOM_9,  // bottom
				 GFX_PICTURE_STATE_9,   // state                 
                 GFX_PICTURE_SCALE_9,     // scale
                 (GFX_RESOURCE_HDR*)&Function,    // bitmap
                 GFX_PICTURE_SCHEME_9
                 );
        break;
    case PCB_Thimb_Red:
        hgcObj.pPCB_Thimb_RedObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Thimb_Red,      // picture ID
                 GFX_PICTURE_LEFT_10,    // left
                 GFX_PICTURE_TOP_10,     // top
                 GFX_PICTURE_RIGHT_10,   // right				 
                 GFX_PICTURE_BOTTOM_10,  // bottom
				 GFX_PICTURE_STATE_10,   // state                 
                 GFX_PICTURE_SCALE_10,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_10
                 );
        break;
    case PCB_CloseD_Green:
        hgcObj.pPCB_CloseD_GreenObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_CloseD_Green,      // picture ID
                 GFX_PICTURE_LEFT_11,    // left
                 GFX_PICTURE_TOP_11,     // top
                 GFX_PICTURE_RIGHT_11,   // right				 
                 GFX_PICTURE_BOTTOM_11,  // bottom
				 GFX_PICTURE_STATE_11,   // state                 
                 GFX_PICTURE_SCALE_11,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_11
                 );
        break;
    case PCB_SafeD_Gray:
        hgcObj.pPCB_SafeD_GrayObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_SafeD_Gray,      // picture ID
                 GFX_PICTURE_LEFT_12,    // left
                 GFX_PICTURE_TOP_12,     // top
                 GFX_PICTURE_RIGHT_12,   // right				 
                 GFX_PICTURE_BOTTOM_12,  // bottom
				 GFX_PICTURE_STATE_12,   // state                 
                 GFX_PICTURE_SCALE_12,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_12
                 );
        break;
    case PCB_OpenM_Gray:
        hgcObj.pPCB_OpenM_GrayObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_OpenM_Gray,      // picture ID
                 GFX_PICTURE_LEFT_13,    // left
                 GFX_PICTURE_TOP_13,     // top
                 GFX_PICTURE_RIGHT_13,   // right				 
                 GFX_PICTURE_BOTTOM_13,  // bottom
				 GFX_PICTURE_STATE_13,   // state                 
                 GFX_PICTURE_SCALE_13,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_13
                 );
        break;
    case PCB_MacNegativeM:
        hgcObj.pPCB_MacNegativeMObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacNegativeM,      // picture ID
                 GFX_PICTURE_LEFT_14,    // left
                 GFX_PICTURE_TOP_14,     // top
                 GFX_PICTURE_RIGHT_14,   // right				 
                 GFX_PICTURE_BOTTOM_14,  // bottom
				 GFX_PICTURE_STATE_14,   // state                 
                 GFX_PICTURE_SCALE_14,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_14
                 );
        break;
    case PCB_MacMTravForw:
        hgcObj.pPCB_MacMTravForwObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacMTravForw,      // picture ID
                 GFX_PICTURE_LEFT_15,    // left
                 GFX_PICTURE_TOP_15,     // top
                 GFX_PICTURE_RIGHT_15,   // right				 
                 GFX_PICTURE_BOTTOM_15,  // bottom
				 GFX_PICTURE_STATE_15,   // state                 
                 GFX_PICTURE_SCALE_15,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_15
                 );
        break;
    case PCB_MacTravFB:
        hgcObj.pPCB_MacTravFBObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacTravFB,      // picture ID
                 GFX_PICTURE_LEFT_16,    // left
                 GFX_PICTURE_TOP_16,     // top
                 GFX_PICTURE_RIGHT_16,   // right				 
                 GFX_PICTURE_BOTTOM_16,  // bottom
				 GFX_PICTURE_STATE_16,   // state                 
                 GFX_PICTURE_SCALE_16,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_16
                 );
        break;
    case PCB_MacMPosBack:
        hgcObj.pPCB_MacMPosBackObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacMPosBack,      // picture ID
                 GFX_PICTURE_LEFT_17,    // left
                 GFX_PICTURE_TOP_17,     // top
                 GFX_PICTURE_RIGHT_17,   // right				 
                 GFX_PICTURE_BOTTOM_17,  // bottom
				 GFX_PICTURE_STATE_17,   // state                 
                 GFX_PICTURE_SCALE_17,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_17
                 );
        break;
    case PCB_MacMPosFB:
        hgcObj.pPCB_MacMPosFBObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacMPosFB,      // picture ID
                 GFX_PICTURE_LEFT_18,    // left
                 GFX_PICTURE_TOP_18,     // top
                 GFX_PICTURE_RIGHT_18,   // right				 
                 GFX_PICTURE_BOTTOM_18,  // bottom
				 GFX_PICTURE_STATE_18,   // state                 
                 GFX_PICTURE_SCALE_18,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_18
                 );
        break;
    case PCB_MacMDown:
        hgcObj.pPCB_MacMDownObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacMDown,      // picture ID
                 GFX_PICTURE_LEFT_19,    // left
                 GFX_PICTURE_TOP_19,     // top
                 GFX_PICTURE_RIGHT_19,   // right				 
                 GFX_PICTURE_BOTTOM_19,  // bottom
				 GFX_PICTURE_STATE_19,   // state                 
                 GFX_PICTURE_SCALE_19,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_19
                 );
        break;
    case PCB_MacMUD:
        hgcObj.pPCB_MacMUDObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacMUD,      // picture ID
                 GFX_PICTURE_LEFT_20,    // left
                 GFX_PICTURE_TOP_20,     // top
                 GFX_PICTURE_RIGHT_20,   // right				 
                 GFX_PICTURE_BOTTOM_20,  // bottom
				 GFX_PICTURE_STATE_20,   // state                 
                 GFX_PICTURE_SCALE_20,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_20
                 );
        break;
    case PCB_MacNegativeV:
        hgcObj.pPCB_MacNegativeVObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacNegativeV,      // picture ID
                 GFX_PICTURE_LEFT_21,    // left
                 GFX_PICTURE_TOP_21,     // top
                 GFX_PICTURE_RIGHT_21,   // right				 
                 GFX_PICTURE_BOTTOM_21,  // bottom
				 GFX_PICTURE_STATE_21,   // state                 
                 GFX_PICTURE_SCALE_21,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_21
                 );
        break;
    case PCB_MacSTravForw:
        hgcObj.pPCB_MacSTravForwObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacSTravForw,      // picture ID
                 GFX_PICTURE_LEFT_22,    // left
                 GFX_PICTURE_TOP_22,     // top
                 GFX_PICTURE_RIGHT_22,   // right				 
                 GFX_PICTURE_BOTTOM_22,  // bottom
				 GFX_PICTURE_STATE_22,   // state                 
                 GFX_PICTURE_SCALE_22,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_22
                 );
        break;
    case PCB_MacSTravFB:
        hgcObj.pPCB_MacSTravFBObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacSTravFB,      // picture ID
                 GFX_PICTURE_LEFT_23,    // left
                 GFX_PICTURE_TOP_23,     // top
                 GFX_PICTURE_RIGHT_23,   // right				 
                 GFX_PICTURE_BOTTOM_23,  // bottom
				 GFX_PICTURE_STATE_23,   // state                 
                 GFX_PICTURE_SCALE_23,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_23
                 );
        break;
    case PCB_MacSPosBack:
        hgcObj.pPCB_MacSPosBackObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacSPosBack,      // picture ID
                 GFX_PICTURE_LEFT_24,    // left
                 GFX_PICTURE_TOP_24,     // top
                 GFX_PICTURE_RIGHT_24,   // right				 
                 GFX_PICTURE_BOTTOM_24,  // bottom
				 GFX_PICTURE_STATE_24,   // state                 
                 GFX_PICTURE_SCALE_24,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_24
                 );
        break;
    case PCB_MacSPosFB:
        hgcObj.pPCB_MacSPosFBObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacSPosFB,      // picture ID
                 GFX_PICTURE_LEFT_25,    // left
                 GFX_PICTURE_TOP_25,     // top
                 GFX_PICTURE_RIGHT_25,   // right				 
                 GFX_PICTURE_BOTTOM_25,  // bottom
				 GFX_PICTURE_STATE_25,   // state                 
                 GFX_PICTURE_SCALE_25,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_25
                 );
        break;
    case PCB_MacSubDown:
        hgcObj.pPCB_MacSubDownObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacSubDown,      // picture ID
                 GFX_PICTURE_LEFT_26,    // left
                 GFX_PICTURE_TOP_26,     // top
                 GFX_PICTURE_RIGHT_26,   // right				 
                 GFX_PICTURE_BOTTOM_26,  // bottom
				 GFX_PICTURE_STATE_26,   // state                 
                 GFX_PICTURE_SCALE_26,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_26
                 );
        break;
    case PCB_MacSubUD:
        hgcObj.pPCB_MacSubUDObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MacSubUD,      // picture ID
                 GFX_PICTURE_LEFT_27,    // left
                 GFX_PICTURE_TOP_27,     // top
                 GFX_PICTURE_RIGHT_27,   // right				 
                 GFX_PICTURE_BOTTOM_27,  // bottom
				 GFX_PICTURE_STATE_27,   // state                 
                 GFX_PICTURE_SCALE_27,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_27
                 );
        break;
    case PCB_X27TravOutLmt:
        hgcObj.pPCB_X27TravOutLmtObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X27TravOutLmt,      // picture ID
                 GFX_PICTURE_LEFT_28,    // left
                 GFX_PICTURE_TOP_28,     // top
                 GFX_PICTURE_RIGHT_28,   // right				 
                 GFX_PICTURE_BOTTOM_28,  // bottom
				 GFX_PICTURE_STATE_28,   // state                 
                 GFX_PICTURE_SCALE_28,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_28
                 );
        break;
    case PCB_X26TravInLmt:
        hgcObj.pPCB_X26TravInLmtObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X26TravInLmt,      // picture ID
                 GFX_PICTURE_LEFT_29,    // left
                 GFX_PICTURE_TOP_29,     // top
                 GFX_PICTURE_RIGHT_29,   // right				 
                 GFX_PICTURE_BOTTOM_29,  // bottom
				 GFX_PICTURE_STATE_29,   // state                 
                 GFX_PICTURE_SCALE_29,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_29
                 );
        break;
    case PCB_X25Origin:
        hgcObj.pPCB_X25OriginObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X25Origin,      // picture ID
                 GFX_PICTURE_LEFT_30,    // left
                 GFX_PICTURE_TOP_30,     // top
                 GFX_PICTURE_RIGHT_30,   // right				 
                 GFX_PICTURE_BOTTOM_30,  // bottom
				 GFX_PICTURE_STATE_30,   // state                 
                 GFX_PICTURE_SCALE_30,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_30
                 );
        break;
    case PCB_X24OutSafe:
        hgcObj.pPCB_X24OutSafeObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X24OutSafe,      // picture ID
                 GFX_PICTURE_LEFT_31,    // left
                 GFX_PICTURE_TOP_31,     // top
                 GFX_PICTURE_RIGHT_31,   // right				 
                 GFX_PICTURE_BOTTOM_31,  // bottom
				 GFX_PICTURE_STATE_31,   // state                 
                 GFX_PICTURE_SCALE_31,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_31
                 );
        break;
    case PCB_X23InSafe:
        hgcObj.pPCB_X23InSafeObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X23InSafe,      // picture ID
                 GFX_PICTURE_LEFT_32,    // left
                 GFX_PICTURE_TOP_32,     // top
                 GFX_PICTURE_RIGHT_32,   // right				 
                 GFX_PICTURE_BOTTOM_32,  // bottom
				 GFX_PICTURE_STATE_32,   // state                 
                 GFX_PICTURE_SCALE_32,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_32
                 );
        break;
    case PCB_X22CheckPress:
        hgcObj.pPCB_X22CheckPressObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X22CheckPress,      // picture ID
                 GFX_PICTURE_LEFT_33,    // left
                 GFX_PICTURE_TOP_33,     // top
                 GFX_PICTURE_RIGHT_33,   // right				 
                 GFX_PICTURE_BOTTOM_33,  // bottom
				 GFX_PICTURE_STATE_33,   // state                 
                 GFX_PICTURE_SCALE_33,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_33
                 );
        break;
    case PCB_X21Injection:
        hgcObj.pPCB_X21InjectionObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X21Injection,      // picture ID
                 GFX_PICTURE_LEFT_34,    // left
                 GFX_PICTURE_TOP_34,     // top
                 GFX_PICTURE_RIGHT_34,   // right				 
                 GFX_PICTURE_BOTTOM_34,  // bottom
				 GFX_PICTURE_STATE_34,   // state                 
                 GFX_PICTURE_SCALE_34,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_34
                 );
        break;
    case PCB_X17MainDown:
        hgcObj.pPCB_X17MainDownObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X17MainDown,      // picture ID
                 GFX_PICTURE_LEFT_35,    // left
                 GFX_PICTURE_TOP_35,     // top
                 GFX_PICTURE_RIGHT_35,   // right				 
                 GFX_PICTURE_BOTTOM_35,  // bottom
				 GFX_PICTURE_STATE_35,   // state                 
                 GFX_PICTURE_SCALE_35,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_35
                 );
        break;
    case PCB_X16MainBack:
        hgcObj.pPCB_X16MainBackObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X16MainBack,      // picture ID
                 GFX_PICTURE_LEFT_36,    // left
                 GFX_PICTURE_TOP_36,     // top
                 GFX_PICTURE_RIGHT_36,   // right				 
                 GFX_PICTURE_BOTTOM_36,  // bottom
				 GFX_PICTURE_STATE_36,   // state                 
                 GFX_PICTURE_SCALE_36,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_36
                 );
        break;
    case PCB_X15MainForw:
        hgcObj.pPCB_X15MainForwObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X15MainForw,      // picture ID
                 GFX_PICTURE_LEFT_37,    // left
                 GFX_PICTURE_TOP_37,     // top
                 GFX_PICTURE_RIGHT_37,   // right				 
                 GFX_PICTURE_BOTTOM_37,  // bottom
				 GFX_PICTURE_STATE_37,   // state                 
                 GFX_PICTURE_SCALE_37,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_37
                 );
        break;
    case PCB_X14Vacuum:
        hgcObj.pPCB_X14VacuumObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X14Vacuum,      // picture ID
                 GFX_PICTURE_LEFT_38,    // left
                 GFX_PICTURE_TOP_38,     // top
                 GFX_PICTURE_RIGHT_38,   // right				 
                 GFX_PICTURE_BOTTOM_38,  // bottom
				 GFX_PICTURE_STATE_38,   // state                 
                 GFX_PICTURE_SCALE_38,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_38
                 );
        break;
    case PCB_X13Hold:
        hgcObj.pPCB_X13HoldObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X13Hold,      // picture ID
                 GFX_PICTURE_LEFT_39,    // left
                 GFX_PICTURE_TOP_39,     // top
                 GFX_PICTURE_RIGHT_39,   // right				 
                 GFX_PICTURE_BOTTOM_39,  // bottom
				 GFX_PICTURE_STATE_39,   // state                 
                 GFX_PICTURE_SCALE_39,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_39
                 );
        break;
    case PCB_X12MainFix:
        hgcObj.pPCB_X12MainFixObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X12MainFix,      // picture ID
                 GFX_PICTURE_LEFT_40,    // left
                 GFX_PICTURE_TOP_40,     // top
                 GFX_PICTURE_RIGHT_40,   // right				 
                 GFX_PICTURE_BOTTOM_40,  // bottom
				 GFX_PICTURE_STATE_40,   // state                 
                 GFX_PICTURE_SCALE_40,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_40
                 );
        break;
    case PCB_X20Reserve:
        hgcObj.pPCB_X20ReserveObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X20Reserve,      // picture ID
                 GFX_PICTURE_LEFT_41,    // left
                 GFX_PICTURE_TOP_41,     // top
                 GFX_PICTURE_RIGHT_41,   // right				 
                 GFX_PICTURE_BOTTOM_41,  // bottom
				 GFX_PICTURE_STATE_41,   // state                 
                 GFX_PICTURE_SCALE_41,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_41
                 );
        break;
    case PCB_X11Verti:
        hgcObj.pPCB_X11VertiObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X11Verti,      // picture ID
                 GFX_PICTURE_LEFT_42,    // left
                 GFX_PICTURE_TOP_42,     // top
                 GFX_PICTURE_RIGHT_42,   // right				 
                 GFX_PICTURE_BOTTOM_42,  // bottom
				 GFX_PICTURE_STATE_42,   // state                 
                 GFX_PICTURE_SCALE_42,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_42
                 );
        break;
    case PCB_X10Hori:
        hgcObj.pPCB_X10HoriObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X10Hori,      // picture ID
                 GFX_PICTURE_LEFT_43,    // left
                 GFX_PICTURE_TOP_43,     // top
                 GFX_PICTURE_RIGHT_43,   // right				 
                 GFX_PICTURE_BOTTOM_43,  // bottom
				 GFX_PICTURE_STATE_43,   // state                 
                 GFX_PICTURE_SCALE_43,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_43
                 );
        break;
    case PCB_X37Reserve2:
        hgcObj.pPCB_X37Reserve2Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X37Reserve2,      // picture ID
                 GFX_PICTURE_LEFT_44,    // left
                 GFX_PICTURE_TOP_44,     // top
                 GFX_PICTURE_RIGHT_44,   // right				 
                 GFX_PICTURE_BOTTOM_44,  // bottom
				 GFX_PICTURE_STATE_44,   // state                 
                 GFX_PICTURE_SCALE_44,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_44
                 );
        break;
    case PCB_X36Process1:
        hgcObj.pPCB_X36Process1Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X36Process1,      // picture ID
                 GFX_PICTURE_LEFT_45,    // left
                 GFX_PICTURE_TOP_45,     // top
                 GFX_PICTURE_RIGHT_45,   // right				 
                 GFX_PICTURE_BOTTOM_45,  // bottom
				 GFX_PICTURE_STATE_45,   // state                 
                 GFX_PICTURE_SCALE_45,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_45
                 );
        break;
    case PCB_X35MainUp:
        hgcObj.pPCB_X35MainUpObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X35MainUp,      // picture ID
                 GFX_PICTURE_LEFT_46,    // left
                 GFX_PICTURE_TOP_46,     // top
                 GFX_PICTURE_RIGHT_46,   // right				 
                 GFX_PICTURE_BOTTOM_46,  // bottom
				 GFX_PICTURE_STATE_46,   // state                 
                 GFX_PICTURE_SCALE_46,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_46
                 );
        break;
    case PCB_X34SubFix:
        hgcObj.pPCB_X34SubFixObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X34SubFix,      // picture ID
                 GFX_PICTURE_LEFT_47,    // left
                 GFX_PICTURE_TOP_47,     // top
                 GFX_PICTURE_RIGHT_47,   // right				 
                 GFX_PICTURE_BOTTOM_47,  // bottom
				 GFX_PICTURE_STATE_47,   // state                 
                 GFX_PICTURE_SCALE_47,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_47
                 );
        break;
    case PCB_X33ViceDown:
        hgcObj.pPCB_X33ViceDownObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X33ViceDown,      // picture ID
                 GFX_PICTURE_LEFT_48,    // left
                 GFX_PICTURE_TOP_48,     // top
                 GFX_PICTURE_RIGHT_48,   // right				 
                 GFX_PICTURE_BOTTOM_48,  // bottom
				 GFX_PICTURE_STATE_48,   // state                 
                 GFX_PICTURE_SCALE_48,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_48
                 );
        break;
    case PCB_X32SubUp:
        hgcObj.pPCB_X32SubUpObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X32SubUp,      // picture ID
                 GFX_PICTURE_LEFT_49,    // left
                 GFX_PICTURE_TOP_49,     // top
                 GFX_PICTURE_RIGHT_49,   // right				 
                 GFX_PICTURE_BOTTOM_49,  // bottom
				 GFX_PICTURE_STATE_49,   // state                 
                 GFX_PICTURE_SCALE_49,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_49
                 );
        break;
    case PCB_X31ViceBack:
        hgcObj.pPCB_X31ViceBackObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X31ViceBack,      // picture ID
                 GFX_PICTURE_LEFT_50,    // left
                 GFX_PICTURE_TOP_50,     // top
                 GFX_PICTURE_RIGHT_50,   // right				 
                 GFX_PICTURE_BOTTOM_50,  // bottom
				 GFX_PICTURE_STATE_50,   // state                 
                 GFX_PICTURE_SCALE_50,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_50
                 );
        break;
    case PCB_X30ViceForw:
        hgcObj.pPCB_X30ViceForwObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X30ViceForw,      // picture ID
                 GFX_PICTURE_LEFT_51,    // left
                 GFX_PICTURE_TOP_51,     // top
                 GFX_PICTURE_RIGHT_51,   // right				 
                 GFX_PICTURE_BOTTOM_51,  // bottom
				 GFX_PICTURE_STATE_51,   // state                 
                 GFX_PICTURE_SCALE_51,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_51
                 );
        break;
    case PCB_EmergStop:
        hgcObj.pPCB_EmergStopObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_EmergStop,      // picture ID
                 GFX_PICTURE_LEFT_52,    // left
                 GFX_PICTURE_TOP_52,     // top
                 GFX_PICTURE_RIGHT_52,   // right				 
                 GFX_PICTURE_BOTTOM_52,  // bottom
				 GFX_PICTURE_STATE_52,   // state                 
                 GFX_PICTURE_SCALE_52,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_52
                 );
        break;
    case PCB_Thimble:
        hgcObj.pPCB_ThimbleObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Thimble,      // picture ID
                 GFX_PICTURE_LEFT_53,    // left
                 GFX_PICTURE_TOP_53,     // top
                 GFX_PICTURE_RIGHT_53,   // right				 
                 GFX_PICTURE_BOTTOM_53,  // bottom
				 GFX_PICTURE_STATE_53,   // state                 
                 GFX_PICTURE_SCALE_53,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_53
                 );
        break;
    case PCB_MidMold:
        hgcObj.pPCB_MidMoldObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_MidMold,      // picture ID
                 GFX_PICTURE_LEFT_54,    // left
                 GFX_PICTURE_TOP_54,     // top
                 GFX_PICTURE_RIGHT_54,   // right				 
                 GFX_PICTURE_BOTTOM_54,  // bottom
				 GFX_PICTURE_STATE_54,   // state                 
                 GFX_PICTURE_SCALE_54,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_54
                 );
        break;
    case PCB_AutoLmt:
        hgcObj.pPCB_AutoLmtObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_AutoLmt,      // picture ID
                 GFX_PICTURE_LEFT_55,    // left
                 GFX_PICTURE_TOP_55,     // top
                 GFX_PICTURE_RIGHT_55,   // right				 
                 GFX_PICTURE_BOTTOM_55,  // bottom
				 GFX_PICTURE_STATE_55,   // state                 
                 GFX_PICTURE_SCALE_55,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_55
                 );
        break;
    case PCB_DefProd:
        hgcObj.pPCB_DefProdObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_DefProd,      // picture ID
                 GFX_PICTURE_LEFT_56,    // left
                 GFX_PICTURE_TOP_56,     // top
                 GFX_PICTURE_RIGHT_56,   // right				 
                 GFX_PICTURE_BOTTOM_56,  // bottom
				 GFX_PICTURE_STATE_56,   // state                 
                 GFX_PICTURE_SCALE_56,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_56
                 );
        break;
    case PCB_CloFini:
        hgcObj.pPCB_CloFiniObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_CloFini,      // picture ID
                 GFX_PICTURE_LEFT_57,    // left
                 GFX_PICTURE_TOP_57,     // top
                 GFX_PICTURE_RIGHT_57,   // right				 
                 GFX_PICTURE_BOTTOM_57,  // bottom
				 GFX_PICTURE_STATE_57,   // state                 
                 GFX_PICTURE_SCALE_57,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_57
                 );
        break;
    case PCB_OpenFini:
        hgcObj.pPCB_OpenFiniObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_OpenFini,      // picture ID
                 GFX_PICTURE_LEFT_58,    // left
                 GFX_PICTURE_TOP_58,     // top
                 GFX_PICTURE_RIGHT_58,   // right				 
                 GFX_PICTURE_BOTTOM_58,  // bottom
				 GFX_PICTURE_STATE_58,   // state                 
                 GFX_PICTURE_SCALE_58,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_58
                 );
        break;
    case PCB_SafeDoor:
        hgcObj.pPCB_SafeDoorObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_SafeDoor,      // picture ID
                 GFX_PICTURE_LEFT_59,    // left
                 GFX_PICTURE_TOP_59,     // top
                 GFX_PICTURE_RIGHT_59,   // right				 
                 GFX_PICTURE_BOTTOM_59,  // bottom
				 GFX_PICTURE_STATE_59,   // state                 
                 GFX_PICTURE_SCALE_59,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_59
                 );
        break;
    case PCB_X47Reserve6:
        hgcObj.pPCB_X47Reserve6Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X47Reserve6,      // picture ID
                 GFX_PICTURE_LEFT_60,    // left
                 GFX_PICTURE_TOP_60,     // top
                 GFX_PICTURE_RIGHT_60,   // right				 
                 GFX_PICTURE_BOTTOM_60,  // bottom
				 GFX_PICTURE_STATE_60,   // state                 
                 GFX_PICTURE_SCALE_60,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_60
                 );
        break;
    case PCB_X46Reserve5:
        hgcObj.pPCB_X46Reserve5Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X46Reserve5,      // picture ID
                 GFX_PICTURE_LEFT_61,    // left
                 GFX_PICTURE_TOP_61,     // top
                 GFX_PICTURE_RIGHT_61,   // right				 
                 GFX_PICTURE_BOTTOM_61,  // bottom
				 GFX_PICTURE_STATE_61,   // state                 
                 GFX_PICTURE_SCALE_61,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_61
                 );
        break;
    case PCB_X45Reserve4:
        hgcObj.pPCB_X45Reserve4Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X45Reserve4,      // picture ID
                 GFX_PICTURE_LEFT_62,    // left
                 GFX_PICTURE_TOP_62,     // top
                 GFX_PICTURE_RIGHT_62,   // right				 
                 GFX_PICTURE_BOTTOM_62,  // bottom
				 GFX_PICTURE_STATE_62,   // state                 
                 GFX_PICTURE_SCALE_62,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_62
                 );
        break;
    case PCB_X44Reserve3:
        hgcObj.pPCB_X44Reserve3Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X44Reserve3,      // picture ID
                 GFX_PICTURE_LEFT_63,    // left
                 GFX_PICTURE_TOP_63,     // top
                 GFX_PICTURE_RIGHT_63,   // right				 
                 GFX_PICTURE_BOTTOM_63,  // bottom
				 GFX_PICTURE_STATE_63,   // state                 
                 GFX_PICTURE_SCALE_63,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_63
                 );
        break;
    case PCB_X43Reserve2:
        hgcObj.pPCB_X43Reserve2Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X43Reserve2,      // picture ID
                 GFX_PICTURE_LEFT_64,    // left
                 GFX_PICTURE_TOP_64,     // top
                 GFX_PICTURE_RIGHT_64,   // right				 
                 GFX_PICTURE_BOTTOM_64,  // bottom
				 GFX_PICTURE_STATE_64,   // state                 
                 GFX_PICTURE_SCALE_64,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_64
                 );
        break;
    case PCB_X42Reserve1:
        hgcObj.pPCB_X42Reserve1Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X42Reserve1,      // picture ID
                 GFX_PICTURE_LEFT_65,    // left
                 GFX_PICTURE_TOP_65,     // top
                 GFX_PICTURE_RIGHT_65,   // right				 
                 GFX_PICTURE_BOTTOM_65,  // bottom
				 GFX_PICTURE_STATE_65,   // state                 
                 GFX_PICTURE_SCALE_65,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_65
                 );
        break;
    case PCB_X41Vacuum2:
        hgcObj.pPCB_X41Vacuum2Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X41Vacuum2,      // picture ID
                 GFX_PICTURE_LEFT_66,    // left
                 GFX_PICTURE_TOP_66,     // top
                 GFX_PICTURE_RIGHT_66,   // right				 
                 GFX_PICTURE_BOTTOM_66,  // bottom
				 GFX_PICTURE_STATE_66,   // state                 
                 GFX_PICTURE_SCALE_66,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_66
                 );
        break;
    case PCB_X40Hold2:
        hgcObj.pPCB_X40Hold2Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_X40Hold2,      // picture ID
                 GFX_PICTURE_LEFT_67,    // left
                 GFX_PICTURE_TOP_67,     // top
                 GFX_PICTURE_RIGHT_67,   // right				 
                 GFX_PICTURE_BOTTOM_67,  // bottom
				 GFX_PICTURE_STATE_67,   // state                 
                 GFX_PICTURE_SCALE_67,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_67
                 );
        break;
    case PCB_Y27TravOut:
        hgcObj.pPCB_Y27TravOutObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y27TravOut,      // picture ID
                 GFX_PICTURE_LEFT_68,    // left
                 GFX_PICTURE_TOP_68,     // top
                 GFX_PICTURE_RIGHT_68,   // right				 
                 GFX_PICTURE_BOTTOM_68,  // bottom
				 GFX_PICTURE_STATE_68,   // state                 
                 GFX_PICTURE_SCALE_68,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_68
                 );
        break;
    case PCB_Y26TravIn:
        hgcObj.pPCB_Y26TravInObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y26TravIn,      // picture ID
                 GFX_PICTURE_LEFT_69,    // left
                 GFX_PICTURE_TOP_69,     // top
                 GFX_PICTURE_RIGHT_69,   // right				 
                 GFX_PICTURE_BOTTOM_69,  // bottom
				 GFX_PICTURE_STATE_69,   // state                 
                 GFX_PICTURE_SCALE_69,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_69
                 );
        break;
    case PCB_Y25Reserv2:
        hgcObj.pPCB_Y25Reserv2Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y25Reserv2,      // picture ID
                 GFX_PICTURE_LEFT_70,    // left
                 GFX_PICTURE_TOP_70,     // top
                 GFX_PICTURE_RIGHT_70,   // right				 
                 GFX_PICTURE_BOTTOM_70,  // bottom
				 GFX_PICTURE_STATE_70,   // state                 
                 GFX_PICTURE_SCALE_70,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_70
                 );
        break;
    case PCB_Y24Reserv1:
        hgcObj.pPCB_Y24Reserv1Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y24Reserv1,      // picture ID
                 GFX_PICTURE_LEFT_71,    // left
                 GFX_PICTURE_TOP_71,     // top
                 GFX_PICTURE_RIGHT_71,   // right				 
                 GFX_PICTURE_BOTTOM_71,  // bottom
				 GFX_PICTURE_STATE_71,   // state                 
                 GFX_PICTURE_SCALE_71,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_71
                 );
        break;
    case PCB_Y23SlowDown:
        hgcObj.pPCB_Y23SlowDownObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y23SlowDown,      // picture ID
                 GFX_PICTURE_LEFT_72,    // left
                 GFX_PICTURE_TOP_72,     // top
                 GFX_PICTURE_RIGHT_72,   // right				 
                 GFX_PICTURE_BOTTOM_72,  // bottom
				 GFX_PICTURE_STATE_72,   // state                 
                 GFX_PICTURE_SCALE_72,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_72
                 );
        break;
    case PCB_Y22LowPress:
        hgcObj.pPCB_Y22LowPressObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y22LowPress,      // picture ID
                 GFX_PICTURE_LEFT_73,    // left
                 GFX_PICTURE_TOP_73,     // top
                 GFX_PICTURE_RIGHT_73,   // right				 
                 GFX_PICTURE_BOTTOM_73,  // bottom
				 GFX_PICTURE_STATE_73,   // state                 
                 GFX_PICTURE_SCALE_73,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_73
                 );
        break;
    case PCB_Y21MainDown:
        hgcObj.pPCB_Y21MainDownObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y21MainDown,      // picture ID
                 GFX_PICTURE_LEFT_74,    // left
                 GFX_PICTURE_TOP_74,     // top
                 GFX_PICTURE_RIGHT_74,   // right				 
                 GFX_PICTURE_BOTTOM_74,  // bottom
				 GFX_PICTURE_STATE_74,   // state                 
                 GFX_PICTURE_SCALE_74,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_74
                 );
        break;
    case PCB_Y20MainUp:
        hgcObj.pPCB_Y20MainUpObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y20MainUp,      // picture ID
                 GFX_PICTURE_LEFT_75,    // left
                 GFX_PICTURE_TOP_75,     // top
                 GFX_PICTURE_RIGHT_75,   // right				 
                 GFX_PICTURE_BOTTOM_75,  // bottom
				 GFX_PICTURE_STATE_75,   // state                 
                 GFX_PICTURE_SCALE_75,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_75
                 );
        break;
    case PCB_Y17Alarm:
        hgcObj.pPCB_Y17AlarmObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y17Alarm,      // picture ID
                 GFX_PICTURE_LEFT_76,    // left
                 GFX_PICTURE_TOP_76,     // top
                 GFX_PICTURE_RIGHT_76,   // right				 
                 GFX_PICTURE_BOTTOM_76,  // bottom
				 GFX_PICTURE_STATE_76,   // state                 
                 GFX_PICTURE_SCALE_76,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_76
                 );
        break;
    case PCB_Y16MainBack:
        hgcObj.pPCB_Y16MainBackObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y16MainBack,      // picture ID
                 GFX_PICTURE_LEFT_77,    // left
                 GFX_PICTURE_TOP_77,     // top
                 GFX_PICTURE_RIGHT_77,   // right				 
                 GFX_PICTURE_BOTTOM_77,  // bottom
				 GFX_PICTURE_STATE_77,   // state                 
                 GFX_PICTURE_SCALE_77,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_77
                 );
        break;
    case PCB_Y15MainForw:
        hgcObj.pPCB_Y15MainForwObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y15MainForw,      // picture ID
                 GFX_PICTURE_LEFT_78,    // left
                 GFX_PICTURE_TOP_78,     // top
                 GFX_PICTURE_RIGHT_78,   // right				 
                 GFX_PICTURE_BOTTOM_78,  // bottom
				 GFX_PICTURE_STATE_78,   // state                 
                 GFX_PICTURE_SCALE_78,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_78
                 );
        break;
    case PCB_Y14Vacuum:
        hgcObj.pPCB_Y14VacuumObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y14Vacuum,      // picture ID
                 GFX_PICTURE_LEFT_79,    // left
                 GFX_PICTURE_TOP_79,     // top
                 GFX_PICTURE_RIGHT_79,   // right				 
                 GFX_PICTURE_BOTTOM_79,  // bottom
				 GFX_PICTURE_STATE_79,   // state                 
                 GFX_PICTURE_SCALE_79,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_79
                 );
        break;
    case PCB_Y13Hold:
        hgcObj.pPCB_Y13HoldObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y13Hold,      // picture ID
                 GFX_PICTURE_LEFT_80,    // left
                 GFX_PICTURE_TOP_80,     // top
                 GFX_PICTURE_RIGHT_80,   // right				 
                 GFX_PICTURE_BOTTOM_80,  // bottom
				 GFX_PICTURE_STATE_80,   // state                 
                 GFX_PICTURE_SCALE_80,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_80
                 );
        break;
    case PCB_Y12MainFix:
        hgcObj.pPCB_Y12MainFixObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y12MainFix,      // picture ID
                 GFX_PICTURE_LEFT_81,    // left
                 GFX_PICTURE_TOP_81,     // top
                 GFX_PICTURE_RIGHT_81,   // right				 
                 GFX_PICTURE_BOTTOM_81,  // bottom
				 GFX_PICTURE_STATE_81,   // state                 
                 GFX_PICTURE_SCALE_81,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_81
                 );
        break;
    case PCB_Y11Verti:
        hgcObj.pPCB_Y11VertiObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y11Verti,      // picture ID
                 GFX_PICTURE_LEFT_82,    // left
                 GFX_PICTURE_TOP_82,     // top
                 GFX_PICTURE_RIGHT_82,   // right				 
                 GFX_PICTURE_BOTTOM_82,  // bottom
				 GFX_PICTURE_STATE_82,   // state                 
                 GFX_PICTURE_SCALE_82,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_82
                 );
        break;
    case PCB_Y10Hori:
        hgcObj.pPCB_Y10HoriObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y10Hori,      // picture ID
                 GFX_PICTURE_LEFT_83,    // left
                 GFX_PICTURE_TOP_83,     // top
                 GFX_PICTURE_RIGHT_83,   // right				 
                 GFX_PICTURE_BOTTOM_83,  // bottom
				 GFX_PICTURE_STATE_83,   // state                 
                 GFX_PICTURE_SCALE_83,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_83
                 );
        break;
    case OutWatchPicYReserv3:
        hgcObj.pOutWatchPicYReserv3Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 OutWatchPicYReserv3,      // picture ID
                 GFX_PICTURE_LEFT_84,    // left
                 GFX_PICTURE_TOP_84,     // top
                 GFX_PICTURE_RIGHT_84,   // right				 
                 GFX_PICTURE_BOTTOM_84,  // bottom
				 GFX_PICTURE_STATE_84,   // state                 
                 GFX_PICTURE_SCALE_84,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_84
                 );
        break;
    case OutWatchPicYReserv2:
        hgcObj.pOutWatchPicYReserv2Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 OutWatchPicYReserv2,      // picture ID
                 GFX_PICTURE_LEFT_85,    // left
                 GFX_PICTURE_TOP_85,     // top
                 GFX_PICTURE_RIGHT_85,   // right				 
                 GFX_PICTURE_BOTTOM_85,  // bottom
				 GFX_PICTURE_STATE_85,   // state                 
                 GFX_PICTURE_SCALE_85,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_85
                 );
        break;
    case OutWatchPicYReserv1:
        hgcObj.pOutWatchPicYReserv1Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 OutWatchPicYReserv1,      // picture ID
                 GFX_PICTURE_LEFT_86,    // left
                 GFX_PICTURE_TOP_86,     // top
                 GFX_PICTURE_RIGHT_86,   // right				 
                 GFX_PICTURE_BOTTOM_86,  // bottom
				 GFX_PICTURE_STATE_86,   // state                 
                 GFX_PICTURE_SCALE_86,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_86
                 );
        break;
    case PCB_ThjmSafe:
        hgcObj.pPCB_ThjmSafeObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_ThjmSafe,      // picture ID
                 GFX_PICTURE_LEFT_87,    // left
                 GFX_PICTURE_TOP_87,     // top
                 GFX_PICTURE_RIGHT_87,   // right				 
                 GFX_PICTURE_BOTTOM_87,  // bottom
				 GFX_PICTURE_STATE_87,   // state                 
                 GFX_PICTURE_SCALE_87,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_87
                 );
        break;
    case PCB_Recycling:
        hgcObj.pPCB_RecyclingObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Recycling,      // picture ID
                 GFX_PICTURE_LEFT_88,    // left
                 GFX_PICTURE_TOP_88,     // top
                 GFX_PICTURE_RIGHT_88,   // right				 
                 GFX_PICTURE_BOTTOM_88,  // bottom
				 GFX_PICTURE_STATE_88,   // state                 
                 GFX_PICTURE_SCALE_88,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_88
                 );
        break;
    case PCB_OpenSafe:
        hgcObj.pPCB_OpenSafeObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_OpenSafe,      // picture ID
                 GFX_PICTURE_LEFT_89,    // left
                 GFX_PICTURE_TOP_89,     // top
                 GFX_PICTURE_RIGHT_89,   // right				 
                 GFX_PICTURE_BOTTOM_89,  // bottom
				 GFX_PICTURE_STATE_89,   // state                 
                 GFX_PICTURE_SCALE_89,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_89
                 );
        break;
    case PCB_CloseSafe:
        hgcObj.pPCB_CloseSafeObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_CloseSafe,      // picture ID
                 GFX_PICTURE_LEFT_90,    // left
                 GFX_PICTURE_TOP_90,     // top
                 GFX_PICTURE_RIGHT_90,   // right				 
                 GFX_PICTURE_BOTTOM_90,  // bottom
				 GFX_PICTURE_STATE_90,   // state                 
                 GFX_PICTURE_SCALE_90,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_90
                 );
        break;
    case PCB_Y47EmergStop:
        hgcObj.pPCB_Y47EmergStopObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y47EmergStop,      // picture ID
                 GFX_PICTURE_LEFT_91,    // left
                 GFX_PICTURE_TOP_91,     // top
                 GFX_PICTURE_RIGHT_91,   // right				 
                 GFX_PICTURE_BOTTOM_91,  // bottom
				 GFX_PICTURE_STATE_91,   // state                 
                 GFX_PICTURE_SCALE_91,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_91
                 );
        break;
    case PCB_Y37Coneryor:
        hgcObj.pPCB_Y37ConeryorObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y37Coneryor,      // picture ID
                 GFX_PICTURE_LEFT_92,    // left
                 GFX_PICTURE_TOP_92,     // top
                 GFX_PICTURE_RIGHT_92,   // right				 
                 GFX_PICTURE_BOTTOM_92,  // bottom
				 GFX_PICTURE_STATE_92,   // state                 
                 GFX_PICTURE_SCALE_92,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_92
                 );
        break;
    case PCB_Y36Scissor:
        hgcObj.pPCB_Y36ScissorObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y36Scissor,      // picture ID
                 GFX_PICTURE_LEFT_93,    // left
                 GFX_PICTURE_TOP_93,     // top
                 GFX_PICTURE_RIGHT_93,   // right				 
                 GFX_PICTURE_BOTTOM_93,  // bottom
				 GFX_PICTURE_STATE_93,   // state                 
                 GFX_PICTURE_SCALE_93,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_93
                 );
        break;
    case PCB_Y35Process1:
        hgcObj.pPCB_Y35Process1Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y35Process1,      // picture ID
                 GFX_PICTURE_LEFT_94,    // left
                 GFX_PICTURE_TOP_94,     // top
                 GFX_PICTURE_RIGHT_94,   // right				 
                 GFX_PICTURE_BOTTOM_94,  // bottom
				 GFX_PICTURE_STATE_94,   // state                 
                 GFX_PICTURE_SCALE_94,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_94
                 );
        break;
    case PCB_Y34SubFix:
        hgcObj.pPCB_Y34SubFixObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y34SubFix,      // picture ID
                 GFX_PICTURE_LEFT_95,    // left
                 GFX_PICTURE_TOP_95,     // top
                 GFX_PICTURE_RIGHT_95,   // right				 
                 GFX_PICTURE_BOTTOM_95,  // bottom
				 GFX_PICTURE_STATE_95,   // state                 
                 GFX_PICTURE_SCALE_95,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_95
                 );
        break;
    case PCB_Y33SubDown:
        hgcObj.pPCB_Y33SubDownObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y33SubDown,      // picture ID
                 GFX_PICTURE_LEFT_96,    // left
                 GFX_PICTURE_TOP_96,     // top
                 GFX_PICTURE_RIGHT_96,   // right				 
                 GFX_PICTURE_BOTTOM_96,  // bottom
				 GFX_PICTURE_STATE_96,   // state                 
                 GFX_PICTURE_SCALE_96,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_96
                 );
        break;
    case PCB_Y32SubUp:
        hgcObj.pPCB_Y32SubUpObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y32SubUp,      // picture ID
                 GFX_PICTURE_LEFT_97,    // left
                 GFX_PICTURE_TOP_97,     // top
                 GFX_PICTURE_RIGHT_97,   // right				 
                 GFX_PICTURE_BOTTOM_97,  // bottom
				 GFX_PICTURE_STATE_97,   // state                 
                 GFX_PICTURE_SCALE_97,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_97
                 );
        break;
    case PCB_Y31SubBack:
        hgcObj.pPCB_Y31SubBackObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y31SubBack,      // picture ID
                 GFX_PICTURE_LEFT_98,    // left
                 GFX_PICTURE_TOP_98,     // top
                 GFX_PICTURE_RIGHT_98,   // right				 
                 GFX_PICTURE_BOTTOM_98,  // bottom
				 GFX_PICTURE_STATE_98,   // state                 
                 GFX_PICTURE_SCALE_98,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_98
                 );
        break;
    case PCB_Y30SubForw:
        hgcObj.pPCB_Y30SubForwObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y30SubForw,      // picture ID
                 GFX_PICTURE_LEFT_99,    // left
                 GFX_PICTURE_TOP_99,     // top
                 GFX_PICTURE_RIGHT_99,   // right				 
                 GFX_PICTURE_BOTTOM_99,  // bottom
				 GFX_PICTURE_STATE_99,   // state                 
                 GFX_PICTURE_SCALE_99,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_99
                 );
        break;
    case PCB_Y46Reserve5:
        hgcObj.pPCB_Y46Reserve5Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y46Reserve5,      // picture ID
                 GFX_PICTURE_LEFT_100,    // left
                 GFX_PICTURE_TOP_100,     // top
                 GFX_PICTURE_RIGHT_100,   // right				 
                 GFX_PICTURE_BOTTOM_100,  // bottom
				 GFX_PICTURE_STATE_100,   // state                 
                 GFX_PICTURE_SCALE_100,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_100
                 );
        break;
    case PCB_Y45Reserve4:
        hgcObj.pPCB_Y45Reserve4Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y45Reserve4,      // picture ID
                 GFX_PICTURE_LEFT_101,    // left
                 GFX_PICTURE_TOP_101,     // top
                 GFX_PICTURE_RIGHT_101,   // right				 
                 GFX_PICTURE_BOTTOM_101,  // bottom
				 GFX_PICTURE_STATE_101,   // state                 
                 GFX_PICTURE_SCALE_101,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_101
                 );
        break;
    case PCB_Y44Reserve3:
        hgcObj.pPCB_Y44Reserve3Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y44Reserve3,      // picture ID
                 GFX_PICTURE_LEFT_102,    // left
                 GFX_PICTURE_TOP_102,     // top
                 GFX_PICTURE_RIGHT_102,   // right				 
                 GFX_PICTURE_BOTTOM_102,  // bottom
				 GFX_PICTURE_STATE_102,   // state                 
                 GFX_PICTURE_SCALE_102,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_102
                 );
        break;
    case PCB_Y43Reserve2:
        hgcObj.pPCB_Y43Reserve2Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y43Reserve2,      // picture ID
                 GFX_PICTURE_LEFT_103,    // left
                 GFX_PICTURE_TOP_103,     // top
                 GFX_PICTURE_RIGHT_103,   // right				 
                 GFX_PICTURE_BOTTOM_103,  // bottom
				 GFX_PICTURE_STATE_103,   // state                 
                 GFX_PICTURE_SCALE_103,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_103
                 );
        break;
    case PCB_Y42Reserve1:
        hgcObj.pPCB_Y42Reserve1Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y42Reserve1,      // picture ID
                 GFX_PICTURE_LEFT_104,    // left
                 GFX_PICTURE_TOP_104,     // top
                 GFX_PICTURE_RIGHT_104,   // right				 
                 GFX_PICTURE_BOTTOM_104,  // bottom
				 GFX_PICTURE_STATE_104,   // state                 
                 GFX_PICTURE_SCALE_104,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_104
                 );
        break;
    case PCB_Y41Vacuum2:
        hgcObj.pPCB_Y41Vacuum2Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y41Vacuum2,      // picture ID
                 GFX_PICTURE_LEFT_105,    // left
                 GFX_PICTURE_TOP_105,     // top
                 GFX_PICTURE_RIGHT_105,   // right				 
                 GFX_PICTURE_BOTTOM_105,  // bottom
				 GFX_PICTURE_STATE_105,   // state                 
                 GFX_PICTURE_SCALE_105,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_105
                 );
        break;
    case PCB_Y40Hold2:
        hgcObj.pPCB_Y40Hold2Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PCB_Y40Hold2,      // picture ID
                 GFX_PICTURE_LEFT_106,    // left
                 GFX_PICTURE_TOP_106,     // top
                 GFX_PICTURE_RIGHT_106,   // right				 
                 GFX_PICTURE_BOTTOM_106,  // bottom
				 GFX_PICTURE_STATE_106,   // state                 
                 GFX_PICTURE_SCALE_106,     // scale
                 (GFX_RESOURCE_HDR*)&ledgray,    // bitmap
                 GFX_PICTURE_SCHEME_106
                 );
        break;
    case PicCompanyLogo:
        hgcObj.pPicCompanyLogoObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 PicCompanyLogo,      // picture ID
                 GFX_PICTURE_LEFT_107,    // left
                 GFX_PICTURE_TOP_107,     // top
                 GFX_PICTURE_RIGHT_107,   // right				 
                 GFX_PICTURE_BOTTOM_107,  // bottom
				 GFX_PICTURE_STATE_107,   // state                 
                 GFX_PICTURE_SCALE_107,     // scale
                 (GFX_RESOURCE_HDR*)&Logogray,    // bitmap
                 GFX_PICTURE_SCHEME_107
                 );
        break;
		case Line10:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 360,  // p1x
						 227,  // p1y
						 360,  // p2x
						 249); // p2y
			break;
		}		
		case Line9:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 240,  // p1x
						 227,  // p1y
						 240,  // p2x
						 249); // p2y
			break;
		}		
		case Line8:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 120,  // p1x
						 227,  // p1y
						 120,  // p2x
						 249); // p2y
			break;
		}		
		case Line7:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 300,  // p1x
						 40,  // p1y
						 300,  // p2x
						 63); // p2y
			break;
		}		
		case Line6:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 150,  // p1x
						 40,  // p1y
						 150,  // p2x
						 63); // p2y
			break;
		}		
		case Line5:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 80,  // p1x
						 40,  // p1y
						 80,  // p2x
						 63); // p2y
			break;
		}		
		case Line2:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 63,  // p1y
						 480,  // p2x
						 63); // p2y
			break;
		}		
		case Line1:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 40,  // p1y
						 480,  // p2x
						 40); // p2y
			break;
		}		
		case Line3:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 227,  // p1y
						 480,  // p2x
						 227); // p2y
			break;
		}		
		case Line4:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 249,  // p1y
						 480,  // p2x
						 249); // p2y
			break;
		}		
		case AlaRptLine5:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 191,  // p1y
						 480,  // p2x
						 191); // p2y
			break;
		}		
		case AlaRptLine4:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 167,  // p1y
						 480,  // p2x
						 167); // p2y
			break;
		}		
		case AlaRptLine3:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 143,  // p1y
						 480,  // p2x
						 143); // p2y
			break;
		}		
		case AlaRptLine2:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 119,  // p1y
						 480,  // p2x
						 119); // p2y
			break;
		}		
		case AlaRptLine1:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 95,  // p1y
						 480,  // p2x
						 95); // p2y
			break;
		}		
		case CycTimRptLine5:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xFC, 0x80));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 191,  // p1y
						 480,  // p2x
						 191); // p2y
			break;
		}		
		case CycTimRptLine4:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xFC, 0x80));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 167,  // p1y
						 480,  // p2x
						 167); // p2y
			break;
		}		
		case CycTimRptLine3:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xFC, 0x80));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 143,  // p1y
						 480,  // p2x
						 143); // p2y
			break;
		}		
		case CycTimRptLine2:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xFC, 0x80));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 119,  // p1y
						 480,  // p2x
						 119); // p2y
			break;
		}		
		case CycTimRptLine1:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xFC, 0x80));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 95,  // p1y
						 480,  // p2x
						 95); // p2y
			break;
		}		
		case Text1:
		{
			GFX_XCHAR Text1_text[] = { 0x57, 0x65, 0x6c, 0x63, 0x6f, 0x6d, 0x65, 0x21, 0x0 };
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0x00, 0x00)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&simsun_16); // set font
			GFX_TextStringDraw(GFX_INDEX_0,
			                   207, // draw point x
						       196, // draw point y
                               Text1_text, // string
							   0); // length
			break;
		}	
		case Text6:
		{
			GFX_XCHAR Text6_text[] = { 0x3a, 0x0 };
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&simsun_16); // set font
			GFX_TextStringDraw(GFX_INDEX_0,
			                   237, // draw point x
						       142, // draw point y
                               Text6_text, // string
							   0); // length
			break;
		}	
		case Text5:
		{
			GFX_XCHAR Text5_text[] = { 0x3a, 0x0 };
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&simsun_16); // set font
			GFX_TextStringDraw(GFX_INDEX_0,
			                   186, // draw point x
						       141, // draw point y
                               Text5_text, // string
							   0); // length
			break;
		}	
		case Text4:
		{
			GFX_XCHAR Text4_text[] = { 0x2f, 0x0 };
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&simsun_16); // set font
			GFX_TextStringDraw(GFX_INDEX_0,
			                   238, // draw point x
						       103, // draw point y
                               Text4_text, // string
							   0); // length
			break;
		}	
		case Text3:
		{
			GFX_XCHAR Text3_text[] = { 0x2f, 0x0 };
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&simsun_16); // set font
			GFX_TextStringDraw(GFX_INDEX_0,
			                   187, // draw point x
						       102, // draw point y
                               Text3_text, // string
							   0); // length
			break;
		}	
	default:
		return false; // process by default
    }

    return true;
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgButtons(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Button events
 */
bool GFX_HGC_MsgButtons(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // process by default
    }

    return true;
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgDigitalMeters(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Digital Meter events
 */
bool GFX_HGC_MsgDigitalMeters(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgScrollBars(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Scroll Bar events
 */
bool GFX_HGC_MsgScrollBars(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgProgressBars(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Progress Bar events
 */
bool GFX_HGC_MsgProgressBars(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgEditBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Edit Boxes events
 */
bool GFX_HGC_MsgEditBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgListBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL List Boxes events
 */
bool GFX_HGC_MsgListBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgStaticTexts(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Static Text events
 */
bool GFX_HGC_MsgStaticTexts(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgPictures(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Picture Control events
 */
bool GFX_HGC_MsgPictures(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}


