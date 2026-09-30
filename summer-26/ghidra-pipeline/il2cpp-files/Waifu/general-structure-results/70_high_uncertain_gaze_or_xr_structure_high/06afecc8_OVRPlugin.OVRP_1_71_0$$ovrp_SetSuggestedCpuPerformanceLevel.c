/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_SetSuggestedCpuPerformanceLevel
ENTRY_POINT: 06afecc8
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_71_0__ovrp_SetSuggestedCpuPerformanceLevel(void)

{
  code *pcVar1;
  long in_x12;
  undefined4 unaff_w19;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x12 + 0x9d0);
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_AbuseReport_ReportRequestHandled";
  uStack0000000000000018 = 0x24;
  uStack0000000000000028 = 4;
  uStack000000000000002c = 0;
  pcVar1 = (code *)FUN_03398d30();
  *(code **)(unaff_x20 + 0x780) = pcVar1;
  (*pcVar1)(unaff_w19);
  return;
}


