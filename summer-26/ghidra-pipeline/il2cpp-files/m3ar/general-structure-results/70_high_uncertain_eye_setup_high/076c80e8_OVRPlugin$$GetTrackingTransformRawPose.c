/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 076c80e8
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetTrackingTransformRawPose(undefined1 param_1 [16])

{
  float unaff_s8;
  float unaff_s11;
  float unaff_s12;
  
  return SQRT((unaff_s8 - unaff_s11) * (unaff_s8 - unaff_s11) +
              param_1._0_4_ * param_1._0_4_ + param_1._4_4_ * param_1._4_4_) <= unaff_s12;
}


