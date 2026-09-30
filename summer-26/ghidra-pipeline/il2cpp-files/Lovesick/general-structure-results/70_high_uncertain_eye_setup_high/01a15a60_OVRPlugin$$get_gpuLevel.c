/*
FUNCTION_NAME: OVRPlugin$$get_gpuLevel
ENTRY_POINT: 01a15a60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_gpuLevel(float param_1,float param_2)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s8;
  
  fVar2 = fmodf(param_1,param_2);
  lVar1 = *(long *)(unaff_x19 + 0x18);
  if ((unaff_s8 == 0.0) || (fVar2 != 0.0)) {
    if (lVar1 == 0) {
LAB_01a15acc:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar3 = unaff_s8 - (float)(int)(unaff_s8 / 360.0) * 360.0;
    fVar2 = fVar3;
    if (360.0 < fVar3) {
      fVar2 = 360.0;
    }
    if (fVar3 < 0.0) {
      fVar2 = 0.0;
    }
  }
  else {
    if (lVar1 == 0) goto LAB_01a15acc;
    fVar2 = 360.0;
  }
  *(float *)(lVar1 + 0x28) = fVar2;
  return;
}


