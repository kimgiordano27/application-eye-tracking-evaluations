/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_LocateSpace2
ENTRY_POINT: 056a4cbc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_79_0__ovrp_LocateSpace2(void)

{
  code *pcVar1;
  long in_x9;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined4 unaff_s8;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x9 + 0x3f0);
  pcStack0000000000000010 = "ovrAvatar2Entity_Experimental_SendEventWithFloatPayload";
  uStack0000000000000018 = 0x37;
  uStack0000000000000028 = 0x10;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_02dd33e4();
  *(code **)(unaff_x21 + 0x980) = pcVar1;
  (*pcVar1)(unaff_s8,unaff_w20);
  return;
}


