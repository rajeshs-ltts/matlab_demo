#ifndef _LANGSTG_POS_H
#define _LANGSTG_POS_H
/*
$Revision:  $
$Date:  $
$Author:  $
*/

/*******************************************************************************
* File Name : LangStg_Pos.h
* Rev: 1.1 
* Date:: 2019.8.9 
* Description : header file 
******************************************************************************/

#define R_MD_STGCURSOR_MAX (8u)
//#define R_MD_STGLISTITEM_MAX (8u)
#define R_MD_STGCURPAGE_MAX (6u)
#define R_MD_STGALLPAGE_MAX (6u)

/*** IconPos ***/	
typedef struct icon_{	
  UInt16 icon_xpos;	
  UInt16 icon_ypos;	
} icon_st;	

/*** Setting1line ***/			
typedef struct settingpos1line_st_{			
UInt16		settingpos1line_xpos;	
UInt16		settingpos1line_ypos;	
UInt8		settingpos1line_align;	
} settingpos1line_st;			

/*** Settingscrbar ***/			
typedef struct stgscrbar_st_{			
UInt8		stgscrbar_page;	
UInt8		stgscrbar_up;	
UInt8		stgscrbar_down;	
} stgscrbar_st;			

/* SettingDispTypeNum */					
typedef enum SettingDispTypeNum_					
{					
	R_MD_STGDISPTYPE_NON = 0,				/* No Disp */
	R_MD_STGDISPTYPE_LIST,				/* List  */
	R_MD_STGDISPTYPE_DATASET_CONF,				/* Data Set (Confirm)  */
	R_MD_STGDISPTYPE_DATASET_CHG,				/* Data Set (Change)  */
	R_MD_STGDISPTYPE_EMSREPORT,				/* EMS Report  */
	R_MD_STGDISPTYPE_MAINMENU,				/* Main Menu Select  */
	R_MD_STGDISPTYPE_TRAILERLIGHT,				/* Trailer Light Set  */
	R_MD_STGDISPTYPE_REVTILTSET,				/* Reverse Tilt Set  */
	R_MD_STGDISPTYPE_RESET,				/* Reset Confirm  */
	R_MD_STGDISPTYPE_OCS,				/* OCS Setting  */
	R_MD_STGDISPTYPE_MAINMENUERR,				/* Main Menu Error  */
	R_MD_STGDISPTYPE_MAX				/* MAX */
} SettingDispTypeNum_et;					
					
/* SettingMsgIDNum */					
typedef enum SettingMsgIDNum_					
{					
	R_MD_STGMSGID_NON = 0,				/* No Disp */
	R_MD_STGMSGID_LIST_PTN1,				/* Setting_List(ListItem:ON Button) */
	R_MD_STGMSGID_LIST_PTN2,				/* Setting_List(ListItem:Text Field) */
	R_MD_STGMSGID_LIST_PTN3,				/* Setting_List(ListItem:Radio Button) */
	R_MD_STGMSGID_DATASET_CONF,				/* Setting_DataSet_Confirm */
	R_MD_STGMSGID_DATASET_CHG,				/* Setting_DataSet_Change */
	R_MD_STGMSGID_MAINMENU,				/* Setting_MainMenu */
	R_MD_STGMSGID_TRAILER_PTN1,				/* Settings_TrailerLight(MsgID1:Start, Finished) */
	R_MD_STGMSGID_TRAILER_PTN2,				/* Settings_TrailerLight(MsgID1:On) */
	R_MD_STGMSGID_TRAILER_PTN3,				/* Settings_TrailerLight(MsgID1:Stopped) */
	R_MD_STGMSGID_REVERSE,				/* Setting_Reverse_Tilt_Set */
	R_MD_STGMSGID_RESET,				/* Settings_Reset */
	R_MD_STGMSGID_OCS,				/* Setting_OCS */
	R_MD_STGMSGID_MAINMENUERR,				/* Settings_MainMenuError */
	R_MD_STGMSGID_MAX				/* MAX */
} SettingMsgIDNum_et;					
					
