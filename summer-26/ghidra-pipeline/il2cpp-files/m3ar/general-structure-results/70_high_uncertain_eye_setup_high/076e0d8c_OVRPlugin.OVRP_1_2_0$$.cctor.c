/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$.cctor
ENTRY_POINT: 076e0d8c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_OVRP_1_2_0___cctor
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  if (param_1 <= param_6) {
    param_3 = param_1;
  }
  param_3 = param_3 + (float)(int)(param_3 / param_2) * param_4;
  if (param_3 <= param_2) {
    param_2 = param_3;
  }
  if (0.0 <= param_3) {
    param_5 = param_2;
  }
  return param_5;
}


