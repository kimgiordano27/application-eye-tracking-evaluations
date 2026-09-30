/*
FUNCTION_NAME: OVRPlugin.OVRP_1_110_0$$ovrp_GetSpaceMarkerPayload
ENTRY_POINT: 06113b48
PROGRAM: BoxingMiniGames-libil2cpp.so
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
  code *pcVar1;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000010 = "ovr_LinkedAccountArray_GetSize";
  uStack0000000000000018 = 0x1e;
  uStack0000000000000020 = DAT_0164fd00;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  pcVar1 = (code *)thunk_FUN_036800c0();
  *(code **)(unaff_x20 + 0xf78) = pcVar1;
  (*pcVar1)();
  return;
}


