/*
FUNCTION_NAME: OVRPlugin$$SetControllerDrivenHandPoses
ENTRY_POINT: 073dddac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerDrivenHandPoses(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  
  fVar2 = fmodf(param_1,360.0);
  lVar1 = *(long *)(param_2 + 0x20);
  if ((param_1 == 0.0) || (fVar2 != 0.0)) {
    if (lVar1 == 0) {
LAB_073dde28:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
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
    if (lVar1 == 0) goto LAB_073dde28;
    fVar2 = 360.0;
  }
  *(float *)(lVar1 + 0x2c) = fVar2;
  return;
}


