/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 07a70a90
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(long param_1,undefined8 param_2)

{
  void *unaff_x19;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8(param_1);
  }
  free(unaff_x19);
  return param_2;
}


