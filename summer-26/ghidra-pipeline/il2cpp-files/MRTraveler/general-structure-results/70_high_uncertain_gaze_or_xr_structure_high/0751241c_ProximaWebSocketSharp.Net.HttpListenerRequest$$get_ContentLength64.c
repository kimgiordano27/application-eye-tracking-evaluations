/*
FUNCTION_NAME: ProximaWebSocketSharp.Net.HttpListenerRequest$$get_ContentLength64
ENTRY_POINT: 0751241c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void ProximaWebSocketSharp_Net_HttpListenerRequest__get_ContentLength64(void)

{
  code *pcVar1;
  long in_x12;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x12 + 0x560);
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_DestroySpace";
  uStack0000000000000018 = 0x11;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_03cf54f0();
  *(code **)(unaff_x20 + 0xb58) = pcVar1;
  (*pcVar1)();
  return;
}


