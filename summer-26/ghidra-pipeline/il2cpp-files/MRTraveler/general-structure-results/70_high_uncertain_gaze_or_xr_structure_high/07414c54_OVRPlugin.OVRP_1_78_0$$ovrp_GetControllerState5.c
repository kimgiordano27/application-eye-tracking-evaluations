/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetControllerState5
ENTRY_POINT: 07414c54
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetControllerState5(void)

{
  code *pcVar1;
  long in_x11;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x11 + 0x560);
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_GraphAPI_Post";
  uStack0000000000000018 = 0x11;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_03cf54f0();
  *(code **)(unaff_x20 + 0xf58) = pcVar1;
  (*pcVar1)();
  return;
}


