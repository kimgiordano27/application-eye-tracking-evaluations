/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$set_VRToken
ENTRY_POINT: 04315394
PROGRAM: m3ar-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking__set_VRToken(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_042f2ebc(*(undefined4 *)(param_1 + 0x88),0);
  if ((iVar1 == param_2) && (*(int *)(param_1 + 0xb0) == 1)) {
    FUN_04314b14(param_1,1);
    return;
  }
  return;
}


