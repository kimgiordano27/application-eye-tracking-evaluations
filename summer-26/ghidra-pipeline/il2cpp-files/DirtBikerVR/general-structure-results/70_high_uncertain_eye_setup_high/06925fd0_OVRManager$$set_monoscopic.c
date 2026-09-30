/*
FUNCTION_NAME: OVRManager$$set_monoscopic
ENTRY_POINT: 06925fd0
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


float OVRManager__set_monoscopic(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = DAT_015c5994;
  fVar6 = 0.0;
  fVar4 = 0.0;
  fVar5 = -1.0;
  do {
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    fVar3 = (float)FUN_07c42008(fVar4,*(long *)(param_1 + 0x30),0);
    fVar2 = fVar4;
    if (fVar3 <= fVar6) {
      fVar2 = fVar5;
    }
    fVar5 = fVar2;
    fVar4 = fVar4 + fVar1;
    if (fVar3 <= fVar6) {
      fVar3 = fVar6;
    }
    fVar6 = fVar3;
  } while (fVar4 < 1.0);
  return fVar5;
}


