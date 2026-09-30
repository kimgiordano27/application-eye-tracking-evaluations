/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 073ed794
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__get_eyeTrackingSupported
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  bool in_NG;
  
  if (!in_NG) {
    param_2 = param_1;
  }
  *(float *)(param_5 + 0x14) = param_2;
  if ((param_1 <= param_4) && (param_1 <= param_2 + param_3)) {
    return;
  }
  *(undefined1 *)(param_5 + 0x2c) = 0;
  *(undefined1 *)(param_5 + 0x24) = 1;
  *(undefined4 *)(param_5 + 0x14) = 0x7f7fffff;
  return;
}


