/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 056a428c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(undefined8 param_1)

{
  code *pcVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 uStack0000000000000020;
  undefined1 uStack000000000000002c;
  
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar1 = (code *)thunk_FUN_02dd33e4();
  *(code **)(unaff_x21 + 0x8d0) = pcVar1;
  (*pcVar1)(unaff_w20);
  return;
}


