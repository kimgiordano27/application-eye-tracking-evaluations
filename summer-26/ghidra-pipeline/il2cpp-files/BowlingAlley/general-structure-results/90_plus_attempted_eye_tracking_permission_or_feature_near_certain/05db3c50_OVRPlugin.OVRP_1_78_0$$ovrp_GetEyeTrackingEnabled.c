/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 05db3c50
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(void)

{
  undefined8 uVar1;
  int unaff_w20;
  
  if (unaff_w20 == 0x646d855f) {
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ca8);
    FUN_05db326c();
  }
  else if (unaff_w20 == 0x6570b2bd) {
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d50);
    FUN_05db0920();
  }
  else if (unaff_w20 == 0x67e19d37) {
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f60);
    FUN_05db7938();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


