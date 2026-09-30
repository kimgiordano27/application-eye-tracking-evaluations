/*
FUNCTION_NAME: FUN_05d6c4ac
ENTRY_POINT: 05d6c4ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 227
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_05d6c4ac(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar9;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  int iVar27;
  long *plVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  uint *puVar34;
  undefined1 auVar35 [16];
  ulong in_stack_fffffffffffffe60;
  uint local_14c;
  undefined4 local_138;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char local_dc [4];
  undefined1 local_d8 [16];
  undefined8 uStack_c8;
  int local_bc;
  long local_b8;
  undefined1 local_ac [4];
  char local_a8 [4];
  uint local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  plVar14 = param_1;
  if ((DAT_066db8b8 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_Manager_TweakUtils_Register<bool>__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
                );
    FUN_02b3c81c(Method_System_Reflection_Emit_TypeBuilder_get_Module__);
    FUN_02b3c81c(Method_System_TypedReference_Equals__);
    FUN_02b3c81c(Method_System_TypedReference_MakeTypedReference__);
    FUN_02b3c81c(Method_UIController_DisplayCombo__);
    FUN_02b3c81c(Method_System_Diagnostics_TraceListenerCollection_InitializeListener__);
    FUN_02b3c81c(PTR_DAT_06313778);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_System_Reflection_Emit_TypeBuilder_get_Namespace__);
    FUN_02b3c81c(Method_Unity_Properties_TypeConversion_Convert<double,_bool>__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_Universal_ScriptableRenderer_get_cameraColorTarget__);
    FUN_02b3c81c(Method_System_ComponentModel_TypeConverter_ConvertTo__);
    FUN_02b3c81c(Method_System_ComponentModel_TypeConverter_GetConvertToException__);
    FUN_02b3c81c(Method_UIController_ShowGameOverUI__);
    plVar14 = (long *)FUN_02b3c81c(Method_UIController_SpawnWorldText__);
    DAT_066db8b8 = 1;
  }
  local_a4 = 0;
  local_a8[0] = '\0';
  local_ac[0] = 0;
  local_b8 = 0;
  local_bc = 0;
  local_d8._8_8_ = 0;
  uStack_c8 = 0;
  local_d8._0_8_ = 0;
  local_dc[0] = '\0';
  local_e8 = 0;
  if (DAT_066db8a5 == '\0') {
    plVar14 = (long *)FUN_02b3c81c(Method_RootMotion_FinalIK_TwistRelaxer_OnPostUpdate__);
    DAT_066db8a5 = '\x01';
  }
  if (param_2 == 0) goto LAB_05d6d6f8;
  plVar26 = *(long **)(param_2 + 0x58);
  cVar2 = *(char *)(*(long *)(*(long *)Method_RootMotion_FinalIK_TwistRelaxer_OnPostUpdate__ + 0xb8)
                   + 8);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0x1589) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  puVar5 = Method_System_ComponentModel_TypeConverter_GetConvertToException__;
  *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)(param_2 + 0x50);
  FUN_05d81570(param_1 + 0x26,0);
  if ((*(byte *)((long)param_1 + 300) & 1) == 0) {
    uVar13 = *(undefined4 *)(param_2 + 0x9c);
  }
  else {
    uVar13 = 700;
  }
  uVar20 = *(undefined8 *)puVar5;
  *(undefined4 *)((long)param_1 + 0x13c) = uVar13;
  FUN_03f97a7c(param_1 + 0x28,uVar13,uVar20);
  plVar32 = param_1 + 0xd;
  *plVar32 = *(long *)(param_2 + 0x48);
  plVar14 = (long *)thunk_FUN_02bb0e9c(plVar32);
  puVar5 = Method_System_ComponentModel_TypeConverter_ConvertTo__;
  if (*(long *)(param_2 + 0x48) == 0) goto LAB_05d6d6f8;
  plVar28 = param_1 + 0xe;
  *plVar28 = *(long *)(*(long *)(param_2 + 0x48) + 0x28);
  thunk_FUN_02bb0e9c(plVar28);
  *(undefined4 *)(param_1 + 0xf) = 0;
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  FUN_05d4a4a4((int)param_1[0x1b],&local_120,0,param_1[0xd],0,param_1[0xe],0);
  uStack_98 = uStack_118;
  local_a0 = local_120;
  uStack_88 = uStack_108;
  uStack_90 = local_110;
  uStack_78 = uStack_f8;
  local_80 = local_100;
  local_70 = local_f0;
  FUN_03f9806c(param_1 + 0x10,&local_a0,*(undefined8 *)puVar5);
  plVar14 = (long *)0x0;
  if (param_1[0x33d] == 0) goto LAB_05d6d6f8;
  FUN_0444eb38(param_1[0x33d],
               *(undefined8 *)
                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  FUN_05d4a51c(param_1[0xe],param_1[0xd],param_1 + 0x2b8,param_1[0x33d],0);
  *(undefined1 *)(param_1 + 0x2b1) = 1;
  if (*(int *)(param_2 + 100) == 1) {
    FUN_05d6d700(param_1,param_2);
    if (param_1[0x33f] != 0) {
      plVar15 = (long *)param_1[0x340];
      plVar14 = (long *)0x0;
      if (plVar15 == (long *)0x0) goto LAB_05d6d6f8;
      plVar15 = (long *)(**(code **)(*plVar15 + 0x158))(plVar15,*(undefined8 *)(*plVar15 + 0x160));
      plVar23 = (long *)*plVar32;
      plVar14 = plVar15;
      if (plVar23 == (long *)0x0) goto LAB_05d6d6f8;
      plVar14 = (long *)(**(code **)(*plVar23 + 0x158))(plVar23,*(undefined8 *)(*plVar23 + 0x160));
      auVar35._8_8_ = local_d8._8_8_;
      auVar35._0_8_ = local_d8._0_8_;
      if ((int)plVar15 != (int)plVar14) {
        if (plVar26 == (long *)0x0) goto LAB_05d6d6f8;
        if ((char)plVar26[7] == '\0') {
LAB_05d6c7f8:
          if (param_1[0x340] == 0) goto LAB_05d6d6f8;
          param_1[0x341] = *(long *)(param_1[0x340] + 0x28);
          thunk_FUN_02bb0e9c(param_1 + 0x341);
        }
        else {
          plVar15 = (long *)*plVar28;
          plVar14 = (long *)0x0;
          local_d8 = auVar35;
          if (plVar15 == (long *)0x0) goto LAB_05d6d6f8;
          plVar15 = (long *)(**(code **)(*plVar15 + 0x158))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x160));
          auVar4._8_8_ = local_d8._8_8_;
          auVar4._0_8_ = local_d8._0_8_;
          plVar14 = plVar15;
          if (param_1[0x340] == 0) goto LAB_05d6d6f8;
          plVar23 = *(long **)(param_1[0x340] + 0x28);
          plVar14 = (long *)0x0;
          local_d8 = auVar4;
          if (plVar23 == (long *)0x0) goto LAB_05d6d6f8;
          plVar14 = (long *)(**(code **)(*plVar23 + 0x158))
                                      (plVar23,*(undefined8 *)(*plVar23 + 0x160));
          if ((int)plVar15 == (int)plVar14) goto LAB_05d6c7f8;
          if (cVar2 != '\0') {
            return 0;
          }
          if (param_1[0x340] == 0) goto LAB_05d6d6f8;
          lVar24 = param_1[0xe];
          uVar20 = *(undefined8 *)(param_1[0x340] + 0x28);
          if (*(int *)(*(long *)
                        Method_System_Diagnostics_TraceListenerCollection_InitializeListener__ +
                      0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          lVar24 = FUN_05d49b1c(lVar24,uVar20,0);
          param_1[0x341] = lVar24;
          thunk_FUN_02bb0e9c(param_1 + 0x341,lVar24);
        }
        plVar14 = (long *)FUN_05d4a51c(param_1[0x341],param_1[0x340],param_1 + 0x2b8,param_1[0x33d],
                                       0);
        lVar24 = param_1[0x2b8];
        uVar8 = (uint)plVar14;
        *(uint *)(param_1 + 0x342) = uVar8;
        if (lVar24 == 0) goto LAB_05d6d6f8;
        if (*(uint *)(lVar24 + 0x18) <= uVar8) {
UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined4 *)(lVar24 + (long)(int)uVar8 * 0x38 + 0x54) = 0;
      }
    }
  }
  puVar5 = Method_Unity_Properties_TypeConversion_Convert<double,_bool>__;
  lVar24 = *(long *)Method_Unity_Properties_TypeConversion_Convert<double,_bool>__;
  if (*(int *)(lVar24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar24 = *(long *)puVar5;
  }
  lVar24 = *(long *)(*(long *)(lVar24 + 0xb8) + 0x10);
  plVar14 = (long *)0x0;
  if (lVar24 == 0) {
LAB_05d6d6f8:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4(plVar14);
  }
  plVar15 = (long *)FUN_0385c3a4(lVar24,0x6c696761,
                                 *(undefined8 *)
                                  Method_System_Reflection_Emit_TypeBuilder_get_Module__);
  uVar8 = (uint)plVar15;
  plVar14 = plVar15;
  if (param_3 == 0) goto LAB_05d6d6f8;
  uVar22 = *(uint *)(param_3 + 0x18);
  plVar14 = (long *)0x1;
  if ((int)uVar22 < 1) {
    return 1;
  }
  lVar24 = param_3 + 0x20;
  uVar30 = 0;
LAB_05d6c8c0:
  if (uVar22 <= uVar30) goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
  puVar34 = (uint *)(lVar24 + (long)(int)uVar30 * 0x10 + 4);
  uVar22 = *puVar34;
  if (uVar22 == 0) {
    return 1;
  }
  local_138 = (undefined4)param_1[0xf];
  if ((*(char *)(param_2 + 0x81) != '\0') && (uVar22 == 0x3c)) {
    plVar14 = (long *)FUN_05d5f2f4(param_1,param_3,uVar30 + 1,&local_a4,param_2,0,local_a8);
    if (((ulong)plVar14 & 1) == 0) {
      if (local_a8[0] == '\0') {
        return 0;
      }
      local_138 = (undefined4)param_1[0xf];
      goto LAB_05d6c948;
    }
    if (uVar30 < *(uint *)(param_3 + 0x18)) {
      uVar30 = local_a4;
      if ((char)param_1[0x2b1] == '\x02') goto LAB_05d6d2cc;
      goto LAB_05d6d524;
    }
    goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
  }
LAB_05d6c948:
  lVar29 = *plVar32;
  lVar31 = *plVar28;
  if ((char)param_1[0x2b1] != '\x01') goto LAB_05d6ca10;
  uVar1 = *(uint *)((long)param_1 + 300);
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if ((uVar1 >> 5 & 1) != 0) goto LAB_05d6c970;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      plVar14 = (long *)FUN_04cfa518(uVar22,0);
      if (((ulong)plVar14 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        plVar14 = (long *)FUN_04cfa9b8(uVar22,0);
        goto LAB_05d6ca0c;
      }
    }
  }
  else {
LAB_05d6c970:
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    plVar14 = (long *)FUN_04cfa5b8(uVar22,0);
    if (((ulong)plVar14 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      plVar14 = (long *)FUN_04cfa840(uVar22,0);
LAB_05d6ca0c:
      uVar22 = (uint)plVar14 & 0xffff;
    }
  }
LAB_05d6ca10:
  if (cVar2 != '\0') {
    if (*plVar32 == 0) goto LAB_05d6d6f8;
    if (*(long *)(*plVar32 + 0x130) == 0) {
      return 0;
    }
  }
  uVar1 = uVar30 + 1;
  if ((int)uVar1 < (int)*(uint *)(param_3 + 0x18)) {
    if (*(uint *)(param_3 + 0x18) <= uVar1)
    goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
    iVar12 = *(int *)(lVar24 + (long)(int)uVar1 * 0x10 + 4);
  }
  else {
    iVar12 = 0;
  }
  local_14c = uVar22;
  if (*(char *)(param_2 + 0x80) == '\0') {
LAB_05d6cb04:
    lVar21 = FUN_05d6d9c8(param_1,param_2,uVar22,param_1[0xd],*(undefined4 *)((long)param_1 + 300),
                          *(undefined4 *)((long)param_1 + 0x13c),local_ac,uVar8 & 1);
    if (lVar21 == 0) {
      if (cVar2 != '\0') {
        return 0;
      }
      plVar14 = (long *)0x0;
      if (plVar26 == (long *)0x0) goto LAB_05d6d6f8;
      local_14c = *(uint *)((long)plVar26 + 0x3c);
      bVar6 = *(uint *)(param_3 + 0x18) <= uVar30;
      if (local_14c == 0) {
        if (bVar6) goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
        local_14c = 0x25a1;
      }
      else if (bVar6) goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
      *puVar34 = local_14c;
      lVar21 = FUN_05d6e610(local_14c,param_1[0xd],1,*(undefined4 *)((long)param_1 + 300),
                            *(undefined4 *)((long)param_1 + 0x13c),local_ac,uVar8 & 1,0);
      if (lVar21 == 0) {
        plVar14 = (long *)0x0;
        if (*plVar32 == 0) goto LAB_05d6d6f8;
        uVar9 = FUN_05d4bd48(*plVar32,0);
        if (*(char *)((long)param_1 + 0xf4) == '\0') {
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = *(undefined4 *)(param_2 + 0x7c);
        }
        plVar14 = (long *)(**(code **)(*plVar26 + 0x198))
                                    (plVar26,uVar9 & 1,uVar13,*(undefined8 *)(*plVar26 + 0x1a0));
        lVar21 = *plVar32;
        if (lVar21 == 0) goto LAB_05d6d6f8;
        uVar9 = FUN_05d4bd48(lVar21,0);
        if (*(char *)((long)param_1 + 0xf4) == '\0') {
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = *(undefined4 *)(param_2 + 0x7c);
        }
        uVar20 = (**(code **)(*plVar26 + 0x198))
                           (plVar26,uVar9 & 1,uVar13,*(undefined8 *)(*plVar26 + 0x1a0));
        uVar16 = FUN_05d71204(plVar26,0);
        in_stack_fffffffffffffe60 =
             CONCAT71((int7)(in_stack_fffffffffffffe60 >> 8),(char)plVar15) & 0xffffffffffffff01;
        lVar21 = FUN_05d6ecb0(local_14c,lVar21,uVar20,uVar16,1,*(undefined4 *)((long)param_1 + 300),
                              *(undefined4 *)((long)param_1 + 0x13c),local_ac,
                              in_stack_fffffffffffffe60,0);
        if (lVar21 == 0) {
          lVar21 = plVar26[4];
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar18 = FUN_05c8c45c(lVar21,0,0);
          if ((uVar18 & 1) != 0) {
            lVar21 = FUN_05d6e610(local_14c,plVar26[4],1,*(undefined4 *)((long)param_1 + 300),
                                  *(undefined4 *)((long)param_1 + 0x13c),local_ac,uVar8 & 1,0);
            if (lVar21 != 0) goto LAB_05d6cd54;
          }
          if (*(uint *)(param_3 + 0x18) <= uVar30)
          goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
          local_14c = 0x20;
          *puVar34 = 0x20;
          lVar21 = FUN_05d6e610(0x20,param_1[0xd],1,*(undefined4 *)((long)param_1 + 300),
                                *(undefined4 *)((long)param_1 + 0x13c),local_ac,uVar8 & 1,0);
          if (lVar21 == 0) {
            if (*(uint *)(param_3 + 0x18) <= uVar30)
            goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
            local_14c = 3;
            *puVar34 = 3;
            lVar21 = FUN_05d6e610(3,param_1[0xd],1,*(undefined4 *)((long)param_1 + 300),
                                  *(undefined4 *)((long)param_1 + 0x13c),local_ac,uVar8 & 1,0);
          }
        }
      }
LAB_05d6cd54:
      if ((char)plVar26[0x12] == '\0') {
        if (lVar21 == 0) {
          plVar14 = (long *)0x0;
          goto LAB_05d6d6f8;
        }
      }
      else {
        if (uVar22 >> 0x10 == 0) {
          local_a0 = CONCAT44(local_a0._4_4_,uVar22);
          plVar23 = (long *)DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                      (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_a0);
          plVar14 = plVar23;
          if (*(long *)(param_2 + 0x48) == 0) goto LAB_05d6d6f8;
          plVar14 = (long *)thunk_FUN_05c92238(*(long *)(param_2 + 0x48),0);
          if (lVar21 == 0) goto LAB_05d6d6f8;
          uVar13 = FUN_05d6ffcc(lVar21,0);
          local_120 = CONCAT44(local_120._4_4_,uVar13);
          uVar20 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_120);
          puVar25 = (undefined8 *)Method_UIController_SpawnWorldText__;
        }
        else {
          local_a0 = CONCAT44(local_a0._4_4_,uVar22);
          plVar23 = (long *)DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                      (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_a0);
          plVar14 = plVar23;
          if (*(long *)(param_2 + 0x48) == 0) goto LAB_05d6d6f8;
          plVar14 = (long *)thunk_FUN_05c92238(*(long *)(param_2 + 0x48),0);
          if (lVar21 == 0) goto LAB_05d6d6f8;
          uVar13 = FUN_05d6ffcc(lVar21,0);
          local_120 = CONCAT44(local_120._4_4_,uVar13);
          uVar20 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_120);
          puVar25 = (undefined8 *)Method_UIController_ShowGameOverUI__;
        }
        uVar20 = FUN_04c0af6c(*puVar25,plVar23,plVar14,uVar20,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c41e34(uVar20,0);
      }
    }
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_Universal_ScriptableRenderer_get_cameraColorTarget__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    plVar14 = (long *)FUN_05d7a6e4(uVar22,0);
    if ((((ulong)plVar14 & 1) == 0) || (iVar12 == 0xfe0e)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Rendering_Universal_ScriptableRenderer_get_cameraColorTarget__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      plVar14 = (long *)FUN_05d7a664(uVar22,0);
      if ((((ulong)plVar14 & 1) == 0) || (iVar12 != 0xfe0f)) goto LAB_05d6cb04;
    }
    if (plVar26 == (long *)0x0) goto LAB_05d6d6f8;
    lVar21 = plVar26[9];
    if ((lVar21 == 0) || (*(int *)(lVar21 + 0x18) < 1)) goto LAB_05d6cb04;
    in_stack_fffffffffffffe60 = 0;
    lVar21 = FUN_05d6efec(uVar22,param_1[0xd],lVar21,1,*(undefined4 *)((long)param_1 + 300),
                          *(undefined4 *)((long)param_1 + 0x13c),local_ac,uVar8 & 1,0);
    if (lVar21 == 0) goto LAB_05d6cb04;
  }
  cVar7 = FUN_05d72fb4(lVar21,0);
  if (cVar7 != '\x01') {
    cVar7 = FUN_05d72fb4(lVar21,0);
    if (cVar7 != '\x02') goto LAB_05d6d318;
    goto LAB_05d6d260;
  }
  lVar17 = FUN_05d6eca8(lVar21,0);
  if (cVar2 == '\0') {
    plVar14 = (long *)0x0;
    if (lVar17 == 0) goto LAB_05d6d6f8;
    plVar14 = (long *)FUN_05d70ea0(lVar17,0);
    if (*plVar32 == 0) goto LAB_05d6d6f8;
    iVar10 = FUN_05d70ea0(*plVar32,0);
    if ((int)plVar14 == iVar10) goto LAB_05d6cef0;
LAB_05d6cf50:
    plVar14 = (long *)FUN_05d6eca8(lVar21,0);
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
      *plVar32 = 0;
    }
    else {
      lVar17 = *(long *)
                Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
      ;
      bVar3 = *(byte *)(lVar17 + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar3) {
        plVar23 = (long *)0x0;
      }
      else {
        plVar23 = plVar14;
        if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar17) {
          plVar23 = (long *)0x0;
        }
      }
      *plVar32 = (long)plVar23;
      if (*(byte *)(*plVar14 + 0x130) < bVar3) {
        plVar14 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar17) {
        plVar14 = (long *)0x0;
      }
    }
    thunk_FUN_02bb0e9c(plVar32,plVar14);
    bVar6 = true;
  }
  else {
    lVar33 = *plVar32;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar18 = FUN_05c8e378(lVar17,lVar33,0);
    if ((uVar18 & 1) == 0) goto LAB_05d6cf50;
LAB_05d6cef0:
    bVar6 = false;
  }
  if ((0xffffffef < iVar12 - 0xfe10U) || (0xffffff0f < iVar12 - 0xe01f0U)) {
    plVar14 = (long *)0x0;
    if (*plVar32 == 0) goto LAB_05d6d6f8;
    uVar18 = FUN_05d54028(*plVar32,local_14c,iVar12,&local_bc,0);
    if ((uVar18 & 1) == 0) {
      if (cVar2 != '\0') {
        return 0;
      }
      plVar14 = (long *)0x0;
      if (*plVar32 == 0) goto LAB_05d6d6f8;
      plVar14 = (long *)FUN_05d51464(*plVar32,local_14c,iVar12,0);
      local_bc = (int)plVar14;
      if (*plVar32 == 0) goto LAB_05d6d6f8;
      FUN_05d53f7c(*plVar32,local_14c,iVar12,(ulong)plVar14 & 0xffffffff,0);
    }
    if (local_bc != 0) {
      plVar14 = (long *)0x0;
      if (*plVar32 == 0) goto LAB_05d6d6f8;
      FUN_05d540d4(*plVar32,local_bc,&uStack_c8,0);
    }
    if (*(uint *)(param_3 + 0x18) <= uVar1)
    goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
    *(undefined4 *)(lVar24 + (long)(int)uVar1 * 0x10 + 4) = 0x1a;
    uVar30 = uVar1;
  }
  if (((ulong)plVar15 & 1) != 0) {
    plVar14 = (long *)0x0;
    if (*plVar32 != 0) {
      lVar17 = FUN_05d4bd8c(*plVar32,0);
      plVar14 = (long *)0x0;
      if (lVar17 != 0) {
        lVar17 = *(long *)(lVar17 + 0x38);
        plVar14 = (long *)FUN_05d6ffac(lVar21,0);
        if (lVar17 != 0) {
          uVar18 = FUN_045e2b94(lVar17,(ulong)plVar14 & 0xffffffff,&local_b8,
                                *(undefined8 *)
                                 Method_Meta_XR_ImmersiveDebugger_Manager_TweakUtils_Register<bool>__
                               );
          if ((uVar18 & 1) != 0) {
            if (local_b8 == 0) {
              return 1;
            }
            iVar12 = 0;
            while (iVar12 < *(int *)(local_b8 + 0x18)) {
              auVar35 = FUN_0376f958(local_b8,iVar12,
                                     *(undefined8 *)Method_UIController_DisplayCombo__);
              local_d8 = auVar35;
              lVar17 = FUN_05d42744(local_d8,0);
              plVar14 = (long *)0x0;
              if (lVar17 == 0) goto LAB_05d6d6f8;
              uVar18 = *(ulong *)(lVar17 + 0x18);
              iVar10 = FUN_05d42754(local_d8,0);
              iVar27 = (int)uVar18;
              if (1 < iVar27) {
                lVar17 = 0;
                do {
                  uVar22 = uVar30 + 1 + (int)lVar17;
                  if (*(uint *)(param_3 + 0x18) <= uVar22)
                  goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
                  plVar14 = (long *)0x0;
                  if (*plVar32 == 0) goto LAB_05d6d6f8;
                  iVar11 = FUN_05d5133c(*plVar32,*(undefined4 *)
                                                  (lVar24 + (long)(int)uVar22 * 0x10 + 4),local_dc,0
                                       );
                  if (local_dc[0] == '\0') {
                    return 0;
                  }
                  lVar33 = FUN_05d42744(local_d8,0);
                  plVar14 = (long *)0x0;
                  if (lVar33 == 0) goto LAB_05d6d6f8;
                  if (*(uint *)(lVar33 + 0x18) <= (int)lVar17 + 1U)
                  goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
                  if (iVar11 != *(int *)(lVar33 + lVar17 * 4 + 0x24)) goto LAB_05d6d228;
                  lVar17 = lVar17 + 1;
                } while (iVar27 + -1 != (int)lVar17);
              }
              if (iVar10 != 0) {
                if (cVar2 != '\0') {
                  return 0;
                }
                plVar14 = (long *)0x0;
                if (*plVar32 == 0) goto LAB_05d6d6f8;
                uVar19 = FUN_05d540d4(*plVar32,iVar10,&local_e8,0);
                if ((uVar19 & 1) != 0) {
                  if (iVar27 < 1) goto LAB_05d6d664;
                  uVar19 = 0;
                  goto LAB_05d6d620;
                }
              }
LAB_05d6d228:
              iVar12 = iVar12 + 1;
              if (local_b8 == 0) {
                plVar14 = (long *)0x0;
                goto LAB_05d6d6f8;
              }
            }
          }
          goto LAB_05d6d248;
        }
      }
    }
    goto LAB_05d6d6f8;
  }
  goto LAB_05d6d248;
LAB_05d6d620:
  do {
    if (uVar19 == 0) {
      if (*(uint *)(param_3 + 0x18) <= uVar30)
      goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
      *(int *)(lVar24 + (long)(int)uVar30 * 0x10 + 0xc) = iVar27;
    }
    else {
      uVar22 = uVar30 + (int)uVar19;
      if (*(uint *)(param_3 + 0x18) <= uVar22)
      goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
      *(undefined4 *)(lVar24 + (long)(int)uVar22 * 0x10 + 4) = 0x1a;
    }
    uVar19 = uVar19 + 1;
  } while ((uVar18 & 0xffffffff) != uVar19);
LAB_05d6d664:
  uVar30 = (uVar30 + iVar27) - 1;
LAB_05d6d248:
  cVar7 = FUN_05d72fb4(lVar21,0);
  if (cVar7 == '\x02') {
LAB_05d6d260:
    plVar14 = (long *)FUN_05d6eca8(lVar21,0);
    if (plVar14 == (long *)0x0) goto LAB_05d6d6f8;
    bVar3 = *(byte *)(*(long *)Method_System_Reflection_Emit_TypeBuilder_get_Namespace__ + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Method_System_Reflection_Emit_TypeBuilder_get_Namespace__)) goto LAB_05d6d6f8;
    plVar14 = (long *)FUN_05d4a71c(plVar14[5],plVar14,param_1 + 0x2b8,param_1[0x33d],0);
    *(int *)(param_1 + 0xf) = (int)plVar14;
LAB_05d6d2cc:
    *(undefined1 *)(param_1 + 0x2b1) = 1;
  }
  else {
    if (bVar6) {
      plVar14 = (long *)0x0;
      if (*plVar32 == 0) goto LAB_05d6d6f8;
      plVar14 = (long *)FUN_05d70ea0(*plVar32,0);
      if (*(long *)(param_2 + 0x48) == 0) goto LAB_05d6d6f8;
      plVar23 = (long *)FUN_05d70ea0(*(long *)(param_2 + 0x48),0);
      if ((int)plVar14 == (int)plVar23) {
        bVar6 = true;
      }
      else {
        plVar14 = plVar23;
        if (cVar2 == '\0') {
          if (plVar26 == (long *)0x0) goto LAB_05d6d6f8;
          if ((char)plVar26[7] == '\0') goto LAB_05d6d54c;
          if (*plVar32 == 0) goto LAB_05d6d6f8;
          uVar20 = *(undefined8 *)(*plVar32 + 0x28);
          lVar17 = *plVar28;
          if (*(int *)(*(long *)
                        Method_System_Diagnostics_TraceListenerCollection_InitializeListener__ +
                      0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          lVar17 = FUN_05d49b1c(lVar17,uVar20,0);
        }
        else {
          if (plVar26 == (long *)0x0) goto LAB_05d6d6f8;
          if ((char)plVar26[7] != '\0') {
            return 0;
          }
LAB_05d6d54c:
          if (*plVar32 == 0) goto LAB_05d6d6f8;
          lVar17 = *(long *)(*plVar32 + 0x28);
        }
        param_1[0xe] = lVar17;
        thunk_FUN_02bb0e9c(plVar28);
        uVar13 = FUN_05d4a51c(param_1[0xe],param_1[0xd],param_1 + 0x2b8,param_1[0x33d],0);
        bVar6 = true;
        *(undefined4 *)(param_1 + 0xf) = uVar13;
      }
    }
    else {
LAB_05d6d318:
      bVar6 = false;
    }
    lVar17 = FUN_05d72fc4(lVar21,0);
    plVar14 = (long *)0x0;
    if (lVar17 == 0) goto LAB_05d6d6f8;
    iVar12 = FUN_05d3dde8(lVar17,0);
    if (0 < iVar12) {
      if (cVar2 != '\0') {
        return 0;
      }
      lVar17 = *plVar32;
      lVar33 = *plVar28;
      lVar21 = FUN_05d72fc4(lVar21,0);
      plVar14 = (long *)0x0;
      if (lVar21 == 0) goto LAB_05d6d6f8;
      uVar13 = FUN_05d3dde8(lVar21,0);
      if (*(int *)(*(long *)Method_System_Diagnostics_TraceListenerCollection_InitializeListener__ +
                  0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)
                            Method_System_Diagnostics_TraceListenerCollection_InitializeListener__);
      }
      lVar21 = FUN_05d4a1d4(lVar17,lVar33,uVar13,0);
      param_1[0xe] = lVar21;
      thunk_FUN_02bb0e9c(plVar28,lVar21);
      uVar13 = FUN_05d4a51c(param_1[0xe],param_1[0xd],param_1 + 0x2b8,param_1[0x33d],0);
      bVar6 = true;
      *(undefined4 *)(param_1 + 0xf) = uVar13;
    }
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    plVar14 = (long *)FUN_04cf7fe0(local_14c,0);
    lVar21 = param_1[0x2b8];
    if ((((ulong)plVar14 & 1) == 0) && (local_14c != 0x200b)) {
      if (*(char *)(param_2 + 0xa0) == '\0') {
LAB_05d6d490:
        if (lVar21 == 0) goto LAB_05d6d6f8;
      }
      else {
        if (lVar21 == 0) goto LAB_05d6d6f8;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xf))
        goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
        if (0x3ffe < *(int *)(lVar21 + (long)(int)*(uint *)(param_1 + 0xf) * 0x38 + 0x54)) {
          lVar21 = param_1[0xe];
          uVar20 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
          FUN_05c59798(uVar20,lVar21,0);
          plVar14 = (long *)FUN_05d4a51c(uVar20,param_1[0xd],param_1 + 0x2b8,param_1[0x33d],0);
          lVar21 = param_1[0x2b8];
          *(int *)(param_1 + 0xf) = (int)plVar14;
          goto LAB_05d6d490;
        }
      }
      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xf))
      goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
      lVar17 = lVar21 + (long)(int)*(uint *)(param_1 + 0xf) * 0x38;
      *(int *)(lVar17 + 0x54) = *(int *)(lVar17 + 0x54) + 1;
    }
    else if (lVar21 == 0) goto LAB_05d6d6f8;
    uVar22 = *(uint *)(param_1 + 0xf);
    if (*(uint *)(lVar21 + 0x18) <= uVar22)
    goto UnityEngine_UIElements_UIR_DepthOrderedDirtyTracking__ClearDirty;
    *(bool *)(lVar21 + 0x20 + (long)(int)uVar22 * 0x38 + 0x20) = bVar6;
    if (!bVar6) goto LAB_05d6d518;
    plVar14 = (long *)(lVar21 + 0x20 + (long)(int)uVar22 * 0x38 + 0x28);
    *plVar14 = lVar31;
    thunk_FUN_02bb0e9c(plVar14,lVar31);
    *plVar32 = lVar29;
    thunk_FUN_02bb0e9c(plVar32);
    *plVar28 = lVar31;
    plVar14 = (long *)thunk_FUN_02bb0e9c(plVar28,lVar31);
  }
  *(undefined4 *)(param_1 + 0xf) = local_138;
LAB_05d6d518:
  *(int *)(param_1 + 0x1d) = (int)param_1[0x1d] + 1;
LAB_05d6d524:
  uVar22 = *(uint *)(param_3 + 0x18);
  uVar30 = uVar30 + 1;
  if ((int)uVar22 <= (int)uVar30) {
    return 1;
  }
  goto LAB_05d6c8c0;
}


