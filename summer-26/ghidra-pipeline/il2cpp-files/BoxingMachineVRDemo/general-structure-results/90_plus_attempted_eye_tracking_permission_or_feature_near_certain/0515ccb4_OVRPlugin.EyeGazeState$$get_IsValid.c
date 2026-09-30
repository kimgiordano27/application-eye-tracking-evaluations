/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 0515ccb4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_EyeGazeState__get_IsValid(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x22;
  
  uVar2 = FUN_04e9195c();
  uVar1 = FUN_050eb318(uVar2,0);
  uVar2 = thunk_FUN_02d9d534(*unaff_x22);
  FUN_056f476c(uVar2,param_1,uVar1,0);
  return uVar2;
}


