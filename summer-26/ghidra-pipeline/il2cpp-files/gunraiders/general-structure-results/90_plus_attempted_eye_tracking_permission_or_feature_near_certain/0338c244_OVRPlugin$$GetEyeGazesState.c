/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 0338c244
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin__GetEyeGazesState(long param_1)

{
  uint uVar1;
  long in_x9;
  long in_x10;
  long unaff_x19;
  
  if (*(long *)(in_x9 + in_x10 * 8 + -8) != param_1) {
    unaff_x19 = 0;
  }
  if (unaff_x19 == 0) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar1 = FUN_03381014(unaff_x19,0);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}


