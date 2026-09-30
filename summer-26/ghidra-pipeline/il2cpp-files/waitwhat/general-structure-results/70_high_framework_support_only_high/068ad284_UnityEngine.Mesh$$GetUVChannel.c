/*
FUNCTION_NAME: UnityEngine.Mesh$$GetUVChannel
ENTRY_POINT: 068ad284
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_1
*/


void UnityEngine_Mesh__GetUVChannel(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  FUN_04ce4180(uVar2,*unaff_x20);
  uVar3 = *unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x278) = uVar2;
  *(undefined1 *)(unaff_x19 + 0x280) = 1;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar3);
  FUN_04ce4180(uVar2,*unaff_x22);
  uVar3 = *unaff_x29;
  *(undefined8 *)(unaff_x19 + 0x290) = uVar2;
  *(undefined4 *)(unaff_x19 + 0x298) = 1;
  *(undefined1 *)(unaff_x19 + 0x29d) = 1;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar3);
  FUN_04ce4180(uVar2,*unaff_x21);
  uVar3 = *unaff_x28;
  *(undefined8 *)(unaff_x19 + 0x2a8) = uVar2;
  *(undefined4 *)(unaff_x19 + 0x2b0) = 1;
  *(undefined2 *)(unaff_x19 + 0x2b4) = 0x101;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar3);
  FUN_0688d3c4(uVar2,0);
  puVar1 = OVRPlugin_OVRP_1_47_0_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x2b8) = uVar2;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_0688d40c(uVar2,0);
  puVar1 = System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_EqualsClass_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x2c0) = uVar2;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_06910818(uVar2,*(undefined8 *)
                      System_Linq_Expressions_Interpreter_DivInstruction_DivInt32_TypeInfo,0,0,2,0);
  puVar1 = OVR_OpenVR_IVRCompositor__GetCurrentGridAlpha_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x2c8) = uVar2;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_04f7f10c(uVar2,*(undefined8 *)
                      Best_HTTP_Request_Authentication_DigestStore_<>c__DisplayClass6_0_TypeInfo,2,
               *(undefined8 *)OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining_TypeInfo);
  puVar1 = OVRPlugin_OVRP_1_42_0_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x2d0) = uVar2;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_04afe7f0(uVar2,0,1,0,0,*(undefined8 *)OVRPlugin_OVRP_1_41_0_TypeInfo);
  puVar1 = PTR_DAT_07125a90;
  *(undefined8 *)(unaff_x19 + 0x2d8) = uVar2;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_042e4268(uVar2,*(undefined8 *)PTR_DAT_07125a98);
  puVar1 = UnityEngine_UIElements_UIR_MeshWriteDataPool_<>c_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x2e8) = uVar2;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_0430d234(uVar2,*(undefined8 *)Oculus_Platform_Message_Callback_TypeInfo);
  uVar3 = *unaff_x27;
  *(undefined8 *)(unaff_x19 + 0x2f0) = uVar2;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar3);
  FUN_042e4268(uVar2,*unaff_x26);
  puVar1 = OVRPlugin_OVRP_1_46_0_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x2f8) = uVar2;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_042e4268(uVar2,*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo);
  uVar3 = *unaff_x27;
  *(undefined8 *)(unaff_x19 + 0x300) = uVar2;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar3);
  FUN_042e4268(uVar2,*unaff_x26);
  puVar1 = OVRPlugin_OVRP_1_44_0_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x308) = uVar2;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_05240e94(uVar2,*(undefined8 *)OVRPlugin_OVRP_1_43_0_TypeInfo);
  puVar1 = OVRPlugin_OVRP_1_49_0_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x310) = uVar2;
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_04ce4180(uVar2,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
  puVar1 = UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_PassData_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x328) = uVar2;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_068b2978();
  return;
}


