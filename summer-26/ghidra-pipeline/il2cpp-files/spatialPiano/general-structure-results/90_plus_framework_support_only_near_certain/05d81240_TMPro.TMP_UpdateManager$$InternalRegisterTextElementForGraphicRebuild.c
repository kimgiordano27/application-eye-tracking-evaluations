/*
FUNCTION_NAME: TMPro.TMP_UpdateManager$$InternalRegisterTextElementForGraphicRebuild
ENTRY_POINT: 05d81240
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 116
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_18;ray_or_cast_sink_hits_10;ui_or_gameplay_sink_hits_13;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void TMPro_TMP_UpdateManager__InternalRegisterTextElementForGraphicRebuild(long param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long unaff_x19;
  long *plVar18;
  long *unaff_x20;
  long lVar19;
  long unaff_x23;
  undefined8 unaff_x26;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
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
  int iStack0000000000000118;
  uint uStack000000000000011c;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x668));
  FUN_02f08768(PTR_DAT_067c9e50);
  FUN_02f08768(Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__);
  FUN_02f08768(
              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
              );
  FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__);
  FUN_02f08768(PTR_DAT_067cb280);
  FUN_02f08768(Method_UnityEngine_PhysicsSceneExtensions_GetPhysicsScene__);
  FUN_02f08768(Method_UnityEngine_PhysicsSceneExtensions2D_GetPhysicsScene2D__);
  FUN_02f08768(Method_Unity_AppUI_UI_Picker_<OnClicked>b__74_0__);
  FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnClicked__);
  FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnItemClicked__);
  FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__);
  FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnPointerFocusIn__);
  FUN_02f08768(Method_Unity_AppUI_UI_PickerItem_OnClick__);
  FUN_02f08768(Method_Unity_AppUI_UI_PickerItem_OnKeyDown__);
  FUN_02f08768(Method_Unity_AppUI_Core_PinchGestureRecognizer_Recognize__);
  *(undefined1 *)(unaff_x19 + 0xa5b) = 1;
  in_stack_00000100 = 0;
  in_stack_000000d0 = 0;
  in_stack_00000090 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if (*unaff_x20 == 0) goto LAB_05d81bc4;
  lVar12 = FUN_05d4c208(*unaff_x20,
                        *(undefined8 *)Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
  if ((((*(long *)(unaff_x23 + 0x1b0) == 0) ||
       (lVar19 = *(long *)(*(long *)(unaff_x23 + 0x1b0) + 0x80), lVar19 == 0)) ||
      (thunk_FUN_060bf9c4(lVar19,0,0), lVar12 == 0)) || (*(long *)(lVar12 + 0x1d8) == 0))
  goto LAB_05d81bc4;
  FUN_05d5add8(*(long *)(lVar12 + 0x1d8),0);
  FUN_05d95b90();
  FUN_05ddf8c0(unaff_x20 + 1,0);
  FUN_05d86d14();
  FUN_05ddf8c0(unaff_x20 + 1,0);
  FUN_05d86dc4();
  uVar13 = FUN_05de0740(unaff_x20 + 1,0);
  if (((uVar13 & 1) != 0) && (*(char *)(unaff_x23 + 0x256) != '\0')) {
    FUN_060be514(lVar19,*(undefined8 *)Method_Unity_AppUI_UI_PickerItem_OnClick__,0);
  }
  puVar6 = PTR_DAT_067c9e50;
  uVar14 = FUN_05ddf8c0(unaff_x20 + 1,0);
  uStack000000000000011c = FUN_05d83634(uVar14,uVar14);
  if ((uStack000000000000011c & 1) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)(lVar12 + 0x1ac) | *(char *)(unaff_x23 + 0x256) << 1;
    FUN_05d6d448(lVar12,0);
    FUN_05d6d540(lVar12,0);
    FUN_05d6d5d0(lVar12,0);
    FUN_05d86e60();
  }
  puVar8 = Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__;
  puVar7 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
  cVar3 = *(char *)(lVar12 + 399);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cb163c(lVar19,*(undefined8 *)puVar8,cVar3 != '\0',0);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar15 = FUN_05d5a440(lVar12,0);
  if (lVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = thunk_FUN_05d43a98(lVar15,*(undefined1 *)(lVar12 + 0x1e0),0);
    uVar10 = uVar10 & 1;
  }
  if (*(char *)(unaff_x23 + 0x25b) == '\0') {
    uVar14 = *(undefined8 *)(unaff_x23 + 0xf0);
  }
  else {
    if (*(long **)(lVar12 + 0x1d8) == (long *)0x0) goto LAB_05d81bc4;
    uVar14 = (**(code **)(**(long **)(lVar12 + 0x1d8) + 0x1d8))();
    *(undefined8 *)(unaff_x23 + 0xf0) = uVar14;
  }
  if (*(int *)(lVar12 + 0x170) == 1) {
    bVar9 = *(int *)(lVar12 + 0x174) == 2;
  }
  else {
    bVar9 = false;
  }
  iStack0000000000000118 = (uint)*(byte *)(lVar12 + 0x18c) << 1;
  iVar2 = *(int *)(lVar12 + 0x1cc);
  uVar13 = FUN_05d6d958(lVar12,0);
  plVar18 = (long *)
            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if (((uVar13 & 1) == 0) || (*(float *)(lVar12 + 0x224) <= 0.0)) {
    bVar5 = false;
  }
  else {
    bVar5 = (bool)(bVar9 ^ 1);
  }
  if (*(int *)(lVar12 + 0x170) == 0) {
    if (iVar2 == 1) {
      FUN_060be514(lVar19,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnClicked__,0);
    }
    goto joined_r0x05d81bbc;
  }
  in_stack_000000d0 = *(undefined4 *)(lVar12 + 0x128);
  in_stack_000000b0 = *(undefined8 *)(lVar12 + 0x108);
  in_stack_000000c8 = *(undefined8 *)(lVar12 + 0x120);
  in_stack_000000c0 = *(undefined8 *)(lVar12 + 0x118);
  in_stack_000000a0 = *(undefined8 *)(lVar12 + 0xf8);
  cVar3 = *(char *)(lVar12 + 399);
  bVar1 = bVar9;
  if (iVar2 == 1) {
    bVar1 = true;
  }
  in_stack_000000a8 = CONCAT44((int)((ulong)*(undefined8 *)(lVar12 + 0x100) >> 0x20),1);
  in_stack_000000b8 = *(ulong *)(lVar12 + 0x110) & 0xffffffff;
  if ((uStack000000000000011c & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_05ddddc4(0);
    FUN_060d69f4(&stack0x000000a0,uVar11,0);
  }
  if ((*(long *)(unaff_x23 + 0x1b0) == 0) ||
     (lVar16 = *(long *)(*(long *)(unaff_x23 + 0x1b0) + 0x68), lVar16 == 0)) goto LAB_05d81bc4;
  thunk_FUN_060bf9c4(lVar16,0,0);
  if (bVar1) {
    if ((uStack000000000000011c & 1) != 0) {
      FUN_05d6d448(lVar12,0);
      FUN_05d6d540(lVar12,0);
      if (*(long *)(unaff_x23 + 0x1b0) == 0) goto LAB_05d81bc4;
      FUN_05d6d5d0(lVar12,0);
      FUN_05d86e60();
    }
    puVar6 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
    ;
    if (iVar2 == 1) {
      if ((*(long *)(unaff_x23 + 0x1b0) == 0) ||
         (lVar16 = *(long *)(*(long *)(unaff_x23 + 0x1b0) + 0x68), lVar16 == 0)) goto LAB_05d81bc4;
      FUN_060be514(lVar16,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnClicked__,0);
    }
    if (bVar9) {
      if ((*(long *)(unaff_x23 + 0x1b0) == 0) ||
         (lVar16 = *(long *)(*(long *)(unaff_x23 + 0x1b0) + 0x68), lVar16 == 0)) goto LAB_05d81bc4;
      puVar17 = (undefined8 *)Method_Unity_AppUI_UI_Picker_<OnClicked>b__74_0__;
      if ((bVar4 & 2) != 0) {
        puVar17 = (undefined8 *)Method_Unity_AppUI_UI_PickerItem_OnKeyDown__;
      }
      FUN_060be514(lVar16,*puVar17,0);
    }
    if (cVar3 != '\0') {
      if ((*(long *)(unaff_x23 + 0x1b0) == 0) ||
         (lVar16 = *(long *)(*(long *)(unaff_x23 + 0x1b0) + 0x68), lVar16 == 0)) goto LAB_05d81bc4;
      FUN_060be514(lVar16,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,0);
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,(undefined8 *)(unaff_x23 + 0x260),&stack0x000000a0,0,1,1,
                 *(undefined8 *)Method_Unity_AppUI_Core_PinchGestureRecognizer_Recognize__,0);
    if (*(long *)(unaff_x23 + 0x1b0) == 0) goto LAB_05d81bc4;
    uVar20 = *(undefined8 *)(unaff_x23 + 0xf0);
    uVar21 = *(undefined8 *)(unaff_x23 + 0x260);
    uVar14 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1b0) + 0x68);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(unaff_x26,uVar20,uVar21,iStack0000000000000118,0,uVar14,0,0);
    uVar14 = *(undefined8 *)(unaff_x23 + 0x260);
  }
  plVar18 = (long *)
            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if (*(int *)(lVar12 + 0x170) != 2) {
    if (*(int *)(lVar12 + 0x170) == 1) {
      if (*(int *)(lVar12 + 0x174) != 1) {
        if (*(int *)(lVar12 + 0x174) == 2) {
          if ((*(long *)(unaff_x23 + 0x1b0) == 0) ||
             (lVar16 = *(long *)(*(long *)(unaff_x23 + 0x1b0) + 0x70), lVar16 == 0))
          goto LAB_05d81bc4;
          thunk_FUN_060bf9c4(lVar16,0,0);
          in_stack_00000070 = *(undefined8 *)(lVar12 + 0x108);
          in_stack_00000090 = *(undefined4 *)(lVar12 + 0x128);
          in_stack_00000088 = *(undefined8 *)(lVar12 + 0x120);
          in_stack_00000080 = *(undefined8 *)(lVar12 + 0x118);
          in_stack_00000060 = *(undefined8 *)(lVar12 + 0x160);
          in_stack_00000068 = CONCAT44((int)((ulong)*(undefined8 *)(lVar12 + 0x100) >> 0x20),1);
          in_stack_00000078 = *(ulong *)(lVar12 + 0x110) & 0xffffffff;
          if (*(int *)(*plVar18 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05daf224(0,(undefined8 *)(unaff_x23 + 0x268),&stack0x00000060,0,1,1,
                       *(undefined8 *)Method_Unity_AppUI_UI_Picker_OnPointerFocusIn__,0);
          FUN_05cb26cc((float)*(int *)(lVar12 + 0xf8),(float)*(int *)(lVar12 + 0xfc),
                       (float)*(int *)(lVar12 + 0xf8),(float)*(int *)(lVar12 + 0xfc),
                       (float)*(int *)(lVar12 + 0x160),(float)*(int *)(lVar12 + 0x164),unaff_x26,0);
          if (cVar3 != '\0') {
            if (*(long *)(unaff_x23 + 0x1b0) == 0) goto LAB_05d81bc4;
            uVar20 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1b0) + 0x70);
            if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_05cb163c(uVar20,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,1,0)
            ;
          }
          if (*(long *)(unaff_x23 + 0x1b0) == 0) goto LAB_05d81bc4;
          uVar21 = *(undefined8 *)(unaff_x23 + 0x268);
          uVar20 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1b0) + 0x70);
          if (*(int *)(*(long *)
                        Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                      + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05cab544(unaff_x26,uVar14,uVar21,iStack0000000000000118,0,uVar20,0,0);
          if (0.0 < *(float *)(lVar12 + 0x17c)) {
            fVar22 = DAT_011b0514;
            if (*(char *)(lVar12 + 0x178) != '\0') {
              fVar22 = *(float *)(lVar12 + 0x17c);
            }
            puVar17 = (undefined8 *)Method_Unity_AppUI_UI_Picker_OnItemClicked__;
            if ((uStack000000000000011c & 1) == 0) {
              puVar17 = (undefined8 *)Method_UnityEngine_PhysicsSceneExtensions_GetPhysicsScene__;
            }
            FUN_060be514(lVar19,*puVar17,0);
            FUN_05cb2908(fVar22,unaff_x26,0);
          }
          uVar14 = *(undefined8 *)(unaff_x23 + 0x268);
          FUN_05d95b90(unaff_x26,uVar14,0);
          plVar18 = (long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
          ;
        }
        goto joined_r0x05d81bbc;
      }
      if (!bVar5) {
        FUN_060be514(lVar19,*(undefined8 *)
                             Method_UnityEngine_PhysicsSceneExtensions2D_GetPhysicsScene2D__,0);
        goto LAB_05d81a54;
      }
    }
    else {
joined_r0x05d81bbc:
      if (!bVar5) goto LAB_05d81a54;
    }
    FUN_060be514(lVar19,*(undefined8 *)Method_UnityEngine_PhysicsSceneExtensions_GetPhysicsScene__,0
                );
    FUN_05cb2908(*(undefined4 *)(lVar12 + 0x224),unaff_x26,0);
  }
LAB_05d81a54:
  if (*(int *)(*plVar18 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05dae168(&stack0x000000e0);
  if (uVar10 == 0) {
    in_stack_00000038 = in_stack_000000e8;
    in_stack_00000030 = in_stack_000000e0;
    in_stack_00000048 = in_stack_000000f8;
    in_stack_00000040 = in_stack_000000f0;
    in_stack_00000050 = in_stack_00000100;
    FUN_05c9caa8(&stack0x00000030,0);
    uVar20 = **(undefined8 **)
               (*(long *)Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__ + 0xb8);
    if (*(int *)(*plVar18 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dac118(unaff_x26,lVar12,uVar14,uVar20,iStack0000000000000118,0,lVar19,0);
    return;
  }
  if (lVar15 != 0) {
    puVar17 = (undefined8 *)FUN_05d43a80(lVar15,0);
    uVar20 = *puVar17;
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(unaff_x26,uVar14,uVar20,0,0,lVar19,0,0);
    lVar12 = *(long *)(lVar12 + 0x1d8);
    puVar17 = (undefined8 *)FUN_05d43a80(lVar15,0);
    uVar14 = *puVar17;
    puVar17 = (undefined8 *)FUN_05d43a88(lVar15,0);
    if (lVar12 != 0) {
      FUN_05d61b54(lVar12,uVar14,*puVar17,0);
      return;
    }
  }
LAB_05d81bc4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


