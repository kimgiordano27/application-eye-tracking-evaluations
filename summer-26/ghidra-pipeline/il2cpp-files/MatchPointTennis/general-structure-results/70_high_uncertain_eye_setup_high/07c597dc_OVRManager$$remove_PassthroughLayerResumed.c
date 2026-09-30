/*
FUNCTION_NAME: OVRManager$$remove_PassthroughLayerResumed
ENTRY_POINT: 07c597dc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c59818) */

float OVRManager__remove_PassthroughLayerResumed
                (float param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_1 - param_3) - (float)(int)((param_1 - param_3) / 360.0) * 360.0;
  fVar2 = (param_4 - param_3) - (float)(int)((param_4 - param_3) / 360.0) * 360.0;
  fVar3 = fVar1;
  if (360.0 < fVar1) {
    fVar3 = 360.0;
  }
  if (fVar1 < 0.0) {
    fVar3 = 0.0;
  }
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  if (fVar3 <= fVar2) {
    param_1 = (param_3 + param_4) * 0.5 - param_1;
    param_1 = param_1 + (float)(int)(param_1 / 360.0) * -360.0;
    fVar3 = param_1;
    if (360.0 < param_1) {
      fVar3 = 360.0;
    }
    if (param_1 < 0.0) {
      fVar3 = 0.0;
    }
    fVar2 = fVar3 + -360.0;
    if (fVar3 <= 180.0) {
      fVar2 = fVar3;
    }
    fVar2 = fVar2 + (float)(int)(fVar2 / 360.0) * -360.0;
    fVar3 = fVar2;
    if (360.0 < fVar2) {
      fVar3 = 360.0;
    }
    if (fVar2 < 0.0) {
      fVar3 = 0.0;
    }
    return fVar3;
  }
  return INFINITY;
}


