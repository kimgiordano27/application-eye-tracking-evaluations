/*
FUNCTION_NAME: FUN_0669bc64
ENTRY_POINT: 0669bc64
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0669bc64(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar7 = Fusion_INetworkObjectInitializer_TypeInfo;
  puVar6 = Meta_XR_MultiplayerBlocks_Colocation_INetworkMessenger_TypeInfo;
  puVar5 = Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo;
  puVar4 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
  puVar3 = PTR_DAT_070f7080;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_07557f54 & 1) == 0) {
    FUN_03188a78(Fusion_INetworkObjectProvider_TypeInfo);
    FUN_03188a78(Fusion_INetworkObjectInitializer_TypeInfo);
    FUN_03188a78(Fusion_INetworkPrefabSource_TypeInfo);
    FUN_03188a78(PTR_DAT_070f7080);
    FUN_03188a78(System_Net_Http_IMonoHttpClientHandler_TypeInfo);
    FUN_03188a78(Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo);
    FUN_03188a78(PTR_DAT_07110880);
    FUN_03188a78(Fusion_INetworkRunnerCallbacks_TypeInfo);
    FUN_03188a78(Fusion_INetworkRunnerUpdater_TypeInfo);
    FUN_03188a78(Meta_XR_MultiplayerBlocks_Colocation_INetworkMessenger_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    DAT_07557f54 = 1;
  }
  puVar8 = Fusion_INetworkObjectProvider_TypeInfo;
  uStack_70 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  FUN_0456d550(param_1,*(undefined8 *)puVar3);
  FUN_0460e7ac(param_1 + 0x10,*(undefined8 *)puVar4);
  FUN_045bca24(param_1 + 0x18,*(undefined8 *)puVar5);
  FUN_0456d550(param_1 + 0x28,*(undefined8 *)puVar3);
  FUN_045befe8(&local_c0,param_1 + 0x38,*(undefined8 *)puVar6);
  iVar11 = (int)local_b0 + 1;
  lVar10 = *(long *)puVar7;
  local_b0 = CONCAT44(local_b0._4_4_,iVar11);
  if (iVar11 < (int)local_b8) {
    do {
      lVar9 = local_c0;
      if ((*(ushort *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      puVar1 = (undefined8 *)(lVar9 + (long)iVar11 * 0x40);
      uStack_d8 = puVar1[5];
      local_e0 = puVar1[4];
      uStack_c8 = puVar1[7];
      local_d0 = puVar1[6];
      uStack_f8 = puVar1[1];
      local_100 = *puVar1;
      uStack_e8 = puVar1[3];
      local_f0 = puVar1[2];
      uStack_a8 = local_100;
      uStack_a0 = uStack_f8;
      uStack_98 = local_f0;
      local_90 = uStack_e8;
      uStack_88 = local_e0;
      uStack_80 = uStack_d8;
      local_78 = local_d0;
      uStack_70 = uStack_c8;
      FUN_0669bf7c(&local_100);
      iVar11 = (int)local_b0 + 1;
      lVar10 = *(long *)puVar7;
      local_b0 = CONCAT44(local_b0._4_4_,iVar11);
    } while (iVar11 < (int)local_b8);
  }
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  System_Collections_Generic_EqualityComparer<NativeArray<ConvertMeshJobData>>__get_Default
            (&local_c0,*(undefined8 *)puVar8);
  puVar6 = Fusion_INetworkRunnerCallbacks_TypeInfo;
  puVar5 = System_Net_Http_IMonoHttpClientHandler_TypeInfo;
  puVar4 = PTR_DAT_07110880;
  FUN_045bec68(param_1 + 0x38,*(undefined8 *)Fusion_INetworkRunnerUpdater_TypeInfo);
  FUN_0456d550(param_1 + 0x48,*(undefined8 *)puVar3);
  FUN_045414ec(param_1 + 0x58,*(undefined8 *)puVar5);
  FUN_0454c0a8(param_1 + 0x68,*(undefined8 *)puVar6);
  FUN_045c65ec(param_1 + 0x78,*(undefined8 *)puVar4);
  FUN_0456d550(param_1 + 0x88,*(undefined8 *)puVar3);
  FUN_0456d550(param_1 + 0x98,*(undefined8 *)puVar3);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


