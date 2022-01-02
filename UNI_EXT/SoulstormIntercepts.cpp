#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include "SoulstormPointers.h"

//DWORD patch_clip_region;
//DWORD* base_address;
DWORD return_address;

int __declspec(naked) dark_crusade_style_placeCommanderModelOnMarkerFunction_2()
{
	__asm
	{
		sub     esp, 0x64
		push    ebx
		push    ebp
		mov     ebp, [esp + 0x70] // arg_0
		push    esi
		push    edi
		mov     edi, ecx
		mov     eax, [edi + 0x0EC]
		mov     ebx, [eax + ebp * 4]
		mov     eax, [ebx]
		test    eax, eax
		mov		[esp + 0x24 - 0x14], edi // var_64
		jz      jump_1
		mov     eax, [eax + 0x0C]
		jmp     jump_2
jump_1:
		xor     eax, eax
jump_2:
		mov     esi, [eax + 0x10]
		test    esi, esi
		jz      jump_3
		mov     edx, [esp + 0x7C] // arg_4
		push    ecx
		mov     ecx, esp
		push    edx
		push    ecx
		call    SOULSTORM_checkKeyNameInDictionaryFunction
		mov     ecx, esi
		call    SOULSTORM_sub_8F89F0
		mov     esi, eax
		cmp     esi, 0x0FFFFFFFF
		mov		[esp + 0x7C], esi // arg_4
		jnz     jump_4
		mov		DWORD32[esp + 0x7C], 0 // arg_4
		mov     esi, [esp + 0x7C] // arg_4
jump_4:
		fld		[esp + 0x84 + 0x24] // arg_C?
		push    ecx
		mov     ecx, ebx
		_emit	0xD9
		_emit	0x1C
		_emit	0x24
		//fstp	[esp + 0x1C + 0x8] // var_78
		call    SOULSTORM_sub_8F0CD0
		fldz
		push    ecx
		_emit	0xD9
		_emit	0x1C
		_emit	0x24
		//fstp	[esp + 0x1C + 0x8] // var_78
		mov     ecx, ebx
		call	SOULSTORM_sub_8F0C70
		mov     ecx, ebx
		call    SOULSTORM_sub_8F0C90
		imul    ebp, 0x7C
		mov     eax, [edi + 0x0F8]
		mov     ecx, [eax + ebp]
		shr     ecx, 2
		test    cl, 1
		lea     edi, [esp + 0x24 - 0x10] // var_60
		mov     ecx, 0x0C
		jz      jump_5
		lea     esi, [eax + ebp + 0x3C]
		jmp     jump_6
jump_5:
		mov     eax, [ebx + 0x14]
		imul    esi, 0x34
		add     esi, eax
jump_6:
		mov     eax, [esp + 0x80] // arg_8?
		fld		[eax]
		rep		movsd
		fld		[esp + 0x24 - 0x10] // var_60
		fld     st
		fmulp   st(2), st
		fld		[eax + 0x0C]
		fld		[esp + 0x24 - 0xC] // var_5C
		fld     st
		fmulp   st(2), st
		fxch    st(3)
		faddp   st(1), st
		fld		[eax + 0x18]
		fld		[esp + 0x24 - 0x8] // var_58
		fld     st
		fmulp   st(2), st
		fxch    st(2)
		faddp   st(1), st
		fstp	[esp + 0x24 + 0x20] // var_30
		fld		[eax + 4]
		fmul    st, st(2)
		fld		[eax + 0x10]
		fmul    st, st(4)
		faddp   st(1), st
		fld     st(1)
		fmul	[eax + 0x1C]
		faddp   st(1), st
		fstp	[esp + 0x24 + 0x24] // var_2C
		fld		[eax + 8]
		fmulp   st(2), st
		fld		[eax + 0x14]
		fmulp   st(3), st
		fxch    st(1)
		faddp   st(2), st
		fmul	[eax + 0x20]
		faddp   st(1), st
		fstp	[esp + 0x24 + 0x28] // var_28
		fld     dword ptr[eax]
		fld		[esp + 0x24 - 0x4] // var_54
		fld     st
		fmulp   st(2), st
		fld		[eax + 0x0C]
		fld		[esp + 0x24] // var_50
		fld     st
		fmulp   st(2), st
		fxch    st(3)
		faddp   st(1), st
		fld		[eax + 0x18]
		fld		[esp + 0x24 + 0x4] // var_4C
		fld     st
		fmulp   st(2), st
		fxch    st(2)
		faddp   st(1), st
		fstp	[esp + 0x24 + 0x2C] // var_24
		fld		[eax + 0x10]
		fmul    st, st(3)
		fld		[eax + 4]
		fmul    st, st(3)
		faddp   st(1), st
		fld     st(1)
		fmul	[eax + 0x1C]
		faddp   st(1), st
		fstp	[esp + 0x24 + 0x30] // var_20
		fld		[eax + 0x14]
		fmulp   st(3), st
		fld		[eax + 8]
		fmulp   st(2), st
		fxch    st(2)
		faddp   st(1), st
		fld		[eax + 0x20]
		fmulp   st(2), st
		faddp   st(1), st
		fstp	[esp + 0x24 + 0x34] // var_1C
		fld		[eax]
		fld		[esp + 0x24 + 0x8] // var_48
		fld     st
		fmulp   st(2), st
		fld		[eax + 0x0C]
		fld		[esp + 0x24 + 0xC] // var_44
		fld     st
		fmulp   st(2), st
		fxch    st(3)
		push    ecx
		faddp   st(1), st
		mov     ecx, ebx
		fld		[eax + 0x18]
		fld		[esp + 0x24 + 0x14] // var_40
		fld     st
		fmulp   st(2), st
		fxch    st(2)
		faddp   st(1), st
		fstp	[esp + 0x24 + 0x3C] // var_18
		fld		[eax + 0x10]
		fmul    st, st(3)
		fld		[eax + 4]
		fmul    st, st(3)
		faddp   st(1), st
		fld     st(1)
		fmul	[eax + 0x1C]
		faddp   st(1), st
		fstp	[esp + 0x24 + 0x40] // var_14
		fld		[eax + 0x14]
		fmulp   st(3), st
		fld		[eax + 8]
		fmulp   st(2), st
		fxch    st(2)
		faddp   st(1), st
		fld		[eax + 0x20]
		fmulp   st(2), st
		faddp   st(1), st
		fstp	[esp + 0x24 + 0x44] // var_10
		fld		[eax]
		fld		[esp + 0x24 + 0x18] // var_3C
		fld     st
		fmulp   st(2), st
		fld		[eax + 0x0C]
		fld		[esp + 0x24 + 0x1C] // var_38
		fld     st
		fmulp   st(2), st
		fxch    st(3)
		faddp   st(1), st
		fld		[eax + 0x18]
		fld		[esp + 0x24 + 0x20] // var_34
		fld     st
		fmulp   st(2), st
		fxch    st(2)
		faddp   st(1), st
		fadd	[eax + 0x24]
		fstp	[esp + 0x24 + 0x48] // var_C
		fld		[eax + 0x10]
		fmul    st, st(3)
		fld		[eax + 4]
		fmul    st, st(3)
		faddp   st(1), st
		fld     st(1)
		fmul	[eax + 0x1C]
		faddp   st(1), st
		fadd	[eax + 0x28]
		fstp	[esp + 0x24 + 0x4C] // var_8
		fld		[eax + 0x14]
		fmulp   st(3), st
		fld		[eax + 8]
		fmulp   st(2), st
		fxch    st(2)
		faddp   st(1), st
		fld		[eax + 0x20]
		fmulp   st(2), st
		faddp   st(1), st
		fadd	[eax + 0x2C]
		fstp	[esp + 0x24 + 0x50] // var_4
		fld1
		_emit	0xD9
		_emit	0x1C
		_emit	0x24
		//fstp	[esp + 0x1C + 0x8] // var_78
		call    SOULSTORM_sub_8F0CD0
		mov     edx, [esp + 0x24 - 0x14] // var_64
		mov     eax, [edx + 0F8h]
		mov     ecx, [esp + 0x7C] // arg_4
		add     eax, ebp
		or		[eax], 4
		mov		[eax + 8], ecx
		lea     edi, [eax + 0x0C]
		mov     ecx, 0x0C
		lea     esi, [esp + 0x24 + 0x20] // var_30
		fldz
		rep		movsd
		lea     edi, [eax + 0x3C]
		mov     eax, [esp + 0x78] // arg_0
		mov     ecx, 0x0C
		lea     esi, [esp + 0x24 - 0x10] // var_60
		rep		movsd
		push    ecx
		mov     ecx, edx
		_emit	0xD9
		_emit	0x1C
		_emit	0x24
		//fstp	[esp + 0x1C + 0x8] // var_78
		push    eax
		call    SOULSTORM_sub_77B400
jump_3:
		pop     edi
		pop     esi
		pop     ebp
		pop     ebx
		add     esp, 0x64
		retn    0x10
	}
}

