/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 0601ee30
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShareSpaces(undefined8 param_1)

{
  code *pcVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x23;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "InteractionSdk";
  uStack0000000000000008 = 0xe;
  pcStack0000000000000010 = "isdk_FingerPinchGrabAPI_UpdateHandData";
  uStack0000000000000018 = 0x26;
  uStack0000000000000028 = 0xc;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar1 = (code *)thunk_FUN_0322f404();
  *(code **)(unaff_x23 + 0xaa0) = pcVar1;
  memset(&stack0x00000000,0,0x120);
  if (unaff_x20 == 0) {
    register0x00000008 = (BADSPACEBASE *)0x0;
  }
  else {
    FUN_03167378();
    pcVar1 = *(code **)(unaff_x23 + 0xaa0);
  }
  (*pcVar1)(unaff_w19,register0x00000008);
  return;
}


