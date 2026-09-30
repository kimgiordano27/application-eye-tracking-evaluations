/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryNotification
ENTRY_POINT: 0535a8a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryNotification(void)

{
  code *pcVar1;
  long unaff_x21;
  undefined1 uStack000000000000002c;
  
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_02f454a0();
  *(code **)(unaff_x21 + 0xce0) = pcVar1;
  (*pcVar1)();
  return;
}


