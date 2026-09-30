/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 0610e2d8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x21;
  
  pcVar1 = *(code **)(unaff_x21 + 0x948);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = (code *)thunk_FUN_036800c0();
    *(code **)(unaff_x21 + 0x948) = pcVar1;
  }
  (*pcVar1)(param_1,param_2);
  return;
}


