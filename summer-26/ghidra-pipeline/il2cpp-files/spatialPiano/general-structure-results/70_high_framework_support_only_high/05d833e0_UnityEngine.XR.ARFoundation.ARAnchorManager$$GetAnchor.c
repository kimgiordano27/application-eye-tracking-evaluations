/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARAnchorManager$$GetAnchor
ENTRY_POINT: 05d833e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05d82718) */
/* WARNING: Removing unreachable block (ram,0x05d827ac) */

void UnityEngine_XR_ARFoundation_ARAnchorManager__GetAnchor(void)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  int unaff_w24;
  undefined8 uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  int in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined1 *in_stack_000000f8;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  ulong in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  ulong in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000260;
  
  if (unaff_w24 == 1) {
    puVar12 = (undefined8 *)__cxa_begin_catch();
    in_stack_000000f0 = *puVar12;
    __cxa_end_catch();
    puVar1 = Method_System_Net_Sockets_NetworkStream_Close__;
    FUN_02a83444(&stack0x000000f0);
    if (in_stack_00000028 != 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar6 = FUN_05d76104(*(long *)(unaff_x19 + 0x1d8),0);
      uVar18 = 0x3f800000;
      uVar17 = 0x3f800000;
      if ((uVar6 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar7 = *(long **)(*(long *)(unaff_x19 + 0x1d8) + 0x38);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar17 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
        if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar7 = *(long **)(*(long *)(unaff_x19 + 0x1d8) + 0x40);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar18 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
      }
      uVar8 = FUN_034dac00(0x1b,*(undefined8 *)puVar1);
      in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
      FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar8,0);
      in_stack_000000f8 = &stack0x000001fc;
      in_stack_000000f0 = 0;
      FUN_05c9ac9c(&stack0x00000190,in_stack_00000240,0);
      FUN_05d855b4(uVar17,uVar18);
      FUN_02a83444(&stack0x000000f0);
      uVar8 = FUN_034dac00(0x1c,*(undefined8 *)puVar1);
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
    uVar6 = FUN_05d6d114(in_stack_00000238,0);
    if (((uVar6 & 1) != 0) && (*(char *)(unaff_x19 + 0x256) != '\0')) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar6 = FUN_060be514(lVar9,*(undefined8 *)Method_Unity_AppUI_UI_PickerItem_OnClick__,0);
    }
    uVar6 = FUN_05d83634(uVar6,in_stack_00000238);
    if ((uVar6 & 1) != 0) {
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
    cVar2 = *(char *)(in_stack_00000238 + 399);
    if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cb163c(uVar8,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,cVar2 != '\0'
                 ,0);
    puVar1 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
    if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__ +
                0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar9 = FUN_05d5a440(in_stack_00000238,0);
    if (lVar9 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = thunk_FUN_05d43a98(lVar9,*(undefined1 *)(in_stack_00000238 + 0x1e0),0);
      uVar4 = uVar4 & 1;
    }
    lVar10 = *(long *)puVar1;
    lVar16 = *(long *)(unaff_x19 + 0xf8);
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar10 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_067c97a8;
    if (lVar16 == **(long **)(lVar10 + 0xb8)) {
      iVar5 = (uint)*(byte *)(in_stack_00000238 + 0x18c) << 1;
    }
    else {
      iVar5 = 2;
    }
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0610d14c(&stack0x00000190,2,0);
    uVar13 = in_stack_000001b0;
    uVar19 = in_stack_000001a8;
    uVar15 = in_stack_000001a0;
    uVar8 = in_stack_00000198;
    uVar6 = in_stack_00000190;
    if (*(long *)(in_stack_00000238 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar11 = FUN_05c35d3c(*(long *)(in_stack_00000238 + 0x1a0),0);
    if ((uVar11 & 1) != 0) {
      lVar10 = *(long *)(in_stack_00000238 + 0x1a0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar8 = *(undefined8 *)(lVar10 + 0x48);
      uVar6 = *(ulong *)(lVar10 + 0x40);
      uVar19 = *(undefined8 *)(lVar10 + 0x58);
      uVar15 = *(undefined8 *)(lVar10 + 0x50);
      uVar13 = *(undefined8 *)(lVar10 + 0x60);
    }
    if (*(char *)(unaff_x19 + 0x25b) == '\0') {
      if (*(char *)(in_stack_00000238 + 0x1e0) == '\0') {
        lVar10 = *(long *)(unaff_x19 + 0xf8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        in_stack_00000198 = *(undefined8 *)(lVar10 + 0x30);
        in_stack_00000190 = *(ulong *)(lVar10 + 0x28);
        in_stack_000001a8 = *(undefined8 *)(lVar10 + 0x40);
        in_stack_000001a0 = *(undefined8 *)(lVar10 + 0x38);
        in_stack_000001b0 = *(undefined8 *)(lVar10 + 0x48);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        in_stack_000000b0 = in_stack_000001b0;
        in_stack_00000098 = in_stack_00000198;
        in_stack_00000090 = in_stack_00000190;
        in_stack_000000a8 = in_stack_000001a8;
        in_stack_000000a0 = in_stack_000001a0;
        in_stack_00000060 = uVar6;
        in_stack_00000068 = uVar8;
        in_stack_00000070 = uVar15;
        in_stack_00000078 = uVar19;
        in_stack_00000080 = uVar13;
        uVar11 = FUN_0610d5f4(&stack0x00000090,&stack0x00000060,0);
        if ((uVar11 & 1) == 0) {
          cVar2 = *(char *)(unaff_x19 + 0x255);
        }
        else {
          cVar2 = '\x01';
        }
      }
      else {
        cVar2 = '\x01';
      }
      plVar7 = (long *)PTR_DAT_067c8f20;
      cVar2 = cVar2 != '\0';
      *(char *)(unaff_x19 + 0x25a) = cVar2;
      if (*(char *)(unaff_x19 + 0x25b) == '\0') {
        uVar8 = FUN_05d83678();
        puVar1 = 
        Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
        ;
        if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05cab544(in_stack_00000260,in_stack_00000240,uVar8,iVar5,0,uVar15,0,0);
        uVar8 = FUN_05d83678();
        lVar9 = *(long *)(unaff_x19 + 0xf8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar15 = *(undefined8 *)(unaff_x19 + 0x270);
        if (*(long *)(lVar9 + 0x18) == 0) {
          bVar3 = false;
        }
        else {
          iVar5 = FUN_060cbf28(*(long *)(lVar9 + 0x18),0);
          bVar3 = iVar5 == 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05cab544(in_stack_00000260,uVar8,lVar9,2,0,uVar15,bVar3,0);
        lVar9 = in_stack_00000100;
        goto LAB_05d82e4c;
      }
    }
    else {
      cVar2 = *(char *)(unaff_x19 + 0x25a);
      plVar7 = (long *)PTR_DAT_067c8f20;
    }
    if (cVar2 == '\0') {
      if (*(char *)(unaff_x19 + 0x255) == '\0') {
        plVar7 = *(long **)(unaff_x20 + 0x1d8);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        (**(code **)(*plVar7 + 0x298))(plVar7,1,*(undefined8 *)(*plVar7 + 0x2a0));
        plVar7 = *(long **)(unaff_x20 + 0x1d8);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        in_stack_00000248 =
             (**(code **)(*plVar7 + 0x1c8))
                       (plVar7,in_stack_00000260,*(undefined8 *)(*plVar7 + 0x1d0));
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
      FUN_05cab544(in_stack_00000260,in_stack_00000240,in_stack_00000248,iVar5,0,uVar8,0,0);
      if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(undefined8 *)(*(long *)(unaff_x20 + 0x1d8) + 0x118) = in_stack_00000248;
      FUN_05d83790();
      lVar9 = in_stack_00000100;
    }
    else if (uVar4 == 0) {
      uVar14 = *(undefined8 *)(in_stack_00000238 + 0xf0);
      if (*(int *)(*plVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar11 = FUN_060f078c(uVar14,0,0);
      if ((uVar11 & 1) != 0) {
        in_stack_000001b0 = 0;
        in_stack_00000198 = 0;
        in_stack_00000190 = 0;
        in_stack_000001a8 = 0;
        in_stack_000001a0 = 0;
        FUN_0610cedc(&stack0x00000190,*(undefined8 *)(in_stack_00000238 + 0xf0),0);
        uVar13 = in_stack_000001b0;
        uVar6 = in_stack_00000190;
        uVar8 = in_stack_00000198;
        uVar15 = in_stack_000001a0;
        uVar19 = in_stack_000001a8;
      }
      in_stack_00000030 = uVar6;
      in_stack_00000038 = uVar8;
      in_stack_00000040 = uVar15;
      in_stack_00000048 = uVar19;
      in_stack_00000050 = uVar13;
      in_stack_000001d0 = uVar6;
      in_stack_000001d8 = uVar8;
      in_stack_000001e0 = uVar15;
      in_stack_000001e8 = uVar19;
      FUN_05c9caa8(&stack0x00000030,0);
      if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
      uVar8 = **(undefined8 **)
                (*(long *)Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__ + 0xb8);
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dac118(in_stack_00000260,in_stack_00000238,in_stack_00000240,uVar8,iVar5,0,uVar15,0);
      if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(undefined8 *)(*(long *)(unaff_x20 + 0x1d8) + 0x118) = uVar8;
      lVar9 = in_stack_00000100;
    }
    else {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      puVar12 = (undefined8 *)FUN_05d43a80(lVar9,0);
      if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar15 = *puVar12;
      uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)
                            Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                          );
      }
      FUN_05cab544(in_stack_00000260,in_stack_00000240,uVar15,0,0,uVar8,0,0);
      lVar10 = *(long *)(unaff_x20 + 0x1d8);
      puVar12 = (undefined8 *)FUN_05d43a80(lVar9,0);
      uVar8 = *puVar12;
      puVar12 = (undefined8 *)FUN_05d43a88(lVar9,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05d61b54(lVar10,uVar8,*puVar12,0);
      lVar9 = in_stack_00000100;
    }
  }
  else {
    FUN_02a83444(&stack0x000000f0);
    if (unaff_w24 != 1) {
      FUN_02a83444(&stack0x00000100);
                    /* WARNING: Subroutine does not return */
      FUN_02ff761c();
    }
    plVar7 = (long *)__cxa_begin_catch();
    lVar9 = *plVar7;
    in_stack_00000100 = lVar9;
    __cxa_end_catch();
  }
LAB_05d82e4c:
  FUN_05c5cb50(in_stack_00000108,0);
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c0(lVar9);
}