int __declspec(naked) placeCommanderModelOnMarker(int, int) // (raceID, terrainID)
{
	__asm
	{
		
		sub     esp, 0x134
		
		push    ebx // number
		push    ebp // number in DC - pointer to memory address in SS
		push    esi // pointer to memory addres
		push    edi // number
		
		mov     esi, ecx
	    call    SOULSTORM_sub_96EAA0
		mov     ecx, eax
		call    SOULSTORM_sub_96F440
		mov     ebp, [esp + 0x128 + 0x24] // arg_4	terrainID
		mov     ebx, [esp + 0x124 + 0x24] // arg_0	raceID
		mov     edi, eax
		mov     eax, [esi + 0x138]
		mov		[eax + ebx * 4], ebp // memory_pointer_1 set to terrainID
		mov     edx, [edi]
		mov     eax, [edx + 0x288] // terrain name pointer
		push    ebp
		mov     ecx, edi
		call    eax // terrain name string
		push    eax
		lea     ecx, [esp + 0x24 + 0x24] // var_104 mrkr_terrainName_cmd string
		push    SOULSTORM_aMrkr_S_cmd
		push	ecx // buffer pointer
		call    sprintf
		mov     edx, [esi + 0x160] // unknown ID 1
		mov     eax, [esi + 0x0EC] // unknown register
		mov     eax, [eax + edx * 4]
		mov     eax, [eax] // POSSIBLY pointer to metamap model?
		add     esp, 0x0C
		test    eax, eax
		jz      jump_1
		mov     ecx, [eax + 0x0C]
		mov		[esp + 0x24 - 0x14], ecx // var_138
		jmp     jump_2
jump_1: 
		mov		DWORD32[esp + 0x24 - 0x14], 0 // var_138
jump_2:
		push    ecx
		mov     edx, esp
		lea     eax, [esp + 0x24 + 0x24] // var_104 mrkr_terrainName_cmd string buffer pointer
		push    eax
		push    edx
		call    SOULSTORM_checkKeyNameInDictionaryFunction
		mov     ecx, [esp + 0x24 - 0x10] // var_138
		call    SOULSTORM_placeModelOnMarker
		cmp     eax, 0x0FFFFFFFF // eax contains unit ID?
		jz      jump_3
		mov     edx, [esi + 0x160]
		lea     ecx, [esp + 0x24 - 0x10] // var_138 address
		push    ecx
		push    eax // unit ID?
		mov     eax, [esi + 0x0EC]
		mov     ecx, [eax + edx * 4]
		call    SOULSTORM_placeCommanderModelOnMarkerFunction_1
		mov     edx, [edi]
		mov     eax, [edx + 0x114] // ArmyModelBone string pointer
		push    ebx
		mov     ecx, edi
		call    eax // ArmyModelBone string
		mov     edx, [edi]
		mov     ebp, eax
		mov     eax, [edx + 0x118] // unknown pointer
		push    ebx
		mov     ecx, edi
		call    eax // 00 value?
		sub		esp, 0x08
		fstp	[esp + 0x24 - 0x14] // var_138
		fld		[esp + 0x24 - 0x14] // var_138
		mov     edx, [esi + 0x164] // unknown ID 2 unitID?
		push    ecx
		fstp	[esp] // var_154
		lea     ecx, [esp + 0x24 - 0xC] // var_13C
		push    ecx
		push    ebp // master
		add     edx, ebx		//DISABLE FOR TESTING PURPOSES
		push    edx // unknown ID 2 unitID?
		mov     ecx, esi
		//call	SOULSTORM_placeCommanderModelOnMarkerFunction_2
		call    dark_crusade_style_placeCommanderModelOnMarkerFunction_2
		pop     edi
		pop     esi
		pop     ebp
		pop     ebx
		add     esp, 0x134
		retn    8
jump_3:
		mov     eax, [edi]
		mov     edx, [eax + 0x288]
		push    ebp
		mov     ecx, edi
		call    edx
		push    eax
		lea     eax, [esp + 0x24 + 0x24]
		push    eax
		push    SOULSTORM_aMarkerSMissing;
		push    SOULSTORM_loc_415254
		call    DEBUG_dbWarningfAux
		add     esp, 0x10
		pop     edi
		pop     esi
		pop     ebp
		pop     ebx
		add     esp, 0x134

		retn	8
	}
}

