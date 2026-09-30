/*
FUNCTION_NAME: OVRManager$$get_batteryTemperature
ENTRY_POINT: 05ba5a3c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__get_batteryTemperature(float param_1,float param_2,float param_3)

{
  int in_w8;
  long unaff_x19;
  double dVar1;
  
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  if (param_3 <= param_1) {
    param_3 = param_2;
  }
  if (in_w8 == 0) {
    thunk_FUN_031e5338();
  }
  dVar1 = acos((double)param_3);
  return (float)dVar1 * DAT_012e3848 <= *(float *)(unaff_x19 + 0x30);
}


