/*
FUNCTION_NAME: TMPro.TMP_UpdateRegistry$$UnRegisterCanvasElementForRebuild
ENTRY_POINT: 05d822b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05d82718) */
/* WARNING: Removing unreachable block (ram,0x05d82628) */
/* WARNING: Removing unreachable block (ram,0x05d82520) */
/* WARNING: Removing unreachable block (ram,0x05d827ac) */

void TMPro_TMP_UpdateRegistry__UnRegisterCanvasElementForRebuild(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x21;
  ulong unaff_x22;
  undefined8 uVar14;
  ulong unaff_x24;
  long lVar15;
  undefined8 uVar16;
  long unaff_x29;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 in_stack_00000018;
  int in_stack_00000028;
  ulong in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000060;
  undefined1 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  ulong in_stack_000000c0;
  undefined1 *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined1 *in_stack_000000f8;
  long in_stack_00000100;
  undefined1 *in_stack_00000108;
  ulong uStack0000000000000190;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  long in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000260;
  
  uStack0000000000000190 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0x110) + 0x18);
  }
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)
                Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<List<XRLoadAnchorResult>>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05db9624(in_stack_00000260,uVar16,unaff_x29 + 8,in_stack_00000240,in_stack_00000248,uVar14,0);
  puVar2 = Method_System_Net_Sockets_NetworkStream_Close__;
  FUN_05d83790();
  FUN_05c5cb50(&stack0x00000234,0);
  if ((unaff_x24 & 1) != 0) {
    uVar14 = FUN_034dac00(0x17,*(undefined8 *)puVar2);
    unaff_x21 = &stack0x00000234;
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar14,0);
    uStack0000000000000190 = 0;
    FUN_05d83678();
    FUN_05d83f58();
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  if ((unaff_x22 & 1) == 0) {
    uVar14 = FUN_034dac00(0x18,*(undefined8 *)puVar2);
    unaff_x21 = &stack0x00000234;
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar14,0);
    uStack0000000000000190 = 0;
    if (in_stack_00000238 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d83678();
    FUN_05d841f0();
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  uVar14 = FUN_034dac00(0x19,*(undefined8 *)puVar2);
  FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar14,0);
  in_stack_00000100 = 0;
  in_stack_00000108 = &stack0x00000234;
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  thunk_FUN_060bf9c4(lVar8,0,0);
  if (*(long *)(unaff_x19 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = FUN_05d6aa74(*(long *)(unaff_x19 + 0x1e0),0);
  if (*(long *)(unaff_x19 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar6 = FUN_05d765e0(*(long *)(unaff_x19 + 0x1d0),0);
  if (((uVar5 | uVar6) & 1) != 0) {
    uVar14 = FUN_034dac00(0x1a,*(undefined8 *)puVar2);
    uStack0000000000000190 = uStack0000000000000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar14,0);
    unaff_x21 = &stack0x000001fc;
    uStack0000000000000190 = 0;
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (in_stack_00000238 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d84430();
    FUN_02a83444(&stack0x00000190);
  }
  if (in_stack_00000018._4_4_ != 0) {
    uVar14 = FUN_034dac00(0x1d,*(undefined8 *)puVar2);
    uStack0000000000000190 = uStack0000000000000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar14,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    if (*(long *)(unaff_x19 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1d0) + 0x48);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar5 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    if (*(long *)(unaff_x19 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1e0) + 0x78);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar7 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    if (iVar7 < 0) {
      iVar7 = iVar7 + 1;
    }
    uVar6 = uVar5;
    if (iVar7 >> 1 <= (int)uVar5) {
      uVar6 = iVar7 >> 1;
    }
    uVar1 = 0;
    if (-1 < (int)uVar5) {
      uVar1 = uVar6;
    }
    if (in_stack_00000238 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05c9ac9c(&stack0x00000190,in_stack_00000240,0);
    if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar5 = *(uint *)(*(long *)(unaff_x19 + 0x140) + 0x18);
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    FUN_05d84f84();
    FUN_02a83444(&stack0x000000f0);
  }
  if (in_stack_00000028 != 0) {
    if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar10 = FUN_05d76104(*(long *)(unaff_x19 + 0x1d8),0);
    uVar18 = 0x3f800000;
    uVar17 = 0x3f800000;
    if ((uVar10 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1d8) + 0x38);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar17 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
      if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1d8) + 0x40);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar18 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    }
    uVar14 = FUN_034dac00(0x1b,*(undefined8 *)puVar2);
    uStack0000000000000190 = uStack0000000000000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar14,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    FUN_05c9ac9c(&stack0x00000190,in_stack_00000240,0);
    FUN_05d855b4(uVar17,uVar18);
    FUN_02a83444(&stack0x000000f0);
    uVar14 = FUN_034dac00(0x1c,*(undefined8 *)puVar2);
    uStack0000000000000190 = uStack0000000000000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar14,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    FUN_05c9ac9c(&stack0x00000190,in_stack_00000240,0);
    in_stack_000000e0 = in_stack_000001b0;
    in_stack_000000c0 = uStack0000000000000190;
    in_stack_000000d8 = in_stack_000001a8;
    in_stack_000000d0 = in_stack_000001a0;
    in_stack_000000c8 = unaff_x21;
    FUN_05d85c0c(uVar17,uVar18);
    FUN_02a83444(&stack0x000000f0);
  }
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86378();
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86674();
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (in_stack_00000238 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86768();
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d869b8();
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86d14();
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86dc4();
  uVar10 = FUN_05d6d114(in_stack_00000238,0);
  if (((uVar10 & 1) != 0) && (*(char *)(unaff_x19 + 0x256) != '\0')) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar10 = FUN_060be514(lVar8,*(undefined8 *)Method_Unity_AppUI_UI_PickerItem_OnClick__,0);
  }
  uVar10 = FUN_05d83634(uVar10,in_stack_00000238);
  if ((uVar10 & 1) != 0) {
    FUN_05d6d448(in_stack_00000238,0);
    FUN_05d6d540(in_stack_00000238,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d6d5d0(in_stack_00000238,0);
    FUN_05d86e60();
  }
  if (*(char *)(unaff_x19 + 599) != '\0') {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_060be514(lVar8,*(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateGesture__
                 ,0);
  }
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
  cVar3 = *(char *)(in_stack_00000238 + 399);
  if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cb163c(uVar14,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,cVar3 != '\0',
               0);
  puVar2 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
  if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__ + 0xe4
              ) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar8 = FUN_05d5a440(in_stack_00000238,0);
  if (lVar8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = thunk_FUN_05d43a98(lVar8,*(undefined1 *)(in_stack_00000238 + 0x1e0),0);
    uVar5 = uVar5 & 1;
  }
  lVar11 = *(long *)puVar2;
  lVar15 = *(long *)(unaff_x19 + 0xf8);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar11 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_067c97a8;
  if (lVar15 == **(long **)(lVar11 + 0xb8)) {
    iVar7 = (uint)*(byte *)(in_stack_00000238 + 0x18c) << 1;
  }
  else {
    iVar7 = 2;
  }
  if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0610d14c(&stack0x00000190,2,0);
  uVar10 = uStack0000000000000190;
  if (*(long *)(in_stack_00000238 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar12 = FUN_05c35d3c(*(long *)(in_stack_00000238 + 0x1a0),0);
  if ((uVar12 & 1) != 0) {
    lVar11 = *(long *)(in_stack_00000238 + 0x1a0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    unaff_x21 = *(undefined1 **)(lVar11 + 0x48);
    uVar10 = *(ulong *)(lVar11 + 0x40);
    in_stack_000001a8 = *(undefined8 *)(lVar11 + 0x58);
    in_stack_000001a0 = *(undefined8 *)(lVar11 + 0x50);
    in_stack_000001b0 = *(undefined8 *)(lVar11 + 0x60);
  }
  if (*(char *)(unaff_x19 + 0x25b) == '\0') {
    if (*(char *)(in_stack_00000238 + 0x1e0) == '\0') {
      lVar11 = *(long *)(unaff_x19 + 0xf8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar16 = *(undefined8 *)(lVar11 + 0x30);
      uStack0000000000000190 = *(ulong *)(lVar11 + 0x28);
      uVar20 = *(undefined8 *)(lVar11 + 0x40);
      uVar19 = *(undefined8 *)(lVar11 + 0x38);
      uVar14 = *(undefined8 *)(lVar11 + 0x48);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      in_stack_00000090 = uStack0000000000000190;
      in_stack_00000060 = uVar10;
      in_stack_00000068 = unaff_x21;
      in_stack_00000070 = in_stack_000001a0;
      in_stack_00000078 = in_stack_000001a8;
      in_stack_00000080 = in_stack_000001b0;
      in_stack_00000098 = uVar16;
      in_stack_000000a0 = uVar19;
      in_stack_000000a8 = uVar20;
      in_stack_000000b0 = uVar14;
      uVar12 = FUN_0610d5f4(&stack0x00000090,&stack0x00000060,0);
      if ((uVar12 & 1) == 0) {
        cVar3 = *(char *)(unaff_x19 + 0x255);
      }
      else {
        cVar3 = '\x01';
      }
    }
    else {
      cVar3 = '\x01';
    }
    plVar9 = (long *)PTR_DAT_067c8f20;
    cVar3 = cVar3 != '\0';
    *(char *)(unaff_x19 + 0x25a) = cVar3;
    if (*(char *)(unaff_x19 + 0x25b) == '\0') {
      uVar14 = FUN_05d83678();
      puVar2 = 
      Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
      ;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar16 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab544(in_stack_00000260,in_stack_00000240,uVar14,iVar7,0,uVar16,0,0);
      uVar14 = FUN_05d83678();
      lVar8 = *(long *)(unaff_x19 + 0xf8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar16 = *(undefined8 *)(unaff_x19 + 0x270);
      if (*(long *)(lVar8 + 0x18) == 0) {
        bVar4 = false;
      }
      else {
        iVar7 = FUN_060cbf28(*(long *)(lVar8 + 0x18),0);
        bVar4 = iVar7 == 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab544(in_stack_00000260,uVar14,lVar8,2,0,uVar16,bVar4,0);
      goto LAB_05d82e48;
    }
  }
  else {
    cVar3 = *(char *)(unaff_x19 + 0x25a);
    plVar9 = (long *)PTR_DAT_067c8f20;
  }
  if (cVar3 == '\0') {
    if (*(char *)(unaff_x19 + 0x255) == '\0') {
      plVar9 = *(long **)(unaff_x20 + 0x1d8);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      (**(code **)(*plVar9 + 0x298))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2a0));
      plVar9 = *(long **)(unaff_x20 + 0x1d8);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      in_stack_00000248 =
           (**(code **)(*plVar9 + 0x1c8))(plVar9,in_stack_00000260,*(undefined8 *)(*plVar9 + 0x1d0))
      ;
    }
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(in_stack_00000260,in_stack_00000240,in_stack_00000248,iVar7,0,uVar14,0,0);
    if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(*(long *)(unaff_x20 + 0x1d8) + 0x118) = in_stack_00000248;
    FUN_05d83790();
  }
  else if (uVar5 == 0) {
    uVar14 = *(undefined8 *)(in_stack_00000238 + 0xf0);
    if (*(int *)(*plVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar12 = FUN_060f078c(uVar14,0,0);
    if ((uVar12 & 1) != 0) {
      uStack0000000000000190 = 0;
      FUN_0610cedc(&stack0x00000190,*(undefined8 *)(in_stack_00000238 + 0xf0),0);
      unaff_x21 = (undefined1 *)0x0;
      in_stack_000001a8 = 0;
      in_stack_000001a0 = 0;
      in_stack_000001b0 = 0;
      uVar10 = uStack0000000000000190;
    }
    in_stack_00000030 = uVar10;
    in_stack_00000038 = unaff_x21;
    in_stack_00000040 = in_stack_000001a0;
    in_stack_00000048 = in_stack_000001a8;
    in_stack_00000050 = in_stack_000001b0;
    FUN_05c9caa8(&stack0x00000030,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar16 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    uVar14 = **(undefined8 **)
               (*(long *)Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__ + 0xb8);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dac118(in_stack_00000260,in_stack_00000238,in_stack_00000240,uVar14,iVar7,0,uVar16,0);
    if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(*(long *)(unaff_x20 + 0x1d8) + 0x118) = uVar14;
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar13 = (undefined8 *)FUN_05d43a80(lVar8,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar16 = *puVar13;
    uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)
                          Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                        );
    }
    FUN_05cab544(in_stack_00000260,in_stack_00000240,uVar16,0,0,uVar14,0,0);
    lVar11 = *(long *)(unaff_x20 + 0x1d8);
    puVar13 = (undefined8 *)FUN_05d43a80(lVar8,0);
    uVar14 = *puVar13;
    puVar13 = (undefined8 *)FUN_05d43a88(lVar8,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d61b54(lVar11,uVar14,*puVar13,0);
  }
LAB_05d82e48:
  lVar8 = in_stack_00000100;
  FUN_05c5cb50(in_stack_00000108,0);
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c0(lVar8);
}


