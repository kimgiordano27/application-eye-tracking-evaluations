/*
FUNCTION_NAME: OVRTelemetry.QPLTelemetryClient$$MarkerAnnotation
ENTRY_POINT: 057b0d04
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void OVRTelemetry_QPLTelemetryClient__MarkerAnnotation(void)

{
  byte bVar1;
  long unaff_x19;
  long *unaff_x21;
  
  FUN_05645a04();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  bVar1 = OVRPlugin_OVRP_1_82_0___cctor();
  *(byte *)(unaff_x19 + 0x10) = bVar1 & 1;
  return;
}


