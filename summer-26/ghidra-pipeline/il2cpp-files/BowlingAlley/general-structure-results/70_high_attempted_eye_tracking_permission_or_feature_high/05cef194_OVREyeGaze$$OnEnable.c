/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 05cef194
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


float OVREyeGaze__OnEnable(float param_1,float param_2,float param_3)

{
  if (param_2 <= param_1 * param_3) {
    param_2 = param_1 * param_3;
  }
  return param_2;
}


