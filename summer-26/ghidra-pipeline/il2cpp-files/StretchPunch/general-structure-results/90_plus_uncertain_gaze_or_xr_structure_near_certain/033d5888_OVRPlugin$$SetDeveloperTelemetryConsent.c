/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 033d5888
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__SetDeveloperTelemetryConsent(long param_1)

{
  int in_w8;
  long *unaff_x19;
  
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
    param_1 = *unaff_x19;
  }
  return **(undefined8 **)(param_1 + 0xb8);
}


