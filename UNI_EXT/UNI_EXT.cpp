// UNI_EXT.cpp : Defines the exported functions for the DLL application.
// Based on slashdiablo-maphack implementation
// https://github.com/planqi/slashdiablo-maphack

#define _DEFINE_PTRS
#include "stdafx.h"
#include "SoulstormPointers.h"
#include "UNI_EXT.h"
#include "SoulstormHandlers.h"
#include "Patch.h"
#include "SoulstormIntercepts.h"
#include "include\detours.h"

string UNI_EXT::path;
HINSTANCE UNI_EXT::instance;

Patch* patches[] = {
	// increase maximum number of defeated races in campaign commander screen
	new Patch(Overwrite, SOULSTORM, { 0x81F350, 0x6BDD24 }, { 0x0A, 0x00, 0x00, 0x00 }, 4),

	// increase maximum number of honor guard units in campaign metamap screen
	new Patch(Overwrite, SOULSTORM,{ 0x81F454, 0x6BDE28 },{ 0x12, 0x00, 0x00, 0x00 }, 4),

	// increase maximum number of honor guard units in campaign commander screen
	new Patch(Overwrite, SOULSTORM,{ 0x81F348, 0x6BDD1C },{ 0x12, 0x00, 0x00, 0x00 }, 4),

	// modify SWFwidget bind from 'ToggleArmy' to 'deep_strike'
	//new Patch(Overwrite, SOULSTORM,{ 0x391C4E, -1 },{ 0x20, 0x40, 0xAD, 0x00 }, 4),

	// insert new FSCommand
	new Patch(Call, SOULSTORM,{ 0x391C39, -1 }, (int)new_BindButtonClickedEntry_Function, 5),

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


BOOL UNI_EXT::DetourCreateProcessWithDllExAdapter(const char* lpApplicationName, const char* lpCommandLine, BOOL bInheritHandles, const char* lpCurrentDirectory, const char* lpDllName)
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(STARTUPINFO));
	ZeroMemory(&pi, sizeof(PROCESS_INFORMATION));
	si.cb = sizeof(STARTUPINFO);
	char* lpDllNameW = (char*)lpDllName;
	//Allocate memory in the DLL heap for the incoming strings
	wchar_t* lpApplicationNameW = new wchar_t[MAX_PATH + 1];
	wchar_t* lpCommandLineW = new wchar_t[MAX_PATH + 1];
	wchar_t* lpCurrentDirectoryW = new wchar_t[MAX_PATH + 1];
	int size = MultiByteToWideChar(CP_ACP, 0, lpApplicationName, -1, NULL, 0);
	MultiByteToWideChar(CP_ACP, 0, lpApplicationName, -1, lpApplicationNameW, size);
	size = MultiByteToWideChar(CP_ACP, 0, lpCommandLine, -1, NULL, 0);
	MultiByteToWideChar(CP_ACP, 0, lpCommandLine, -1, lpCommandLineW, size);
	size = MultiByteToWideChar(CP_ACP, 0, lpCurrentDirectory, -1, NULL, 0);
	MultiByteToWideChar(CP_ACP, 0, lpCurrentDirectory, -1, lpCurrentDirectoryW, size);
	if (DetourCreateProcessWithDllEx(lpApplicationNameW,
		lpCommandLineW,
		NULL,
		NULL,
		bInheritHandles,
		CREATE_DEFAULT_ERROR_MODE,
		NULL,
		lpCurrentDirectoryW,
		&si,
		&pi,
		lpDllNameW,
		NULL))
	{
		MessageBoxA(NULL, "INJECTED", "SUCCESS!", NULL);
	}
	else
	{
		char error[100];
		sprintf_s(error, "%d", GetLastError());
		MessageBoxA(NULL, error, NULL, NULL);
	}
	delete[] lpApplicationNameW;
	delete[] lpCommandLineW;
	delete[] lpCurrentDirectoryW;
	return 0;
}