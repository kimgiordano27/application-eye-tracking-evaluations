/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$OnPostRender
ENTRY_POINT: 043151a4
PROGRAM: m3ar-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking__OnPostRender
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  bool in_ZR;
  
  if (in_ZR) {
    FUN_04314b14(param_1,param_3);
    return;
  }
  return;
}


