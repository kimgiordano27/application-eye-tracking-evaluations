/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 07350eb8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x07350ec4) */

void OVREyeGaze__OnPermissionGranted(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_085b7960(param_1,*(undefined4 *)(unaff_x19 + 0x7c),0);
  if ((*(long *)(unaff_x19 + 0x40) != 0) &&
     (lVar1 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar1 != 0)) {
    thunk_FUN_085b6d70(*(undefined4 *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x4c),
                       *(undefined4 *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x54),lVar1,
                       *(undefined4 *)(unaff_x19 + 0x80),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


