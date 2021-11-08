#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include "SoulstormPointers.h"

//DWORD patch_clip_region;
//DWORD* base_address;
DWORD return_address;

int __stdcall placeCommanderModelOnMarker(int, int)
{
	__asm
	{
		
		sub     esp, 0x134
		/*
		push    ebx
		push    ebp
		push    esi
		push    edi
		*/
		mov     esi, ecx
	    call    SOULSTORM_sub_96EAA0
		mov     ecx, eax
		call    SOULSTORM_sub_96F440
		mov     ebp, [esp + 0x128 + 0x24] // arg_4
		mov     ebx, [esp + 0x124 + 0x24] // arg_0
		mov     edi, eax
		mov     eax, [esi + 0x138]
		mov		[eax + ebx * 4], ebp
		mov     edx, [edi]
		mov     eax, [edx + 0x228]
		push    ebp
		mov     ecx, edi
		call    eax
		//push    eax
		lea     ecx, [esp + 0x24 + 0x24] // var_104 !!BYTE variable needed!! POSSIBLE VALUES: - 0xC, + 0x0
		push    SOULSTORM_aMrkr_S_cmd
		push	ecx
		call    sprintf
		mov     edx, [esi + 0x160]
		mov     eax, [esi + 0x0EC]
		mov     eax, [eax + edx * 4]
		mov     eax, [eax]
		add     esp, 0x0C
		test    eax, eax
		jz      jump_1
		mov     ecx, [eax + 0x0C]
		mov		[esp + 0x24 - 0x14], ecx // var_138
		jmp     jump_2
jump_1: 
		mov		[esp + 0x24 - 0x14], 0 // var_138
jump_2:
		push    ecx
		mov     edx, esp
		lea     eax, [esp + 0x24 + 0x24] // var_104
		push    eax
		push    edx
		call    SOULSTORM_checkKeyNameInDictionaryFunction
		mov     ecx, [esp + 0x24 - 0x10] // var_138?var_134?
		call    SOULSTORM_placeModelOnMarker
		cmp     eax, 0x0FFFFFFFF
		jz      jump_3
		mov     edx, [esi + 0x160]
		lea     ecx, [esp + 0x24 - 0x10] // var_134
		push    ecx
		push    eax
		mov     eax, [esi + 0x0EC]
		mov     ecx, [eax + edx * 4]
		call    SOULSTORM_placeCommanderModelOnMarkerFunction_1
		mov     edx, [edi]
		mov     eax, [edx + 0x0F0]
		push    ebx
		mov     ecx, edi
		call    eax
		mov     edx, [edi]
		mov     ebp, eax
		mov     eax, [edx + 0x0F4]
		push    ebx
		mov     ecx, edi
		call    eax
		fstp	[esp + 0x24 - 0x14] // var_140
		fld		[esp + 0x24 - 0x14] // var_140
		mov     edx, [esi + 0x164]
		push    ecx
		fstp	[esp] // var_154
		lea     ecx, [esp + 0x24 - 0x0C] // var_13C
		push    ecx
		push    ebp
		add     edx, ebx
		push    edx
		mov     ecx, esi
		call    SOULSTORM_placeCommanderModelOnMarkerFunction_2
		add     esp, 0x134
		pop     edi
		pop     esi
		pop     ebx
		pop     ebp
		retn    8
jump_3:
		mov     eax, [edi]
		mov     edx, [eax + 0x228]
		push    ebp
		mov     ecx, edi
		call    edx
		push    eax
		lea     eax, byte ptr [esp + 0x24 + 0x24]
		push    eax
		push    SOULSTORM_aMarkerSMissing;
		push    SOULSTORM_loc_415254
		call    DEBUG_dbWarningfAux
		add     esp, 0x10
		add     esp, 0x134
		pop     edi
		pop     esi
		pop     ebx
		pop     ebp
		
		retn	8
	}
}

