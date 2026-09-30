/*
FUNCTION_NAME: OVREyeGaze$$set_Confidence
ENTRY_POINT: 03117b18
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__set_Confidence(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *unaff_x19;
  
  *(long *)((long)unaff_x19 + 0x14) = param_1._8_8_;
  *(long *)((long)unaff_x19 + 0xc) = param_1._0_8_;
  unaff_x19[1] = param_2._8_8_;
  *unaff_x19 = param_2._0_8_;
  return;
}


