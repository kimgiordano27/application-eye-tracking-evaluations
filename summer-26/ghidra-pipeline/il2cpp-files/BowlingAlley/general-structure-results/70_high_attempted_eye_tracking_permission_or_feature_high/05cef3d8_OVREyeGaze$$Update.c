/*
FUNCTION_NAME: OVREyeGaze$$Update
ENTRY_POINT: 05cef3d8
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


undefined8 OVREyeGaze__Update(long param_1)

{
  int in_w8;
  long *unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_032cd7c0();
    param_1 = *unaff_x20;
  }
  return **(undefined8 **)(param_1 + 0xb8);
}


