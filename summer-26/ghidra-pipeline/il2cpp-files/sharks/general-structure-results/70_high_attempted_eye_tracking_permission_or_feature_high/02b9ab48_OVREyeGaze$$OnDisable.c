/*
FUNCTION_NAME: OVREyeGaze$$OnDisable
ENTRY_POINT: 02b9ab48
PROGRAM: sharks-libil2cpp.so
SCORE: 70
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDisable(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined2 in_w8;
  undefined4 in_w11;
  long unaff_x20;
  
  *(undefined2 *)(unaff_x20 + 0x10) = in_w8;
  *(undefined4 *)(unaff_x20 + 0x2c) = in_w11;
  *(long *)(unaff_x20 + 0x1c) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x14) = param_1._0_8_;
  *(undefined8 *)(unaff_x20 + 0x24) = param_2;
  *(long *)(param_3 + 0x18) = unaff_x20;
  thunk_FUN_0188fd20();
  FUN_02c108e4();
  return;
}


