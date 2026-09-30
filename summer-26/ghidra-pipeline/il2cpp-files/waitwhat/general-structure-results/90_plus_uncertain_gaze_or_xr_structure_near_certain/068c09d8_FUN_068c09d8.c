/*
FUNCTION_NAME: FUN_068c09d8
ENTRY_POINT: 068c09d8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_068c09d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar9 = Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider_TypeInfo;
  puVar8 = Oculus_Avatar2_OvrPluginTracking_OvrPluginHandTrackingProvider_TypeInfo;
  puVar7 = Oculus_Avatar2_OvrAvatarShaderManager_ShaderType_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_47_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_40_0_TypeInfo;
  puVar4 = UnityEngine_Experimental_GlobalIllumination_Lightmapping_RequestLightsDelegate_TypeInfo;
  puVar3 = UnityEngine_Experimental_GlobalIllumination_Lightmapping_<>c_TypeInfo;
  puVar2 = PTR_DAT_070d2d30;
  puVar1 = PTR_DAT_070d2d18;
  if ((DAT_075591ca & 1) == 0) {
    FUN_03188a78(Oculus_Avatar2_OvrAvatarShaderManager_ShaderType_TypeInfo);
    FUN_03188a78(UnityEngine_Experimental_GlobalIllumination_Lightmapping_<>c_TypeInfo);
    FUN_03188a78(
                UnityEngine_Experimental_GlobalIllumination_Lightmapping_RequestLightsDelegate_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070d2d18);
    FUN_03188a78(Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider_TypeInfo);
    FUN_03188a78(Oculus_Skinning_OvrSkinningTypes_Handle_TypeInfo);
    FUN_03188a78(Best_HTTP_Shared_Extensions_HeaderValue_<>c_TypeInfo);
    FUN_03188a78(Fusion_LagCompensation_HitboxBuffer_HitboxSnapshot_TypeInfo);
    FUN_03188a78(Oculus_Skinning_OvrSkinningTypes_SkinningQuality_TypeInfo);
    FUN_03188a78(Oculus_Avatar2_OvrPluginTracking_OvrPluginHandTrackingProvider_TypeInfo);
    FUN_03188a78(PTR_DAT_070d2d30);
    FUN_03188a78(OVRPlugin_OVRP_1_40_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_47_0_TypeInfo);
    FUN_03188a78(EnvironmentLoader_<Start>d__11_TypeInfo);
    DAT_075591ca = 1;
  }
  uVar11 = _DAT_012e5b60;
  *(undefined8 *)(param_1 + 0x148) = _UNK_012e5b68;
  *(undefined8 *)(param_1 + 0x140) = uVar11;
  *(undefined4 *)(param_1 + 0x150) = 0x3ba3d70a;
  uVar10 = FUN_069d7e0c(0xffffffff,0);
  *(undefined4 *)(param_1 + 0x154) = uVar10;
  uVar11 = *(undefined8 *)puVar5;
  *(undefined4 *)(param_1 + 0x158) = 1;
  *(undefined2 *)(param_1 + 0x15c) = 0x101;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_0688d3c4(uVar11,0);
  uVar12 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x160) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_0688d40c(uVar11,0);
  uVar12 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x168) = uVar11;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_04b17090(uVar11,&local_a0,1,0,0,*(undefined8 *)puVar3);
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)(param_1 + 0x170) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_068f2754(uVar11,0);
  uVar12 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x178) = uVar11;
  *(undefined1 *)(param_1 + 0x19c) = 1;
  uVar11 = FUN_03188b1c(uVar12,0x19);
  uVar12 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x1b0) = uVar11;
  uVar11 = FUN_03188b1c(uVar12,0x19);
  uVar12 = *(undefined8 *)puVar8;
  *(undefined8 *)(param_1 + 0x1b8) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_044d6a08(uVar11,*(undefined8 *)puVar9);
  puVar1 = Oculus_Skinning_OvrSkinningTypes_SkinningQuality_TypeInfo;
  *(undefined8 *)(param_1 + 0x1c0) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_042e4268(uVar11,*(undefined8 *)Oculus_Skinning_OvrSkinningTypes_Handle_TypeInfo);
  puVar1 = Fusion_LagCompensation_HitboxBuffer_HitboxSnapshot_TypeInfo;
  *(undefined8 *)(param_1 + 0x1c8) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_042e4268(uVar11,*(undefined8 *)Best_HTTP_Shared_Extensions_HeaderValue_<>c_TypeInfo);
  puVar1 = EnvironmentLoader_<Start>d__11_TypeInfo;
  *(undefined8 *)(param_1 + 0x1d0) = uVar11;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_068b2d30(param_1);
  return;
}


