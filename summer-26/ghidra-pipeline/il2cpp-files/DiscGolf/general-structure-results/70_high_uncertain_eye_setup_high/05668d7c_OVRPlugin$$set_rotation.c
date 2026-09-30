/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 05668d7c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__set_rotation(void)

{
  uint uVar1;
  long *unaff_x20;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  FUN_05695cb4(&stack0x00000008);
  in_stack_00000038 = uStack0000000000000010;
  in_stack_00000030 = uStack0000000000000008;
  in_stack_00000040 = uStack0000000000000018;
  uVar1 = (**(code **)(*unaff_x20 + 0x1b8))();
  FUN_05695d2c(&stack0x00000030);
  return uVar1 & 1;
}


