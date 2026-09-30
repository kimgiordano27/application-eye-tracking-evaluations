/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClassesAsync
ENTRY_POINT: 053312c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetDynamicObjectTrackedClassesAsync
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
                float param_5)

{
  int in_w8;
  float *pfVar1;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar2;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float fVar3;
  float fVar4;
  float unaff_s13;
  float fVar5;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  if (in_w8 == 0) {
    FUN_02f08768(PTR_DAT_067c8f80);
    *(undefined1 *)(unaff_x24 + 0x2bf) = 1;
  }
  fStack0000000000000014 = (param_1 + unaff_s14) - fStack0000000000000014;
  fStack0000000000000010 = unaff_s8 - fStack0000000000000010;
  fStack0000000000000018 = (fStack0000000000000004 + unaff_s15) - fStack0000000000000018;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar3 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000010 * fStack0000000000000010 +
               fStack0000000000000014 * fStack0000000000000014);
  if (fVar3 <= unaff_s11) {
    if (*(char *)(unaff_x21 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fStack0000000000000010 = *pfVar1;
    fStack0000000000000014 = pfVar1[1];
    fStack0000000000000018 = pfVar1[2];
  }
  else {
    fStack0000000000000010 = fStack0000000000000010 / fVar3;
    fStack0000000000000014 = fStack0000000000000014 / fVar3;
    fStack0000000000000018 = fStack0000000000000018 / fVar3;
  }
  if (DAT_06bb42c7 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  if ((*(int *)(*unaff_x22 + 0xe4) == 0) && (thunk_FUN_02f6670c(), DAT_06bb42c7 == '\0')) {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar2 = (fVar3 / (unaff_s10 * fStack0000000000000018 +
                   param_4 * fStack0000000000000010 + param_5 * fStack0000000000000014)) / unaff_s13
  ;
  fVar3 = 1.0;
  if (fVar2 <= 1.0) {
    fVar3 = fVar2;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar2) {
    fVar4 = fVar3;
  }
  if (*(char *)(unaff_x23 + 0xa49) == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    *(undefined1 *)(unaff_x23 + 0xa49) = 1;
  }
  fVar3 = fStack0000000000000024 * fStack0000000000000024 +
          fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000028 * fStack0000000000000028;
  fStack000000000000003c = fStack000000000000003c + fStack0000000000000034 * fVar4;
  fStack0000000000000038 = fStack0000000000000038 + fStack000000000000002c * fVar4;
  fStack0000000000000088 = fStack0000000000000088 + fStack0000000000000030 * fVar4;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar3) {
    fVar5 = fStack0000000000000024 * (fStack0000000000000088 - fStack0000000000000000) +
            fStack000000000000008c * (fStack0000000000000038 - fStack0000000000000020) +
            fStack0000000000000028 * (fStack000000000000003c - fStack000000000000001c);
    fVar4 = (fStack000000000000008c * fVar5) / fVar3;
    fVar2 = (fStack0000000000000028 * fVar5) / fVar3;
    fVar5 = (fStack0000000000000024 * fVar5) / fVar3;
  }
  else {
    if (*(char *)(unaff_x21 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar4 = *pfVar1;
    fVar2 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  if (0.0 <= fStack0000000000000024 * fVar5 +
             fStack000000000000008c * fVar4 + fStack0000000000000028 * fVar2) {
    if (fVar3 < fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5) {
      fVar2 = fStack0000000000000028;
      fVar4 = fStack000000000000008c;
      fVar5 = fStack0000000000000024;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar2 = pfVar1[1];
    fVar4 = *pfVar1;
    fVar5 = pfVar1[2];
  }
  if (DAT_06bb42c8 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c8 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fStack0000000000000038 = fStack0000000000000038 - (fStack0000000000000020 + fVar4);
  fStack0000000000000088 = fStack0000000000000088 - (fStack0000000000000000 + fVar5);
  fStack000000000000003c = fStack000000000000003c - (fStack000000000000001c + fVar2);
  return SQRT(fStack0000000000000088 * fStack0000000000000088 +
              fStack0000000000000038 * fStack0000000000000038 +
              fStack000000000000003c * fStack000000000000003c);
}


