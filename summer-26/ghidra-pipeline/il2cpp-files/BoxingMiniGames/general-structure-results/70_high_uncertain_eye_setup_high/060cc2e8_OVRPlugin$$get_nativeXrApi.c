/*
FUNCTION_NAME: OVRPlugin$$get_nativeXrApi
ENTRY_POINT: 060cc2e8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_nativeXrApi(float param_1,long param_2)

{
  float in_w8;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  
  fVar2 = fmodf(param_1,in_w8);
  lVar1 = *(long *)(param_2 + 0x20);
  if ((unaff_s8 == 0.0) || (fVar2 != 0.0)) {
    if (lVar1 == 0) {
LAB_060cc358:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    fVar4 = unaff_s8 - (float)(int)(unaff_s8 / 360.0) * 360.0;
    fVar3 = 360.0;
    if (fVar4 <= 360.0) {
      fVar3 = fVar4;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar4) {
      fVar2 = fVar3;
    }
  }
  else {
    if (lVar1 == 0) goto LAB_060cc358;
    fVar2 = 360.0;
  }
  *(float *)(lVar1 + 0x28) = fVar2;
  return;
}


