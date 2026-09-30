/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__856_45
ENTRY_POINT: 06116578
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__856_45(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_Message_GetPurchaseArray";
  uStack0000000000000018 = 0x1c;
  uStack0000000000000020 = DAT_0164fd00;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  pcVar1 = (code *)thunk_FUN_036800c0();
  *(code **)(unaff_x20 + 0x248) = pcVar1;
  (*pcVar1)();
  return;
}


