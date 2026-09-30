/*
FUNCTION_NAME: UnityEngine.RenderTexture$$get_format
ENTRY_POINT: 068b8b90
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_RenderTexture__get_format(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_03188a78();
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
  *(undefined1 *)(unaff_x26 + 0x1fe) = 1;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x22);
  FUN_042e4268(uVar4,*unaff_x20);
  *(undefined8 *)(unaff_x19 + 0x270) = uVar4;
  *(undefined4 *)(unaff_x19 + 0x280) = 0x41f00000;
  uVar1 = _UNK_012e6de8;
  uVar5 = _DAT_012e6de0;
  uVar4 = _DAT_012e66c0;
  unaff_x21[1] = _UNK_012e66c8;
  *unaff_x21 = uVar4;
  unaff_x21[3] = uVar1;
  unaff_x21[2] = uVar5;
  uVar4 = DAT_012e2e28;
  *(undefined1 *)(unaff_x19 + 0x27c) = 1;
  *(undefined4 *)(unaff_x19 + 0x2b8) = 0x14;
  *(undefined8 *)(unaff_x19 + 0x2c0) = uVar4;
  uVar3 = FUN_069d7e0c(0xffffffff,0);
  *(undefined4 *)(unaff_x19 + 0x2d4) = uVar3;
  *(undefined4 *)(unaff_x19 + 0x2e4) = 0x3f000000;
  uVar4 = DAT_012e18c0;
  uVar5 = *unaff_x23;
  *(undefined4 *)(unaff_x19 + 0x2ec) = 0x40400000;
  *(undefined1 *)(unaff_x19 + 0x2f0) = 1;
  *(undefined8 *)(unaff_x19 + 0x2d8) = 0x100000001;
  *(undefined2 *)(unaff_x19 + 0x2f2) = 0x101;
  *(undefined8 *)(unaff_x19 + 0x2f8) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_0688d3c4(uVar4,0);
  uVar5 = *unaff_x29;
  *(undefined8 *)(unaff_x19 + 0x310) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_0688d40c(uVar4,0);
  uVar5 = *unaff_x27;
  *(undefined8 *)(unaff_x19 + 0x318) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_06910818(uVar4,*unaff_x28,0,0,2,0);
  uVar5 = *unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x328) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_04f7f10c(uVar4,*(undefined8 *)
                      Best_HTTP_Request_Authentication_DigestStore_<>c__DisplayClass6_0_TypeInfo,2,
               *unaff_x24);
  uVar5 = *unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x330) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_04f7f10c(uVar4,*(undefined8 *)
                      UnityEngine_XR_OpenXR_OpenXRSettings_DepthSubmissionMode_TypeInfo,2,*unaff_x24
              );
  uVar5 = *unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x338) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_04f7f10c(uVar4,*(undefined8 *)
                      UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeList_TypeInfo,2,
               *unaff_x24);
  uVar5 = *unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x340) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_04f7f10c(uVar4,*(undefined8 *)UnityEngine_XR_OpenXR_OpenXRSettings_RenderMode_TypeInfo,2,
               *unaff_x24);
  uVar5 = *unaff_x27;
  *(undefined8 *)(unaff_x19 + 0x348) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_06910818(uVar4,*(undefined8 *)
                      Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo,0,0,
               2,0);
  uVar5 = *unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x350) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_04f7f10c(uVar4,*(undefined8 *)
                      UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_TypeInfo,2,
               *unaff_x24);
  puVar2 = OVR_OpenVR_IVRCompositor__GetFrameTiming_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x358) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_04f7e970(uVar4,*(undefined8 *)UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo,0,
               *(undefined8 *)OVR_OpenVR_IVRCompositor__GetFrameTimings_TypeInfo);
  puVar2 = Fusion_LagCompensation_HitboxBuffer_HitboxSnapshot_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x360) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_042e4268(uVar4,*(undefined8 *)Best_HTTP_Shared_Extensions_HeaderValue_<>c_TypeInfo);
  puVar2 = 
  UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x390) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_05254718(uVar4,*(undefined8 *)
                      UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEventDelegate_TypeInfo);
  puVar2 = PTR_DAT_070d2d30;
  *(undefined8 *)(unaff_x19 + 0x398) = uVar4;
  uVar4 = FUN_03188b1c(*(undefined8 *)puVar2,10);
  puVar2 = UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
  ;
  *(undefined8 *)(unaff_x19 + 0x3c0) = uVar4;
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_068c8194(uVar4,0);
  *(undefined8 *)(unaff_x19 + 0x3d0) = uVar4;
  puVar2 = System_Text_RegularExpressions_RegexOptions_TypeInfo;
  *(undefined4 *)(unaff_x19 + 0x3e0) = 0xffffffff;
  uVar4 = FUN_03188b1c(*(undefined8 *)puVar2,3);
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)(unaff_x19 + 0x3f0) = uVar4;
  uVar4 = FUN_03188b1c(uVar5,3);
  puVar2 = UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_PassData_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x3f8) = uVar4;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)puVar2);
  }
  FUN_068b2978();
  return;
}


