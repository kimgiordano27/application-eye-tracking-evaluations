/*
FUNCTION_NAME: FUN_05d6aa74
ENTRY_POINT: 05d6aa74
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 237
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5
*/


undefined4 FUN_05d6aa74(long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  int iVar10;
  int iVar15;
  undefined4 uVar16;
  char cVar9;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  uint uVar31;
  uint uVar32;
  long *plVar33;
  uint *puVar34;
  undefined8 uVar35;
  long *plVar36;
  long lVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  ulong in_stack_fffffffffffffe50;
  int local_174;
  undefined4 local_144;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_dc [4];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  uint local_bc;
  long local_b8;
  undefined1 local_ac [4];
  uint local_a8;
  undefined1 local_a4 [4];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_066db8b5 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_Manager_TweakUtils_Register<bool>__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_3__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
                );
    FUN_02b3c81c(Method_System_Reflection_Emit_TypeBuilder_get_Module__);
    FUN_02b3c81c(Method_System_TypedReference_Equals__);
    FUN_02b3c81c(Method_System_TypedReference_MakeTypedReference__);
    FUN_02b3c81c(Method_System_TypedReference_SetTypedReference__);
    FUN_02b3c81c(Method_UIController_DisplayCombo__);
    FUN_02b3c81c(Method_System_Diagnostics_TraceListenerCollection_InitializeListener__);
    FUN_02b3c81c(PTR_DAT_06313778);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_System_Reflection_Emit_TypeBuilder_get_Namespace__);
    FUN_02b3c81c(Method_Unity_Properties_TypeConversion_Convert<double,_bool>__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_Universal_ScriptableRenderer_get_cameraColorTarget__);
    FUN_02b3c81c(Method_UIController_HandleHealthChange__);
    FUN_02b3c81c(Method_UIController_InitializeUI__);
    FUN_02b3c81c(Method_System_Reflection_TypeDelegator__ctor__);
    FUN_02b3c81c(Method_System_ComponentModel_TypeConverter_ConvertTo__);
    FUN_02b3c81c(Method_System_ComponentModel_TypeConverter_GetConvertToException__);
    FUN_02b3c81c(Method_UIController_ShowGameOverUI__);
    FUN_02b3c81c(Method_VRBeats_Carousel_<Focus>b__16_0__);
    FUN_02b3c81c(Method_UIController_SpawnWorldText__);
    FUN_02b3c81c(Method_VRBeats_Carousel_<MoveLeft>b__14_0__);
    DAT_066db8b5 = 1;
  }
  local_a4[0] = 0;
  local_a8 = 0;
  local_ac[0] = 0;
  local_b8 = 0;
  local_bc = 0;
  local_d8._8_8_ = 0;
  local_c8 = 0;
  local_d8._0_8_ = 0;
  local_dc[0] = 0;
  local_e8 = 0;
  auVar39 = ZEXT816(0);
  if (param_3 == 0) goto LAB_05d6c3f4;
  plVar26 = *(long **)(param_3 + 0x58);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0x1589) = 0;
  *(undefined1 *)(param_1 + 0x330) = 0;
  puVar6 = Method_System_ComponentModel_TypeConverter_GetConvertToException__;
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_3 + 0x50);
  FUN_05d81570(param_1 + 0x130,0);
  if ((*(byte *)(param_1 + 300) & 1) == 0) {
    uVar16 = *(undefined4 *)(param_3 + 0x9c);
  }
  else {
    uVar16 = 700;
  }
  uVar25 = *(undefined8 *)puVar6;
  *(undefined4 *)(param_1 + 0x13c) = uVar16;
  FUN_03f97a7c(param_1 + 0x140,uVar16,uVar25);
  plVar36 = (long *)(param_1 + 0x68);
  *plVar36 = *(long *)(param_3 + 0x48);
  thunk_FUN_02bb0e9c(plVar36);
  puVar6 = Method_System_ComponentModel_TypeConverter_ConvertTo__;
  auVar39._8_8_ = local_d8._8_8_;
  auVar39._0_8_ = local_d8._0_8_;
  if (*(long *)(param_3 + 0x48) == 0) goto LAB_05d6c3f4;
  plVar33 = (long *)(param_1 + 0x70);
  *plVar33 = *(long *)(*(long *)(param_3 + 0x48) + 0x28);
  thunk_FUN_02bb0e9c(plVar33);
  *(undefined4 *)(param_1 + 0x78) = 0;
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  FUN_05d4a4a4(*(undefined4 *)(param_1 + 0xd8),&local_120,0,*(undefined8 *)(param_1 + 0x68),0,
               *(undefined8 *)(param_1 + 0x70),0);
  uStack_98 = uStack_118;
  local_a0 = local_120;
  uStack_88 = uStack_108;
  uStack_90 = local_110;
  uStack_78 = uStack_f8;
  local_80 = local_100;
  local_70 = local_f0;
  FUN_03f9806c(param_1 + 0x80,&local_a0,*(undefined8 *)puVar6);
  puVar6 = Method_System_Reflection_TypeDelegator__ctor__;
  auVar39._8_8_ = local_d8._8_8_;
  auVar39._0_8_ = local_d8._0_8_;
  if (*(long *)(param_1 + 0x19e8) == 0) goto LAB_05d6c3f4;
  FUN_0444eb38(*(long *)(param_1 + 0x19e8),
               *(undefined8 *)
                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  FUN_05d4a51c(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),param_1 + 0x15c0,
               *(undefined8 *)(param_1 + 0x19e8),0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xe0),0);
  auVar39._8_8_ = local_d8._8_8_;
  auVar39._0_8_ = local_d8._0_8_;
  if (param_4 == 0) {
    param_4 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
    FUN_05d7ff94(param_4,0);
  }
  else {
    lVar27 = *(long *)(param_4 + 0x30);
    if (lVar27 == 0) goto LAB_05d6c3f4;
    iVar10 = *(int *)(param_1 + 0x28);
    if (*(int *)(lVar27 + 0x18) < iVar10) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_0333ad30((long *)(param_4 + 0x30),iVar10,0,
                   *(undefined8 *)Method_UIController_InitializeUI__);
    }
  }
  *(undefined1 *)(param_1 + 0x1588) = 1;
  if (*(int *)(param_3 + 100) == 1) {
    FUN_05d6d700(param_1,param_3);
    auVar5._8_8_ = local_d8._8_8_;
    auVar5._0_8_ = local_d8._0_8_;
    auVar39._8_8_ = local_d8._8_8_;
    auVar39._0_8_ = local_d8._0_8_;
    auVar2._8_8_ = local_d8._8_8_;
    auVar2._0_8_ = local_d8._0_8_;
    if (*(long *)(param_1 + 0x19f8) == 0) {
      *(undefined4 *)(param_3 + 100) = 3;
      if (plVar26 == (long *)0x0) goto LAB_05d6c3f4;
      if ((char)plVar26[0x12] != '\0') {
        auVar39 = auVar5;
        if (*plVar36 == 0) goto LAB_05d6c3f4;
        uVar25 = thunk_FUN_05c92238(*plVar36,0);
        uVar25 = FUN_04c0a5c4(*(undefined8 *)Method_VRBeats_Carousel_<Focus>b__16_0__,uVar25,
                              *(undefined8 *)Method_VRBeats_Carousel_<MoveLeft>b__14_0__,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
        }
        FUN_05c41e34(uVar25,0);
      }
    }
    else {
      plVar17 = *(long **)(param_1 + 0x1a00);
      auVar39 = auVar2;
      if (plVar17 == (long *)0x0) goto LAB_05d6c3f4;
      iVar10 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
      auVar39._8_8_ = local_d8._8_8_;
      auVar39._0_8_ = local_d8._0_8_;
      plVar17 = (long *)*plVar36;
      if (plVar17 == (long *)0x0) goto LAB_05d6c3f4;
      iVar11 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
      auVar3._8_8_ = local_d8._8_8_;
      auVar3._0_8_ = local_d8._0_8_;
      auVar39._8_8_ = local_d8._8_8_;
      auVar39._0_8_ = local_d8._0_8_;
      if (iVar10 != iVar11) {
        if (plVar26 == (long *)0x0) goto LAB_05d6c3f4;
        if ((char)plVar26[7] == '\0') {
LAB_05d6ae58:
          auVar39._8_8_ = local_d8._8_8_;
          auVar39._0_8_ = local_d8._0_8_;
          if (*(long *)(param_1 + 0x1a00) == 0) goto LAB_05d6c3f4;
          *(undefined8 *)(param_1 + 0x1a08) = *(undefined8 *)(*(long *)(param_1 + 0x1a00) + 0x28);
          thunk_FUN_02bb0e9c(param_1 + 0x1a08);
        }
        else {
          plVar17 = (long *)*plVar33;
          auVar39 = auVar3;
          if (plVar17 == (long *)0x0) goto LAB_05d6c3f4;
          iVar10 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
          auVar4._8_8_ = local_d8._8_8_;
          auVar4._0_8_ = local_d8._0_8_;
          auVar39._8_8_ = local_d8._8_8_;
          auVar39._0_8_ = local_d8._0_8_;
          if ((*(long *)(param_1 + 0x1a00) == 0) ||
             (plVar17 = *(long **)(*(long *)(param_1 + 0x1a00) + 0x28), auVar39 = auVar4,
             plVar17 == (long *)0x0)) goto LAB_05d6c3f4;
          iVar11 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
          auVar39._8_8_ = local_d8._8_8_;
          auVar39._0_8_ = local_d8._0_8_;
          if (iVar10 == iVar11) goto LAB_05d6ae58;
          if (*(long *)(param_1 + 0x1a00) == 0) goto LAB_05d6c3f4;
          uVar25 = *(undefined8 *)(param_1 + 0x70);
          uVar35 = *(undefined8 *)(*(long *)(param_1 + 0x1a00) + 0x28);
          if (*(int *)(*(long *)
                        Method_System_Diagnostics_TraceListenerCollection_InitializeListener__ +
                      0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar25 = FUN_05d49b1c(uVar25,uVar35,0);
          *(undefined8 *)(param_1 + 0x1a08) = uVar25;
          thunk_FUN_02bb0e9c(param_1 + 0x1a08,uVar25);
        }
        uVar12 = FUN_05d4a51c(*(undefined8 *)(param_1 + 0x1a08),*(undefined8 *)(param_1 + 0x1a00),
                              param_1 + 0x15c0,*(undefined8 *)(param_1 + 0x19e8),0);
        lVar27 = *(long *)(param_1 + 0x15c0);
        *(uint *)(param_1 + 0x1a10) = uVar12;
        auVar39 = local_d8;
        if (lVar27 == 0) goto LAB_05d6c3f4;
        if (*(uint *)(lVar27 + 0x18) <= uVar12) {
LAB_05d6c3f8:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined4 *)(lVar27 + (long)(int)uVar12 * 0x38 + 0x54) = 0;
      }
    }
  }
  puVar6 = Method_Unity_Properties_TypeConversion_Convert<double,_bool>__;
  lVar27 = *(long *)Method_Unity_Properties_TypeConversion_Convert<double,_bool>__;
  if (*(int *)(lVar27 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar27 = *(long *)puVar6;
  }
  auVar39._8_8_ = local_d8._8_8_;
  auVar39._0_8_ = local_d8._0_8_;
  lVar27 = *(long *)(*(long *)(lVar27 + 0xb8) + 0x10);
  if (lVar27 == 0) {
LAB_05d6c3f4:
    local_d8 = auVar39;
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  bVar8 = FUN_0385c3a4(lVar27,0x6c696761,
                       *(undefined8 *)Method_System_Reflection_Emit_TypeBuilder_get_Module__);
  auVar39 = local_d8;
  if (param_2 == 0) goto LAB_05d6c3f4;
  uVar12 = *(uint *)(param_2 + 0x18);
  if ((int)uVar12 < 1) {
    local_174 = 0;
LAB_05d6c0ec:
    if (*(char *)(param_1 + 0x19f0) != '\0') {
LAB_05d6c0f8:
      *(undefined1 *)(param_1 + 0x19f0) = 0;
LAB_05d6c3bc:
      return *(undefined4 *)(param_1 + 0xe8);
    }
    auVar39 = local_d8;
    if (param_4 != 0) {
LAB_05d6c108:
      *(int *)(param_4 + 0x14) = local_174;
      auVar39 = local_d8;
      if (*(long *)(param_1 + 0x19e8) != 0) {
        uVar12 = FUN_0444e654(*(long *)(param_1 + 0x19e8),
                              *(undefined8 *)
                               Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_3__);
        plVar26 = (long *)(param_4 + 0x50);
        *(uint *)(param_4 + 0x28) = uVar12;
        puVar6 = Method_System_Reflection_TypeDelegator__ctor__;
        auVar39 = local_d8;
        if (*plVar26 != 0) {
          if (*(int *)(*plVar26 + 0x18) < (int)uVar12) {
            if (*(int *)(*(long *)Method_System_Reflection_TypeDelegator__ctor__ + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_0333ac84(plVar26,uVar12,0,*(undefined8 *)Method_UIController_HandleHealthChange__);
          }
          if (*(char *)(param_1 + 0x2c) != '\0') {
            auVar39 = local_d8;
            if (*(long *)(param_4 + 0x30) == 0) goto LAB_05d6c3f4;
            iVar10 = *(int *)(param_1 + 0xe8);
            if (0x100 < *(int *)(*(long *)(param_4 + 0x30) + 0x18) - iVar10) {
              iVar11 = 0x100;
              if (0x100 < iVar10 + 1) {
                iVar11 = iVar10 + 1;
              }
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_0333ad30(param_4 + 0x30,iVar11,1,*(undefined8 *)Method_UIController_InitializeUI__
                          );
            }
          }
          if (0 < (int)uVar12) {
            lVar28 = 0;
            uVar31 = 0;
            lVar27 = 0x20;
            do {
              lVar19 = *(long *)(param_1 + 0x15c0);
              auVar39 = local_d8;
              if (lVar19 == 0) goto LAB_05d6c3f4;
              if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_05d6c3f8;
              lVar37 = *plVar26;
              if (lVar37 == 0) goto LAB_05d6c3f4;
              if (*(uint *)(lVar37 + 0x18) <= uVar31) goto LAB_05d6c3f8;
              lVar29 = lVar37 + lVar27;
              iVar10 = *(int *)(lVar19 + lVar28 + 0x54);
              if (*(long *)(lVar29 + 8) == 0) {
                local_80 = 0;
                uStack_98 = 0;
                local_a0 = 0;
                uStack_88 = 0;
                uStack_90 = 0;
                FUN_05d4b154(&local_a0,iVar10 + 1,*(undefined1 *)(param_3 + 0xa0),0);
                if (*(uint *)(lVar37 + 0x18) <= uVar31) goto LAB_05d6c3f8;
                puVar22 = (undefined8 *)(lVar37 + lVar27);
                puVar22[4] = local_80;
                puVar22[1] = uStack_98;
                *puVar22 = local_a0;
                puVar22[3] = uStack_88;
                puVar22[2] = uStack_90;
                thunk_FUN_02bb0e9c((long *)(lVar29 + 8),0);
              }
              else {
                if (*(int *)(lVar29 + 0x18) < iVar10 * 4) {
                  if (iVar10 < 0x401) {
                    uVar32 = iVar10 - 1U | (int)(iVar10 - 1U) >> 0x10;
                    uVar32 = uVar32 | (int)uVar32 >> 8;
                    uVar32 = uVar32 | (int)uVar32 >> 4;
                    uVar32 = uVar32 | (int)uVar32 >> 2;
                    iVar10 = (uVar32 | (int)uVar32 >> 1) + 1;
                  }
                  else {
LAB_05d6c2e8:
                    iVar10 = iVar10 + 0x100;
                  }
                }
                else {
                  if (*(int *)(lVar29 + 0x18) + iVar10 * -4 < 0x401) goto LAB_05d6c320;
                  if (0x400 < iVar10) goto LAB_05d6c2e8;
                  uVar32 = iVar10 - 1U | (int)(iVar10 - 1U) >> 0x10;
                  uVar32 = uVar32 | (int)uVar32 >> 8;
                  uVar32 = uVar32 | (int)uVar32 >> 4;
                  uVar32 = uVar32 | (int)uVar32 >> 2;
                  uVar32 = uVar32 | (int)uVar32 >> 1;
                  iVar10 = 0x100;
                  if (0x100 < (int)(uVar32 + 1)) {
                    iVar10 = uVar32 + 1;
                  }
                }
                FUN_05d4b21c(lVar29,iVar10,*(undefined1 *)(param_3 + 0xa0),0);
              }
LAB_05d6c320:
              lVar19 = *plVar26;
              auVar39 = local_d8;
              if ((lVar19 == 0) || (lVar37 = *(long *)(param_1 + 0x15c0), lVar37 == 0))
              goto LAB_05d6c3f4;
              if ((*(uint *)(lVar37 + 0x18) <= uVar31) || (*(uint *)(lVar19 + 0x18) <= uVar31))
              goto LAB_05d6c3f8;
              *(undefined8 *)(lVar19 + lVar27 + 0x10) = *(undefined8 *)(lVar37 + lVar28 + 0x38);
              thunk_FUN_02bb0e9c();
              lVar19 = *plVar26;
              auVar39 = local_d8;
              if ((lVar19 == 0) || (lVar37 = *(long *)(param_1 + 0x15c0), lVar37 == 0))
              goto LAB_05d6c3f4;
              if (*(uint *)(lVar37 + 0x18) <= uVar31) goto LAB_05d6c3f8;
              lVar37 = *(long *)(lVar37 + lVar28 + 0x28);
              if (lVar37 == 0) goto LAB_05d6c3f4;
              uVar16 = FUN_05d4bd20(lVar37,0);
              if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_05d6c3f8;
              uVar31 = uVar31 + 1;
              lVar19 = lVar19 + lVar27;
              lVar27 = lVar27 + 0x28;
              lVar28 = lVar28 + 0x38;
              *(undefined4 *)(lVar19 + 0x20) = uVar16;
            } while (uVar12 != uVar31);
          }
          goto LAB_05d6c3bc;
        }
      }
    }
    goto LAB_05d6c3f4;
  }
  uVar31 = 0;
  lVar27 = param_2 + 0x20;
  local_174 = 0;
LAB_05d6b000:
  if (uVar12 <= uVar31) goto LAB_05d6c3f8;
  puVar34 = (uint *)(lVar27 + (long)(int)uVar31 * 0x10 + 4);
  if (*puVar34 == 0) goto LAB_05d6c0ec;
  auVar39 = local_d8;
  if (param_4 == 0) goto LAB_05d6c3f4;
  iVar10 = *(int *)(param_1 + 0xe8);
  if ((*(long *)(param_4 + 0x30) == 0) || (*(int *)(*(long *)(param_4 + 0x30) + 0x18) <= iVar10)) {
    if (*(int *)(*(long *)Method_System_Reflection_TypeDelegator__ctor__ + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0333ad30(param_4 + 0x30,iVar10 + 1,1,*(undefined8 *)Method_UIController_InitializeUI__);
    uVar12 = *(uint *)(param_2 + 0x18);
  }
  if (uVar12 <= uVar31) goto LAB_05d6c3f8;
  uVar12 = *puVar34;
  local_144 = *(undefined4 *)(param_1 + 0x78);
  if ((*(char *)(param_3 + 0x81) != '\0') && (uVar12 == 0x3c)) {
    uVar18 = FUN_05d5f2f4(param_1,param_2,uVar31 + 1,&local_a8,param_3,param_4,local_ac);
    uVar32 = local_a8;
    if ((uVar18 & 1) == 0) {
      local_144 = *(undefined4 *)(param_1 + 0x78);
      goto LAB_05d6b274;
    }
    if (*(uint *)(param_2 + 0x18) <= uVar31) goto LAB_05d6c3f8;
    if (*(char *)(param_1 + 0x1588) != '\x02') goto LAB_05d6c030;
    lVar28 = *(long *)(param_1 + 0x15c0);
    auVar39 = local_d8;
    if (lVar28 != 0) {
      if (*(uint *)(param_1 + 0x78) < *(uint *)(lVar28 + 0x18)) {
        lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0x78) * 0x38;
        iVar10 = *(int *)(lVar27 + (long)(int)uVar31 * 0x10 + 8);
        *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
        lVar28 = *(long *)(param_4 + 0x30);
        if (lVar28 != 0) {
          if (*(uint *)(param_1 + 0xe8) < *(uint *)(lVar28 + 0x18)) {
            iVar11 = *(int *)(param_1 + 0x158c);
            lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x178;
            *(undefined8 *)(lVar28 + 0x40) = *(undefined8 *)(param_1 + 0x68);
            *(uint *)(lVar28 + 0x20) = iVar11 + 0xe000U & 0xffff;
            thunk_FUN_02bb0e9c();
            lVar28 = *(long *)(param_4 + 0x30);
            auVar39 = local_d8;
            if (lVar28 != 0) {
              uVar12 = *(uint *)(param_1 + 0xe8);
              if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                *(undefined4 *)(lVar28 + 0x20 + (long)(int)uVar12 * 0x178 + 0x38) =
                     *(undefined4 *)(param_1 + 0x78);
                if (*(long *)(param_1 + 0xe0) != 0) {
                  lVar19 = FUN_05d6fa1c(*(long *)(param_1 + 0xe0),0);
                  auVar39 = local_d8;
                  if (lVar19 != 0) {
                    uVar25 = FUN_037a6268(lVar19,*(undefined4 *)(param_1 + 0x158c),
                                          *(undefined8 *)
                                           Method_System_TypedReference_SetTypedReference__);
                    if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                      *(undefined8 *)(lVar28 + 0x20 + (long)(int)uVar12 * 0x178 + 0x10) = uVar25;
                      thunk_FUN_02bb0e9c();
                      lVar28 = *(long *)(param_4 + 0x30);
                      auVar39 = local_d8;
                      if (lVar28 != 0) {
                        uVar12 = *(uint *)(param_1 + 0xe8);
                        if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                          lVar19 = lVar28 + 0x20 + (long)(int)uVar12 * 0x178;
                          *(undefined1 *)(lVar19 + 8) = *(undefined1 *)(param_1 + 0x1588);
                          *(int *)(lVar19 + 4) = iVar10;
                          if (uVar32 < *(uint *)(param_2 + 0x18)) {
                            *(int *)(lVar28 + 0x20 + (long)(int)uVar12 * 0x178 + 0xc) =
                                 (*(int *)(lVar27 + (long)(int)uVar32 * 0x10 + 8) - iVar10) + 1;
                            *(undefined1 *)(param_1 + 0x1588) = 1;
                            uVar31 = uVar32;
                            goto LAB_05d6bbd8;
                          }
                        }
                        goto LAB_05d6c3f8;
                      }
                      goto LAB_05d6c3f4;
                    }
                    goto LAB_05d6c3f8;
                  }
                }
                goto LAB_05d6c3f4;
              }
              goto LAB_05d6c3f8;
            }
            goto LAB_05d6c3f4;
          }
          goto LAB_05d6c3f8;
        }
        goto LAB_05d6c3f4;
      }
      goto LAB_05d6c3f8;
    }
    goto LAB_05d6c3f4;
  }
LAB_05d6b274:
  lVar19 = *plVar36;
  local_a4[0] = 0;
  lVar28 = *plVar33;
  if (*(char *)(param_1 + 0x1588) != '\x01') goto LAB_05d6b350;
  uVar32 = *(uint *)(param_1 + 300);
  if ((uVar32 >> 4 & 1) == 0) {
    if ((uVar32 >> 3 & 1) == 0) {
      if ((uVar32 >> 5 & 1) != 0) goto LAB_05d6b2a8;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar18 = FUN_04cfa518(uVar12,0);
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar12 = FUN_04cfa9b8(uVar12,0);
        goto LAB_05d6b34c;
      }
    }
  }
  else {
LAB_05d6b2a8:
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar18 = FUN_04cfa5b8(uVar12,0);
    if ((uVar18 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar12 = FUN_04cfa840(uVar12,0);
LAB_05d6b34c:
      uVar12 = uVar12 & 0xffff;
    }
  }
LAB_05d6b350:
  uVar32 = uVar31 + 1;
  if ((int)uVar32 < (int)*(uint *)(param_2 + 0x18)) {
    if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_05d6c3f8;
    iVar10 = *(int *)(lVar27 + (long)(int)uVar32 * 0x10 + 4);
  }
  else {
    iVar10 = 0;
  }
  uVar38 = uVar12;
  if (*(char *)(param_3 + 0x80) == '\0') {
LAB_05d6b430:
    lVar37 = FUN_05d6d9c8(param_1,param_3,uVar12,*(undefined8 *)(param_1 + 0x68),
                          *(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x13c),local_a4,
                          bVar8 & 1);
    if (lVar37 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar31) goto LAB_05d6c3f8;
      FUN_05d6dddc(0,uVar12,*(undefined4 *)(lVar27 + (long)(int)uVar31 * 0x10 + 8),*plVar36,param_4)
      ;
      auVar39 = local_d8;
      if (plVar26 == (long *)0x0) goto LAB_05d6c3f4;
      uVar38 = *(uint *)((long)plVar26 + 0x3c);
      bVar7 = *(uint *)(param_2 + 0x18) <= uVar31;
      if (uVar38 == 0) {
        if (bVar7) goto LAB_05d6c3f8;
        uVar38 = 0x25a1;
      }
      else if (bVar7) goto LAB_05d6c3f8;
      *puVar34 = uVar38;
      lVar37 = FUN_05d6e610(uVar38,*(undefined8 *)(param_1 + 0x68),1,*(undefined4 *)(param_1 + 300),
                            *(undefined4 *)(param_1 + 0x13c),local_a4,bVar8 & 1,0);
      if (lVar37 == 0) {
        lVar37 = *plVar36;
        auVar39 = local_d8;
        if (lVar37 == 0) goto LAB_05d6c3f4;
        uVar13 = FUN_05d4bd48(lVar37,0);
        if (*(char *)(param_1 + 0xf4) == '\0') {
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = *(undefined4 *)(param_3 + 0x7c);
        }
        uVar25 = (**(code **)(*plVar26 + 0x198))
                           (plVar26,uVar13 & 1,uVar16,*(undefined8 *)(*plVar26 + 0x1a0));
        uVar35 = FUN_05d71204(plVar26,0);
        in_stack_fffffffffffffe50 =
             CONCAT71((int7)(in_stack_fffffffffffffe50 >> 8),bVar8) & 0xffffffffffffff01;
        lVar37 = FUN_05d6ecb0(uVar38,lVar37,uVar25,uVar35,1,*(undefined4 *)(param_1 + 300),
                              *(undefined4 *)(param_1 + 0x13c),local_a4,in_stack_fffffffffffffe50,0)
        ;
        if (lVar37 == 0) {
          lVar37 = plVar26[4];
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar18 = FUN_05c8c45c(lVar37,0,0);
          if ((uVar18 & 1) != 0) {
            lVar37 = FUN_05d6e610(uVar38,plVar26[4],1,*(undefined4 *)(param_1 + 300),
                                  *(undefined4 *)(param_1 + 0x13c),local_a4,bVar8 & 1,0);
            if (lVar37 != 0) goto LAB_05d6b59c;
          }
          if (*(uint *)(param_2 + 0x18) <= uVar31) goto LAB_05d6c3f8;
          uVar38 = 0x20;
          *puVar34 = 0x20;
          lVar37 = FUN_05d6e610(0x20,*(undefined8 *)(param_1 + 0x68),1,
                                *(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x13c),
                                local_a4,bVar8 & 1,0);
          if (lVar37 == 0) {
            if (*(uint *)(param_2 + 0x18) <= uVar31) goto LAB_05d6c3f8;
            uVar38 = 3;
            *puVar34 = 3;
            lVar37 = FUN_05d6e610(3,*(undefined8 *)(param_1 + 0x68),1,*(undefined4 *)(param_1 + 300)
                                  ,*(undefined4 *)(param_1 + 0x13c),local_a4,bVar8 & 1,0);
          }
        }
      }
LAB_05d6b59c:
      if ((char)plVar26[0x12] != '\0') {
        uVar18 = FUN_05c35948(0);
        if (uVar12 >> 0x10 == 0) {
          local_a0 = CONCAT44(local_a0._4_4_,uVar12);
          uVar25 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_a0);
          puVar22 = (undefined8 *)Method_UIController_SpawnWorldText__;
        }
        else {
          local_a0 = CONCAT44(local_a0._4_4_,uVar12);
          uVar25 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_a0);
          puVar22 = (undefined8 *)Method_UIController_ShowGameOverUI__;
        }
        uVar35 = *puVar22;
        plVar17 = *(long **)(param_3 + 0x48);
        auVar39 = local_d8;
        if ((uVar18 & 1) == 0) {
          if (plVar17 == (long *)0x0) goto LAB_05d6c3f4;
          uVar20 = thunk_FUN_05c92238(plVar17,0);
        }
        else {
          if (plVar17 == (long *)0x0) goto LAB_05d6c3f4;
          uVar16 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
          local_a0 = CONCAT44(local_a0._4_4_,uVar16);
          uVar20 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_a0);
        }
        auVar39 = local_d8;
        if (lVar37 == 0) goto LAB_05d6c3f4;
        uVar16 = FUN_05d6ffcc(lVar37,0);
        local_a0 = CONCAT44(local_a0._4_4_,uVar16);
        uVar21 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_a0);
        uVar25 = FUN_04c0af6c(uVar35,uVar25,uVar20,uVar21,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c41e34(uVar25,0);
      }
    }
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_Universal_ScriptableRenderer_get_cameraColorTarget__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar18 = FUN_05d7a6e4(uVar12,0);
    if (((uVar18 & 1) == 0) || (iVar10 == 0xfe0e)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Rendering_Universal_ScriptableRenderer_get_cameraColorTarget__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar18 = FUN_05d7a664(uVar12,0);
      if (((uVar18 & 1) == 0) || (iVar10 != 0xfe0f)) goto LAB_05d6b430;
    }
    auVar39 = local_d8;
    if (plVar26 == (long *)0x0) goto LAB_05d6c3f4;
    lVar37 = plVar26[9];
    if ((lVar37 == 0) || (*(int *)(lVar37 + 0x18) < 1)) goto LAB_05d6b430;
    in_stack_fffffffffffffe50 = 0;
    lVar37 = FUN_05d6efec(uVar12,*(undefined8 *)(param_1 + 0x68),lVar37,1,
                          *(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x13c),local_a4,
                          bVar8 & 1,0);
    if (lVar37 == 0) goto LAB_05d6b430;
  }
  lVar29 = *(long *)(param_4 + 0x30);
  auVar39 = local_d8;
  if (lVar29 == 0) goto LAB_05d6c3f4;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_05d6c3f8;
  puVar22 = (undefined8 *)(lVar29 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x178 + 0x38);
  *puVar22 = 0;
  thunk_FUN_02bb0e9c(puVar22,0);
  auVar39 = local_d8;
  if (lVar37 == 0) goto LAB_05d6c3f4;
  cVar9 = FUN_05d72fb4(lVar37,0);
  if (cVar9 == '\x01') {
    lVar29 = FUN_05d6eca8(lVar37,0);
    auVar39 = local_d8;
    if (lVar29 == 0) goto LAB_05d6c3f4;
    iVar11 = FUN_05d70ea0(lVar29,0);
    auVar39 = local_d8;
    if (*plVar36 == 0) goto LAB_05d6c3f4;
    iVar14 = FUN_05d70ea0(*plVar36,0);
    bVar7 = iVar11 != iVar14;
    if (bVar7) {
      plVar17 = (long *)FUN_05d6eca8(lVar37,0);
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)0x0;
        *plVar36 = 0;
      }
      else {
        lVar29 = *(long *)
                  Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
        ;
        bVar1 = *(byte *)(lVar29 + 0x130);
        if (*(byte *)(*plVar17 + 0x130) < bVar1) {
          plVar30 = (long *)0x0;
        }
        else {
          plVar30 = plVar17;
          if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != lVar29) {
            plVar30 = (long *)0x0;
          }
        }
        *plVar36 = (long)plVar30;
        if (*(byte *)(*plVar17 + 0x130) < bVar1) {
          plVar17 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != lVar29) {
          plVar17 = (long *)0x0;
        }
      }
      thunk_FUN_02bb0e9c(plVar36,plVar17);
    }
    if ((0xffffffef < iVar10 - 0xfe10U) || (0xffffff0f < iVar10 - 0xe01f0U)) {
      auVar39 = local_d8;
      if (*plVar36 == 0) goto LAB_05d6c3f4;
      uVar18 = FUN_05d54028(*plVar36,uVar38,iVar10,&local_bc,0);
      if ((uVar18 & 1) == 0) {
        auVar39 = local_d8;
        if (*plVar36 == 0) goto LAB_05d6c3f4;
        local_bc = FUN_05d51464(*plVar36,uVar38,iVar10,0);
        auVar39 = local_d8;
        if (*plVar36 == 0) goto LAB_05d6c3f4;
        FUN_05d53f7c(*plVar36,uVar38,iVar10,local_bc,0);
      }
      if (local_bc != 0) {
        auVar39 = local_d8;
        if (*plVar36 == 0) goto LAB_05d6c3f4;
        uVar18 = FUN_05d540d4(*plVar36,local_bc,&local_c8,0);
        if ((uVar18 & 1) != 0) {
          lVar29 = *(long *)(param_4 + 0x30);
          auVar39 = local_d8;
          if (lVar29 == 0) goto LAB_05d6c3f4;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_05d6c3f8;
          *(undefined8 *)(lVar29 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x178 + 0x38) = local_c8;
          thunk_FUN_02bb0e9c();
        }
      }
      if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_05d6c3f8;
      *(undefined4 *)(lVar27 + (long)(int)uVar32 * 0x10 + 4) = 0x1a;
      uVar31 = uVar32;
    }
    if ((bVar8 & 1) != 0) {
      auVar39 = local_d8;
      if (*plVar36 == 0) goto LAB_05d6c3f4;
      lVar29 = FUN_05d4bd8c(*plVar36,0);
      auVar39 = local_d8;
      if (lVar29 == 0) goto LAB_05d6c3f4;
      lVar29 = *(long *)(lVar29 + 0x38);
      uVar16 = FUN_05d6ffac(lVar37,0);
      auVar39 = local_d8;
      if (lVar29 == 0) goto LAB_05d6c3f4;
      uVar18 = FUN_045e2b94(lVar29,uVar16,&local_b8,
                            *(undefined8 *)
                             Method_Meta_XR_ImmersiveDebugger_Manager_TweakUtils_Register<bool>__);
      if ((uVar18 & 1) != 0) {
        if (local_b8 != 0) {
          iVar10 = 0;
          auVar39 = local_d8;
          while (local_d8 = auVar39, iVar10 < *(int *)(local_b8 + 0x18)) {
            auVar39 = FUN_0376f958(local_b8,iVar10,*(undefined8 *)Method_UIController_DisplayCombo__
                                  );
            local_d8 = auVar39;
            lVar29 = FUN_05d42744(local_d8,0);
            auVar39 = local_d8;
            if (lVar29 == 0) goto LAB_05d6c3f4;
            uVar18 = *(ulong *)(lVar29 + 0x18);
            iVar11 = FUN_05d42754(local_d8,0);
            iVar14 = (int)uVar18;
            if (1 < iVar14) {
              lVar29 = 0;
              do {
                uVar12 = uVar31 + 1 + (int)lVar29;
                if (*(uint *)(param_2 + 0x18) <= uVar12) goto LAB_05d6c3f8;
                auVar39 = local_d8;
                if (*plVar36 == 0) goto LAB_05d6c3f4;
                iVar15 = FUN_05d5133c(*plVar36,*(undefined4 *)
                                                (lVar27 + (long)(int)uVar12 * 0x10 + 4),local_dc,0);
                lVar23 = FUN_05d42744(local_d8,0);
                auVar39 = local_d8;
                if (lVar23 == 0) goto LAB_05d6c3f4;
                if (*(uint *)(lVar23 + 0x18) <= (int)lVar29 + 1U) goto LAB_05d6c3f8;
                if (iVar15 != *(int *)(lVar23 + lVar29 * 4 + 0x24)) goto LAB_05d6ba44;
                lVar29 = lVar29 + 1;
              } while (iVar14 + -1 != (int)lVar29);
            }
            auVar39 = local_d8;
            if (iVar11 != 0) {
              if (*plVar36 == 0) goto LAB_05d6c3f4;
              uVar24 = FUN_05d540d4(*plVar36,iVar11,&local_e8,0);
              auVar39 = local_d8;
              if ((uVar24 & 1) != 0) {
                lVar29 = *(long *)(param_4 + 0x30);
                if (lVar29 == 0) goto LAB_05d6c3f4;
                if (*(uint *)(lVar29 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_05d6c3f8;
                *(undefined8 *)(lVar29 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x178 + 0x38) =
                     local_e8;
                thunk_FUN_02bb0e9c();
                if (iVar14 < 1) goto LAB_05d6c0d4;
                uVar24 = 0;
                goto LAB_05d6c094;
              }
            }
LAB_05d6ba44:
            iVar10 = iVar10 + 1;
            if (local_b8 == 0) goto LAB_05d6c3f4;
          }
          goto LAB_05d6ba60;
        }
        if (*(char *)(param_1 + 0x19f0) == '\0') goto LAB_05d6c108;
        goto LAB_05d6c0f8;
      }
    }
  }
  else {
    bVar7 = false;
  }
  goto LAB_05d6ba60;
LAB_05d6c094:
  do {
    if (uVar24 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar31) goto LAB_05d6c3f8;
      *(int *)(lVar27 + (long)(int)uVar31 * 0x10 + 0xc) = iVar14;
    }
    else {
      uVar12 = uVar31 + (int)uVar24;
      if (*(uint *)(param_2 + 0x18) <= uVar12) goto LAB_05d6c3f8;
      *(undefined4 *)(lVar27 + (long)(int)uVar12 * 0x10 + 4) = 0x1a;
    }
    uVar24 = uVar24 + 1;
  } while ((uVar18 & 0xffffffff) != uVar24);
