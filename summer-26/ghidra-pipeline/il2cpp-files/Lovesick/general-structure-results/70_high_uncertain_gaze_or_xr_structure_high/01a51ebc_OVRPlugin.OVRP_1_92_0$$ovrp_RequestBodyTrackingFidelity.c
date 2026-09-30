/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_RequestBodyTrackingFidelity
ENTRY_POINT: 01a51ebc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_RequestBodyTrackingFidelity(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long in_x10;
  long unaff_x20;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  long lStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0x340;
  lStack0000000000000010 = in_x10 + 0x9af;
  uStack0000000000000008 = 0x11;
  uStack0000000000000018 = 0x1c;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_00d625b4();
  *(code **)(unaff_x20 + 0x8a0) = pcVar1;
  (*pcVar1)();
  return;
}


