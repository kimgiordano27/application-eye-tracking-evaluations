/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 074722b8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetCurrentTrackingTransformPose(void)

{
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000068;
  
  FUN_03d2d2b0(PTR_DAT_091a1008);
  *(undefined1 *)(unaff_x19 + 0x324) = 1;
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  return SQRT((unaff_s10 - unaff_s14) * (unaff_s10 - unaff_s14) +
              (unaff_s8 - in_stack_00000068._4_4_) * (unaff_s8 - in_stack_00000068._4_4_) +
              (unaff_s9 - unaff_s15) * (unaff_s9 - unaff_s15));
}


