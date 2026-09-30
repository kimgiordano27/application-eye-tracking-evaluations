/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 074af890
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


bool OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000018 = 0x24;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  uStack0000000000000020 = param_2;
  pcVar2 = (code *)thunk_FUN_03d2f1fc();
  *(code **)(unaff_x20 + 0x710) = pcVar2;
  iVar1 = (*pcVar2)();
  return iVar1 != 0;
}