/* SettingMsgListItemNum */					
typedef enum SettingMsgListItemNum_					
{					
	R_MD_STGLISTITEM_NON = 0,				/* No Disp */
	R_MD_STGLISTITEM_ONBUTTON,				/* On Button */
	R_MD_STGLISTITEM_TEXTFIELD,				/* Text Field */
	R_MD_STGLISTITEM_RADIOBUTTON,				/* Radio Button */
	R_MD_STGLISTITEM_MAX				/* MAX */
} SettingMsgListItemNum_et;					

/* SettingMsgIDPosTable */							
static const settingpos1line_st SettingMsgIDPosTable[R_MD_STGMSGID_MAX][R_MD_STGCURSOR_MAX] =							
{							
	/* No Disp */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	800u,	480u,	6u	},	/* 1line */
		{	800u,	480u,	6u	},	/* 2line */
		{	800u,	480u,	6u	},	/* 3line */
		{	800u,	480u,	6u	},	/* 4line */
		{	800u,	480u,	6u	},	/* 5line */
		{	800u,	480u,	6u	},	/* 6line */
		{	800u,	480u,	6u	}	/* 7line */
	},						
	/* Setting_List(ListItem:ON Button) */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	201u,	299u,	4u	},	/* 1line */
		{	201u,	259u,	4u	},	/* 2line */
		{	201u,	219u,	4u	},	/* 3line */
		{	201u,	179u,	4u	},	/* 4line */
		{	201u,	139u,	4u	},	/* 5line */
		{	201u,	99u,	4u	},	/* 6line */
		{	800u,	59u,	6u	}	/* 7line */
	},						
	/* Setting_List(ListItem:Text Field) */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	201u,	299u,	4u	},	/* 1line */
		{	201u,	259u,	4u	},	/* 2line */
		{	201u,	219u,	4u	},	/* 3line */
		{	201u,	179u,	4u	},	/* 4line */
		{	201u,	139u,	4u	},	/* 5line */
		{	201u,	99u,	4u	},	/* 6line */
		{	800u,	59u,	6u	}	/* 7line */
	},						
	/* Setting_List(ListItem:Radio Button) */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	227u,	299u,	4u	},	/* 1line */
		{	227u,	259u,	4u	},	/* 2line */
		{	227u,	219u,	4u	},	/* 3line */
		{	227u,	179u,	4u	},	/* 4line */
		{	227u,	139u,	4u	},	/* 5line */
		{	227u,	99u,	4u	},	/* 6line */
		{	800u,	59u,	6u	}	/* 7line */
	},						
	/* Setting_DataSet_Confirm */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	800u,	480u,	6u	},	/* 1line */
		{	201u,	219u,	4u	},	/* 2line */
		{	800u,	480u,	6u	},	/* 3line */
		{	800u,	480u,	6u	},	/* 4line */
		{	800u,	480u,	6u	},	/* 5line */
		{	800u,	480u,	6u	},	/* 6line */
		{	800u,	480u,	6u	}	/* 7line */
	},						
	/* Setting_DataSet_Change */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	800u,	480u,	6u	},	/* 1line */
		{	800u,	480u,	6u	},	/* 2line */
		{	800u,	480u,	6u	},	/* 3line */
		{	800u,	480u,	6u	},	/* 4line */
		{	800u,	480u,	6u	},	/* 5line */
		{	800u,	480u,	6u	},	/* 6line */
		{	800u,	480u,	6u	}	/* 7line */
	},						
	/* Setting_MainMenu */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	800u,	480u,	6u	},	/* 1line */
		{	800u,	480u,	6u	},	/* 2line */
		{	800u,	480u,	6u	},	/* 3line */
		{	800u,	480u,	6u	},	/* 4line */
		{	800u,	480u,	6u	},	/* 5line */
		{	800u,	480u,	6u	},	/* 6line */
		{	800u,	480u,	6u	}	/* 7line */
	},						
	/* Settings_TrailerLight(MsgID1:Start, Finished) */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	169u,	245u,	6u	},	/* 1line */
		{	800u,	480u,	6u	},	/* 2line */
		{	800u,	480u,	6u	},	/* 3line */
		{	800u,	480u,	6u	},	/* 4line */
		{	800u,	480u,	6u	},	/* 5line */
		{	800u,	480u,	6u	},	/* 6line */
		{	800u,	480u,	6u	}	/* 7line */
	},						
	/* Settings_TrailerLight(MsgID1:On) */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	169u,	245u,	6u	},	/* 1line */
		{	324u,	134u,	6u	},	/* 2line */
		{	800u,	480u,	6u	},	/* 3line */
		{	800u,	480u,	6u	},	/* 4line */
		{	800u,	480u,	6u	},	/* 5line */
		{	800u,	480u,	6u	},	/* 6line */
		{	800u,	480u,	6u	}	/* 7line */
	},						
	/* Settings_TrailerLight(MsgID1:Stopped) */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	169u,	245u,	6u	},	/* 1line */
		{	169u,	209u,	6u	},	/* 2line */
		{	800u,	480u,	6u	},	/* 3line */
		{	800u,	480u,	6u	},	/* 4line */
		{	800u,	480u,	6u	},	/* 5line */
		{	800u,	480u,	6u	},	/* 6line */
		{	800u,	480u,	6u	}	/* 7line */
	},						
	/* Setting_Reverse_Tilt_Set */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	358u,	223u,	4u	},	/* 1line */
		{	358u,	190u,	4u	},	/* 2line */
		{	800u,	480u,	6u	},	/* 3line */
		{	800u,	480u,	6u	},	/* 4line */
		{	800u,	480u,	6u	},	/* 5line */
		{	800u,	480u,	6u	},	/* 6line */
		{	800u,	480u,	6u	}	/* 7line */
	},						
	/* Settings_Reset */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	169u,	266u,	6u	},	/* 1line */
		{	169u,	179u,	6u	},	/* 2line */
		{	169u,	139u,	6u	},	/* 3line */
		{	800u,	480u,	6u	},	/* 4line */
		{	800u,	480u,	6u	},	/* 5line */
		{	800u,	480u,	6u	},	/* 6line */
		{	800u,	480u,	6u	}	/* 7line */
	},						
	/* Setting_OCS */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	283u,	235u,	4u	},	/* 1line */
		{	800u,	480u,	6u	},	/* 2line */
		{	800u,	480u,	6u	},	/* 3line */
		{	800u,	480u,	6u	},	/* 4line */
		{	800u,	480u,	6u	},	/* 5line */
		{	800u,	480u,	6u	},	/* 6line */
		{	800u,	480u,	6u	}	/* 7line */
	},						
	/* Settings_MainMenuError */						
	{		/* Xpos	Ypos	Align */		
		{	800u,	480u,	6u	},	/* 0(NotUse) */
		{	169u,	219u,	6u	},	/* 1line */
		{	800u,	480u,	6u	},	/* 2line */
		{	800u,	480u,	6u	},	/* 3line */
		{	800u,	480u,	6u	},	/* 4line */
		{	800u,	480u,	6u	},	/* 5line */
		{	800u,	480u,	6u	},	/* 6line */
		{	800u,	480u,	6u	}	/* 7line */
	}						
};							

