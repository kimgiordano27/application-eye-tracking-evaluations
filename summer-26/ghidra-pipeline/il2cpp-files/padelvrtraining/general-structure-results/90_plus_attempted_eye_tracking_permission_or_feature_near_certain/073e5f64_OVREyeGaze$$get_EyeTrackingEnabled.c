/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 073e5f64
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVREyeGaze__get_EyeTrackingEnabled(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *unaff_x19;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  
  uStack0000000000000050 = param_1._4_4_;
  uStack000000000000004c = param_2._12_4_;
  unaff_x19[1] = param_2._8_8_;
  *unaff_x19 = param_2._0_8_;
  *(long *)((long)unaff_x19 + 0x14) = param_1._8_8_;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  return 1;
}


