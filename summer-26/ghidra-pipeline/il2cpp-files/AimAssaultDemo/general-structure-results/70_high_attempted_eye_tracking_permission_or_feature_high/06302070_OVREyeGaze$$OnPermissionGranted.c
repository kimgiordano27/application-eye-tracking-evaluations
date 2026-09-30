/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 06302070
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(void)

{
  undefined4 in_w8;
  undefined4 *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *unaff_x19 = in_w8;
  *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000000;
  thunk_FUN_037aeb94(unaff_x19 + 0x10,0);
  if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_03e64d9c(unaff_x19 + 2);
  return;
}


