/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 06aff88c
PROGRAM: Waifu-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_ApplicationLifecycle_RegisterSessionKey";
  uStack0000000000000018 = 0x2b;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar1 = (code *)FUN_03398d30();
  *(code **)(unaff_x20 + 0x828) = pcVar1;
  (*pcVar1)();
  return;
}


