/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 073e5fb4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_Confidence(long param_1)

{
  undefined4 in_w8;
  
  *(undefined4 *)(param_1 + 0x38) = in_w8;
  thunk_FUN_08a4cf1c(param_1,0);
  return;
}