LAB_05d6c0d4:
  uVar31 = (uVar31 + iVar14) - 1;
LAB_05d6ba60:
  lVar29 = *(long *)(param_4 + 0x30);
  auVar39 = local_d8;
  if (lVar29 == 0) goto LAB_05d6c3f4;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_05d6c3f8;
  lVar29 = lVar29 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x178;
  *(long *)(lVar29 + 0x30) = lVar37;
  *(undefined1 *)(lVar29 + 0x28) = 1;
  thunk_FUN_02bb0e9c();
  lVar29 = *(long *)(param_4 + 0x30);
  auVar39 = local_d8;
  if (lVar29 == 0) goto LAB_05d6c3f4;
  uVar12 = *(uint *)(param_1 + 0xe8);
  if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_05d6c3f8;
  puVar34 = (uint *)(lVar29 + 0x20 + (long)(int)uVar12 * 0x178);
  *(undefined1 *)(puVar34 + 0xf) = local_a4[0];
  *puVar34 = uVar38 & 0xffff;
  if (*(uint *)(param_2 + 0x18) <= uVar31) goto LAB_05d6c3f8;
  lVar23 = lVar27 + (long)(int)uVar31 * 0x10;
  lVar29 = lVar29 + 0x20 + (long)(int)uVar12 * 0x178;
  uVar16 = *(undefined4 *)(lVar23 + 8);
  *(long *)(lVar29 + 0x20) = *plVar36;
  *(undefined4 *)(lVar29 + 4) = uVar16;
  *(undefined4 *)(lVar29 + 0xc) = *(undefined4 *)(lVar23 + 0xc);
  thunk_FUN_02bb0e9c();
  cVar9 = FUN_05d72fb4(lVar37,0);
  if (cVar9 == '\x02') {
    plVar17 = (long *)FUN_05d6eca8(lVar37,0);
    auVar39 = local_d8;
    if (plVar17 == (long *)0x0) goto LAB_05d6c3f4;
    bVar1 = *(byte *)(*(long *)Method_System_Reflection_Emit_TypeBuilder_get_Namespace__ + 0x130);
    if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Reflection_Emit_TypeBuilder_get_Namespace__)) goto LAB_05d6c3f4;
    uVar12 = FUN_05d4a71c(plVar17[5],plVar17,param_1 + 0x15c0,*(undefined8 *)(param_1 + 0x19e8),0);
    lVar28 = *(long *)(param_1 + 0x15c0);
    *(uint *)(param_1 + 0x78) = uVar12;
    auVar39 = local_d8;
    if (lVar28 == 0) goto LAB_05d6c3f4;
    if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_05d6c3f8;
    lVar28 = lVar28 + (long)(int)uVar12 * 0x38;
    *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
    lVar28 = *(long *)(param_4 + 0x30);
    if (lVar28 == 0) goto LAB_05d6c3f4;
    uVar12 = *(uint *)(param_1 + 0xe8);
    if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_05d6c3f8;
    lVar28 = lVar28 + (long)(int)uVar12 * 0x178;
    *(undefined1 *)(lVar28 + 0x28) = 2;
    *(undefined4 *)(lVar28 + 0x58) = *(undefined4 *)(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x1588) = 1;