int __stdcall displayCommanderModelOnMetamapGFXScreen(int, int)
{
	__asm
	{
		sub     esp, 8
		/*
		push    ebx
		push    esi
		push    edi
		*/
		mov     esi, ecx
		call    SOULSTORM_sub_96EAA0
		mov     ecx, eax
		call    SOULSTORM_sub_96F440
		mov     edx, [eax]
		mov     ebx, [esi + 0x138]
		mov     edi, [esp + 0x24 - 0xC] // arg_0
		mov     ecx, eax
		mov     eax, [edx + 0x210]
		call    eax
		cmp		[ebx + edi * 4], eax
		mov     ebx, [esp + 0x24 - 0x8] // arg_4
		push    ebx
		mov     ecx, esi
		push    edi
		jnz     jump_4
		call    placeCommanderModelOnMarker
		mov     ecx, [esi + 0x138]
		mov		[ecx + edi * 4], ebx
		pop     edi
		pop     esi
		pop     ebx
		add     esp, 8
		retn    8
jump_4:
		//call    sub_499600 DISABLED
		fstp	[esp + 0x24 - 0x18] // var_8
		mov     eax, [esi + 0x184]
		cmp     eax, [esi + 0x188]
		lea     ecx, [esi + 0x180]
		mov     edx, edi
		mov		[esp + 0x24 - 0x14], edx // var_4
		jz      jump_6
		test    eax, eax
		jz      jump_5
		push    ebp
		mov     ebp, [esp + 0x24 - 0x14] // var_4
		mov		[eax], ebp
		mov		[eax + 4], edx
		pop     ebp		
jump_5: 
		add     dword ptr[ecx + 4], 8
		mov     edx, [esi + 0x138]
		mov		[edx + edi * 4], ebx
		pop     edi
		pop     esi
		pop     ebx
		add     esp, 8
		retn    8
	
jump_6:
		push    1
		push    1
		lea     edx, [esp + 0x24 + 0x0]
		push    edx
		lea     edx, [esp + 0x24 - 0xC]
		push    edx
		push    eax
		call    SOULSTORM_displayCommanderModelOnMetamapGFXScreenFunction_1
		mov     eax, [esi + 0x138]
		mov		[eax + edi * 4], ebx
		pop     edi
		pop     esi
		pop     ebx
		add     esp, 8
		retn    8
	}
}

