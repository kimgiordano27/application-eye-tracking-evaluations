/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 060cd69c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_hasVrFocus(void)

{
  float *pfVar1;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar6;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  plVar2 = *(long **)(unaff_x24 + 0xdf0);
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar6 = SQRT(unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14 + unaff_s11 * unaff_s11);
  if (unaff_s12 < fVar6) {
    if (DAT_07ed76b7 == '\0') {
      FUN_03642964(PTR_DAT_079f4df0);
      DAT_07ed76b7 = '\x01';
    }
    if (*(int *)(*plVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (fVar6 <= DAT_01651354) {
      if (*(char *)(unaff_x22 + 0x6b5) == '\0') {
        FUN_03642964(PTR_DAT_079f4dc0);
        *(undefined1 *)(unaff_x22 + 0x6b5) = 1;
      }
      pfVar1 = *(float **)(*unaff_x21 + 0xb8);
      fVar3 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
    }
    else {
      fVar3 = unaff_s13 / fVar6;
      fVar5 = unaff_s14 / fVar6;
      fVar6 = unaff_s11 / fVar6;
    }
    unaff_s13 = unaff_s12 * fVar3;
    unaff_s14 = unaff_s12 * fVar5;
    unaff_s11 = unaff_s12 * fVar6;
  }
  if (unaff_s10 * unaff_s11 + fStack000000000000002c * unaff_s13 + unaff_s9 * unaff_s14 < 0.0) {
    if (*(char *)(unaff_x22 + 0x6b5) == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      *(undefined1 *)(unaff_x22 + 0x6b5) = 1;
    }
    pfVar1 = *(float **)(*unaff_x21 + 0xb8);
    unaff_s13 = *pfVar1;
    unaff_s14 = pfVar1[1];
    unaff_s11 = pfVar1[2];
  }
  if (DAT_07eddc9c == '\0') {
    FUN_03642964(PTR_DAT_079f4df8);
    DAT_07eddc9c = '\x01';
  }
  fStack000000000000001c = fStack000000000000001c - (fStack0000000000000024 + unaff_s14);
  fStack0000000000000018 = fStack0000000000000018 - (fStack0000000000000028 + unaff_s13);
  fStack0000000000000020 = fStack0000000000000020 - (in_stack_00000010._4_4_ + unaff_s11);
  if (**(float **)(*unaff_x23 + 0xb8) <= unaff_s8) {
    fVar6 = unaff_s10 * fStack0000000000000020 +
            fStack000000000000002c * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (fStack000000000000002c * fVar6) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar6) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar6) / unaff_s8;
  }
  if (DAT_07ed76b7 == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed76b7 = '\x01';
  }
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar6 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar6 <= DAT_01651354) {
    if (*(char *)(unaff_x22 + 0x6b5) == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      *(undefined1 *)(unaff_x22 + 0x6b5) = 1;
    }
    fStack0000000000000018 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar6;
  }
  fVar3 = (float)FUN_060cc724();
  fVar5 = (float)FUN_060389e8(0);
  fVar5 = fVar5 - (float)(int)(fVar5 / 360.0) * 360.0;
  fVar6 = 360.0;
  if (fVar5 <= 360.0) {
    fVar6 = fVar5;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar5) {
    fVar4 = fVar6;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar6 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar6 < fVar4) && (fStack0000000000000018 = fVar3, ABS(fVar4 - fVar6) < ABS(360.0 - fVar4))
       ) {
      fStack0000000000000018 = (float)FUN_060cc7d0();
    }
    fVar6 = (float)FUN_060cc9e4();
    return fStack0000000000000028 + unaff_s13 + fStack0000000000000018 * fVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