int __declspec(naked) displayCommanderModelOnMetamapGFXScreen(int, int) // (raceID, terrainID)
{
	__asm
	{
		sub     esp, 8
		
		push    ebx
		push    esi
		push    edi
		
		mov     esi, ecx
		call    SOULSTORM_sub_96EAA0
		mov     ecx, eax
		call    SOULSTORM_sub_96F440
		mov     edx, [eax]
		mov     ebx, [esi + 0x138]
		mov     edi, [esp + 0x24 - 0xC] // arg_0 raceID
		mov     ecx, eax
		mov     eax, [edx + 0x270]
		call    eax // FFFFFFFF value read
		cmp		[ebx + edi * 4], eax // memory_pointer_1 compared
		mov     ebx, [esp + 0x24 - 0x8] // arg_4 terrainID
		push    ebx // terrainID
		mov     ecx, esi
		push    edi // raceID
		jnz     jump_4
		call    placeCommanderModelOnMarker // (raceID, terrainID)
		mov     ecx, [esi + 0x138]
		mov		[ecx + edi * 4], ebx
		pop     edi
		pop     esi
		pop     ebx
		//pop		ebp
		add     esp, 8
		retn    8
jump_4:
		// call    sub_499600 // DISABLED
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
		//pop		ebp
		add     esp, 8
		retn    8
	
jump_6:
		push    1
		push    1
		lea     edx, [esp + 0x24 + 0x4]
		push    edx
		lea     edx, [esp + 0x24 - 0xC] // arg_0 raceID
		push    edx
		push    eax
		call    SOULSTORM_displayCommanderModelOnMetamapGFXScreenFunction_1
		mov     eax, [esi + 0x138]
		mov		[eax + edi * 4], ebx
		pop     edi
		pop     esi
		pop     ebx
		//pop		ebp
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
		
	}

	__asm
	{
		mov     edx, [esi + 0x138]
		push    ebx
		mov     ecx, esi
		mov		[edx + ebx * 4], ebp
		call    SOULSTORM_placeCommanderIconOnMetamap
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

int __declspec(naked) new_placeObjectsOnMetamapOnLoadFunction()
{
	// save address to return in the future
	// save stack
	__asm
	{
		pop		return_address
	}

	__asm
	{
		mov     ecx, [esi + 0x138]
		mov     ebx, [esp + 0x24 - 0xC]
		mov		[ecx + edi * 4], ebx
		push    edi
		mov     ecx, esi
		call    SOULSTORM_placeCommanderIconOnMetamap
		mov     ecx, [esi + 0x138]
		mov     ebx, [esp + 0x24 - 0xC]
		mov		[ecx + edi * 4], ebx
		mov     edx, [ecx + edi * 4]
		push    edx
		push    edi
		mov     ecx, esi
		call    displayCommanderModelOnMetamapGFXScreen
	}

	//restore stack
	//restore overwritten code
	__asm
	{

		push	return_address
		ret
	}
}

int __declspec(naked) new_placeObjectsOnMetamapOnLoadFunction_1()
{
	// save address to return in the future
	// save stack
	__asm
	{
		pop		return_address
	}

	__asm
	{
		mov     edx, [ebx]
		mov     eax, [edx + 0x12C] // terrainID offset?
		//cmp		edi, 0x00 // TESTING ONLY
		//jg		skip //TESTING ONLY
		push    edi
		mov     ecx, ebx
		call    eax
		mov		[esp + 0x10], eax
		mov     ebp, [esi + 0x138]
						 //mov     ecx, eax
		//mov     ecx, esi
		//mov		[ebp + edi * 4], eax
		//mov     ebp, eax

		mov     edx, [ebx]
		mov     eax, [edx + 0x270]
		//push	edi
		mov     ecx, ebx
		call    eax // FFFFFFFF value obtained
		mov     ecx, [esp + 0x10]
		push	ecx // terrainID

		//mov     ebp, [esi + 0x138]
		//mov     edx, [ebx]
		//mov     ebp, eax
		//mov     eax, [edx + 0x210]
		//mov		[esp + 0x10], ecx
		//mov     ecx, edi
		//call    eax
		//mov     ecx, [esp + 0x10]

		push    edi // raceID
		mov     ecx, esi
		mov		[ebp + edi * 4], eax // FFFFFFFF value set on memory_pointer_1
		call	displayCommanderModelOnMetamapGFXScreen // (raceID, terrainID)
skip :
		mov     edx, [ebx]
		mov     eax, [edx + 0x12C]
		mov     ebp, [esi + 0x138]
		push    edi
		mov     ecx, ebx
		call    eax
		push    edi
		mov     ecx, esi
		mov		[ebp + edi * 4], eax
		call    SOULSTORM_placeCommanderIconOnMetamap // (terrainID)
	}

	//restore stack
	//restore overwritten code
	__asm
	{

		push	return_address
		ret
	}
}

int __declspec(naked) new_placeObjectsOnMetamapOnLoadFunction_2()
{
	// save address to return in the future
	// save stack
	__asm
	{
		pop		return_address
	}

	__asm
	{
		call    SOULSTORM_sub_96EAA0
		mov     ecx, eax
		call    SOULSTORM_sub_96F440
		mov     edx, [eax]
		/*
		mov     eax, [edx + 0x12C] // terrainID offset?
		//cmp		edi, 0x00 // TESTING ONLY
		//jg		skip //TESTING ONLY
		push    edi
		mov     ecx, ebx
		call    eax
		mov		[esp + 0x10], eax
		mov     ebp, [esi + 0x138]
		mov     edx, [ebx]
		mov     eax, [edx + 0x270]
		mov     ecx, ebx
		call    eax
		mov     ecx, [esp + 0x10]
		push	ecx // terrainID
		push    edi // raceID
		mov     ecx, esi
		*/	
		mov     eax, [edx + 0x12C] // terrainID offset?
		//cmp		edi, 0x00 // TESTING ONLY
		//jg		skip //TESTING ONLY
		push    edi
		mov     ecx, esi
		call    eax
		mov		[esp + 0x14], eax
		call    SOULSTORM_sub_96EAA0
		mov     ecx, eax
		call    SOULSTORM_sub_96F440
		mov     edx, [eax]
		mov     ecx, [esi + 0x138]
		mov     ebx, [esp + 0x24 - 0x8]
		//mov		[ecx + edi * 4], ebx
		mov     eax, [edx + 0x270] // terrainID
		//cmp		edi, 0x00 // TESTING ONLY
		//jg		skip //TESTING ONLY
		push    edi
		mov     ecx, ebx
		call    eax
		mov     ecx, [esp + 0x14]
		push	ecx // terrainID
		//mov     ebp, [esi + 0x138]
		//mov     edx, [ebx]
		//mov     ebp, eax
		//mov     eax, [edx + 0x210]
		//mov		[esp + 0x10], ecx
		//mov     ecx, edi
		//call    eax
		//mov     ecx, [esp + 0x10]
		push    edi
		mov     ecx, [esi + 0x138]
		mov		[ecx + edi * 4], eax
		mov     ecx, esi
		//mov		[ecx + edi * 4], ebx
		call	displayCommanderModelOnMetamapGFXScreen
skip :
		call    SOULSTORM_sub_96EAA0
		mov     ecx, eax
		call    SOULSTORM_sub_96F440
		mov     ecx, [esi + 0x138]
		mov     ebx, [esp + 0x24 - 0x8]
		mov		[ecx + edi * 4], ebx
		push    edi
		mov     ecx, esi
		call    SOULSTORM_placeCommanderIconOnMetamap

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