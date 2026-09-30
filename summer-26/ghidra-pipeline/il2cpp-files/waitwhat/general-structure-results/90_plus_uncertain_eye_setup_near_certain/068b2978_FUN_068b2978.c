/*
FUNCTION_NAME: FUN_068b2978
ENTRY_POINT: 068b2978
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_16
*/


void FUN_068b2978(long param_1)

{
  int iVar1;
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
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  
  puVar9 = OVRPlugin_OVRP_1_8_0_TypeInfo;
  puVar8 = OVRPlugin_OVRP_1_89_0_TypeInfo;
  puVar7 = OVRPlugin_OVRP_1_88_0_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_87_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_57_0_TypeInfo;
  puVar4 = System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_EqualsClass_TypeInfo;
  puVar3 = Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_TypeInfo;
  puVar2 = UnityEngine_UIElements_DetachFromPanelEvent_<>c_TypeInfo;
  if ((DAT_07559141 & 1) == 0) {
    FUN_03188a78(System_Linq_Enumerable_<RangeIterator>d__115_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_EnumField_<>c_TypeInfo);
    FUN_03188a78(Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask_TypeInfo);
    FUN_03188a78(Newtonsoft_Json_Utilities_EnumUtils_<>c_TypeInfo);
    FUN_03188a78(Sentry_Protocol_Envelopes_EnvelopeItem_<>O_TypeInfo);
    FUN_03188a78(System_Xml_Serialization_EnumMap_EnumMapMember_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_88_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_8_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_87_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_89_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_90_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_91_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_57_0_TypeInfo);
    FUN_03188a78(EnvironmentLoader_<Start>d__11_TypeInfo);
    FUN_03188a78(
                System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_EqualsClass_TypeInfo
                );
    FUN_03188a78(UnityEngine_UIElements_DetachFromPanelEvent_<>c_TypeInfo);
    FUN_03188a78(Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_TypeInfo);
    DAT_07559141 = 1;
  }
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar4);
  FUN_06910818(uVar10,*(undefined8 *)puVar2,0,0,2,0);
  uVar11 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x140) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_06910818(uVar10,*(undefined8 *)puVar3,0,0,2,0);
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x148) = uVar10;
  *(undefined4 *)(param_1 + 0x150) = 1;
  *(undefined1 *)(param_1 + 0x15c) = 1;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_042e4268(uVar10,*(undefined8 *)puVar7);
  uVar11 = *(undefined8 *)puVar8;
  *(undefined8 *)(param_1 + 0x160) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_042e4268(uVar10,*(undefined8 *)puVar9);
  lVar12 = *(long *)puVar5;
  *(undefined8 *)(param_1 + 0x168) = uVar10;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar12 = *(long *)puVar5;
  }
  puVar3 = Newtonsoft_Json_Utilities_EnumUtils_<>c_TypeInfo;
  puVar2 = System_Xml_Serialization_EnumMap_EnumMapMember_TypeInfo;
  puVar13 = *(undefined8 **)(lVar12 + 0xb8);
  lVar14 = puVar13[5];
  if (lVar14 == 0) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar13 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar10 = *puVar13;
    lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)UnityEngine_UIElements_EnumField_<>c_TypeInfo);
    FUN_0570ec28(lVar14,uVar10,*(undefined8 *)OVRPlugin_OVRP_1_91_0_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28) = lVar14;
  }
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0414d188(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar3);
  lVar12 = *(long *)puVar5;
  *(undefined8 *)(param_1 + 0x170) = uVar10;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar12 = *(long *)puVar5;
  }
  puVar6 = OVRPlugin_OVRP_1_90_0_TypeInfo;
  puVar4 = EnvironmentLoader_<Start>d__11_TypeInfo;
  puVar3 = Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask_TypeInfo;
  puVar2 = Sentry_Protocol_Envelopes_EnvelopeItem_<>O_TypeInfo;
  puVar13 = *(undefined8 **)(lVar12 + 0xb8);
  lVar14 = puVar13[6];
  if (lVar14 == 0) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar13 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar10 = *puVar13;
    lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)System_Linq_Enumerable_<RangeIterator>d__115_TypeInfo);
    FUN_0570ec28(lVar14,uVar10,*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30) = lVar14;
  }
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0414d188(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar3);
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x178) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_05971910(uVar10,0);
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x180) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_05971910(uVar10,0);
  lVar12 = *(long *)puVar4;
  *(undefined8 *)(param_1 + 0x188) = uVar10;
  *(undefined1 *)(param_1 + 0x220) = 1;
  iVar1 = *(int *)(lVar12 + 0xe4);
  *(undefined1 *)(param_1 + 0x268) = 1;
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
  }
  FUN_068b2d30(param_1);
  return;
}


