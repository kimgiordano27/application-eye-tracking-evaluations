/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 0600f96c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetTrackingCalibratedOrigin(void)

{
  int in_w8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  
  if (in_w8 == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  return SQRT(unaff_s8 * unaff_s8 + unaff_s11 * unaff_s11 + unaff_s9 * unaff_s9);
}


