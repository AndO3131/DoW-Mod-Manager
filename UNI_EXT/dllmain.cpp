// dllmain.cpp : Defines the entry point for the DLL application.
#undef UNICODE
#include <cstdio>
#include <windows.h>
#include "UNI_EXT.h"
#include "Include\detours.h"

typedef void (WINAPI *pFunc)(DWORD);
void WINAPI MyFunc(DWORD);

//pFunc FuncToDetour = (pFunc)(0x0100347C); //Set it at address to detour in
										  //the process
INT APIENTRY DllMain(HMODULE hDLL, DWORD Reason, LPVOID Reserved)
{
	switch (Reason)
	{
	case DLL_PROCESS_ATTACH:
	{
		DisableThreadLibraryCalls(hDLL);
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		//DetourAttach(&(PVOID&)FuncToDetour, MyFunc);
		DetourTransactionCommit();
		UNI_EXT::Startup(hDLL);
	}
	break;
	case DLL_PROCESS_DETACH:
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		UNI_EXT::Shutdown();
		//DetourDetach(&(PVOID&)FuncToDetour, MyFunc);
		DetourTransactionCommit();
		break;
	case DLL_THREAD_ATTACH:
		UNI_EXT::Startup(hDLL); 
		break;
	case DLL_THREAD_DETACH:
		break;
	}
	return TRUE;
}

void WINAPI MyFunc(DWORD someParameter)
{
	//Some magic can happen here
}