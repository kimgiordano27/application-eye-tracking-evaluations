/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 05db3b40
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(void)

{
  undefined8 uVar1;
  int in_w8;
  int unaff_w20;
  
  if (unaff_w20 == in_w8) {
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d50);
    FUN_05db0920();
  }
  else if (unaff_w20 == 0xb6d8d76) {
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f40);
    FUN_05db7158();
  }
  else if (unaff_w20 == 0x102fa3de) {
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d18);
    FUN_05db36e4();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


