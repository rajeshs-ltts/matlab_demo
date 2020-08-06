#include <stdio.h>
//#include "demodll.h"
#include "init.h"
//#include "Lang_UnicodeTbl.h"
#include "LangStg_Pos.h"
#include "copystrnfun.h"

int main(void)
{
/* int y = addNumbers(4);
printf("Return Value = %d", y); */
unsigned short wk_usStgTitleTextID[2]={0,0};
unsigned char IH_ucLayoutNum[2]={2,0};
UInt16 OH_usStgTitleXPos[1]={'\0'};
UInt16 OH_usStgTitleYPos[1]={'\0'};
UInt8 OH_ucStgTitleJustify[1]={'\0'};

switch(IH_ucLayoutNum[0])
{
    case 1: //US-English
        //copystr(OH_usStgTitleMsgID,StrData_USEnglish[wk_usStgTitleTextID[0]]);
		OH_usStgTitleXPos[0]=SettingMsgTitlePosTable[IH_ucLayoutNum[0]].settingpos1line_xpos;
		OH_usStgTitleYPos[0]=SettingMsgTitlePosTable[IH_ucLayoutNum[0]].settingpos1line_ypos;
		OH_ucStgTitleJustify[0]=SettingMsgTitlePosTable[IH_ucLayoutNum[0]].settingpos1line_align;
        break;        
    case 2: //CanadianFrench
        //copystr(OH_usStgTitleMsgID,StrData_USEnglish[wk_usStgTitleTextID[0]]);
		OH_usStgTitleXPos[0]=SettingMsgTitlePosTable[IH_ucLayoutNum[0]].settingpos1line_xpos;
		OH_usStgTitleYPos[0]=SettingMsgTitlePosTable[IH_ucLayoutNum[0]].settingpos1line_ypos;
		OH_ucStgTitleJustify[0]=SettingMsgTitlePosTable[IH_ucLayoutNum[0]].settingpos1line_align;
        break;
    case 3: //StrData_MexicanSpanish
        //copystr(OH_usStgTitleMsgID,StrData_USEnglish[wk_usStgTitleTextID[0]]);
		OH_usStgTitleXPos[0]=SettingMsgTitlePosTable[IH_ucLayoutNum[0]].settingpos1line_xpos;
		OH_usStgTitleYPos[0]=SettingMsgTitlePosTable[IH_ucLayoutNum[0]].settingpos1line_ypos;
		OH_ucStgTitleJustify[0]=SettingMsgTitlePosTable[IH_ucLayoutNum[0]].settingpos1line_align;
        break;
    default:
        break;
}

return 0;
}