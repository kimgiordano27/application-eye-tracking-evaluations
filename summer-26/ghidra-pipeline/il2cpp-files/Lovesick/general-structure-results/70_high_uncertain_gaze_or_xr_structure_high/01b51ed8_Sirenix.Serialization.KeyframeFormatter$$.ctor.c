/*
FUNCTION_NAME: Sirenix.Serialization.KeyframeFormatter$$.ctor
ENTRY_POINT: 01b51ed8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Sirenix_Serialization_KeyframeFormatter___ctor(void)

{
  code *pcVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_RequestBodyTrackingFidelity";
  uStack0000000000000018 = 0x20;
  uStack0000000000000028 = 4;
  uStack0000000000000020 = DAT_028aa478;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_00d625b4();
  *(code **)(unaff_x20 + 0x198) = pcVar1;
  (*pcVar1)(unaff_w19);
  return;
}


