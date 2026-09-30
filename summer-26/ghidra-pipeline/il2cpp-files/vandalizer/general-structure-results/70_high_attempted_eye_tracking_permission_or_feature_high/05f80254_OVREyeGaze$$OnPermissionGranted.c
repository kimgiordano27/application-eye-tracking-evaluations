/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 05f80254
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 *unaff_x22;
  
  FUN_04459b28();
  lVar2 = *(long *)(unaff_x19 + 0x30);
  uVar1 = thunk_FUN_0322f148(*unaff_x22);
  FUN_056f853c();
  if (lVar2 != 0) {
    FUN_04459758(lVar2,uVar1,*(undefined8 *)PTR_DAT_075f30a8);
    FUN_05f802c0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


