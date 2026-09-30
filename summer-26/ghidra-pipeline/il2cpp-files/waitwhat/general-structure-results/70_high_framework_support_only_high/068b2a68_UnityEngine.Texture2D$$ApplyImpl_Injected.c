/*
FUNCTION_NAME: UnityEngine.Texture2D$$ApplyImpl_Injected
ENTRY_POINT: 068b2a68
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void UnityEngine_Texture2D__ApplyImpl_Injected(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar10;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0xe28));
  FUN_03188a78(OVRPlugin_OVRP_1_92_0_TypeInfo);
  FUN_03188a78(OVRPlugin_OVRP_1_57_0_TypeInfo);
  FUN_03188a78(EnvironmentLoader_<Start>d__11_TypeInfo);
  FUN_03188a78(
              System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_EqualsClass_TypeInfo
              );
  FUN_03188a78(UnityEngine_UIElements_DetachFromPanelEvent_<>c_TypeInfo);
  FUN_03188a78(Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_TypeInfo);
  *(undefined1 *)(unaff_x28 + 0x141) = 1;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x27);
  FUN_06910818(uVar6,*unaff_x20,0,0,2,0);
  uVar7 = *unaff_x27;
  *(undefined8 *)(unaff_x19 + 0x140) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar7);
  FUN_06910818(uVar6,*unaff_x26,0,0,2,0);
  uVar7 = *unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x148) = uVar6;
  *(undefined4 *)(unaff_x19 + 0x150) = 1;
  *(undefined1 *)(unaff_x19 + 0x15c) = 1;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar7);
  FUN_042e4268(uVar6,*unaff_x24);
  uVar7 = *unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x160) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar7);
  FUN_042e4268(uVar6,*unaff_x21);
  lVar8 = *unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x168) = uVar6;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar8 = *unaff_x22;
  }
  puVar3 = Newtonsoft_Json_Utilities_EnumUtils_<>c_TypeInfo;
  puVar2 = System_Xml_Serialization_EnumMap_EnumMapMember_TypeInfo;
  puVar9 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar9[5];
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar9 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar6 = *puVar9;
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)UnityEngine_UIElements_EnumField_<>c_TypeInfo);
    FUN_0570ec28(lVar10,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_91_0_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x28) = lVar10;
  }
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0414d188(uVar6,lVar10,0,0,0,0,10000,*(undefined8 *)puVar3);
  lVar8 = *unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x170) = uVar6;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar8 = *unaff_x22;
  }
  puVar5 = OVRPlugin_OVRP_1_90_0_TypeInfo;
  puVar4 = EnvironmentLoader_<Start>d__11_TypeInfo;
  puVar3 = Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask_TypeInfo;
  puVar2 = Sentry_Protocol_Envelopes_EnvelopeItem_<>O_TypeInfo;
  puVar9 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar9[6];
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar9 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar6 = *puVar9;
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)System_Linq_Enumerable_<RangeIterator>d__115_TypeInfo);
    FUN_0570ec28(lVar10,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30) = lVar10;
  }
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0414d188(uVar6,lVar10,0,0,0,0,10000,*(undefined8 *)puVar3);
  uVar7 = *(undefined8 *)puVar5;
  *(undefined8 *)(unaff_x19 + 0x178) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar7);
  FUN_05971910(uVar6,0);
  uVar7 = *(undefined8 *)puVar5;
  *(undefined8 *)(unaff_x19 + 0x180) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar7);
  FUN_05971910(uVar6,0);
  lVar8 = *(long *)puVar4;
  *(undefined8 *)(unaff_x19 + 0x188) = uVar6;
  *(undefined1 *)(unaff_x19 + 0x220) = 1;
  iVar1 = *(int *)(lVar8 + 0xe4);
  *(undefined1 *)(unaff_x19 + 0x268) = 1;
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
  }
  FUN_068b2d30();
  return;
}


