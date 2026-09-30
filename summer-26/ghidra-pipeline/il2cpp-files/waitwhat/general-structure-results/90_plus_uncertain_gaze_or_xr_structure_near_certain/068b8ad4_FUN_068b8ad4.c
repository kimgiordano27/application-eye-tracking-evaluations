/*
FUNCTION_NAME: FUN_068b8ad4
ENTRY_POINT: 068b8ad4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_068b8ad4(long param_1)

{
  undefined8 uVar1;
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
  
  puVar9 = UnityEngine_XR_OpenXR_OpenXRLoaderBase_FeatureLoggingInfo_TypeInfo;
  puVar8 = UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_TypeInfo;
  puVar7 = OVRPlugin_OVRP_1_47_0_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_40_0_TypeInfo;
  puVar5 = System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_EqualsClass_TypeInfo;
  puVar4 = OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining_TypeInfo;
  puVar3 = OVR_OpenVR_IVRCompositor__GetCurrentGridAlpha_TypeInfo;
  puVar2 = System_Linq_Expressions_Interpreter_DivInstruction_DivInt32_TypeInfo;
  if ((DAT_075591fe & 1) == 0) {
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEventDelegate_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_TypeInfo
                );
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRLoaderBase_FeatureLoggingInfo_TypeInfo);
    FUN_03188a78(Best_HTTP_Shared_Extensions_HeaderValue_<>c_TypeInfo);
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_TypeInfo);
    FUN_03188a78(Fusion_LagCompensation_HitboxBuffer_HitboxSnapshot_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070d2d30);
    FUN_03188a78(OVRPlugin_OVRP_1_40_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_47_0_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_PassData_TypeInfo);
    FUN_03188a78(
                System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_EqualsClass_TypeInfo
                );
    FUN_03188a78(OVR_OpenVR_IVRCompositor__GetFrameTimings_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__GetCurrentGridAlpha_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__GetFrameTiming_TypeInfo);
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_TypeInfo);
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo);
    FUN_03188a78(Best_HTTP_Request_Authentication_DigestStore_<>c__DisplayClass6_0_TypeInfo);
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeList_TypeInfo);
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRSettings_DepthSubmissionMode_TypeInfo);
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRSettings_RenderMode_TypeInfo);
    FUN_03188a78(Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo);
    FUN_03188a78(System_Linq_Expressions_Interpreter_DivInstruction_DivInt32_TypeInfo);
    FUN_03188a78(System_Text_RegularExpressions_RegexOptions_TypeInfo);
    DAT_075591fe = 1;
  }
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar8);
  FUN_042e4268(uVar11,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x270) = uVar11;
  *(undefined4 *)(param_1 + 0x280) = 0x41f00000;
  uVar1 = _UNK_012e6de8;
  uVar12 = _DAT_012e6de0;
  uVar11 = _DAT_012e66c0;
  *(undefined8 *)(param_1 + 0x2a0) = _UNK_012e66c8;
  *(undefined8 *)(param_1 + 0x298) = uVar11;
  *(undefined8 *)(param_1 + 0x2b0) = uVar1;
  *(undefined8 *)(param_1 + 0x2a8) = uVar12;
  uVar11 = DAT_012e2e28;
  *(undefined1 *)(param_1 + 0x27c) = 1;
  *(undefined4 *)(param_1 + 0x2b8) = 0x14;
  *(undefined8 *)(param_1 + 0x2c0) = uVar11;
  uVar10 = FUN_069d7e0c(0xffffffff,0);
  *(undefined4 *)(param_1 + 0x2d4) = uVar10;
  *(undefined4 *)(param_1 + 0x2e4) = 0x3f000000;
  uVar11 = DAT_012e18c0;
  uVar12 = *(undefined8 *)puVar6;
  *(undefined4 *)(param_1 + 0x2ec) = 0x40400000;
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  *(undefined8 *)(param_1 + 0x2d8) = 0x100000001;
  *(undefined2 *)(param_1 + 0x2f2) = 0x101;
  *(undefined8 *)(param_1 + 0x2f8) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_0688d3c4(uVar11,0);
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)(param_1 + 0x310) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_0688d40c(uVar11,0);
  uVar12 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x318) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_06910818(uVar11,*(undefined8 *)puVar2,0,0,2,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x328) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_04f7f10c(uVar11,*(undefined8 *)
                       Best_HTTP_Request_Authentication_DigestStore_<>c__DisplayClass6_0_TypeInfo,2,
               *(undefined8 *)puVar4);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x330) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_04f7f10c(uVar11,*(undefined8 *)
                       UnityEngine_XR_OpenXR_OpenXRSettings_DepthSubmissionMode_TypeInfo,2,
               *(undefined8 *)puVar4);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x338) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_04f7f10c(uVar11,*(undefined8 *)
                       UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeList_TypeInfo,2,
               *(undefined8 *)puVar4);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x340) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_04f7f10c(uVar11,*(undefined8 *)UnityEngine_XR_OpenXR_OpenXRSettings_RenderMode_TypeInfo,2,
               *(undefined8 *)puVar4);
  uVar12 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x348) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_06910818(uVar11,*(undefined8 *)
                       Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo,0,0
               ,2,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x350) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_04f7f10c(uVar11,*(undefined8 *)
                       UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_TypeInfo,2,
               *(undefined8 *)puVar4);
  puVar2 = OVR_OpenVR_IVRCompositor__GetFrameTiming_TypeInfo;
  *(undefined8 *)(param_1 + 0x358) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_04f7e970(uVar11,*(undefined8 *)UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo,0,
               *(undefined8 *)OVR_OpenVR_IVRCompositor__GetFrameTimings_TypeInfo);
  puVar2 = Fusion_LagCompensation_HitboxBuffer_HitboxSnapshot_TypeInfo;
  *(undefined8 *)(param_1 + 0x360) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_042e4268(uVar11,*(undefined8 *)Best_HTTP_Shared_Extensions_HeaderValue_<>c_TypeInfo);
  puVar2 = 
  UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_TypeInfo;
  *(undefined8 *)(param_1 + 0x390) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_05254718(uVar11,*(undefined8 *)
                       UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEventDelegate_TypeInfo);
  puVar2 = PTR_DAT_070d2d30;
  *(undefined8 *)(param_1 + 0x398) = uVar11;
  uVar11 = FUN_03188b1c(*(undefined8 *)puVar2,10);
  puVar2 = UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
  ;
  *(undefined8 *)(param_1 + 0x3c0) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_068c8194(uVar11,0);
  *(undefined8 *)(param_1 + 0x3d0) = uVar11;
  puVar2 = System_Text_RegularExpressions_RegexOptions_TypeInfo;
  *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
  uVar11 = FUN_03188b1c(*(undefined8 *)puVar2,3);
  uVar12 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x3f0) = uVar11;
  uVar11 = FUN_03188b1c(uVar12,3);
  puVar2 = UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_PassData_TypeInfo;
  *(undefined8 *)(param_1 + 0x3f8) = uVar11;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)puVar2);
  }
  FUN_068b2978(param_1);
  return;
}