/* SettingMsgTitlePosTable */						
static const settingpos1line_st SettingMsgTitlePosTable[R_MD_STGDISPTYPE_MAX] =						
{						
		/* Xpos	Ypos	Align */		
	{	800u,	480u,	6u	},	/* No Disp */
	{	169u,	342u,	6u	},	/* List  */
	{	169u,	342u,	6u	},	/* Data Set (Confirm)  */
	{	169u,	342u,	6u	},	/* Data Set (Change)  */
	{	800u,	480u,	6u	},	/* EMS Report  */
	{	169u,	294u,	6u	},	/* Main Menu Select  */
	{	169u,	321u,	6u	},	/* Trailer Light Set  */
	{	169u,	321u,	6u	},	/* Reverse Tilt Set  */
	{	169u,	342u,	6u	},	/* Reset Confirm  */
	{	169u,	321u,	6u	},	/* OCS Setting  */
	{	800u,	480u,	6u	}	/* Main Menu Error  */
};						
						
/* SettingMsgIDSubPosTable */						
static const settingpos1line_st SettingMsgIDSubPosTable[R_MD_STGCURSOR_MAX] =						
{						
		/* Xpos	Ypos	Align */		
	{	800u,	480u,	6u	},	/* 0(NotUse) */
	{	454u,	299u,	6u	},	/* 1line */
	{	454u,	259u,	6u	},	/* 2line */
	{	454u,	219u,	6u	},	/* 3line */
	{	454u,	179u,	6u	},	/* 4line */
	{	454u,	139u,	6u	},	/* 5line */
	{	454u,	99u,	6u	},	/* 6line */
	{	800u,	59u,	6u	}	/* 7line */
};						

