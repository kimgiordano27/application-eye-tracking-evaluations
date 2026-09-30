/*
FUNCTION_NAME: PunchPadsRhythm.GameController$$IsDot
ENTRY_POINT: 061a0434
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_foveation_hits_1;functionality_foveated_rendering
*/


void PunchPadsRhythm_GameController__IsDot(ulong param_1)

{
  code *pcVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  int iStack0000000000000000;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000010 = "MetaGetEyeTrackedFoveationSupported";
  uStack0000000000000018 = 0x23;
  uStack0000000000000020 = DAT_0164fdb8;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  _iStack0000000000000000 = param_1;
  pcVar1 = (code *)thunk_FUN_036800c0();
  *(code **)(unaff_x20 + 0x198) = pcVar1;
  _iStack0000000000000000 = _iStack0000000000000000 & 0xffffffff00000000;
  (*pcVar1)();
  *(bool *)unaff_x19 = iStack0000000000000000 != 0;
  return;
}


