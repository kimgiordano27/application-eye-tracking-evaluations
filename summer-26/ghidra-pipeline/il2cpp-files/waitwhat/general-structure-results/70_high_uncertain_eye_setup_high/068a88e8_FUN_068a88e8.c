/*
FUNCTION_NAME: FUN_068a88e8
ENTRY_POINT: 068a88e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_068a88e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  
  puVar2 = OVRPlugin_Mesh_TypeInfo;
  puVar1 = OVRPlugin_Media_TypeInfo;
  if ((DAT_075590cc & 1) == 0) {
    FUN_03188a78(OVRPlugin_Mesh_TypeInfo);
    FUN_03188a78(OVRPlugin_Media_TypeInfo);
    DAT_075590cc = 1;
  }
  auVar4 = NEON_fmov(0x3f800000,4);
  uVar5 = NEON_fmov(0x3f800000,4);
  uVar3 = *(undefined8 *)puVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(long *)(param_1 + 0x24) = auVar4._8_8_;
  *(long *)(param_1 + 0x1c) = auVar4._0_8_;
  *(undefined8 *)(param_1 + 0x2c) = uVar5;
  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar3);
  FUN_052678b8(uVar3,*(undefined8 *)puVar2);
  uVar5 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_052678b8(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  FUN_05971910(param_1,0);
  return;
}


