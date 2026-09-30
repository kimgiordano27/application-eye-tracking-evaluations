/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 05db39b4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x21;
  
  puVar1 = PTR_DAT_072b1f18;
  if ((*(byte *)(unaff_x21 + 0x84b) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b1f18);
    *(undefined1 *)(unaff_x21 + 0x84b) = 1;
  }
  FUN_044119fc(param_1,param_2,*(undefined8 *)puVar1);
  return;
}


