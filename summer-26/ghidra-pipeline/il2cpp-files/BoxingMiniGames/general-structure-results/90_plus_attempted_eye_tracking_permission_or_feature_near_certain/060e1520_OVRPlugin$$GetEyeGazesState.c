/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 060e1520
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetEyeGazesState(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined1 *puVar2;
  long unaff_x24;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000028 = 0x1c;
  uStack000000000000002c = 0;
  uStack0000000000000010 = param_1;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_036800c0();
  *(code **)(unaff_x24 + 0xba0) = pcVar1;
  memset(&stack0x00000000,0,0x120);
  puVar2 = (undefined1 *)0x0;
  if (unaff_x22 != 0) {
    FUN_03589adc();
    pcVar1 = *(code **)(unaff_x24 + 0xba0);
    puVar2 = (undefined1 *)register0x00000008;
  }
  (*pcVar1)(unaff_w21,puVar2);
  return;
}


