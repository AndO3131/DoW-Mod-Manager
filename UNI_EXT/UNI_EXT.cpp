// UNI_EXT.cpp : Defines the exported functions for the DLL application.
// Based on slashdiablo-maphack implementation
// https://github.com/planqi/slashdiablo-maphack

#define _DEFINE_PTRS
#include "stdafx.h"
#include "SoulstormPointers.h"
#include "UNI_EXT.h"
#include "Patch.h"
#include "SoulstormIntercepts.h"

Patch* patches[] = {

	//*** FINISHED PATCHES ***

	// increase maximum number of defeated races in campaign commander screen
	new Patch(Overwrite, SOULSTORM, { 0x81F350, 0x6BDD24 }, { 0x0A, 0x00, 0x00, 0x00 }, 4),

	// increase maximum number of honor guard units in campaign metamap screen
	new Patch(Overwrite, SOULSTORM,{ 0x81F454, 0x6BDE28 },{ 0x12, 0x00, 0x00, 0x00 }, 4),

	// increase maximum number of honor guard units in campaign commander screen
	new Patch(Overwrite, SOULSTORM,{ 0x81F348, 0x6BDD1C },{ 0x12, 0x00, 0x00, 0x00 }, 4),

	// rename METAMAP.GFX, that is called from metamapmapview.screen file
	// this is required to make new metama1.gfx file load together with UNI_EXT.DLLL library
	//new Patch(Overwrite, SOULSTORM,{ 0x6D3A70, -1 },{ 0x4D, 0x65, 0x74, 0x61, 0x4D, 0x61, 0x70, 0x4D, 0x61, 0x70, 0x56, 0x69, 0x65, 0x31 }, 14), // metamapmapvie1

	// fog remover coded in UNI_EXT.dll
	/*
	new Patch(Overwrite, SOULSTORM,{ 0x4282F0, -1 },{ 217, 238,  15,  31,  64,   0 }, 6),
	new Patch(Overwrite, SOULSTORM,{ 0x6F54C8, -1 },{ 0,   0,   0,  68 }, 4),
	new Patch(Overwrite, SOULSTORM,{ 0x42A33A, -1 },{ 221, 216,  15,  31,  64,   0 }, 6),
	*/

	// add metamap model support
	new Patch(Overwrite, SOULSTORM,{ 0x6D2802, -1 },{ 0x00, 0x6D, 0x72, 0x6B, 0x72, 0x5F, 0x25, 0x73, 0x5F, 0x63, 0x6D, 0x64, 0x00 }, 13), // mrkr_%s_cmd

	// moving commander model on metamap
	new Patch(Call, SOULSTORM,{ 0x3784F1, -1 }, (int)new_placeObjectsOnMetamapOnLoadFunction_3, 38),

	// responsible for commanders for races ID 3 and below
	new Patch(Call, SOULSTORM,{ 0x3782AF, -1 }, (int)new_placeObjectsOnMetamapOnLoadFunction_2, 33),

	// inside setOverlayEnabledFunction?
	new Patch(Call, SOULSTORM,{ 0x377755, -1 }, (int)new_placeObjectsOnMetamapOnLoadFunction_1, 31),


	//*** END OF FINISHED PATCHES

	// modify check for conquered races
	new Patch(Call, SOULSTORM,{ 0x39105C, -1 }, (int)new_metamapShowNextFrameFunction, 14),

	// modify SWFwidget bind from 'ToggleArmy' to 'deep_strike'
	//new Patch(Overwrite, SOULSTORM,{ 0x391C4E, -1 },{ 0x20, 0x40, 0xAD, 0x00

	// insert new FSCommand
	// Runs "die" action on metamap_main_menu model
	//new Patch(Call, SOULSTORM,{ 0x391C79, -1 }, (int)new_BindButtonClickedEntry_Function, 29),
	//new Patch(Call, SOULSTORM,{ 0x391C8D, -1 }, (int)new_BindButtonClickedEntry_Function, 5),
	new Patch(Call, SOULSTORM,{ 0x391C39, -1 }, (int)new_BindButtonClickedEntry_Function, 5),
	//new Patch(Call, SOULSTORM,{ 0x391C96, -1 }, (int)new_BindButtonClickedEntry_Function, 5),
	//new Patch(Overwrite, WXPMOD,{ 0x249019, -1 },{ 0xEB, 0x23 }, 2),

	// add metamap model support
	
	//new Patch(Overwrite, SOULSTORM,{ 0x6D27F8, -1 },{ 0x00, 0x74, 0x65, 0x6C, 0x65, 0x70, 0x6F, 0x72, 0x74, 0x00 }, 10), // teleport
	//new Patch(Overwrite, SOULSTORM,{ 0x6D27ED, -1 },{ 0x00, 0x74, 0x61, 0x75, 0x5F, 0x63, 0x61, 0x6E, 0x6E, 0x6F, 0x6E, 0x5F, 0x56, 0x79, 0x61, 0x73, 0x61, 0x73, 0x74, 0x61, 0x6E, 0x00 }, 22), // tau_cannon_Vyasastan
	//new Patch(Call, SOULSTORM,{ 0x378506, -1 }, (int)new_PlaceObjectsOnMetamapFunction, 17),
	//new Patch(Overwrite, SOULSTORM,{ 0x37845A, -1 },{ 0x57, 0x90 }, 2),
	//new Patch(Overwrite, SOULSTORM,{ 0x378461, -1 },{ 0x90, 0x90, 0x90, 0x90, 0x90 }, 5),

	// Russian patch to vehicle-versus-infantry pathing issues 
	// Details in this forum thread http://forums.warforge.ru/index.php?showtopic=258904
	// Breaks vehicle-terrain interaction
	//new Patch(Overwrite, SIMENGINE,{ 0x84137, -1 }, { 0x74,  0x0E, 0x8B, 0x46, 0x70 }, 5),


	// inside placeObjectsOnMetamapFunction?

	// main commander placement function
	//new Patch(Call, SOULSTORM,{ 0x378635, -1 }, (int)new_displayCommanderModelOnMetamapGFXScreen, 8),

	// inside NewCampaignGameStart? function
	//new Patch(Call, SOULSTORM,{ 0x3913C8, -1 }, (int)new_NewCampaignGameStartFunction_1, 5),


	// patch for using ally races in campaign
	//COULDN'T JUMP OVER RACE CHECK
	//new Patch(Call, WXPMOD,{ 0x2329AA, -1 }, (int)isRaceInCampaignReplacementFunction, 5),
	//new Patch(Call, WXPMOD,{ 0x2329D7, -1 }, (int)isRaceInCampaignReplacementFunction, 5),
	//new Patch(Call, WXPMOD,{ 0x1BD9, -1 }, (int)isRaceInCampaignReplacementFunction, 5),
	//new Patch(Call, WXPMOD,{ 0x230C53, -1 }, (int)isRaceInCampaignReplacementFunction, 5),
	//new Patch(Call, WXPMOD,{ 0x234E49, -1 }, (int)isRaceInCampaignReplacementFunction, 5),


	//new Patch(Call, SOULSTORM,{ 0x3782BB, -1 }, (int)new_placeObjectsOnMetamapOnLoadFunction, 21),
	//new Patch(Call, SOULSTORM,{ 0x3782BB, -1 }, (int)new_placeObjectsOnMetamapOnLoadFunction_2, 21),
	//new Patch(Call, SOULSTORM,{ 0x37B883, -1 }, (int)dark_crusade_placeCommanderModelOnMarkerFunction_2, 25),
	//new Patch(Overwrite, SOULSTORM,{ 0x37860E, -1 },{ 0xEB, 0xB6 }, 2), // disable part of commander icons
	//new Patch(Overwrite, SOULSTORM,{ 0x378633, -1 },{ 0x90, 0x90 }, 2), // disable part of commander icons


	// inside NewCampaignGameStart? function
	//new Patch(Call, SOULSTORM,{ 0x39197A, -1 }, (int)new_NewCampaignGameStartFunction_1, 5),

	//new Patch(Call, SOULSTORM,{ 0x38FF21, -1 }, (int)new_NewCampaignGameStartSubfunction_2, 5), // CRASHES THE GAME
	//new Patch(Call, SOULSTORM,{ 0x3770C3, -1 }, (int)new_NewCampaignGameStartSubfunction_3, 42), // CRASHES THE GAME
	//new Patch(Overwrite, SOULSTORM,{ 0x38FF22, -1 },{ 0x6A, 0xCD, 0xFE, 0xFF }, 4),


	//REWRITE THIS FUNCTION FROM DARK CRUSADE CODE
	//new Patch(Overwrite, SOULSTORM,{ 0x37B883, -1 },{ 0x53, 0x55, 0x8B, 0x6C, 0x24, 0x70, 0x56, 0x57, 0x8B, 0xF9, 0x8B, 0x87, 0xEC, 0x00, 0x00, 0x00, 0x8B, 0x1C, 0xA8, 0x90 }, 20),
	//new Patch(Call, SOULSTORM,{ 0x37B897, -1 }, (int)dark_crusade_placeCommanderModelOnMarkerFunction_2, 5),

	//testing patch
	//new Patch(Overwrite, SOULSTORM,{ 0x377753, -1 },{ 0xEB, 0x23 }, 2),
	//new Patch(Overwrite, SOULSTORM,{ 0x3782AD, -1 },{ 0xEB, 0x21 }, 2),

	// 0x8F5020 checkKeyNameInDictionaryFunction?
	// 0x8DDA80 findMarkerIDInDatamarkFunction
	// 0x77B880 placeCommanderModelOnMarkerFunction_2
	// sub_8F8980 -> sub_8DD580 -> 
	// 0x8F10B0 readMarkerDataFunction
	// CONCLUSION: placeCommanderModelOnMarker function from Dark Crusade doesn't exist in Soulstorm.

	// OVERWRITE 0378635 - 037863C (8)
	// 0x2884C0 displayCommanderModelOnMetamapGFXScreenFunction_1


	// blocking commander icon functionality
	//new Patch(Overwrite, SOULSTORM,{ 0x3784EF, -1 },{ 0xEB, 0x2A }, 2),
	//new Patch(Overwrite, SOULSTORM,{ 0x378633, -1 },{ 0xEB, 0x13 }, 2),

	// 
	//new Patch(Overwrite, WXPMOD,{ 0x241E18, -1 },{ 0xC6, 0x45, 0xFC, 0x25 }, 4),
	//new Patch(Overwrite, WXPMOD,{ 0x241C65, -1 },{ 0xC6, 0x45, 0xFC, 0x25 }, 4),
	//new Patch(Overwrite, WXPMOD,{ 0x24137C, -1 },{ 0xC1, 0xE8, 0x25 }, 3),

	// disable stuff in load game screen
	//new Patch(Call, SOULSTORM,{ 0x2CC067, -1 }, (int)test_function, 5),

	// disable stuff in critical location function
	//new Patch(Call, SOULSTORM,{ 0x2CB1D2, -1 }, (int)test_function2, 5),

	//new Patch(Overwrite, SOULSTORM,{ 0x241E18, -1 },{ 0x0F, 0x84, 0x74, 0x01, 0x00, 0x00 }, 6),
	// enable action 'die' in 'metamap.gfx' every time it's loaded
	//new Patch(Overwrite, SOULSTORM,{ 0x3913C6, -1 },{ 0x90, 0x90 }, 2),
	//new Patch(Overwrite, SOULSTORM,{ 0x3919A0, -1 },{ 0x90, 0x90 }, 2),

	// modify campaign model starting action from 'die' to 'idle'
	//new Patch(Overwrite, SOULSTORM,{ 0x3913D7, -1 },{ 0x74, 0xBD, 0xB3, 0x00 }, 4),

	// create new strings in code
	//new Patch(Overwrite, SOULSTORM,{ 0x6D2447, -1 },{ 0x00, 't','h','r','o','w','n' }, 7),
	// modify runZoomAnimation? function to use new string
	//new Patch(Overwrite, SOULSTORM,{ 0x378108, -1 },{ 0x48, 0x24 }, 2),

	//new Patch(Overwrite, SOULSTORM,{ 0x39C590, -1 }, (int)Metamap_Action_Selector_Function, 2),
	//new Patch(Call, SOULSTORM,{ 0x378104, -1 }, (int)Animation_Selector_Function, 5),
};


void UNI_EXT::Startup(HINSTANCE instance)
{
	// code that rewrites variable in program memory 
	// increased defeated races number

	for (int n = 0; n < (sizeof(patches) / sizeof(Patch*)); n++) {
		patches[n]->Install();
	}

//	MessageBoxA(NULL, "DLL Injected", "DLL Injected", MB_OK);
//	CreateThread(0, 0, MainThread, instance, 0, 0);

}

bool UNI_EXT::Shutdown()
{
	return true;
}