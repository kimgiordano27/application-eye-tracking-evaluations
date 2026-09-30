/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 07c79e74
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__SetTrackingCalibratedOrigin(undefined1 param_1 [16])

{
  undefined8 *unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(long *)((long)unaff_x20 + 0x14) = param_1._8_8_;
  *(long *)((long)unaff_x20 + 0xc) = param_1._0_8_;
  unaff_x20[1] = in_stack_00000008;
  *unaff_x20 = in_stack_00000000;
  return;
}


