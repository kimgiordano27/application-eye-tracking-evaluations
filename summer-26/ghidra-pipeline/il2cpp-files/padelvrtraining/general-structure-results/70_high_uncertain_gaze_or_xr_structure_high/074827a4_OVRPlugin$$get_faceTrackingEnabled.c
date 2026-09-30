/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 074827a4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_faceTrackingEnabled(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long in_x10;
  undefined4 unaff_w20;
  long unaff_x21;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  long lStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0x38e;
  lStack0000000000000010 = in_x10 + 0xa0d;
  uStack0000000000000008 = 0xe;
  uStack0000000000000018 = 0x26;
  uStack0000000000000028 = 0xc;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_03d2f1fc();
  *(code **)(unaff_x21 + 0x9a0) = pcVar1;
  (*pcVar1)(unaff_w20);
  return;
}


