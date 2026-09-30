/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 02c568e4
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long in_x10;
  long unaff_x19;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  long lStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0x915;
  lStack0000000000000010 = in_x10 + 0x2a3;
  uStack0000000000000028 = 0;
  uStack0000000000000008 = 0x11;
  uStack0000000000000018 = 0x1d;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_01861e78();
  *(code **)(unaff_x19 + 0xd70) = pcVar1;
  (*pcVar1)();
  return;
}


