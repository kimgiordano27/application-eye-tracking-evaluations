/*
FUNCTION_NAME: OVRPlugin$$get_shouldQuit
ENTRY_POINT: 060cd7d4
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


float OVRPlugin__get_shouldQuit(void)

{
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float fVar4;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_stack_00000018;
  float in_stack_00000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
  FUN_03642964(PTR_DAT_079f4df8);
                    /* try { // try from 060cd7e0 to 061cd7e3 has its CatchHandler @ 060cd8ac */
                    /* try { // try from 060cd7e4 to 061cd7ef has its CatchHandler @ 060cd8b0 */
  *(undefined1 *)(unaff_x27 + 0xc9c) = 1;
  fVar4 = unaff_s12 - unaff_s14;
  in_stack_00000018 = in_stack_00000018 - unaff_s13;
                    /* try { // try from 060cd808 to 061cd80b has its CatchHandler @ 060cd8b4 */
                    /* try { // try from 060cd80c to 061cd89f has its CatchHandler @ 060cd71c */
  in_stack_00000020 = in_stack_00000020 - in_stack_00000028;
  if (**(float **)(*unaff_x23 + 0xb8) <= unaff_s8) {
    fVar1 = unaff_s10 * in_stack_00000020 + unaff_s15 * in_stack_00000018 + unaff_s9 * fVar4;
    in_stack_00000018 = in_stack_00000018 - (unaff_s15 * fVar1) / unaff_s8;
    fVar4 = fVar4 - (unaff_s9 * fVar1) / unaff_s8;
    in_stack_00000020 = in_stack_00000020 - (unaff_s10 * fVar1) / unaff_s8;
  }
  fStack0000000000000024 = unaff_s13;
  if (*(char *)(unaff_x26 + 0x6b7) == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    *(undefined1 *)(unaff_x26 + 0x6b7) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar4 = SQRT(in_stack_00000020 * in_stack_00000020 +
               in_stack_00000018 * in_stack_00000018 + fVar4 * fVar4);
  if (fVar4 <= *(float *)(unaff_x25 + 0x354)) {
    if (*(char *)(unaff_x22 + 0x6b5) == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      *(undefined1 *)(unaff_x22 + 0x6b5) = 1;
    }
    in_stack_00000018 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    in_stack_00000018 = in_stack_00000018 / fVar4;
  }
  fVar1 = (float)FUN_060cc724();
  fVar2 = (float)FUN_060389e8(0);
  fVar2 = fVar2 - (float)(int)(fVar2 / 360.0) * 360.0;
  fVar4 = 360.0;
  if (fVar2 <= 360.0) {
    fVar4 = fVar2;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar4;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar4 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar4 < fVar3) && (in_stack_00000018 = fVar1, ABS(fVar3 - fVar4) < ABS(360.0 - fVar3))) {
      in_stack_00000018 = (float)FUN_060cc7d0();
    }
    fVar4 = (float)FUN_060cc9e4();
    return fStack0000000000000024 + in_stack_00000018 * fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


