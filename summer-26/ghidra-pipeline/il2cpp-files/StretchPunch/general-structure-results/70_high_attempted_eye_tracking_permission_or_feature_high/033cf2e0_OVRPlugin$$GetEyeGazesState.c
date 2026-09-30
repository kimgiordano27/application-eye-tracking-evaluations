/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 033cf2e0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetEyeGazesState(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_01dd295c();
  uVar1 = thunk_FUN_01de27b8();
  thunk_FUN_01dd295c(StringLiteral_1645);
  FUN_03287130(uVar1);
  uVar2 = thunk_FUN_01dd295c(StringLiteral_8944);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar1,uVar2);
}


