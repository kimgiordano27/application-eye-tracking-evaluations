/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 051ec8d4
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(code *param_1)

{
  undefined4 unaff_w19;
  long unaff_x20;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)thunk_FUN_02ceaad8();
    *(code **)(unaff_x20 + 0x890) = param_1;
  }
  (*param_1)(unaff_w19);
  return;
}


