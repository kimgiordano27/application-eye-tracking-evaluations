/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 0577761c
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionStateChange(void)

{
  code *pcVar1;
  long unaff_x22;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_NetSync_GetAmbisonicInterleavedInt16PCM";
  uStack0000000000000018 = 0x2b;
  uStack0000000000000028 = 0x18;
  uStack0000000000000020 = DAT_013f53a0;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_02ef1ac4();
  *(code **)(unaff_x22 + 0xcc8) = pcVar1;
  (*pcVar1)();
  return;
}