/*
int __declspec(naked) Metamap_Action_Selector_Function()
{
	__asm
	{
		push offset AD3A84;
		call sub_66DE90;
		call sub_777BD0;
//		pushad;
//		call GameLoop;
//		popad;

//		pop eax;
//		sub esp, 0x20;
//		mov[esp + 0xC], ecx;
//		push eax;
//		ret;
	}
}
*/
int __stdcall runAction(int)
{
	/*
	int v4, v5, v11, v58;
	char v6;
	int(__thiscall *v7)(int);
	const wchar_t* v49;
	const char *v50;
	float v51;

	v4 = SOULSTORM_sub_96EAA0();
	v5 = ((int(__thiscall *)(int))SOULSTORM_sub_96F440)(v4);
	v6 = (*(int(__thiscall **)(int))(*(DWORD *)v5 + 636))(v5);
	v7 = *(int(__thiscall **)(int))(*(DWORD *)v5 + 640);
	
	v11 = *(DWORD *)(a1 + 376);

	v58 = SOULSTORM_sub_7761C0(v6, (char)v7);
	SOULSTORM_sub_66DE90(SOULSTORM_dieActionString_I, v58);
	SOULSTORM_runAnimationOnMetaMapMenuModel(*v49, *v50, v51);
	return 0;
	*/
	
	__asm
	{
		//push    ebp
		/*
		push    0x0FFFFFFFF
		push    SOULSTORM_FrameHandler3Jump
		mov     eax, fs : 0
		push    eax
		mov     fs : 0, esp
		sub     esp, 0x50
		*/

		
		push    ebx
		push    ebp
		push    esi
		push    edi
		
		
		mov     esi, ecx
		call    SOULSTORM_sub_96EAA0
		mov     ecx, eax
		call    SOULSTORM_sub_96F440
		mov     edi, eax
		mov     eax, [edi]
		mov     edx, [eax + 0x27C]
		mov     ecx, edi
		call    edx
		mov     bl, al
		mov     eax, [edi]
		mov     edx, [eax + 0x280]
		mov     ecx, edi
		mov     byte ptr[esp - 0x8], bl
		call    edx
		/*
		mov     byte ptr[esp - 0x4], al
		
		mov     eax, [esp - 0x4]
		mov     edx, [esp - 0x8]
        mov     ecx, [esi + 0x178]
	    push    eax
	    push    edx
		call    SOULSTORM_toggleOverlayFunction
		*/
		
		
		sub     esp, 0x0C
		
		mov     ecx, esp
		mov		[esp + 0x7C], esp
		lea     edx, [esp + 0x7C]
		push    edx
		push    SOULSTORM_dieActionString_I
		call    SOULSTORM_findMotionByGivenName
		mov     ecx, [esi + 0x178]
		call    SOULSTORM_runMotionOnMetaMapMenuModel
		//add     esp, 0x1C

		fld     SOULSTORM_flt_C1F44C
		sub     esp, 0x0C
		mov     eax, esp
		fstp    dword ptr[esp + 0x4]
		mov		[esp + 0x7C], esp
		push    esi
		push    SOULSTORM_setOverlayEnabledFunction
		push    eax
		call    SOULSTORM_setPointerToArgument2Function
		add     esp, 0x0C
		mov     ecx, esi
		call    SOULSTORM_sub_787020

		//pop    ebp
		//pop esi
		//retn 4
		/*
		mov     fs : 0, ecx
		add     esp, 0x5C
		*/
		pop     edi
		pop     esi
		pop     ebp
		//mov     large fs : 0, ecx
		pop     ebx
		//add     esp, 0x50
		//retn    4
		

	}
	/*
	// setOverlayEnabledFunction function
	__asm
	{
		mov     ecx, [esi + 0x178]
		call    SOULSTORM_sub_776140
		//mov     ecx, esi
		//call    SOULSTORM_setOverlayEnabledFunction
		retn 4
	}
	*/
	/*
	// definitionEnterMetamapScreenFunction
	__asm
	{
		push    ebx
		mov     ebx, [esp - 0x0C]
		push    esi
		push    ebx
		mov     esi, ecx
		call    SOULSTORM_sub_787340

		mov     eax, [esp + 0x24 - 0x18]
		push    eax
		mov     ecx, esi
		call    SOULSTORM_NewCampaignGameStart
		pop		esi
		pop		ebx
		retn	8
	}
	*/
	/*
	// runMotionOnMetaMapMenuModel function
	__asm
	{
		//sub     esp, 0x50
		//sub     esp, 0x0C
		push    esi
		mov     esi, ecx
		//mov     ecx, esp
		//sub     esp, 0x0C
		//mov		[esp + 0x7C], esp
		//lea     eax, [esp + 0x7C]
		lea     edx, [esi + 0x50]
		push    edx
		//lea     eax, [esi + 0x40]
		//push    eax
		//mov     eax, [esp + 0x7C]
		//push    eax
		push    SOULSTORM_dieActionString_I
        call    SOULSTORM_findMotionByGivenName
        mov     ecx, [esi + 0x178]
        //call    SOULSTORM_runMotionOnMetaMapMenuModel
		fld     SOULSTORM_flt_C1F44C_I
		//add     esp, 0x0C
		//mov     eax, esp
		//fstp    dword ptr[esp + 8]
		//mov[esp + 0x7C], esp
		//push    esi
		//mov     ecx, esi
		//call    SOULSTORM_sub_78EC00
		//add     esp, 0x4
		pop		esi
		ret
	}
	
	/*
	// bigger chunk of runAnimationOnMetaMapMenuModel function
	__asm
	{
		push    esi
		sub     esp, 0x0C
		mov     ecx, esp
		mov		[esp + 0x7C], esp
		lea     edx, [esp + 0x7C]
		push    edx
		push    SOULSTORM_dieActionString_I
		call    SOULSTORM_sub_66DE90
		mov     ecx, [esi + 0x178]
		call    SOULSTORM_runAnimationOnMetaMapMenuModel
		fld     SOULSTORM_flt_C1F44C_I
		sub     esp, 0x0C
		mov     eax, esp
		fstp    dword ptr[esp + 8]
		mov		[esp + 0x7C], esp
		push    esi
		push    SOULSTORM_sub_78EC00
		push    eax
		call    SOULSTORM_sub_78F540
		add     esp, 0x0C
		mov     ecx, esi
		call    SOULSTORM_sub_787020
		mov     [esi + 0x183], 1
		mov     ecx, SOULSTORM_off_C1F448_I
		push    0
		push    ecx
		call	SOULSTORM_sub_75EC70
		mov     [esi + 0x182], 1
		pop		esi
		ret		4
	}
	*/
}

// NOT WORKING
int __stdcall runActionOnModel(int)
{
	__asm
	{
		push    ebx
		push    esi
		push    edi
		
		mov     esi, ecx
		call    SOULSTORM_sub_96EAA0
		mov     ecx, eax
		call    SOULSTORM_sub_96F440
		mov     ecx, [esi + 0x178]
		test    ecx, ecx
		mov     edi, [esp + 0x10]
		mov     ebx, eax
		jz      skip1
		push    1
		push    edi
		call    SOULSTORM_runZoomAnimation
skip1:
			//add     esp, 0x4
		pop		edi
		pop		esi
		pop		ebx
		retn	4
	}
}

