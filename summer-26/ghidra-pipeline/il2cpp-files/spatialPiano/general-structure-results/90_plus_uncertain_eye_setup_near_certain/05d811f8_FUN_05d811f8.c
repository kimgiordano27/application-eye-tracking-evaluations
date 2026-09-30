/*
FUNCTION_NAME: FUN_05d811f8
ENTRY_POINT: 05d811f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 136
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_18;ray_or_cast_sink_hits_10;ui_or_gameplay_sink_hits_13;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_05d811f8(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  uint local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_06bc3a5b & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
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
    DAT_06bc3a5b = 1;
  }
  local_80 = 0;
  local_b0 = 0;
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  if (*param_3 == 0) goto LAB_05d81bc4;
  lVar15 = FUN_05d4c208(*param_3,*(undefined8 *)
                                  Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
  if ((((*(long *)(param_1 + 0x1b0) == 0) ||
       (lVar22 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x80), lVar22 == 0)) ||
      (thunk_FUN_060bf9c4(lVar22,0,0), lVar15 == 0)) || (*(long *)(lVar15 + 0x1d8) == 0))
  goto LAB_05d81bc4;
  uVar16 = FUN_05d5add8(*(long *)(lVar15 + 0x1d8),0);
  FUN_05d95b90(param_2,uVar16,0);
  uVar16 = FUN_05ddf8c0(param_3 + 1,0);
  FUN_05d86d14(param_1,uVar16,lVar22);
  uVar16 = FUN_05ddf8c0(param_3 + 1,0);
  FUN_05d86dc4(param_1,uVar16,lVar22);
  uVar17 = FUN_05de0740(param_3 + 1,0);
  if (((uVar17 & 1) != 0) && (*(char *)(param_1 + 0x256) != '\0')) {
    FUN_060be514(lVar22,*(undefined8 *)Method_Unity_AppUI_UI_PickerItem_OnClick__,0);
  }
  puVar7 = PTR_DAT_067c9e50;
  uVar16 = FUN_05ddf8c0(param_3 + 1,0);
  uVar11 = FUN_05d83634(uVar16,uVar16);
  if ((uVar11 & 1) == 0) {
    local_160 = 0;
  }
  else {
    local_160 = *(byte *)(lVar15 + 0x1ac) ^ 1 | (uint)*(byte *)(param_1 + 0x256) << 1;
    auVar26 = FUN_05d6d448(lVar15,0);
    uVar12 = FUN_05d6d540(lVar15,0);
    uVar13 = FUN_05d6d5d0(lVar15,0);
    FUN_05d86e60(param_1,auVar26._0_8_,auVar26._8_8_,uVar12,lVar22,local_160,uVar13 & 1);
  }
  puVar9 = Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__;
  puVar8 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
  cVar3 = *(char *)(lVar15 + 399);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cb163c(lVar22,*(undefined8 *)puVar9,cVar3 != '\0',0);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar18 = FUN_05d5a440(lVar15,0);
  if (lVar18 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = thunk_FUN_05d43a98(lVar18,*(undefined1 *)(lVar15 + 0x1e0),0);
    uVar13 = uVar13 & 1;
  }
  if (*(char *)(param_1 + 0x25b) == '\0') {
    uVar16 = *(undefined8 *)(param_1 + 0xf0);
  }
  else {
    plVar19 = *(long **)(lVar15 + 0x1d8);
    if (plVar19 == (long *)0x0) goto LAB_05d81bc4;
    uVar16 = (**(code **)(*plVar19 + 0x1d8))(plVar19,param_2,*(undefined8 *)(*plVar19 + 0x1e0));
    *(undefined8 *)(param_1 + 0xf0) = uVar16;
  }
  bVar4 = *(byte *)(lVar15 + 0x18c);
  if (*(int *)(lVar15 + 0x170) == 1) {
    bVar10 = *(int *)(lVar15 + 0x174) == 2;
  }
  else {
    bVar10 = false;
  }
  iVar5 = (uint)bVar4 << 1;
  iVar2 = *(int *)(lVar15 + 0x1cc);
  uVar17 = FUN_05d6d958(lVar15,0);
  plVar19 = (long *)
            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if (((uVar17 & 1) == 0) || (*(float *)(lVar15 + 0x224) <= 0.0)) {
    bVar6 = false;
  }
  else {
    bVar6 = (bool)(bVar10 ^ 1);
  }
  if (*(int *)(lVar15 + 0x170) == 0) {
    if (iVar2 == 1) {
      FUN_060be514(lVar22,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnClicked__,0);
    }
    goto joined_r0x05d81bbc;
  }
  local_b0 = *(undefined4 *)(lVar15 + 0x128);
  local_d0 = *(undefined8 *)(lVar15 + 0x108);
  uStack_b8 = *(undefined8 *)(lVar15 + 0x120);
  local_c0 = *(undefined8 *)(lVar15 + 0x118);
  local_e0 = *(undefined8 *)(lVar15 + 0xf8);
  cVar3 = *(char *)(lVar15 + 399);
  bVar1 = bVar10;
  if (iVar2 == 1) {
    bVar1 = true;
  }
  uStack_d8 = CONCAT44((int)((ulong)*(undefined8 *)(lVar15 + 0x100) >> 0x20),1);
  uStack_c8 = *(ulong *)(lVar15 + 0x110) & 0xffffffff;
  if ((uVar11 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar12 = FUN_05ddddc4(0);
    FUN_060d69f4(&local_e0,uVar12,0);
  }
  if ((*(long *)(param_1 + 0x1b0) == 0) ||
     (lVar20 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x68), lVar20 == 0)) goto LAB_05d81bc4;
  thunk_FUN_060bf9c4(lVar20,0,0);
  if (bVar1) {
    if ((uVar11 & 1) != 0) {
      auVar26 = FUN_05d6d448(lVar15,0);
      uVar12 = FUN_05d6d540(lVar15,0);
      if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05d81bc4;
      uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x68);
      uVar14 = FUN_05d6d5d0(lVar15,0);
      FUN_05d86e60(param_1,auVar26._0_8_,auVar26._8_8_,uVar12,uVar16,local_160,uVar14 & 1);
    }
    puVar7 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
    ;
    if (iVar2 == 1) {
      if ((*(long *)(param_1 + 0x1b0) == 0) ||
         (lVar20 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x68), lVar20 == 0)) goto LAB_05d81bc4;
      FUN_060be514(lVar20,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnClicked__,0);
    }
    if (bVar10) {
      if ((*(long *)(param_1 + 0x1b0) == 0) ||
         (lVar20 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x68), lVar20 == 0)) goto LAB_05d81bc4;
      puVar21 = (undefined8 *)Method_Unity_AppUI_UI_Picker_<OnClicked>b__74_0__;
      if ((local_160 & 2) != 0) {
        puVar21 = (undefined8 *)Method_Unity_AppUI_UI_PickerItem_OnKeyDown__;
      }
      FUN_060be514(lVar20,*puVar21,0);
    }
    if (cVar3 != '\0') {
      if ((*(long *)(param_1 + 0x1b0) == 0) ||
         (lVar20 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x68), lVar20 == 0)) goto LAB_05d81bc4;
      FUN_060be514(lVar20,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,0);
    }
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,(undefined8 *)(param_1 + 0x260),&local_e0,0,1,1,
                 *(undefined8 *)Method_Unity_AppUI_Core_PinchGestureRecognizer_Recognize__,0);
    if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05d81bc4;
    uVar23 = *(undefined8 *)(param_1 + 0xf0);
    uVar24 = *(undefined8 *)(param_1 + 0x260);
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x68);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(param_2,uVar23,uVar24,(ulong)bVar4 << 1,0,uVar16,0,0);
    uVar16 = *(undefined8 *)(param_1 + 0x260);
  }
  plVar19 = (long *)
            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if (*(int *)(lVar15 + 0x170) != 2) {
    if (*(int *)(lVar15 + 0x170) == 1) {
      if (*(int *)(lVar15 + 0x174) != 1) {
        if (*(int *)(lVar15 + 0x174) == 2) {
          if ((*(long *)(param_1 + 0x1b0) == 0) ||
             (lVar20 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x70), lVar20 == 0))
          goto LAB_05d81bc4;
          thunk_FUN_060bf9c4(lVar20,0,0);
          local_110 = *(undefined8 *)(lVar15 + 0x108);
          local_f0 = *(undefined4 *)(lVar15 + 0x128);
          uStack_f8 = *(undefined8 *)(lVar15 + 0x120);
          local_100 = *(undefined8 *)(lVar15 + 0x118);
          local_120 = *(undefined8 *)(lVar15 + 0x160);
          uStack_118 = CONCAT44((int)((ulong)*(undefined8 *)(lVar15 + 0x100) >> 0x20),1);
          uStack_108 = *(ulong *)(lVar15 + 0x110) & 0xffffffff;
          if (*(int *)(*plVar19 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05daf224(0,(undefined8 *)(param_1 + 0x268),&local_120,0,1,1,
                       *(undefined8 *)Method_Unity_AppUI_UI_Picker_OnPointerFocusIn__,0);
          FUN_05cb26cc((float)*(int *)(lVar15 + 0xf8),(float)*(int *)(lVar15 + 0xfc),
                       (float)*(int *)(lVar15 + 0xf8),(float)*(int *)(lVar15 + 0xfc),
                       (float)*(int *)(lVar15 + 0x160),(float)*(int *)(lVar15 + 0x164),param_2,0);
          if (cVar3 != '\0') {
            if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05d81bc4;
            uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x70);
            if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_05cb163c(uVar23,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,1,0)
            ;
          }
          if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05d81bc4;
          uVar24 = *(undefined8 *)(param_1 + 0x268);
          uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x70);
          if (*(int *)(*(long *)
                        Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                      + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05cab544(param_2,uVar16,uVar24,iVar5,0,uVar23,0,0);
          if (0.0 < *(float *)(lVar15 + 0x17c)) {
            fVar25 = DAT_011b0514;
            if (*(char *)(lVar15 + 0x178) != '\0') {
              fVar25 = *(float *)(lVar15 + 0x17c);
            }
            puVar21 = (undefined8 *)Method_Unity_AppUI_UI_Picker_OnItemClicked__;
            if ((uVar11 & 1) == 0) {
              puVar21 = (undefined8 *)Method_UnityEngine_PhysicsSceneExtensions_GetPhysicsScene__;
            }
            FUN_060be514(lVar22,*puVar21,0);
            FUN_05cb2908(fVar25,param_2,0);
          }
          uVar16 = *(undefined8 *)(param_1 + 0x268);
          FUN_05d95b90(param_2,uVar16,0);
          plVar19 = (long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
          ;
        }
        goto joined_r0x05d81bbc;
      }
      if (!bVar6) {
        FUN_060be514(lVar22,*(undefined8 *)
                             Method_UnityEngine_PhysicsSceneExtensions2D_GetPhysicsScene2D__,0);
        goto LAB_05d81a54;
      }
    }
    else {
joined_r0x05d81bbc:
      if (!bVar6) goto LAB_05d81a54;
    }
    FUN_060be514(lVar22,*(undefined8 *)Method_UnityEngine_PhysicsSceneExtensions_GetPhysicsScene__,0
                );
    FUN_05cb2908(*(undefined4 *)(lVar15 + 0x224),param_2,0);
  }
LAB_05d81a54:
  if (*(int *)(*plVar19 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05dae168(&local_a0,param_3,0);
  if (uVar13 == 0) {
    uStack_148 = uStack_98;
    local_150 = local_a0;
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    local_130 = local_80;
    FUN_05c9caa8(&local_150,0);
    uVar23 = **(undefined8 **)
               (*(long *)Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__ + 0xb8);
    if (*(int *)(*plVar19 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dac118(param_2,lVar15,uVar16,uVar23,iVar5,0,lVar22,0,0);
    return;
  }
  if (lVar18 != 0) {
    puVar21 = (undefined8 *)FUN_05d43a80(lVar18,0);
    uVar23 = *puVar21;
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(param_2,uVar16,uVar23,0,0,lVar22,0,0);
    lVar15 = *(long *)(lVar15 + 0x1d8);
    puVar21 = (undefined8 *)FUN_05d43a80(lVar18,0);
    uVar16 = *puVar21;
    puVar21 = (undefined8 *)FUN_05d43a88(lVar18,0);
    if (lVar15 != 0) {
      FUN_05d61b54(lVar15,uVar16,*puVar21,0);
      return;
    }
  }
LAB_05d81bc4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


