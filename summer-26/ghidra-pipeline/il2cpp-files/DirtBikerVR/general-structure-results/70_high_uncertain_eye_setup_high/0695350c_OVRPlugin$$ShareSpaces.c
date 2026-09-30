/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 0695350c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__ShareSpaces(long param_1)

{
  long lVar1;
  float fVar2;
  
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0)) {
    if (*(float *)(param_1 + 0x60) + *(float *)(param_1 + 100) <= *(float *)(lVar1 + 0x140)) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_0695354c;
      fVar2 = -*(float *)(*(long *)(param_1 + 0x38) + 0x10);
    }
    else {
      fVar2 = *(float *)(lVar1 + 0x138);
    }
    return fVar2;
  }
LAB_0695354c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