// PARTIALLY WORKING
// copy of function from definitionButtonInspectClicked button
int __stdcall definitionButtonInspectClicked(int)
{
	__asm
	{
		push    esi
		mov     esi, ecx
		push    SOULSTORM_String
		lea     eax, [esi + 0x50]
		push    SOULSTORM_a_root_sidebars
		push    eax
		call    USERINTERFACE_Invoke_SwfWidget_UI__QAAPBDPBD0ZZ
		add     esp, 0x10
		/*
		add     esp, 4
		mov     ecx, esp
		push    esi
		push    SOULSTORM_loc_78E070
		push    ecx
		call    SOULSTORM_setPointerToArgument2Function
		add     esp, 0x0C
		
		mov     ecx, esi
		call    SOULSTORM_sub_787320
		*/
		mov     edx, [esi + 0x38]
		push    edx
		mov     ecx, esi
		//call	runActionOnModel
		call    SOULSTORM_openAnotherGFXFile
		pop     esi
		retn    4
	}
}

// WORKING
// copy of function from ToggleArmy button
int __stdcall definitionButtonToggleArmyClicked(int)
{
	__asm
	{
		push    1
		push    SOULSTORM_aD_I //"%d"
		add     ecx, 0x50 //'P'
		push    SOULSTORM_a_root_showst_0_I //"_root.ShowStatsArmy"
		push    ecx
		call    USERINTERFACE_Invoke_SwfWidget_UI__QAAPBDPBD0ZZ
		add     esp, 0x10
		retn    4
	}
	
}

int __stdcall prepareAction(int)
{
	__asm
	{
		//mov     eax, [esp + 0x0C]
		//push    eax
		mov     esi, ecx
		mov     ecx, esi
		call    runAction
		//sub		esp, 0x4
	}
}

int __declspec(naked) new_BindButtonClickedEntry_Function()
{
	// save address to return in the future
	// save stack
	__asm
	{
		pop		return_address
		//push    SOULSTORM_aOnsidebarexite
		//mov     ecx, edi
		//call    ebx

		//pushad
	}

	__asm
	{
		push    esi
		lea     ecx, [esp + 0x24 - 0x10]
		//lea     edx, [esp + 0x24 - 0x10]
		//push    definitionButtonInspectClicked
		//push	SOULSTORM_definitionEnterMetamapScreenFunction
		push    runAction
		//push    prepareAction
		//push    edx
		push	ecx
		call    SOULSTORM_sub_78F520
		//call    SOULSTORM_sub_78F4C0
		add     esp, 0x0C
		push    eax
		push    SOULSTORM_aDeepStrike_I
		mov     ecx, edi
		call    ebx
	//}
	
	//restore stack
	//restore overwritten code
	__asm
	//{
		//popad
		push    esi
		lea     edx, [esp + 0x24 - 0x10]
		// call	SOULSTORM_sub_96EAA0
/*
		push    esi
		lea     edx, [esp + 0x24 - 0x8]
	    push    SOULSTORM_loc_78DBD0
		push    edx
		call    SOULSTORM_sub_78F520
		add     esp, 0x0C
		push    eax
		push    SOULSTORM_aOnsidebarexite
		mov     ecx, edi
		call    ebx
*/
		push	return_address
		ret
	}
}

int __declspec(naked) new_PlaceObjectsOnMetamapFunction()
{
	// save address to return in the future
	// save stack
	__asm
	{
		pop		return_address
		//push    SOULSTORM_aOnsidebarexite
		//mov     ecx, edi
		//call    ebx

		//pushad
	}

	__asm
	{
		mov     ecx, [esi + 0x138]
		mov     edx, [ecx + ebx * 4]
		push    edx
		push    ebx
		mov     ecx, esi
		call    placeCommanderModelOnMarker
		//mov     edx, [esi + 0x138]
		//fstp    st
	}

	//restore stack
	//restore overwritten code
	__asm
	{
	
		push	return_address
		ret
	}
}

int __declspec(naked) new_displayCommanderModelOnMetamapGFXScreen()
{
	// save address to return in the future
	// save stack
	__asm
	{
		pop		return_address
		//push    SOULSTORM_aOnsidebarexite
		//mov     ecx, edi
		//call    ebx

		//pushad
	}

	__asm
	{
		push    eax
		push    edi
		mov     ecx, esi
		call    displayCommanderModelOnMetamapGFXScreen
		//mov     edx, [esi + 0x138]
		//fstp    st
	}

	//restore stack
	//restore overwritten code
	__asm
	{

		push	return_address
		ret
	}
}

// funciton that disables stuff in load game screen
int __declspec(naked) test_function()
{
	// save address to return in the future
	// save stack
	__asm
	{
		pop return_address
		//pushad
	}

	__asm
	{
		jmp     SOULSTORM_loc_6CC271

		push	return_address
		ret
	}
}

// funciton that disables stuff in load game screen
int __declspec(naked) test_function2()
{
	// save address to return in the future
	// save stack
	__asm
	{
		pop return_address
		//pushad
	}

	__asm
	{
		jmp     SOULSTORM_loc_6CB20B

		push	return_address
			ret
	}
}