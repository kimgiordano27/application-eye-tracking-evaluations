/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 055ef37c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(long param_1)

{
  long *unaff_x19;
  
  FUN_055eefbc();
  unaff_x19[0x12] = param_1;
  LeanTween__value(unaff_x19 + 0x12,param_1);
  *(undefined4 *)((long)unaff_x19 + 0x74) = 0;
  (**(code **)(*unaff_x19 + 0x248))();
  FUN_055ee490();
  return;
}


