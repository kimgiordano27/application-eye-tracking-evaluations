/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 056529f0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRManager__get_headPoseRelativeOffsetRotation(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 unaff_w19;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000000;
  uint in_stack_00000008;
  
  uVar1 = FUN_05652a30(unaff_w19);
  uVar2 = FUN_055efebc(uVar1,*unaff_x20,0,0);
  uVar3 = (ulong)in_stack_00000008;
  if ((uVar2 & 1) == 0) {
    in_stack_00000000 = 0;
    uVar3 = 0;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = in_stack_00000000;
  return auVar4;
}


