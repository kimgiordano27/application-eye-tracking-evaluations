/*
FUNCTION_NAME: FUN_0979e538
ENTRY_POINT: 0979e538
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0979e538(long param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 *__src;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  int iVar25;
  undefined1 auStack_350 [96];
  undefined1 auStack_2f0 [96];
  undefined1 auStack_290 [96];
  undefined1 auStack_230 [96];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  
  __src = auStack_350;
  if ((DAT_0a54799c & 1) == 0) {
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<fsConfig,_Dictionary<Type,_fsMetaType>>_TypeInfo
                );
    FUN_04447ba8(System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09fd4590);
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TypeInfo
                );
    FUN_04447ba8(PTR_DAT_09f27510);
    FUN_04447ba8(PTR_DAT_09f286b0);
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<GUILayoutOptions_GUILayoutOptionsInstance,_GUILayoutOption[]>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<LckDiscreetAudioController_AudioClip,_AudioClip>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<NetworkSpawnManager_InstantiateAndSpawnErrorTypes,_string>_TypeInfo
                );
    DAT_0a54799c = 1;
  }
  puVar5 = PTR_DAT_09fd4590;
  puVar4 = PTR_DAT_09f286b0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  iVar18 = param_2[0x14];
  iVar19 = param_2[2];
  iVar17 = param_2[3];
  iVar1 = param_2[8];
  fVar21 = (float)param_2[4];
  fVar20 = (float)param_2[5];
  if (iVar18 == 5) {
    lVar7 = *(long *)PTR_DAT_09f286b0;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar7 = *(long *)puVar4;
    }
    piVar10 = (int *)(*(long *)(lVar7 + 0xb8) + 0xc);
  }
  else {
    lVar7 = *(long *)PTR_DAT_09f286b0;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar7 = *(long *)puVar4;
    }
    if (iVar18 == 4) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb8) + 0x14);
    }
    else {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb8) + 8);
    }
  }
  lVar7 = *(long *)puVar5;
  iVar22 = *piVar10;
  iVar18 = param_2[1];
  lVar13 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar7 = *(long *)puVar5;
  }
  fVar23 = 0.0;
  if (lVar13 != **(long **)(lVar7 + 0xb8)) {
    lVar13 = *(long *)(param_2 + 0x12);
    lVar14 = *(long *)(param_1 + 0x18);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (DAT_0a5479f9 == '\0') {
      FUN_04447ba8(PTR_DAT_09fd4590);
      DAT_0a5479f9 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar23 = (float)((double)(lVar13 - lVar14) / DAT_01c748a0);
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x12);
  if (*param_2 - 1U < 6) {
    iVar18 = iVar18 + iVar22;
    switch(*param_2) {
    case 1:
      if (DAT_0a51c24f == '\0') {
        FUN_04447ba8(PTR_DAT_09f1f580);
        DAT_0a51c24f = '\x01';
      }
      fVar15 = ABS(fVar21);
      if (ABS(fVar21) <= 0.0) {
        fVar15 = 0.0;
      }
      fVar16 = **(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) * 8.0;
      fVar3 = fVar15 * DAT_01c762f8;
      if (fVar15 * DAT_01c762f8 <= fVar16) {
        fVar3 = fVar16;
      }
      if (ABS(0.0 - fVar21) < fVar3) {
        fVar15 = ABS(fVar20);
        if (ABS(fVar20) <= 0.0) {
          fVar15 = 0.0;
        }
        fVar3 = fVar15 * DAT_01c762f8;
        if (fVar15 * DAT_01c762f8 <= fVar16) {
          fVar3 = fVar16;
        }
        if (ABS(0.0 - fVar20) < fVar3) {
          return;
        }
      }
      lVar13 = *(long *)(param_1 + 0x10);
      local_f8 = 0;
      FUN_0613c680(&local_f8,iVar1,*(undefined8 *)PTR_DAT_09f27510);
      puVar4 = 
      System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
      ;
      lVar7 = *(long *)
               System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
      ;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar4;
      }
      uVar8 = local_f8;
      lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar4;
        }
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
        lVar14 = thunk_FUN_0448520c(*(undefined8 *)
                                     System_Collections_Generic_Dictionary<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_TypeInfo
                                   );
        FUN_05577264(lVar14,uVar12,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<GUILayoutOptions_GUILayoutOptionsInstance,_GUILayoutOption[]>_TypeInfo
                     ,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar9 = lVar14;
        thunk_FUN_044bb4b4(plVar9,lVar14);
      }
      memcpy(auStack_230,param_2,0x60);
      __src = auStack_230;
      uVar12 = *(undefined8 *)
                System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_TypeInfo
      ;
      break;
    case 2:
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 != 0) {
        iVar17 = param_2[6];
        iVar18 = param_2[7];
        if (*(char *)(lVar7 + 0x3b) != '\0') {
          local_100 = *(undefined8 *)(param_2 + 6);
          uVar8 = FUN_0614c070(&local_100,0,0,0);
          uVar8 = FUN_078a7764(*(undefined8 *)
                                System_Collections_Generic_Dictionary<NetworkSpawnManager_InstantiateAndSpawnErrorTypes,_string>_TypeInfo
                               ,uVar8,0);
          FUN_0979dd94(lVar7,uVar8);
          lVar7 = *(long *)(param_1 + 0x10);
        }
        lVar13 = *(long *)puVar4;
        iVar22 = param_2[2];
        iVar19 = param_2[3];
        iVar25 = param_2[4];
        iVar24 = param_2[5];
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar13 = *(long *)puVar4;
        }
        uVar2 = *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 8);
        local_f8 = 0;
        FUN_0613c680(&local_f8,iVar1,*(undefined8 *)PTR_DAT_09f27510);
        puVar4 = 
        System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
        ;
        lVar13 = *(long *)
                  System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
        ;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar13 = *(long *)puVar4;
        }
        uVar8 = local_f8;
        lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
        if (lVar14 == 0) {
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar13 = *(long *)puVar4;
          }
          uVar12 = **(undefined8 **)(lVar13 + 0xb8);
          lVar14 = thunk_FUN_0448520c(*(undefined8 *)
                                       System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TypeInfo
                                     );
          FUN_05577080(lVar14,uVar12,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<LckDiscreetAudioController_AudioClip,_AudioClip>_TypeInfo
                       ,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
          *plVar9 = lVar14;
          lVar13 = thunk_FUN_044bb4b4(plVar9,lVar14);
        }
        uVar6 = FUN_0979f8f8(lVar13,param_2[0x16]);
        local_f0 = 0;
        local_f8 = 0;
        FUN_06c6ed94(iVar17,iVar18,&local_f8,uVar6,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_TypeInfo
                    );
        if (lVar7 != 0) {
          FUN_04cba760(iVar22,iVar19,0,iVar25,iVar24,0,lVar7,uVar2,uVar8,lVar14,local_f8,local_f0,0,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<fsConfig,_Dictionary<Type,_fsMetaType>>_TypeInfo
                      );
          return;
        }
      }
      goto LAB_0979eea0;
    case 3:
      lVar13 = *(long *)(param_1 + 0x10);
      local_f8 = 0;
      FUN_0613c680(&local_f8,iVar1,*(undefined8 *)PTR_DAT_09f27510);
      puVar4 = 
      System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
      ;
      lVar7 = *(long *)
               System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
      ;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar4;
      }
      uVar8 = local_f8;
      lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar4;
        }
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
        lVar14 = thunk_FUN_0448520c(*(undefined8 *)
                                     System_Collections_Generic_Dictionary<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_TypeInfo
                                   );
        FUN_05577264(lVar14,uVar12,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_TypeInfo
                     ,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        *plVar9 = lVar14;
        thunk_FUN_044bb4b4(plVar9,lVar14);
      }
      memcpy(auStack_290,param_2,0x60);
      uVar12 = *(undefined8 *)
                System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_TypeInfo
      ;
      __src = auStack_290;
      break;
    case 4:
      lVar13 = *(long *)(param_1 + 0x10);
      local_f8 = 0;
      FUN_0613c680(&local_f8,iVar1,*(undefined8 *)PTR_DAT_09f27510);
      puVar4 = 
      System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
      ;
      lVar7 = *(long *)
               System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
      ;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar4;
      }
      uVar8 = local_f8;
      lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar4;
        }
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
        lVar14 = thunk_FUN_0448520c(*(undefined8 *)
                                     System_Collections_Generic_Dictionary<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_TypeInfo
                                   );
        FUN_05577264(lVar14,uVar12,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
                     ,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
        *plVar9 = lVar14;
        thunk_FUN_044bb4b4(plVar9,lVar14);
      }
      memcpy(auStack_2f0,param_2,0x60);
      local_170 = 0;
      uVar12 = *(undefined8 *)
                System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_TypeInfo
      ;
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      memcpy(&local_f8,auStack_2f0,0x60);
      FUN_06c9a168(fVar23,&local_1d0,&local_f8,iVar18,uVar12);
      if (lVar13 == 0) goto LAB_0979eea0;
      uVar11 = *(undefined8 *)
                System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_TypeInfo;
      memcpy(&local_f8,&local_1d0,0x68);
      uVar12 = 1;
      goto LAB_0979ee6c;
    case 5:
      goto switchD_0979e790_caseD_5;
    case 6:
      lVar13 = *(long *)(param_1 + 0x10);
      local_f8 = 0;
      FUN_0613c680(&local_f8,iVar1,*(undefined8 *)PTR_DAT_09f27510);
      puVar4 = 
      System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
      ;
      lVar7 = *(long *)
               System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
      ;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar4;
      }
      uVar8 = local_f8;
      lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar4;
        }
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
        lVar14 = thunk_FUN_0448520c(*(undefined8 *)
                                     System_Collections_Generic_Dictionary<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_TypeInfo
                                   );
        FUN_05577264(lVar14,uVar12,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_TypeInfo
                     ,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
        *plVar9 = lVar14;
        thunk_FUN_044bb4b4(plVar9,lVar14);
      }
      memcpy(auStack_350,param_2,0x60);
      uVar12 = *(undefined8 *)
                System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_TypeInfo
      ;
    }
    local_170 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    memcpy(&local_f8,__src,0x60);
    FUN_06c9a168(fVar23,&local_1d0,&local_f8,iVar18,uVar12);
    if (lVar13 != 0) {
      uVar11 = *(undefined8 *)
                System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_TypeInfo;
      memcpy(&local_f8,&local_1d0,0x68);
      uVar12 = 0;
LAB_0979ee6c:
      FUN_04cbb64c(iVar19,iVar17,0,fVar21,fVar20,0,lVar13,iVar18,uVar8,lVar14,&local_f8,uVar12,
                   uVar11);
      return;
    }
  }
  else {
switchD_0979e790_caseD_5:
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      if (*(char *)(lVar7 + 0x3b) == '\0') {
        return;
      }
      memcpy(&local_160,param_2,0x60);
      uVar8 = FUN_0959da5c(&local_160,0);
      uVar8 = FUN_078a7764(*(undefined8 *)
                            System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                           ,uVar8,0);
      FUN_0979dd94(lVar7,uVar8);
      return;
    }
  }
LAB_0979eea0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


