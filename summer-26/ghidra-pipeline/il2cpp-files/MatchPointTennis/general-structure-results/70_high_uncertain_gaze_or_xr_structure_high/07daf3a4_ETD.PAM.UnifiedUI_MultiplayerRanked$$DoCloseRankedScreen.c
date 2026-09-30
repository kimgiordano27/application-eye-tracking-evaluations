/*
FUNCTION_NAME: ETD.PAM.UnifiedUI_MultiplayerRanked$$DoCloseRankedScreen
ENTRY_POINT: 07daf3a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void ETD_PAM_UnifiedUI_MultiplayerRanked__DoCloseRankedScreen(undefined8 param_1)

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
  
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_GetVirtualKeyboardDirtyTextures";
  uStack0000000000000018 = 0x24;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar1 = (code *)thunk_FUN_044854c8();
  *(code **)(unaff_x20 + 0xe20) = pcVar1;
  (*pcVar1)();
  return;
}