LAB_05d6bbd8:
    *(undefined4 *)(param_1 + 0x78) = local_144;
    local_174 = local_174 + 1;
    goto LAB_05d6c028;
  }
  if (bVar7) {
    auVar39 = local_d8;
    if (*plVar36 == 0) goto LAB_05d6c3f4;
    iVar10 = FUN_05d70ea0(*plVar36,0);
    auVar39 = local_d8;
    if (*(long *)(param_3 + 0x48) == 0) goto LAB_05d6c3f4;
    iVar11 = FUN_05d70ea0(*(long *)(param_3 + 0x48),0);
    if (iVar10 != iVar11) {
      auVar39 = local_d8;
      if (plVar26 == (long *)0x0) goto LAB_05d6c3f4;
      if ((char)plVar26[7] == '\0') {
        if (*plVar36 == 0) goto LAB_05d6c3f4;
        uVar25 = *(undefined8 *)(*plVar36 + 0x28);
      }
      else {
        if (*plVar36 == 0) goto LAB_05d6c3f4;
        uVar25 = *(undefined8 *)(*plVar36 + 0x28);
        lVar29 = *plVar33;
        if (*(int *)(*(long *)Method_System_Diagnostics_TraceListenerCollection_InitializeListener__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar25 = FUN_05d49b1c(lVar29,uVar25,0);
      }
      *(undefined8 *)(param_1 + 0x70) = uVar25;
      thunk_FUN_02bb0e9c(plVar33);
      uVar16 = FUN_05d4a51c(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
                            param_1 + 0x15c0,*(undefined8 *)(param_1 + 0x19e8),0);
      *(undefined4 *)(param_1 + 0x78) = uVar16;
    }
  }
  lVar29 = FUN_05d72fc4(lVar37,0);
  auVar39 = local_d8;
  if (lVar29 == 0) goto LAB_05d6c3f4;
  iVar10 = FUN_05d3dde8(lVar29,0);
  if (0 < iVar10) {
    lVar29 = *plVar36;
    lVar23 = *plVar33;
    lVar37 = FUN_05d72fc4(lVar37,0);
    auVar39 = local_d8;
    if (lVar37 == 0) goto LAB_05d6c3f4;
    uVar16 = FUN_05d3dde8(lVar37,0);
    if (*(int *)(*(long *)Method_System_Diagnostics_TraceListenerCollection_InitializeListener__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_System_Diagnostics_TraceListenerCollection_InitializeListener__);
    }
    uVar25 = FUN_05d4a1d4(lVar29,lVar23,uVar16,0);
    *(undefined8 *)(param_1 + 0x70) = uVar25;
    thunk_FUN_02bb0e9c(plVar33,uVar25);
    uVar16 = FUN_05d4a51c(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
                          param_1 + 0x15c0,*(undefined8 *)(param_1 + 0x19e8),0);
    *(undefined4 *)(param_1 + 0x78) = uVar16;
    bVar7 = true;
  }
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar18 = FUN_04cf7fe0(uVar38,0);
  if (((uVar18 & 1) == 0) && (uVar38 != 0x200b)) {
    lVar37 = *(long *)(param_1 + 0x15c0);
    if (*(char *)(param_3 + 0xa0) == '\0') {
LAB_05d6bf34:
      auVar39 = local_d8;
      if (lVar37 == 0) goto LAB_05d6c3f4;
    }
    else {
      auVar39 = local_d8;
      if (lVar37 == 0) goto LAB_05d6c3f4;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(param_1 + 0x78)) goto LAB_05d6c3f8;
      if (0x3ffe < *(int *)(lVar37 + (long)(int)*(uint *)(param_1 + 0x78) * 0x38 + 0x54)) {
        uVar35 = *(undefined8 *)(param_1 + 0x70);
        uVar25 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
        FUN_05c59798(uVar25,uVar35,0);
        uVar16 = FUN_05d4a51c(uVar25,*(undefined8 *)(param_1 + 0x68),param_1 + 0x15c0,
                              *(undefined8 *)(param_1 + 0x19e8),0);
        lVar37 = *(long *)(param_1 + 0x15c0);
        *(undefined4 *)(param_1 + 0x78) = uVar16;
        goto LAB_05d6bf34;
      }
    }
    if (*(uint *)(lVar37 + 0x18) <= *(uint *)(param_1 + 0x78)) goto LAB_05d6c3f8;
    lVar37 = lVar37 + (long)(int)*(uint *)(param_1 + 0x78) * 0x38;
    *(int *)(lVar37 + 0x54) = *(int *)(lVar37 + 0x54) + 1;
  }
  lVar37 = *(long *)(param_4 + 0x30);
  auVar39 = local_d8;
  if (lVar37 == 0) goto LAB_05d6c3f4;
  if (*(uint *)(lVar37 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_05d6c3f8;
  *(long *)(lVar37 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x178 + 0x50) = *plVar33;
  thunk_FUN_02bb0e9c();
  lVar37 = *(long *)(param_4 + 0x30);
  auVar39 = local_d8;
  if (lVar37 == 0) goto LAB_05d6c3f4;
  uVar12 = *(uint *)(param_1 + 0xe8);
  if (*(uint *)(lVar37 + 0x18) <= uVar12) goto LAB_05d6c3f8;
  uVar32 = *(uint *)(param_1 + 0x78);
  *(uint *)(lVar37 + (long)(int)uVar12 * 0x178 + 0x58) = uVar32;
  lVar37 = *(long *)(param_1 + 0x15c0);
  if (lVar37 == 0) goto LAB_05d6c3f4;
  if (*(uint *)(lVar37 + 0x18) <= uVar32) goto LAB_05d6c3f8;
  *(bool *)(lVar37 + 0x20 + (long)(int)uVar32 * 0x38 + 0x20) = bVar7;
  if (bVar7) {
    plVar17 = (long *)(lVar37 + 0x20 + (long)(int)uVar32 * 0x38 + 0x28);
    *plVar17 = lVar28;
    thunk_FUN_02bb0e9c(plVar17,lVar28);
    *(long *)(param_1 + 0x68) = lVar19;
    thunk_FUN_02bb0e9c(plVar36);
    *(long *)(param_1 + 0x70) = lVar28;
    thunk_FUN_02bb0e9c(plVar33,lVar28);
    uVar12 = *(uint *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0x78) = local_144;
  }
LAB_05d6c028:
  *(uint *)(param_1 + 0xe8) = uVar12 + 1;
  uVar32 = uVar31;
LAB_05d6c030:
  uVar12 = *(uint *)(param_2 + 0x18);
  uVar31 = uVar32 + 1;
  if ((int)uVar12 <= (int)uVar31) goto LAB_05d6c0ec;
  goto LAB_05d6b000;
}


