/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 07bf5098
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  uVar1 = thunk_FUN_04485110();
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  uVar1 = thunk_FUN_04485110();
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28),uVar1);
  uVar1 = thunk_FUN_0448520c(*unaff_x23);
  FUN_0732100c(uVar1,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x30),uVar1);
  return;
}


