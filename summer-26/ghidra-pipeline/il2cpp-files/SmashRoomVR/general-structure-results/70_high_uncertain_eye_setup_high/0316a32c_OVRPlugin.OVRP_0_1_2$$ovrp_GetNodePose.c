/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 0316a32c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(undefined1 param_1 [16],undefined1 param_2 [16])

{
  long unaff_x20;
  undefined4 uStack000000000000002c;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  *(long *)(unaff_x20 + 0x14) = param_2._8_8_;
  *(long *)(unaff_x20 + 0xc) = param_2._0_8_;
  FUN_03169a58();
  FUN_0316a3e8();
  FUN_03169a58(&stack0x00000040);
  FUN_0316a6d4();
  uStack0000000000000034 = *(undefined8 *)(unaff_x20 + 0x54);
  uStack000000000000002c = (undefined4)*(undefined8 *)(unaff_x20 + 0x4c);
  FUN_03169a58();
  FUN_0316ab1c();
  return;
}


