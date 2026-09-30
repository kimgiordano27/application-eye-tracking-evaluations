/*
FUNCTION_NAME: OVRPlugin.<>c__DisplayClass523_0$$<GetVirtualKeyboardModelAnimationStates>b__1
ENTRY_POINT: 051f5338
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_<>c__DisplayClass523_0__<GetVirtualKeyboardModelAnimationStates>b__1
               (long param_1,undefined8 param_2)

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
  
  lStack0000000000000000 = param_1 + 0x3b6;
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_ApplicationInvite_GetMatchSessionId";
  uStack0000000000000018 = 0x27;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_02ceaad8();
  *(code **)(unaff_x20 + 0xa8) = pcVar1;
  (*pcVar1)();
  return;
}


