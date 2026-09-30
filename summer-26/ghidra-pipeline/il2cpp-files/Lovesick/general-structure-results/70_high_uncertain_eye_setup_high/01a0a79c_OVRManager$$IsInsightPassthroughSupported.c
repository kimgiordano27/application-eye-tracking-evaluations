/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughSupported
ENTRY_POINT: 01a0a79c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__IsInsightPassthroughSupported(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  thunk_FUN_00d32864();
  fVar2 = (float)FUN_01a0fce8();
  fVar3 = (float)FUN_01a0fce8();
  if ((0.0 <= fVar2) || ((fVar3 <= 0.0 && ((0.0 <= fVar3 || (fVar2 <= fVar3)))))) {
    if (fVar2 <= 0.0) {
      bVar1 = false;
    }
    else {
      bVar1 = 0.0 < fVar3 && fVar2 < fVar3;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


