/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_21
ENTRY_POINT: 07a73520
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_<>c__<_cctor>b__786_21(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0x9c9;
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_HTTP_Post";
  uStack0000000000000018 = 0xd;
  uStack0000000000000020 = DAT_01aee0b8;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_040b519c();
  *(code **)(unaff_x20 + 0xbd8) = pcVar1;
  (*pcVar1)();
  return;
}


