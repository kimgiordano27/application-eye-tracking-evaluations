/*
FUNCTION_NAME: OVRPlugin$$get_shouldRecenter
ENTRY_POINT: 060cd830
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


float OVRPlugin__get_shouldRecenter(float param_1,float param_2)

{
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar3;
  float unaff_s12;
  float fVar4;
  float unaff_s13;
  float fVar5;
  undefined8 in_stack_00000020;
  
  fVar3 = unaff_s11 - param_2 / unaff_s8;
  fVar4 = unaff_s12 - (unaff_s9 * param_1) / unaff_s8;
  fVar5 = unaff_s13 - (unaff_s10 * param_1) / unaff_s8;
  if (*(char *)(unaff_x26 + 0x6b7) == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    *(undefined1 *)(unaff_x26 + 0x6b7) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar4 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
  if (fVar4 <= *(float *)(unaff_x25 + 0x354)) {
    if (*(char *)(unaff_x22 + 0x6b5) == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      *(undefined1 *)(unaff_x22 + 0x6b5) = 1;
    }
    fVar3 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    fVar3 = fVar3 / fVar4;
  }
  fVar5 = (float)FUN_060cc724();
  fVar1 = (float)FUN_060389e8(0);
  fVar1 = fVar1 - (float)(int)(fVar1 / 360.0) * 360.0;
  fVar4 = 360.0;
  if (fVar1 <= 360.0) {
    fVar4 = fVar1;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar4;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar4 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar4 < fVar2) && (fVar3 = fVar5, ABS(fVar2 - fVar4) < ABS(360.0 - fVar2))) {
      fVar3 = (float)FUN_060cc7d0();
    }
    fVar4 = (float)FUN_060cc9e4();
    return in_stack_00000020._4_4_ + fVar3 * fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


