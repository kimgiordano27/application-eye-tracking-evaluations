/*
FUNCTION_NAME: OVRPlugin$$get_hasInputFocus
ENTRY_POINT: 060cd6f8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_hasInputFocus(long param_1)

{
  float *pfVar1;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (unaff_s15 <= *(float *)(unaff_x25 + 0x354)) {
    if (*(char *)(unaff_x22 + 0x6b5) == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      *(undefined1 *)(unaff_x22 + 0x6b5) = 1;
    }
    pfVar1 = *(float **)(*unaff_x21 + 0xb8);
    fVar2 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
  }
  else {
    fVar2 = unaff_s13 / unaff_s15;
    fVar5 = unaff_s14 / unaff_s15;
    fVar6 = unaff_s11 / unaff_s15;
                    /* try { // try from 060cd71c to 061cd7df has its CatchHandler @ 060cd71c
                       catch() { ... } // from try @ 060cd71c with catch @ 060cd71c
                       catch() { ... } // from try @ 060cd80c with catch @ 060cd71c
                       catch() { ... } // from try @ 060cd8a4 with catch @ 060cd71c
                       catch() { ... } // from try @ 060cd8f0 with catch @ 060cd71c */
  }
  fVar2 = unaff_s12 * fVar2;
  fVar5 = unaff_s12 * fVar5;
  fVar6 = unaff_s12 * fVar6;
  if (unaff_s10 * fVar6 + fStack000000000000002c * fVar2 + unaff_s9 * fVar5 < 0.0) {
    if (*(char *)(unaff_x22 + 0x6b5) == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      *(undefined1 *)(unaff_x22 + 0x6b5) = 1;
    }
    pfVar1 = *(float **)(*unaff_x21 + 0xb8);
    fVar2 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
  }
  if (DAT_07eddc9c == '\0') {
    FUN_03642964(PTR_DAT_079f4df8);
    DAT_07eddc9c = '\x01';
  }
  fStack000000000000001c = fStack000000000000001c - (fStack0000000000000024 + fVar5);
  fStack0000000000000018 = fStack0000000000000018 - (fStack0000000000000028 + fVar2);
  fStack0000000000000020 = fStack0000000000000020 - (in_stack_00000010._4_4_ + fVar6);
  if (**(float **)(*unaff_x23 + 0xb8) <= unaff_s8) {
    fVar5 = unaff_s10 * fStack0000000000000020 +
            fStack000000000000002c * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (fStack000000000000002c * fVar5) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar5) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar5) / unaff_s8;
  }
  if (*(char *)(unaff_x26 + 0x6b7) == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    *(undefined1 *)(unaff_x26 + 0x6b7) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar5 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar5 <= *(float *)(unaff_x25 + 0x354)) {
    if (*(char *)(unaff_x22 + 0x6b5) == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      *(undefined1 *)(unaff_x22 + 0x6b5) = 1;
    }
    fStack0000000000000018 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar5;
  }
  fVar6 = (float)FUN_060cc724();
  fVar3 = (float)FUN_060389e8(0);
  fVar3 = fVar3 - (float)(int)(fVar3 / 360.0) * 360.0;
  fVar5 = 360.0;
  if (fVar3 <= 360.0) {
    fVar5 = fVar3;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar5;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar5 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar5 < fVar4) && (fStack0000000000000018 = fVar6, ABS(fVar4 - fVar5) < ABS(360.0 - fVar4))
       ) {
      fStack0000000000000018 = (float)FUN_060cc7d0();
    }
    fVar5 = (float)FUN_060cc9e4();
    return fStack0000000000000028 + fVar2 + fStack0000000000000018 * fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


