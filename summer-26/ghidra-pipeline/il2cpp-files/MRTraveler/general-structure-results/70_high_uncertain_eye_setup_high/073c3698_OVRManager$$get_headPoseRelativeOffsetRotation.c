/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 073c3698
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_headPoseRelativeOffsetRotation(void)

{
  float *unaff_x19;
  float fVar1;
  float unaff_s11;
  
  fVar1 = (float)FUN_0863da0c();
  fVar1 = unaff_s11 - fVar1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *unaff_x19 = fVar1;
  return 1;
}


