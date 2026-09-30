/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$SignedAngle
ENTRY_POINT: 04314ec0
PROGRAM: m3ar-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;weak_pose_support;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;weak_vector_component_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking__SignedAngle(undefined8 param_1)

{
  long *unaff_x24;
  
  FUN_0545306c();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_04342398(param_1,0);
  return;
}


