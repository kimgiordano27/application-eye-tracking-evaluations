/*
FUNCTION_NAME: OVRPlugin$$SetDesiredEyeTextureFormat
ENTRY_POINT: 0694366c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetDesiredEyeTextureFormat(long param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0xe8) != 0)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0xe1) == '\0') {
      fVar3 = *(float *)(param_3 + 0x134);
    }
    else {
      fVar3 = 0.0;
      *(undefined4 *)(param_3 + 0x134) = 0;
    }
    fVar4 = 0.0;
    if (*(char *)(param_3 + 0xc1) != '\0') {
      fVar4 = *(float *)(param_3 + 0x9c) * fVar3 * *(float *)(param_3 + 0x104);
    }
    fVar6 = 10.0;
    if (10.0 <= ABS(param_2)) {
      fVar6 = ABS(param_2);
    }
    fVar5 = *(float *)(param_3 + 0x130) * 10.0;
    fVar7 = 1.0;
    if (1.0 <= fVar6) {
      fVar7 = fVar6;
    }
    fVar4 = fVar4 + *(float *)(param_3 + 0x130) *
                    *(float *)(param_3 + 0x9c) * DAT_015c5bd4 * (1.0 - fVar3);
    if (-1.0 < fVar6) {
      fVar6 = fVar7;
    }
    fVar7 = fVar4 * DAT_015c5b5c;
    fVar3 = 1.0;
    if (fVar5 <= 1.0) {
      fVar3 = fVar5;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar5) {
      fVar2 = fVar3;
    }
    return ((fVar7 + fVar2 * (fVar4 - fVar7)) * 1000.0) / fVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


