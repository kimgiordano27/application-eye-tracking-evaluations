/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 07cae394
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled(long param_1)

{
  undefined4 unaff_w19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_094c6b48(*(undefined8 *)PTR_DAT_09f51260,0);
  *(undefined4 *)(unaff_x20 + 0x3c) = unaff_w19;
  return;
}


