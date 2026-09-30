/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 079ac29c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


long OVREyeGaze__OnPermissionGranted(long param_1)

{
  undefined4 unaff_w19;
  undefined8 unaff_x20;
  undefined4 unaff_s8;
  
  FUN_076bca34(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = unaff_x20;
  thunk_FUN_040ec700();
  *(undefined4 *)(param_1 + 0x28) = unaff_w19;
                    /* try { // try from 079ac2c8 to 07aac2ef has its CatchHandler @ 079ac46c */
  *(undefined4 *)(param_1 + 0x2c) = unaff_s8;
  return param_1;
}


