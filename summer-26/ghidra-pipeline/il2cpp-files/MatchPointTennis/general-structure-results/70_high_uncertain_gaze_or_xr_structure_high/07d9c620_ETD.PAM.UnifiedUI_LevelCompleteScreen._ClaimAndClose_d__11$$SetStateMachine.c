/*
FUNCTION_NAME: ETD.PAM.UnifiedUI_LevelCompleteScreen.<ClaimAndClose>d__11$$SetStateMachine
ENTRY_POINT: 07d9c620
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_file_logging_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void ETD_PAM_UnifiedUI_LevelCompleteScreen_<ClaimAndClose>d__11__SetStateMachine(void)

{
  code *pcVar1;
  long unaff_x19;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000028 = 0;
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_Media_Update";
  uStack0000000000000018 = 0x11;
  uStack0000000000000020 = DAT_01c73bd0;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_044854c8();
  *(code **)(unaff_x19 + 0x800) = pcVar1;
  (*pcVar1)();
  return;
}


