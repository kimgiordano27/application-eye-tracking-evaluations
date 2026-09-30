/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 04edd7d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = 0;
  iVar1 = FUN_04af1d9c();
  if (iVar1 != 0) {
    return;
  }
  if ((unaff_x20 != 0) &&
     (uStack000000000000000c = *(undefined4 *)(unaff_x20 + 0xf8), unaff_x19 != 0)) {
    FUN_04d78ba0(&stack0x0000000c,*(undefined4 *)(unaff_x19 + 0xf8),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


