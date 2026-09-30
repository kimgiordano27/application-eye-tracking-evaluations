/*
FUNCTION_NAME: FUN_068ad0b8
ENTRY_POINT: 068ad0b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void FUN_068ad0b8(long param_1)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar9 = OVRPlugin_OVRP_1_40_0_TypeInfo;
  puVar8 = OVRPlugin_OVRP_1_3_0_TypeInfo;
  puVar7 = OVRPlugin_OVRP_1_39_0_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_38_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_37_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_35_0_TypeInfo;
  puVar3 = Fusion_LagCompensation_HitboxBuffer_HitboxSnapshot_TypeInfo;
  puVar2 = Best_HTTP_Shared_Extensions_HeaderValue_<>c_TypeInfo;
  if ((DAT_07559107 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_41_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_42_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_43_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_44_0_TypeInfo);
    FUN_03188a78(PTR_DAT_07125a98);
    FUN_03188a78(Oculus_Platform_Message_Callback_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_45_0_TypeInfo);
    FUN_03188a78(Best_HTTP_Shared_Extensions_HeaderValue_<>c_TypeInfo);
    FUN_03188a78(PTR_DAT_07125a90);
    FUN_03188a78(UnityEngine_UIElements_UIR_MeshWriteDataPool_<>c_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_46_0_TypeInfo);
    FUN_03188a78(Fusion_LagCompensation_HitboxBuffer_HitboxSnapshot_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_40_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_47_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_3_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_38_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_48_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_39_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_37_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_35_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_49_0_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_PassData_TypeInfo);
    FUN_03188a78(
                System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_EqualsClass_TypeInfo
                );
    FUN_03188a78(OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__GetCurrentGridAlpha_TypeInfo);
    FUN_03188a78(Best_HTTP_Request_Authentication_DigestStore_<>c__DisplayClass6_0_TypeInfo);
    FUN_03188a78(System_Linq_Expressions_Interpreter_DivInstruction_DivInt32_TypeInfo);
    DAT_07559107 = 1;
  }
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_04ce4180(uVar10,*(undefined8 *)puVar4);
  uVar11 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x278) = uVar10;
  *(undefined1 *)(param_1 + 0x280) = 1;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_04ce4180(uVar10,*(undefined8 *)puVar6);
  uVar11 = *(undefined8 *)puVar7;
  *(undefined8 *)(param_1 + 0x290) = uVar10;
  *(undefined4 *)(param_1 + 0x298) = 1;
  *(undefined1 *)(param_1 + 0x29d) = 1;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_04ce4180(uVar10,*(undefined8 *)puVar8);
  uVar11 = *(undefined8 *)puVar9;
  *(undefined8 *)(param_1 + 0x2a8) = uVar10;
  *(undefined4 *)(param_1 + 0x2b0) = 1;
  *(undefined2 *)(param_1 + 0x2b4) = 0x101;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_0688d3c4(uVar10,0);
  puVar1 = OVRPlugin_OVRP_1_47_0_TypeInfo;
  *(undefined8 *)(param_1 + 0x2b8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_0688d40c(uVar10,0);
  puVar1 = System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_EqualsClass_TypeInfo;
  *(undefined8 *)(param_1 + 0x2c0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_06910818(uVar10,*(undefined8 *)
                       System_Linq_Expressions_Interpreter_DivInstruction_DivInt32_TypeInfo,0,0,2,0)
  ;
  puVar1 = OVR_OpenVR_IVRCompositor__GetCurrentGridAlpha_TypeInfo;
  *(undefined8 *)(param_1 + 0x2c8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_04f7f10c(uVar10,*(undefined8 *)
                       Best_HTTP_Request_Authentication_DigestStore_<>c__DisplayClass6_0_TypeInfo,2,
               *(undefined8 *)OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining_TypeInfo);
  puVar1 = OVRPlugin_OVRP_1_42_0_TypeInfo;
  *(undefined8 *)(param_1 + 0x2d0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_04afe7f0(uVar10,0,1,0,0,*(undefined8 *)OVRPlugin_OVRP_1_41_0_TypeInfo);
  puVar1 = PTR_DAT_07125a90;
  *(undefined8 *)(param_1 + 0x2d8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_042e4268(uVar10,*(undefined8 *)PTR_DAT_07125a98);
  puVar1 = UnityEngine_UIElements_UIR_MeshWriteDataPool_<>c_TypeInfo;
  *(undefined8 *)(param_1 + 0x2e8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_0430d234(uVar10,*(undefined8 *)Oculus_Platform_Message_Callback_TypeInfo);
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x2f0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_042e4268(uVar10,*(undefined8 *)puVar2);
  puVar1 = OVRPlugin_OVRP_1_46_0_TypeInfo;
  *(undefined8 *)(param_1 + 0x2f8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_042e4268(uVar10,*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo);
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x300) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_042e4268(uVar10,*(undefined8 *)puVar2);
  puVar2 = OVRPlugin_OVRP_1_44_0_TypeInfo;
  *(undefined8 *)(param_1 + 0x308) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_05240e94(uVar10,*(undefined8 *)OVRPlugin_OVRP_1_43_0_TypeInfo);
  puVar2 = OVRPlugin_OVRP_1_49_0_TypeInfo;
  *(undefined8 *)(param_1 + 0x310) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_04ce4180(uVar10,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
  puVar2 = UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_PassData_TypeInfo;
  *(undefined8 *)(param_1 + 0x328) = uVar10;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_068b2978(param_1,0);
  return;
}


