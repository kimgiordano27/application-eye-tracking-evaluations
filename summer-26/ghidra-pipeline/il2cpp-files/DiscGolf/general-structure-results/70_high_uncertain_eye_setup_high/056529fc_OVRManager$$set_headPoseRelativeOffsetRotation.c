/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetRotation
ENTRY_POINT: 056529fc
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


undefined1  [16] OVRManager__set_headPoseRelativeOffsetRotation(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  undefined1 auVar3 [16];
  undefined8 in_stack_00000000;
  uint in_stack_00000008;
  
  uVar1 = FUN_055efebc(param_1,*unaff_x20,0,0);
  uVar2 = (ulong)in_stack_00000008;
  if ((uVar1 & 1) == 0) {
    in_stack_00000000 = 0;
    uVar2 = 0;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = in_stack_00000000;
  return auVar3;
}


