/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 0610b0ac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry(void)

{
  code *pcVar1;
  long in_x9;
  long unaff_x20;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x9 + 0xd00);
  pcStack0000000000000010 = "ovr_User_LaunchFriendRequestFlow";
  uStack0000000000000018 = 0x20;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_036800c0();
  *(code **)(unaff_x20 + 0x5e0) = pcVar1;
  (*pcVar1)();
  return;
}


