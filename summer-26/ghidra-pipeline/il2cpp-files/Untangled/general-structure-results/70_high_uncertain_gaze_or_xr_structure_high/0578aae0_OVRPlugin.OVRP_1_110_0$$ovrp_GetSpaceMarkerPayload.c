/*
FUNCTION_NAME: OVRPlugin.OVRP_1_110_0$$ovrp_GetSpaceMarkerPayload
ENTRY_POINT: 0578aae0
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_110_0__ovrp_GetSpaceMarkerPayload(undefined8 param_1)

{
  if (DAT_071c5080 == (code *)0x0) {
    DAT_071c5080 = (code *)thunk_FUN_02ef1ac4();
  }
  (*DAT_071c5080)(param_1);
  return;
}


