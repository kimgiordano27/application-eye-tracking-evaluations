/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 06a408f8
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


uint OVREyeGaze__get_Confidence(undefined1 param_1 [16],undefined1 param_2 [16],uint param_3)

{
  undefined8 *unaff_x19;
  
  unaff_x19[1] = param_1._8_8_;
  *unaff_x19 = param_1._0_8_;
  *(long *)((long)unaff_x19 + 0x14) = param_2._8_8_;
  *(long *)((long)unaff_x19 + 0xc) = param_2._0_8_;
  return param_3 & 1;
}


