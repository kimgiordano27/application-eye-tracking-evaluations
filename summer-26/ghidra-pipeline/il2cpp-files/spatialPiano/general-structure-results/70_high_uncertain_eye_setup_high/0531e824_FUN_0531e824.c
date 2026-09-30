/*
FUNCTION_NAME: FUN_0531e824
ENTRY_POINT: 0531e824
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0531e824(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = fmodf(param_1,360.0);
  lVar1 = *(long *)(param_2 + 0x20);
  if ((param_1 == 0.0) || (fVar2 != 0.0)) {
    if (lVar1 == 0) {
OVRPlugin__GetInsightPassthroughInitializationState:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    param_1 = param_1 - (float)(int)(param_1 / 360.0) * 360.0;
    fVar3 = 360.0;
    if (param_1 <= 360.0) {
      fVar3 = param_1;
    }
    fVar2 = 0.0;
    if (0.0 <= param_1) {
      fVar2 = fVar3;
    }
  }
  else {
    if (lVar1 == 0) goto OVRPlugin__GetInsightPassthroughInitializationState;
    fVar2 = 360.0;
  }
  *(float *)(lVar1 + 0x28) = fVar2;
  return;
}


