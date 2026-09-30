/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_GetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 06b03e48
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_99_0__ovrp_GetTrackingPoseEnabledForInvisibleSession
               (undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long in_x10;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  long lStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000010 = in_x10 + 0x69d;
  uStack0000000000000018 = 0x16;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)FUN_03398d30();
  *(code **)(unaff_x20 + 0xc08) = pcVar1;
  (*pcVar1)();
  return;
}


