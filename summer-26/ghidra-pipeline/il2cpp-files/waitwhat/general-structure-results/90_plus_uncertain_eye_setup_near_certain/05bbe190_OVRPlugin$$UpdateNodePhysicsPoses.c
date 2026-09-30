/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 05bbe190
PROGRAM: waitwhat-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateNodePhysicsPoses(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int in_w10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (in_w10 == 0) {
    FUN_03188a78();
    param_1 = *unaff_x20;
    *(undefined1 *)(unaff_x21 + 0xaac) = 1;
  }
  puVar2 = PTR_DAT_071162f8;
  puVar1 = PTR_DAT_071162c8;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    param_1 = *unaff_x20;
  }
  puVar4 = *(undefined8 **)(param_1 + 0xb8);
  uVar3 = *(undefined8 *)puVar1;
  uVar5 = puVar4[2];
  uVar7 = puVar4[1];
  uVar6 = *puVar4;
  *(undefined4 *)(unaff_x19 + 0x128) = 1;
  *(undefined8 *)(unaff_x19 + 0x10c) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x104) = uVar7;
  *(undefined8 *)(unaff_x19 + 0xfc) = uVar6;
  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar3);
  FUN_042e4268(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar3;
  *(undefined4 *)(unaff_x19 + 0x148) = 0x3f800000;
  FUN_047aa810();
  return;
}


