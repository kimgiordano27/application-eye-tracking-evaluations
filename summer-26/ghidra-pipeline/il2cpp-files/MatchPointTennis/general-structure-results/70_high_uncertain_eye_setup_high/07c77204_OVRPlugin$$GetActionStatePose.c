/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 07c77204
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRPlugin__GetActionStatePose(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  undefined4 *unaff_x22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined4 in_stack_00000040;
  undefined8 uStack000000000000005c;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  
  uStack000000000000005c = param_2;
  FUN_07c77248(*unaff_x22,param_3,&stack0x00000070);
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,in_stack_00000028._4_4_);
  unaff_x19[1] = in_stack_00000028;
  *unaff_x19 = in_stack_00000020;
  return in_stack_00000040;
}


