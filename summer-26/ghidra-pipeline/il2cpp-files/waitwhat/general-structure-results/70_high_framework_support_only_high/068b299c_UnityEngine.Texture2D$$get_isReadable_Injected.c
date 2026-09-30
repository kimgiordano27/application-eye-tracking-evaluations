/*
FUNCTION_NAME: UnityEngine.Texture2D$$get_isReadable_Injected
ENTRY_POINT: 068b299c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_16
*/


void UnityEngine_Texture2D__get_isReadable_Injected(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x26;
  undefined8 *puVar12;
  long unaff_x27;
  undefined8 *puVar13;
  
  puVar6 = OVRPlugin_OVRP_1_8_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_1_89_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_88_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_87_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_57_0_TypeInfo;
  puVar13 = *(undefined8 **)(unaff_x27 + 0x750);
  puVar10 = *(undefined8 **)(unaff_x20 + 0xef0);
  puVar12 = *(undefined8 **)(unaff_x26 + 0xf18);
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
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar13);
  FUN_06910818(uVar7,*puVar10,0,0,2,0);
  uVar8 = *puVar13;
  *(undefined8 *)(param_1 + 0x140) = uVar7;
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_06910818(uVar7,*puVar12,0,0,2,0);
  uVar8 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x148) = uVar7;
  *(undefined4 *)(param_1 + 0x150) = 1;
  *(undefined1 *)(param_1 + 0x15c) = 1;
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_042e4268(uVar7,*(undefined8 *)puVar3);
  uVar8 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x160) = uVar7;
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_042e4268(uVar7,*(undefined8 *)puVar6);
  lVar9 = *(long *)puVar5;
  *(undefined8 *)(param_1 + 0x168) = uVar7;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar9 = *(long *)puVar5;
  }
  puVar3 = Newtonsoft_Json_Utilities_EnumUtils_<>c_TypeInfo;
  puVar2 = System_Xml_Serialization_EnumMap_EnumMapMember_TypeInfo;
  puVar10 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar10[5];
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar7 = *puVar10;
    lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)UnityEngine_UIElements_EnumField_<>c_TypeInfo);
    FUN_0570ec28(lVar11,uVar7,*(undefined8 *)OVRPlugin_OVRP_1_91_0_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28) = lVar11;
  }
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0414d188(uVar7,lVar11,0,0,0,0,10000,*(undefined8 *)puVar3);
  lVar9 = *(long *)puVar5;
  *(undefined8 *)(param_1 + 0x170) = uVar7;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar9 = *(long *)puVar5;
  }
  puVar6 = OVRPlugin_OVRP_1_90_0_TypeInfo;
  puVar4 = EnvironmentLoader_<Start>d__11_TypeInfo;
  puVar3 = Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask_TypeInfo;
  puVar2 = Sentry_Protocol_Envelopes_EnvelopeItem_<>O_TypeInfo;
  puVar10 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar10[6];
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar7 = *puVar10;
    lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)System_Linq_Enumerable_<RangeIterator>d__115_TypeInfo);
    FUN_0570ec28(lVar11,uVar7,*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30) = lVar11;
  }
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0414d188(uVar7,lVar11,0,0,0,0,10000,*(undefined8 *)puVar3);
  uVar8 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x178) = uVar7;
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_05971910(uVar7,0);
  uVar8 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x180) = uVar7;
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_05971910(uVar7,0);
  lVar9 = *(long *)puVar4;
  *(undefined8 *)(param_1 + 0x188) = uVar7;
  *(undefined1 *)(param_1 + 0x220) = 1;
  iVar1 = *(int *)(lVar9 + 0xe4);
  *(undefined1 *)(param_1 + 0x268) = 1;
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
  }
  FUN_068b2d30(param_1);
  return;
}


