/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 031f1c94
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionExiting(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long in_x10;
  long unaff_x21;
  undefined8 uStack0000000000000000;
  long lStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000010 = in_x10 + 0xc9;
  uStack0000000000000018 = 0x25;
  uStack0000000000000028 = 0x10;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_01afad98();
  *(code **)(unaff_x21 + 0x380) = pcVar1;
  (*pcVar1)();
  return;
}


