/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_SendEvent2
ENTRY_POINT: 074a9364
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_SendEvent2(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x108);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = (code *)thunk_FUN_03d2f1fc();
    *(code **)(unaff_x20 + 0x108) = pcVar1;
  }
  (*pcVar1)(param_1);
  return;
}


