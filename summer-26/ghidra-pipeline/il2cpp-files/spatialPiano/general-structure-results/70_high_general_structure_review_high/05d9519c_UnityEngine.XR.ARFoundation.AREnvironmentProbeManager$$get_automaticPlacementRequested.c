/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.AREnvironmentProbeManager$$get_automaticPlacementRequested
ENTRY_POINT: 05d9519c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_6;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_ARFoundation_AREnvironmentProbeManager__get_automaticPlacementRequested(void)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined1 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined1 *in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined1 *in_stack_000000a0;
  undefined1 uStack00000000000000ac;
  
  FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_SwitchCurrentControlScheme__);
  *(undefined1 *)(unaff_x20 + 0xa8c) = 1;
  uStack00000000000000ac = 0;
  if ((unaff_x19 != 0) && (unaff_x21 != 0)) {
    lVar1 = *(long *)(unaff_x19 + 0x70);
    lVar10 = *(long *)(unaff_x19 + 0x78);
    lVar12 = *(long *)(unaff_x21 + 0x18);
    if (*(int *)(*(long *)Method_System_DateTimeOffset_ValidateStyles__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    puVar7 = 
    Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__;
    puVar5 = Method_System_Net_Sockets_NetworkStream_Close__;
    puVar4 = Method_System_Globalization_DateTimeFormatInfo_GetMonthName__;
    if (lVar12 != 0) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x58);
      uVar13 = *(undefined8 *)(lVar12 + 0x10);
      if (*(int *)(*(long *)Method_System_Globalization_DateTimeFormatInfo_GetMonthName__ + 0xe4) ==
          0) {
        thunk_FUN_02f6670c();
      }
      puVar3 = PTR_DAT_067c9e50;
      lVar12 = FUN_05ce02e4(uVar8,uVar9,0);
      uVar8 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 200),*(undefined8 *)(unaff_x19 + 0xd0),0);
      uVar9 = FUN_034dac00(0x26,*(undefined8 *)puVar5);
      FUN_05c5cb44(&stack0x000000ac,uVar9,0);
      in_stack_00000010 = 0;
      in_stack_00000018 = &stack0x000000ac;
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      thunk_FUN_060bfdac(*(undefined4 *)(unaff_x19 + 0x40),*(undefined4 *)(unaff_x19 + 0x44),
                         *(undefined4 *)(unaff_x19 + 0x48),0,lVar1,
                         *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x1c),0);
      cVar2 = *(char *)(unaff_x19 + 0x4c);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar5 = Method_UnityEngine_InputSystem_PlayerInput_SwitchCurrentControlScheme__;
      FUN_05cb163c(lVar1,*(undefined8 *)
                          Method_UnityEngine_InputSystem_PlayerInput_SwitchCurrentControlScheme__,
                   cVar2 != '\0',0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      thunk_FUN_060bfdac(*(undefined4 *)(unaff_x19 + 0x40),*(undefined4 *)(unaff_x19 + 0x44),
                         *(undefined4 *)(unaff_x19 + 0x48),0,lVar10,
                         *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x1c),0);
      FUN_05cb163c(lVar10,*(undefined8 *)puVar5,*(undefined1 *)(unaff_x19 + 0x4c),0);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
      uVar11 = *(undefined8 *)(unaff_x19 + 0x58);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_05ce02e4(uVar9,uVar11,0);
      FUN_05d95b90(uVar13,uVar9);
      fVar15 = (float)*(int *)(unaff_x19 + 0x10);
      thunk_FUN_060bfdac(1.0 / fVar15,1.0 / fVar15,fVar15,fVar15,lVar1,
                         *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x8c),0);
      FUN_05c5cb50(&stack0x000000ac,0);
      puVar6 = Method_System_IO_Path_InsecureGetFullPath__;
      puVar5 = 
      Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
      ;
      uVar9 = FUN_034dac00(0x27,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
      FUN_05c5cb44(&stack0x000000ac,uVar9,0);
      lVar10 = *(long *)puVar6;
      in_stack_00000010 = 0;
      in_stack_00000018 = &stack0x000000ac;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar10 = *(long *)puVar6;
      }
      uVar9 = *(undefined8 *)(unaff_x19 + 0x60);
      uVar11 = *(undefined8 *)(unaff_x19 + 0x68);
      uVar16 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x20);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar4);
      }
      uVar9 = FUN_05cdffec(uVar9,uVar11,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar16,uVar9,0);
      uVar9 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)(unaff_x19 + 0x58),0);
      uVar11 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x98),0);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x78);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab3f0(uVar13,uVar9,uVar11,uVar14,0,0);
      FUN_05c5cb50(&stack0x000000ac,0);
      uVar9 = FUN_034dac00(0x28,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
      FUN_05c5cb44(&stack0x000000ac,uVar9,0);
      lVar10 = *(long *)puVar7;
      in_stack_00000098 = 0;
      in_stack_000000a0 = &stack0x000000ac;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar10 = *(long *)puVar7;
      }
      uVar9 = *(undefined8 *)(unaff_x19 + 0x90);
      uVar11 = *(undefined8 *)(unaff_x19 + 0x98);
      uVar16 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar4);
      }
      uVar9 = FUN_05cdffec(uVar9,uVar11,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar16,uVar9,0);
      lVar10 = *(long *)(unaff_x19 + 0xc0);
      FUN_05cdfe40(&stack0x00000010,*(undefined8 *)(unaff_x19 + 0x80),
                   *(undefined8 *)(unaff_x19 + 0x88),0);
      in_stack_00000090 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      in_stack_00000078 = in_stack_00000018;
      in_stack_00000070 = in_stack_00000010;
      in_stack_00000088 = in_stack_00000028;
      in_stack_00000080 = in_stack_00000020;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(lVar10 + 0x18) != 0) {
        *(undefined8 *)(lVar10 + 0x40) = in_stack_00000090;
        *(undefined1 **)(lVar10 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar10 + 0x20) = in_stack_00000010;
        *(undefined8 *)(lVar10 + 0x38) = in_stack_00000028;
        *(undefined8 *)(lVar10 + 0x30) = in_stack_00000020;
        lVar10 = *(long *)(unaff_x19 + 0xc0);
        FUN_05cdfe40(&stack0x00000010,*(undefined8 *)(unaff_x19 + 0xa0),
                     *(undefined8 *)(unaff_x19 + 0xa8),0);
        in_stack_00000060 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
        in_stack_00000048 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000010;
        in_stack_00000058 = in_stack_00000028;
        in_stack_00000050 = in_stack_00000020;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        *(undefined8 *)(lVar10 + 0x68) = in_stack_00000060;
        *(undefined1 **)(lVar10 + 0x50) = in_stack_00000018;
        *(undefined8 *)(lVar10 + 0x48) = in_stack_00000010;
        *(undefined8 *)(lVar10 + 0x60) = in_stack_00000028;
        *(undefined8 *)(lVar10 + 0x58) = in_stack_00000020;
        uVar11 = *(undefined8 *)(unaff_x19 + 0xc0);
        uVar9 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x19 + 0x88),0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05cafe98(uVar13,uVar11,uVar9,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(char *)(lVar12 + 0xa8) == '\0') {
          if (DAT_06bb8a4a == '\0') {
            FUN_02f08768(PTR_DAT_067c9848);
            DAT_06bb8a4a = '\x01';
          }
          uVar16 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 8);
          uVar17 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0xc);
        }
        else {
          FUN_05c9cc94(&stack0x00000010,lVar12,0);
          uVar16 = uStack0000000000000030;
          FUN_05c9cc94(&stack0x00000010,lVar12,0);
          uVar17 = uStack0000000000000034;
        }
        uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
        uVar11 = *(undefined8 *)(unaff_x19 + 0x58);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_05ce02e4(uVar9,uVar11,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05caa088(uVar16,uVar17,0,0,uVar13,uVar9,lVar1,1,0);
        FUN_05c5cb50(&stack0x000000ac,0);
        uVar9 = FUN_034dac00(0x29,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
        FUN_05c5cb44(&stack0x000000ac,uVar9,0);
        lVar10 = *(long *)puVar7;
        in_stack_00000010 = 0;
        in_stack_00000018 = &stack0x000000ac;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar10 = *(long *)puVar7;
        }
        uVar9 = *(undefined8 *)(unaff_x19 + 0x80);
        uVar11 = *(undefined8 *)(unaff_x19 + 0x88);
        uVar16 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x14);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar4);
        }
        uVar9 = FUN_05cdffec(uVar9,uVar11,0);
        if (lVar1 != 0) {
          UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar16,uVar9,0);
          uVar9 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 0xa0),*(undefined8 *)(unaff_x19 + 0xa8),0
                              );
          uVar11 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 0xb0),*(undefined8 *)(unaff_x19 + 0xb8),
                                0);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05cab3f0(uVar13,uVar9,uVar11,lVar1,2,0);
          FUN_05c5cb50(&stack0x000000ac,0);
          uVar9 = FUN_034dac00(0x2a,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
          FUN_05c5cb44(&stack0x000000ac,uVar9,0);
          uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
          uVar11 = *(undefined8 *)(unaff_x19 + 0xb8);
          in_stack_00000010 = 0;
          in_stack_00000018 = &stack0x000000ac;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar9 = FUN_05ce02e4(uVar9,uVar11,0);
          uVar11 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 0xa0),*(undefined8 *)(unaff_x19 + 0xa8),
                                0);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05cab3f0(uVar13,uVar9,uVar11,lVar1,3,0);
          FUN_05c5cb50(&stack0x000000ac,0);
          uVar9 = FUN_034dac00(0x2d,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
          FUN_05c5cb44(&stack0x000000ac,uVar9,0);
          lVar10 = *(long *)puVar7;
          in_stack_00000010 = 0;
          in_stack_00000018 = &stack0x000000ac;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar10 = *(long *)puVar7;
          }
          uVar9 = *(undefined8 *)(unaff_x19 + 0xa0);
          uVar11 = *(undefined8 *)(unaff_x19 + 0xa8);
          uVar16 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x44);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)puVar4);
          }
          uVar9 = FUN_05cdffec(uVar9,uVar11,0);
          if (lVar1 != 0) {
            UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar16,uVar9,0);
            uVar16 = *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
            uVar9 = FUN_05cdffec(*(undefined8 *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x98)
                                 ,0);
            UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar16,uVar9,0);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_05cab3f0(uVar13,lVar12,uVar8,lVar1,4,0);
            FUN_05c5cb50(&stack0x000000ac,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


