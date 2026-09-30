/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 02b9a66c
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_Confidence(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  *(undefined1 *)(unaff_x19 + 0x9a2) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02b95588();
  return;
}


