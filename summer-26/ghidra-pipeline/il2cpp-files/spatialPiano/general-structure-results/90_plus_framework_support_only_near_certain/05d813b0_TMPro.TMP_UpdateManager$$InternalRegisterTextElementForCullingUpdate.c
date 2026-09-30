/*
FUNCTION_NAME: TMPro.TMP_UpdateManager$$InternalRegisterTextElementForCullingUpdate
ENTRY_POINT: 05d813b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void TMPro_TMP_UpdateManager__InternalRegisterTextElementForCullingUpdate(void)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 unaff_x26;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  int in_stack_00000118;
  uint uStack000000000000011c;
  
  FUN_05d86dc4();
  uVar11 = FUN_05de0740(unaff_x20 + 8,0);
  if (((uVar11 & 1) != 0) && (*(char *)(unaff_x23 + 0x256) != '\0')) {
    FUN_060be514();
  }
  puVar6 = PTR_DAT_067c9e50;
  uVar12 = FUN_05ddf8c0(unaff_x20 + 8,0);
  uStack000000000000011c = FUN_05d83634(uVar12,uVar12);
  if ((uStack000000000000011c & 1) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)(unaff_x21 + 0x1ac) | *(char *)(unaff_x23 + 0x256) << 1;
    FUN_05d6d448();
    FUN_05d6d540();
    FUN_05d6d5d0();
    FUN_05d86e60();
  }
  puVar7 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cb163c();
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar13 = FUN_05d5a440();
  if (lVar13 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = thunk_FUN_05d43a98(lVar13,*(undefined1 *)(unaff_x21 + 0x1e0),0);
    uVar9 = uVar9 & 1;
  }
  if (*(char *)(unaff_x23 + 0x25b) == '\0') {
    uVar12 = *(undefined8 *)(unaff_x23 + 0xf0);
  }
  else {
    if (*(long **)(unaff_x21 + 0x1d8) == (long *)0x0) goto LAB_05d81bc4;
    uVar12 = (**(code **)(**(long **)(unaff_x21 + 0x1d8) + 0x1d8))();
    *(undefined8 *)(unaff_x23 + 0xf0) = uVar12;
  }
  if (*(int *)(unaff_x21 + 0x170) == 1) {
    bVar8 = *(int *)(unaff_x21 + 0x174) == 2;
  }
  else {
    bVar8 = false;
  }
  in_stack_00000118 = (uint)*(byte *)(unaff_x21 + 0x18c) << 1;
  iVar2 = *(int *)(unaff_x21 + 0x1cc);
  uVar11 = FUN_05d6d958();
  plVar16 = (long *)
            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if (((uVar11 & 1) == 0) || (*(float *)(unaff_x21 + 0x224) <= 0.0)) {
    bVar5 = false;
  }
  else {
    bVar5 = (bool)(bVar8 ^ 1);
  }
  if (*(int *)(unaff_x21 + 0x170) == 0) {
    if (iVar2 == 1) {
      FUN_060be514();
    }
    goto joined_r0x05d81bbc;
  }
  in_stack_000000d0 = *(undefined4 *)(unaff_x21 + 0x128);
  in_stack_000000b0 = *(undefined8 *)(unaff_x21 + 0x108);
  in_stack_000000c8 = *(undefined8 *)(unaff_x21 + 0x120);
  in_stack_000000c0 = *(undefined8 *)(unaff_x21 + 0x118);
  in_stack_000000a0 = *(undefined8 *)(unaff_x21 + 0xf8);
  cVar3 = *(char *)(unaff_x21 + 399);
  bVar1 = bVar8;
  if (iVar2 == 1) {
    bVar1 = true;
  }
  in_stack_000000a8 = CONCAT44((int)((ulong)*(undefined8 *)(unaff_x21 + 0x100) >> 0x20),1);
  in_stack_000000b8 = *(ulong *)(unaff_x21 + 0x110) & 0xffffffff;
  if ((uStack000000000000011c & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_05ddddc4(0);
    FUN_060d69f4(&stack0x000000a0,uVar10,0);
  }
  if ((*(long *)(unaff_x23 + 0x1b0) == 0) ||
     (lVar14 = *(long *)(*(long *)(unaff_x23 + 0x1b0) + 0x68), lVar14 == 0)) goto LAB_05d81bc4;
  thunk_FUN_060bf9c4(lVar14,0,0);
  if (bVar1) {
    if ((uStack000000000000011c & 1) != 0) {
      FUN_05d6d448();
      FUN_05d6d540();
      if (*(long *)(unaff_x23 + 0x1b0) == 0) goto LAB_05d81bc4;
      FUN_05d6d5d0();
      FUN_05d86e60();
    }
    puVar6 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
    ;
    if (iVar2 == 1) {
      if ((*(long *)(unaff_x23 + 0x1b0) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x23 + 0x1b0) + 0x68), lVar14 == 0)) goto LAB_05d81bc4;
      FUN_060be514(lVar14,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnClicked__,0);
    }
    if (bVar8) {
      if ((*(long *)(unaff_x23 + 0x1b0) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x23 + 0x1b0) + 0x68), lVar14 == 0)) goto LAB_05d81bc4;
      puVar15 = (undefined8 *)Method_Unity_AppUI_UI_Picker_<OnClicked>b__74_0__;
      if ((bVar4 & 2) != 0) {
        puVar15 = (undefined8 *)Method_Unity_AppUI_UI_PickerItem_OnKeyDown__;
      }
      FUN_060be514(lVar14,*puVar15,0);
    }
    if (cVar3 != '\0') {
      if ((*(long *)(unaff_x23 + 0x1b0) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x23 + 0x1b0) + 0x68), lVar14 == 0)) goto LAB_05d81bc4;
      FUN_060be514(lVar14,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,0);
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,(undefined8 *)(unaff_x23 + 0x260),&stack0x000000a0,0,1,1,
                 *(undefined8 *)Method_Unity_AppUI_Core_PinchGestureRecognizer_Recognize__,0);
    if (*(long *)(unaff_x23 + 0x1b0) == 0) goto LAB_05d81bc4;
    uVar17 = *(undefined8 *)(unaff_x23 + 0xf0);
    uVar18 = *(undefined8 *)(unaff_x23 + 0x260);
    uVar12 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1b0) + 0x68);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(unaff_x26,uVar17,uVar18,in_stack_00000118,0,uVar12,0,0);
    uVar12 = *(undefined8 *)(unaff_x23 + 0x260);
  }
  plVar16 = (long *)
            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if (*(int *)(unaff_x21 + 0x170) != 2) {
    if (*(int *)(unaff_x21 + 0x170) == 1) {
      if (*(int *)(unaff_x21 + 0x174) != 1) {
        if (*(int *)(unaff_x21 + 0x174) == 2) {
          if ((*(long *)(unaff_x23 + 0x1b0) == 0) ||
             (lVar14 = *(long *)(*(long *)(unaff_x23 + 0x1b0) + 0x70), lVar14 == 0))
          goto LAB_05d81bc4;
          thunk_FUN_060bf9c4(lVar14,0,0);
          in_stack_00000070 = *(undefined8 *)(unaff_x21 + 0x108);
          in_stack_00000090 = *(undefined4 *)(unaff_x21 + 0x128);
          in_stack_00000088 = *(undefined8 *)(unaff_x21 + 0x120);
          in_stack_00000080 = *(undefined8 *)(unaff_x21 + 0x118);
          in_stack_00000060 = *(undefined8 *)(unaff_x21 + 0x160);
          in_stack_00000068 = CONCAT44((int)((ulong)*(undefined8 *)(unaff_x21 + 0x100) >> 0x20),1);
          in_stack_00000078 = *(ulong *)(unaff_x21 + 0x110) & 0xffffffff;
          if (*(int *)(*plVar16 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05daf224(0,(undefined8 *)(unaff_x23 + 0x268),&stack0x00000060,0,1,1,
                       *(undefined8 *)Method_Unity_AppUI_UI_Picker_OnPointerFocusIn__,0);
          FUN_05cb26cc((float)*(int *)(unaff_x21 + 0xf8),(float)*(int *)(unaff_x21 + 0xfc),
                       (float)*(int *)(unaff_x21 + 0xf8),(float)*(int *)(unaff_x21 + 0xfc),
                       (float)*(int *)(unaff_x21 + 0x160),(float)*(int *)(unaff_x21 + 0x164),
                       unaff_x26,0);
          if (cVar3 != '\0') {
            if (*(long *)(unaff_x23 + 0x1b0) == 0) goto LAB_05d81bc4;
            uVar17 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1b0) + 0x70);
            if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_05cb163c(uVar17,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,1,0)
            ;
          }
          if (*(long *)(unaff_x23 + 0x1b0) == 0) goto LAB_05d81bc4;
          uVar18 = *(undefined8 *)(unaff_x23 + 0x268);
          uVar17 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1b0) + 0x70);
          if (*(int *)(*(long *)
                        Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                      + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05cab544(unaff_x26,uVar12,uVar18,in_stack_00000118,0,uVar17,0,0);
          if (0.0 < *(float *)(unaff_x21 + 0x17c)) {
            fVar19 = DAT_011b0514;
            if (*(char *)(unaff_x21 + 0x178) != '\0') {
              fVar19 = *(float *)(unaff_x21 + 0x17c);
            }
            FUN_060be514();
            FUN_05cb2908(fVar19,unaff_x26,0);
          }
          uVar12 = *(undefined8 *)(unaff_x23 + 0x268);
          FUN_05d95b90(unaff_x26,uVar12,0);
          plVar16 = (long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
          ;
        }
        goto joined_r0x05d81bbc;
      }
      if (!bVar5) {
        FUN_060be514();
        goto LAB_05d81a54;
      }
    }
    else {
joined_r0x05d81bbc:
      if (!bVar5) goto LAB_05d81a54;
    }
    FUN_060be514();
    FUN_05cb2908(*(undefined4 *)(unaff_x21 + 0x224),unaff_x26,0);
  }
LAB_05d81a54:
  if (*(int *)(*plVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05dae168(&stack0x000000e0);
  if (uVar9 == 0) {
    in_stack_00000038 = in_stack_000000e8;
    in_stack_00000030 = in_stack_000000e0;
    in_stack_00000048 = in_stack_000000f8;
    in_stack_00000040 = in_stack_000000f0;
    in_stack_00000050 = in_stack_00000100;
    FUN_05c9caa8(&stack0x00000030,0);
    if (*(int *)(*plVar16 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dac118(unaff_x26);
    return;
  }
  if (lVar13 != 0) {
    puVar15 = (undefined8 *)FUN_05d43a80(lVar13,0);
    uVar17 = *puVar15;
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(unaff_x26,uVar12,uVar17,0,0);
    lVar14 = *(long *)(unaff_x21 + 0x1d8);
    puVar15 = (undefined8 *)FUN_05d43a80(lVar13,0);
    uVar12 = *puVar15;
    puVar15 = (undefined8 *)FUN_05d43a88(lVar13,0);
    if (lVar14 != 0) {
      FUN_05d61b54(lVar14,uVar12,*puVar15,0);
      return;
    }
  }
LAB_05d81bc4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


