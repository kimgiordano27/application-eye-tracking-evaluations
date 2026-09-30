/*
FUNCTION_NAME: ProximaWebSocketSharp.Net.HttpListenerRequest$$get_ContentEncoding
ENTRY_POINT: 07512308
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


void ProximaWebSocketSharp_Net_HttpListenerRequest__get_ContentEncoding(void)

{
  code *pcVar1;
  long unaff_x22;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_LocateSpace";
  uStack0000000000000018 = 0x10;
  uStack0000000000000028 = 0x14;
  uStack0000000000000020 = DAT_018ae560;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_03cf54f0();
  *(code **)(unaff_x22 + 0xb10) = pcVar1;
  (*pcVar1)();
  return;
}