/* SettingMsgListItemPosTable */						
//const icon_st SettingMsgLisItemPosTable[R_MD_STGLISTITEM_MAX][R_MD_STGLISTITEM_MAX] =	
static const icon_st SettingMsgLisItemPosTable[R_MD_STGLISTITEM_MAX][R_MD_STGCURSOR_MAX] =					
{						
	/* No Disp */					
	{		/* Xpos	Ypos */		
		{	800u,	480u	},	/* 0(NotUse) */
		{	498u,	303u	},	/* SettingMsg1_ListItem */
		{	800u,	498u	},	/* SettingMsg2_ListItem */
		{	183u,	480u	},	/* SettingMsg3_ListItem */
		{	498u,	103u	},	/* SettingMsg4_ListItem */
		{	800u,	480u	},	/* SettingMsg5_ListItem */
		{	800u,	480u	},	/* SettingMsg6_ListItem */
		{	800u,	480u	}	/* SettingMsg7_ListItem */
	},					
	/* On Button */					
	{		/* Xpos	Ypos */		
		{	800u,	480u	},	/* 0(NotUse) */
		{	498u,	303u	},	/* SettingMsg1_ListItem */
		{	498u,	263u	},	/* SettingMsg2_ListItem */
		{	498u,	223u	},	/* SettingMsg3_ListItem */
		{	498u,	183u	},	/* SettingMsg4_ListItem */
		{	498u,	143u	},	/* SettingMsg5_ListItem */
		{	498u,	103u	},	/* SettingMsg6_ListItem */
		{	800u,	63u		}	/* SettingMsg7_ListItem */
	},					
	/* Text Field */					
	{		/* Xpos	Ypos */		
		{	800u,	480u	},	/* 0(NotUse) */
		{	448u,	303u	},	/* SettingMsg1_ListItem */
		{	448u,	263u	},	/* SettingMsg2_ListItem */
		{	448u,	223u	},	/* SettingMsg3_ListItem */
		{	448u,	183u	},	/* SettingMsg4_ListItem */
		{	448u,	143u	},	/* SettingMsg5_ListItem */
		{	448u,	103u	},	/* SettingMsg6_ListItem */
		{	800u,	63u		}	/* SettingMsg7_ListItem */
	},					
	/* Radio Button */					
	{		/* Xpos	Ypos */		
		{	800u,	480u	},	/* 0(NotUse) */
		{	190u,	311u	},	/* SettingMsg1_ListItem */
		{	190u,	271u	},	/* SettingMsg2_ListItem */
		{	190u,	231u	},	/* SettingMsg3_ListItem */
		{	190u,	191u	},	/* SettingMsg4_ListItem */
		{	190u,	151u	},	/* SettingMsg5_ListItem */
		{	190u,	111u	},	/* SettingMsg6_ListItem */
		{	800u,	71u		}	/* SettingMsg7_ListItem */
	}					
};						

/* SettingCursorPosTable */											
static const UInt16 SettingCursorPosTable[R_MD_STGDISPTYPE_MAX][R_MD_STGCURSOR_MAX] =											
{		/* No Disp	1line Ypos	2line Ypos	3line Ypos	4line Ypos	5line Ypos	6line Ypos	7line(NotUse) */		
	{	480u,	480u,	480u,	480u,	480u,	480u,	480u,	480u	},	/* No Disp */
	{	480u,	302u,	262u,	222u,	182u,	142u,	102u,	480u	},	/* List  */
	{	480u,	262u,	222u,	480u,	480u,	480u,	480u,	480u	},	/* Data Set (Confirm)  */
	{	480u,	480u,	480u,	480u,	480u,	480u,	480u,	480u	},	/* Data Set (Change)  */
	{	480u,	480u,	480u,	480u,	480u,	480u,	480u,	480u	},	/* EMS Report  */
	{	480u,	480u,	480u,	480u,	480u,	480u,	480u,	480u	},	/* Main Menu Select  */
	{	480u,	480u,	480u,	480u,	480u,	480u,	480u,	480u	},	/* Trailer Light Set  */
	{	480u,	480u,	480u,	480u,	480u,	480u,	480u,	480u	},	/* Reverse Tilt Set  */
	{	480u,	182u,	142u,	480u,	480u,	480u,	480u,	480u	},	/* Reset Confirm  */
	{	480u,	480u,	480u,	480u,	480u,	480u,	480u,	480u	},	/* OCS Setting  */
	{	480u,	480u,	480u,	480u,	480u,	480u,	480u,	480u	},	/* Main Menu Error  */
};											

