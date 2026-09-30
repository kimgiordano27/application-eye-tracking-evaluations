/*
FUNCTION_NAME: TMPro.TMP_UpdateRegistry$$InternalUnRegisterCanvasElementForLayoutRebuild
ENTRY_POINT: 05d822e0
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

void TMPro_TMP_UpdateRegistry__InternalUnRegisterCanvasElementForLayoutRebuild(void)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *in_x9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  undefined8 uVar16;
  ulong unaff_x24;
  undefined8 uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
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
  undefined1 *in_stack_00000098;
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
  ulong in_stack_00000190;
  undefined1 *in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  ulong in_stack_000001d0;
  undefined1 *in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000260;
  
  if (*(int *)(*in_x9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05db9624();
  puVar2 = Method_System_Net_Sockets_NetworkStream_Close__;
  FUN_05d83790();
  FUN_05c5cb50(&stack0x00000234,0);
  if ((unaff_x24 & 1) != 0) {
    uVar8 = FUN_034dac00(0x17,*(undefined8 *)puVar2);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar8,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    FUN_05d83678();
    FUN_05d83f58();
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  if ((unaff_x22 & 1) == 0) {
    uVar8 = FUN_034dac00(0x18,*(undefined8 *)puVar2);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar8,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    if (in_stack_00000238 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d83678();
    FUN_05d841f0();
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  uVar8 = FUN_034dac00(0x19,*(undefined8 *)puVar2);
  FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar8,0);
  in_stack_00000100 = 0;
  in_stack_00000108 = &stack0x00000234;
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar9 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  thunk_FUN_060bf9c4(lVar9,0,0);
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
    uVar8 = FUN_034dac00(0x1a,*(undefined8 *)puVar2);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar8,0);
    in_stack_00000198 = &stack0x000001fc;
    in_stack_00000190 = 0;
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
    uVar8 = FUN_034dac00(0x1d,*(undefined8 *)puVar2);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar8,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    if (*(long *)(unaff_x19 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar10 = *(long **)(*(long *)(unaff_x19 + 0x1d0) + 0x48);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar5 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
    if (*(long *)(unaff_x19 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar10 = *(long **)(*(long *)(unaff_x19 + 0x1e0) + 0x78);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar7 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
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
    uVar11 = FUN_05d76104(*(long *)(unaff_x19 + 0x1d8),0);
    uVar20 = 0x3f800000;
    uVar19 = 0x3f800000;
    if ((uVar11 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar10 = *(long **)(*(long *)(unaff_x19 + 0x1d8) + 0x38);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar19 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
      if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar10 = *(long **)(*(long *)(unaff_x19 + 0x1d8) + 0x40);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar20 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
    }
    uVar8 = FUN_034dac00(0x1b,*(undefined8 *)puVar2);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar8,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    FUN_05c9ac9c(&stack0x00000190,in_stack_00000240,0);
    FUN_05d855b4(uVar19,uVar20);
    FUN_02a83444(&stack0x000000f0);
    uVar8 = FUN_034dac00(0x1c,*(undefined8 *)puVar2);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar8,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    FUN_05c9ac9c(&stack0x00000190,in_stack_00000240,0);
    in_stack_000000e0 = in_stack_000001b0;
    in_stack_000000c8 = in_stack_00000198;
    in_stack_000000c0 = in_stack_00000190;
    in_stack_000000d8 = in_stack_000001a8;
    in_stack_000000d0 = in_stack_000001a0;
    FUN_05d85c0c(uVar19,uVar20);
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
  uVar11 = FUN_05d6d114(in_stack_00000238,0);
  if (((uVar11 & 1) != 0) && (*(char *)(unaff_x19 + 0x256) != '\0')) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar11 = FUN_060be514(lVar9,*(undefined8 *)Method_Unity_AppUI_UI_PickerItem_OnClick__,0);
  }
  uVar11 = FUN_05d83634(uVar11,in_stack_00000238);
  if ((uVar11 & 1) != 0) {
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
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_060be514(lVar9,*(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateGesture__
                 ,0);
  }
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
  cVar3 = *(char *)(in_stack_00000238 + 399);
  if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cb163c(uVar8,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,cVar3 != '\0',0
              );
  puVar2 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
  if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__ + 0xe4
              ) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar9 = FUN_05d5a440(in_stack_00000238,0);
  if (lVar9 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = thunk_FUN_05d43a98(lVar9,*(undefined1 *)(in_stack_00000238 + 0x1e0),0);
    uVar5 = uVar5 & 1;
  }
  lVar12 = *(long *)puVar2;
  lVar18 = *(long *)(unaff_x19 + 0xf8);
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar12 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_067c97a8;
  if (lVar18 == **(long **)(lVar12 + 0xb8)) {
    iVar7 = (uint)*(byte *)(in_stack_00000238 + 0x18c) << 1;
  }
  else {
    iVar7 = 2;
  }
  if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0610d14c(&stack0x00000190,2,0);
  uVar15 = in_stack_000001b0;
  uVar17 = in_stack_000001a8;
  uVar8 = in_stack_000001a0;
  puVar21 = in_stack_00000198;
  uVar11 = in_stack_00000190;
  if (*(long *)(in_stack_00000238 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar13 = FUN_05c35d3c(*(long *)(in_stack_00000238 + 0x1a0),0);
  if ((uVar13 & 1) != 0) {
    lVar12 = *(long *)(in_stack_00000238 + 0x1a0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar21 = *(undefined1 **)(lVar12 + 0x48);
    uVar11 = *(ulong *)(lVar12 + 0x40);
    uVar17 = *(undefined8 *)(lVar12 + 0x58);
    uVar8 = *(undefined8 *)(lVar12 + 0x50);
    uVar15 = *(undefined8 *)(lVar12 + 0x60);
  }
  if (*(char *)(unaff_x19 + 0x25b) == '\0') {
    if (*(char *)(in_stack_00000238 + 0x1e0) == '\0') {
      lVar12 = *(long *)(unaff_x19 + 0xf8);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      in_stack_00000198 = *(undefined1 **)(lVar12 + 0x30);
      in_stack_00000190 = *(ulong *)(lVar12 + 0x28);
      in_stack_000001a8 = *(undefined8 *)(lVar12 + 0x40);
      in_stack_000001a0 = *(undefined8 *)(lVar12 + 0x38);
      in_stack_000001b0 = *(undefined8 *)(lVar12 + 0x48);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      in_stack_000000b0 = in_stack_000001b0;
      in_stack_00000098 = in_stack_00000198;
      in_stack_00000090 = in_stack_00000190;
      in_stack_000000a8 = in_stack_000001a8;
      in_stack_000000a0 = in_stack_000001a0;
      in_stack_00000060 = uVar11;
      in_stack_00000068 = puVar21;
      in_stack_00000070 = uVar8;
      in_stack_00000078 = uVar17;
      in_stack_00000080 = uVar15;
      uVar13 = FUN_0610d5f4(&stack0x00000090,&stack0x00000060,0);
      if ((uVar13 & 1) == 0) {
        cVar3 = *(char *)(unaff_x19 + 0x255);
      }
      else {
        cVar3 = '\x01';
      }
    }
    else {
      cVar3 = '\x01';
    }
    plVar10 = (long *)PTR_DAT_067c8f20;
    cVar3 = cVar3 != '\0';
    *(char *)(unaff_x19 + 0x25a) = cVar3;
    if (*(char *)(unaff_x19 + 0x25b) == '\0') {
      uVar8 = FUN_05d83678();
      puVar2 = 
      Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
      ;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar17 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab544(in_stack_00000260,in_stack_00000240,uVar8,iVar7,0,uVar17,0,0);
      uVar8 = FUN_05d83678();
      lVar9 = *(long *)(unaff_x19 + 0xf8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar17 = *(undefined8 *)(unaff_x19 + 0x270);
      if (*(long *)(lVar9 + 0x18) == 0) {
        bVar4 = false;
      }
      else {
        iVar7 = FUN_060cbf28(*(long *)(lVar9 + 0x18),0);
        bVar4 = iVar7 == 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab544(in_stack_00000260,uVar8,lVar9,2,0,uVar17,bVar4,0);
      goto LAB_05d82e48;
    }
  }
  else {
    cVar3 = *(char *)(unaff_x19 + 0x25a);
    plVar10 = (long *)PTR_DAT_067c8f20;
  }
  if (cVar3 == '\0') {
    if (*(char *)(unaff_x19 + 0x255) == '\0') {
      plVar10 = *(long **)(unaff_x20 + 0x1d8);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      (**(code **)(*plVar10 + 0x298))(plVar10,1,*(undefined8 *)(*plVar10 + 0x2a0));
      plVar10 = *(long **)(unaff_x20 + 0x1d8);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      in_stack_00000248 =
           (**(code **)(*plVar10 + 0x1c8))
                     (plVar10,in_stack_00000260,*(undefined8 *)(*plVar10 + 0x1d0));
    }
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(in_stack_00000260,in_stack_00000240,in_stack_00000248,iVar7,0,uVar8,0,0);
    if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(*(long *)(unaff_x20 + 0x1d8) + 0x118) = in_stack_00000248;
    FUN_05d83790();
  }
  else if (uVar5 == 0) {
    uVar16 = *(undefined8 *)(in_stack_00000238 + 0xf0);
    if (*(int *)(*plVar10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar13 = FUN_060f078c(uVar16,0,0);
    if ((uVar13 & 1) != 0) {
      in_stack_000001b0 = 0;
      in_stack_00000198 = (undefined1 *)0x0;
      in_stack_00000190 = 0;
      in_stack_000001a8 = 0;
      in_stack_000001a0 = 0;
      FUN_0610cedc(&stack0x00000190,*(undefined8 *)(in_stack_00000238 + 0xf0),0);
      uVar15 = in_stack_000001b0;
      uVar11 = in_stack_00000190;
      puVar21 = in_stack_00000198;
      uVar8 = in_stack_000001a0;
      uVar17 = in_stack_000001a8;
    }
    in_stack_00000030 = uVar11;
    in_stack_00000038 = puVar21;
    in_stack_00000040 = uVar8;
    in_stack_00000048 = uVar17;
    in_stack_00000050 = uVar15;
    in_stack_000001d0 = uVar11;
    in_stack_000001d8 = puVar21;
    in_stack_000001e0 = uVar8;
    in_stack_000001e8 = uVar17;
    FUN_05c9caa8(&stack0x00000030,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar17 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    uVar8 = **(undefined8 **)
              (*(long *)Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__ + 0xb8);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dac118(in_stack_00000260,in_stack_00000238,in_stack_00000240,uVar8,iVar7,0,uVar17,0);
    if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(*(long *)(unaff_x20 + 0x1d8) + 0x118) = uVar8;
  }
  else {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar14 = (undefined8 *)FUN_05d43a80(lVar9,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar17 = *puVar14;
    uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)
                          Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                        );
    }
    FUN_05cab544(in_stack_00000260,in_stack_00000240,uVar17,0,0,uVar8,0,0);
    lVar12 = *(long *)(unaff_x20 + 0x1d8);
    puVar14 = (undefined8 *)FUN_05d43a80(lVar9,0);
    uVar8 = *puVar14;
    puVar14 = (undefined8 *)FUN_05d43a88(lVar9,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d61b54(lVar12,uVar8,*puVar14,0);
  }
LAB_05d82e48:
  lVar9 = in_stack_00000100;
  FUN_05c5cb50(in_stack_00000108,0);
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c0(lVar9);
}


