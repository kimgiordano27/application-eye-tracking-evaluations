/*
FUNCTION_NAME: FUN_06227998
ENTRY_POINT: 06227998
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void FUN_06227998(long param_1)

{
  long lVar1;
  
  if ((DAT_06dc719c & 1) == 0) {
    FUN_02d965b8(Method_OVREyeGaze_OnPermissionGranted__);
                    /* try { // try from 062279bc to 063279c3 has its CatchHandler @ 06227c50 */
    DAT_06dc719c = 1;
  }
  if (*(int *)(param_1 + 0xb0) == 2) {
    lVar1 = *(long *)(param_1 + 0xa8);
  }
  else {
    lVar1 = *(long *)(param_1 + 0xa0);
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04bb22d0(lVar1,*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
  return;
}


