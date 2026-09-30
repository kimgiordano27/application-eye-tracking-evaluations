/*
FUNCTION_NAME: OVRPlugin$$get_suggestedCpuPerfLevel
ENTRY_POINT: 01f79eb8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__get_suggestedCpuPerfLevel(float param_1,float param_2)

{
  if (param_2 < param_1) {
    return -1;
  }
  if (param_2 <= param_1) {
    if (param_2 == param_1) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(param_2)) {
      return -(uint)((uint)ABS(param_1) < 0x7f800001);
    }
  }
  return 1;
}


