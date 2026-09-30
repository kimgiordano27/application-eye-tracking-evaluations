/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 0768fce0
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined1 param_7 [16],float param_8)

{
  float in_s16;
  float in_s17;
  
  FUN_0859895c(param_6 + in_s16 + param_1 * in_s17,param_5 + param_8 + param_2 * in_s17,
               param_4 + param_3);
  return;
}


