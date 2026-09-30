/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 05bd14dc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__RetrieveSpaceQueryResults
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

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
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  param_3 = unaff_s12 * param_3;
  if (unaff_s10 * param_3 + fStack000000000000002c * unaff_s13 + unaff_s9 * unaff_s14 < 0.0) {
    if (*(char *)(unaff_x22 + 0x7d6) == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      *(undefined1 *)(unaff_x22 + 0x7d6) = 1;
    }
    pfVar1 = *(float **)(*unaff_x21 + 0xb8);
    unaff_s13 = *pfVar1;
    unaff_s14 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  if (DAT_0754d684 == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    DAT_0754d684 = '\x01';
  }
  fStack000000000000001c = fStack000000000000001c - (fStack0000000000000024 + unaff_s14);
  fStack0000000000000018 = fStack0000000000000018 - (fStack0000000000000028 + unaff_s13);
  fStack0000000000000020 = fStack0000000000000020 - (in_stack_00000010._4_4_ + param_3);
  if (**(float **)(*unaff_x23 + 0xb8) <= unaff_s8) {
    fVar2 = unaff_s10 * fStack0000000000000020 +
            fStack000000000000002c * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (fStack000000000000002c * fVar2) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar2) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar2) / unaff_s8;
  }
  if (*(char *)(unaff_x26 + 0xbbf) == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    *(undefined1 *)(unaff_x26 + 0xbbf) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar2 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar2 <= *(float *)(unaff_x25 + 0xcb4)) {
    if (*(char *)(unaff_x22 + 0x7d6) == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      *(undefined1 *)(unaff_x22 + 0x7d6) = 1;
    }
    fStack0000000000000018 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar2;
  }
  fVar3 = (float)FUN_05bd053c();
  fVar4 = (float)FUN_05a73c9c(0);
  fVar4 = fVar4 - (float)(int)(fVar4 / 360.0) * 360.0;
  fVar2 = 360.0;
  if (fVar4 <= 360.0) {
    fVar2 = fVar4;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar2;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar2 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar2 < fVar5) && (fStack0000000000000018 = fVar3, ABS(fVar5 - fVar2) < ABS(360.0 - fVar5))
       ) {
      fStack0000000000000018 = (float)FUN_05bd05e8();
    }
    fVar2 = (float)FUN_05bd07fc();
    return fStack0000000000000028 + unaff_s13 + fStack0000000000000018 * fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


