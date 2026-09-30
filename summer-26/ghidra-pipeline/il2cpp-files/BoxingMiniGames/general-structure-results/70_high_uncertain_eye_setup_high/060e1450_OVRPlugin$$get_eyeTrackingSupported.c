/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 060e1450
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__get_eyeTrackingSupported(void)

{
  code *pcVar1;
  long in_x9;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined1 *puVar2;
  long unaff_x22;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x9 + 0xdb8);
  pcStack0000000000000010 = "isdk_FingerPinchGrabAPI_UpdateHandData";
  uStack0000000000000018 = 0x26;
  uStack0000000000000028 = 0xc;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_036800c0();
  *(code **)(unaff_x22 + 0xb98) = pcVar1;
  memset(&stack0x00000000,0,0x120);
  puVar2 = (undefined1 *)0x0;
  if (unaff_x20 != 0) {
    FUN_03589adc();
    pcVar1 = *(code **)(unaff_x22 + 0xb98);
    puVar2 = (undefined1 *)register0x00000008;
  }
  (*pcVar1)(unaff_w19,puVar2);
  return;
}


