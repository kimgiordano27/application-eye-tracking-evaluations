/*
FUNCTION_NAME: OVRPlugin$$GetActiveController
ENTRY_POINT: 0531fb70
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetActiveController(float param_1,float param_2)

{
  float *pfVar1;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar5;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  fVar5 = SQRT(param_1 + param_2 + unaff_s11 * unaff_s11);
  if (unaff_s12 < fVar5) {
    if (*(char *)(unaff_x26 + 0x2bf) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      *(undefined1 *)(unaff_x26 + 0x2bf) = 1;
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (fVar5 <= DAT_011b06e4) {
      if (*(char *)(unaff_x22 + 0x2c1) == '\0') {
        FUN_02f08768(PTR_DAT_067c8f78);
        *(undefined1 *)(unaff_x22 + 0x2c1) = 1;
      }
      pfVar1 = *(float **)(*unaff_x21 + 0xb8);
      fVar2 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
    }
    else {
      fVar2 = unaff_s13 / fVar5;
      fVar4 = unaff_s14 / fVar5;
      fVar5 = unaff_s11 / fVar5;
    }
    unaff_s13 = unaff_s12 * fVar2;
    unaff_s14 = unaff_s12 * fVar4;
    unaff_s11 = unaff_s12 * fVar5;
  }
  if (unaff_s10 * unaff_s11 + fStack000000000000002c * unaff_s13 + unaff_s9 * unaff_s14 < 0.0) {
    if (*(char *)(unaff_x22 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x22 + 0x2c1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x21 + 0xb8);
    unaff_s13 = *pfVar1;
    unaff_s14 = pfVar1[1];
    unaff_s11 = pfVar1[2];
  }
  if (DAT_06bb8c34 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8c34 = '\x01';
  }
  fStack000000000000001c = fStack000000000000001c - (fStack0000000000000024 + unaff_s14);
  fStack0000000000000018 = fStack0000000000000018 - (fStack0000000000000028 + unaff_s13);
  fStack0000000000000020 = fStack0000000000000020 - (in_stack_00000010._4_4_ + unaff_s11);
  if (**(float **)(*unaff_x23 + 0xb8) <= unaff_s8) {
    fVar5 = unaff_s10 * fStack0000000000000020 +
            fStack000000000000002c * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (fStack000000000000002c * fVar5) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar5) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar5) / unaff_s8;
  }
  if (*(char *)(unaff_x26 + 0x2bf) == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    *(undefined1 *)(unaff_x26 + 0x2bf) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar5 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar5 <= DAT_011b06e4) {
    if (*(char *)(unaff_x22 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x22 + 0x2c1) = 1;
    }
    fStack0000000000000018 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar5;
  }
  fVar2 = (float)FUN_0531ec70();
  fVar4 = (float)FUN_0526fc7c(0);
  fVar4 = fVar4 - (float)(int)(fVar4 / 360.0) * 360.0;
  fVar5 = 360.0;
  if (fVar4 <= 360.0) {
    fVar5 = fVar4;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar4) {
    fVar3 = fVar5;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar5 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar5 < fVar3) && (fStack0000000000000018 = fVar2, ABS(fVar3 - fVar5) < ABS(360.0 - fVar3))
       ) {
      fStack0000000000000018 = (float)FUN_0531ed1c();
    }
    fVar5 = (float)FUN_0531ef30();
    return fStack0000000000000028 + unaff_s13 + fStack0000000000000018 * fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


