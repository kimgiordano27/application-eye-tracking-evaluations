/*
FUNCTION_NAME: OVRPlugin.OVRP_1_88_0$$ovrp_SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 056a5ebc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_88_0__ovrp_SetSimultaneousHandsAndControllersEnabled(undefined8 param_1)

{
  code *pcVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 uStack0000000000000000;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000010 = "ovrAvatar2Event_PayloadIdForPrimitive";
  uStack0000000000000018 = 0x25;
  uStack0000000000000020 = DAT_010fc3f0;
  uStack0000000000000028 = 0xc;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  pcVar1 = (code *)thunk_FUN_02dd33e4();
  *(code **)(unaff_x21 + 0xa10) = pcVar1;
  (*pcVar1)(unaff_w20);
  return;
}


