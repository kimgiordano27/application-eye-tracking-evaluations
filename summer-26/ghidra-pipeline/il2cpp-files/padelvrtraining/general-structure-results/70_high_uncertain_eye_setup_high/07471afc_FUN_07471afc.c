/*
FUNCTION_NAME: FUN_07471afc
ENTRY_POINT: 07471afc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07471afc(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  
  fVar2 = fmodf(param_1,360.0);
  lVar1 = *(long *)(param_2 + 0x20);
  if ((param_1 == 0.0) || (fVar2 != 0.0)) {
    if (lVar1 == 0) {
OVRPlugin__GetNodePoseStateRaw:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    param_1 = param_1 - (float)(int)(param_1 / 360.0) * 360.0;
    fVar2 = param_1;
    if (360.0 < param_1) {
      fVar2 = 360.0;
    }
    if (param_1 < 0.0) {
      fVar2 = 0.0;
    }
  }
  else {
    if (lVar1 == 0) goto OVRPlugin__GetNodePoseStateRaw;
    fVar2 = 360.0;
  }
  *(float *)(lVar1 + 0x2c) = fVar2;
  return;
}