/* SettingScroolBarTable */								
static const stgscrbar_st SettingScrolBarTable[R_MD_STGALLPAGE_MAX ][R_MD_STGCURPAGE_MAX] =								
{								
	/* ALL Page0 */							
	{	/* 	Scroolbar	Page Up	Page Down */			
		{	0u,	0u,	0u	},	/*CurrentPage 0 */	
		{	0u,	0u,	0u	},	/*CurrentPage 1 */	
		{	0u,	0u,	0u	},	/*CurrentPage 2 */	
		{	0u,	0u,	0u	},	/*CurrentPage 3 */	
		{	0u,	0u,	0u	},	/*CurrentPage 4 */	
		{	0u,	0u,	0u	}	/*CurrentPage 5 */	
	},							
	/* ALL Page1 */							
	{	/* 	Scroolbar	Page Up	Page Down */			
		{	0u,	0u,	0u	},	/*CurrentPage 0 */	
		{	0u,	0u,	0u	},	/*CurrentPage 1 */	
		{	0u,	0u,	0u	},	/*CurrentPage 2 */	
		{	0u,	0u,	0u	},	/*CurrentPage 3 */	
		{	0u,	0u,	0u	},	/*CurrentPage 4 */	
		{	0u,	0u,	0u	}	/*CurrentPage 5 */	
	},							
	/* ALL Page2 */							
	{	/* 	Scroolbar	Page Up	Page Down */			
		{	0u,	0u,	0u	},	/*CurrentPage 0 */	
		{	1u,	0u,	1u	},	/*CurrentPage 1 */	
		{	2u,	1u,	0u	},	/*CurrentPage 2 */	
		{	0u,	0u,	0u	},	/*CurrentPage 3 */	
		{	0u,	0u,	0u	},	/*CurrentPage 4 */	
		{	0u,	0u,	0u	}	/*CurrentPage 5 */	
	},							
	/* ALL Page3 */							
	{	/* 	Scroolbar	Page Up	Page Down */			
		{	0u,	0u,	0u	},	/*CurrentPage 0 */	
		{	3u,	0u,	1u	},	/*CurrentPage 1 */	
		{	4u,	1u,	1u	},	/*CurrentPage 2 */	
		{	5u,	1u,	0u	},	/*CurrentPage 3 */	
		{	0u,	0u,	0u	},	/*CurrentPage 4 */	
		{	0u,	0u,	0u	}	/*CurrentPage 5 */	
	},							
	/* ALL Page4 */							
	{	/* 	Scroolbar	Page Up	Page Down */			
		{	0u,	0u,	0u	},	/*CurrentPage 0 */	
		{	6u,	0u,	1u	},	/*CurrentPage 1 */	
		{	7u,	1u,	1u	},	/*CurrentPage 2 */	
		{	8u,	1u,	1u	},	/*CurrentPage 3 */	
		{	9u,	1u,	0u	},	/*CurrentPage 4 */	
		{	0u,	0u,	0u	}	/*CurrentPage 5 */	
	},							
	/* ALL Page5 */							
	{	/* 	Scroolbar	Page Up	Page Down */			
		{	0u,	0u,	0u	},	/*CurrentPage 0 */	
		{	10u,	0u,	1u	},	/*CurrentPage 1 */	
		{	11u,	1u,	1u	},	/*CurrentPage 2 */	
		{	12u,	1u,	1u	},	/*CurrentPage 3 */	
		{	13u,	1u,	1u	},	/*CurrentPage 4 */	
		{	14u,	1u,	0u	}	/*CurrentPage 5 */	
	}							
};								

#endif
