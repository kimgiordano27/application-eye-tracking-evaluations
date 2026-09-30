/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 05c1dfc0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRTelemetryConstants_OVRManager___cctor(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  long in_x9;
  long unaff_x20;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x9 + 0x6f0);
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000010 = param_1;
  pcVar2 = (code *)thunk_FUN_031c3fd8();
  *(code **)(unaff_x20 + 0x8f0) = pcVar2;
  iVar1 = (*pcVar2)();
  return iVar1 != 0;
}


