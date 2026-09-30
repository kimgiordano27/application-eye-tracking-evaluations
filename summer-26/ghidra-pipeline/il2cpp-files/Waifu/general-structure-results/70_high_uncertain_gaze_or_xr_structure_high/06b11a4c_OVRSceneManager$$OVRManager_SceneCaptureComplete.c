/*
FUNCTION_NAME: OVRSceneManager$$OVRManager_SceneCaptureComplete
ENTRY_POINT: 06b11a4c
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


bool OVRSceneManager__OVRManager_SceneCaptureComplete(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
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
  pcStack0000000000000010 = "ovr_NetSyncSession_GetMuted";
  uStack0000000000000018 = 0x1b;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar2 = (code *)FUN_03398d30();
  *(code **)(unaff_x20 + 0xaa0) = pcVar2;
  iVar1 = (*pcVar2)();
  return iVar1 != 0;
}


