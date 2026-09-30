/*
FUNCTION_NAME: OVRPlugin$$get_hasInputFocus
ENTRY_POINT: 073d8e9c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_hasInputFocus(float param_1,float param_2,float param_3,float param_4)

{
  float unaff_s9;
  
  if (param_1 < 0.0) {
    param_3 = param_4;
  }
  return unaff_s9 + (param_2 - unaff_s9) * param_3;
}


