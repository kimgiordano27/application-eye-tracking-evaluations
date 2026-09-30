/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 01dbb908
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_010400dc();
  uVar2 = thunk_FUN_010303a8(PTR_DAT_0234d720);
  FUN_01c5e120(uVar1,uVar2,0);
  uVar2 = thunk_FUN_010303a8(PTR_DAT_0235a7d0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar1,uVar2);
}


