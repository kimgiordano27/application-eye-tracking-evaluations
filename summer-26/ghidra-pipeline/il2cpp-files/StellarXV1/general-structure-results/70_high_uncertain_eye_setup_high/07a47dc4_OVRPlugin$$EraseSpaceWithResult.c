/*
FUNCTION_NAME: OVRPlugin$$EraseSpaceWithResult
ENTRY_POINT: 07a47dc4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__EraseSpaceWithResult(void)

{
  float *pfVar1;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar2;
  long unaff_x23;
  long unaff_x24;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar5;
  float unaff_s12;
  float fVar6;
  float fVar7;
  float unaff_s14;
  float fVar8;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
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
  
  plVar2 = *(long **)(unaff_x22 + 0xae0);
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar8 = DAT_01aecf88;
  fVar7 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar7 <= DAT_01aecf88) {
    if (*(char *)(unaff_x21 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x21 + 0x4f1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  else {
    fVar3 = unaff_s8 / fVar7;
    fVar4 = unaff_s9 / fVar7;
    fVar5 = unaff_s10 / fVar7;
  }
  if (*(char *)(unaff_x24 + 0x4e7) == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    *(undefined1 *)(unaff_x24 + 0x4e7) = 1;
  }
  fStack0000000000000014 = (fStack0000000000000008 + unaff_s14) - fStack0000000000000014;
  fStack0000000000000010 = (fStack000000000000000c + unaff_s12) - fStack0000000000000010;
  fStack0000000000000018 = (fStack0000000000000004 + unaff_s15) - fStack0000000000000018;
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar6 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000010 * fStack0000000000000010 +
               fStack0000000000000014 * fStack0000000000000014);
  if (fVar6 <= fVar8) {
    if (*(char *)(unaff_x21 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x21 + 0x4f1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fStack0000000000000010 = *pfVar1;
    fStack0000000000000014 = pfVar1[1];
    fStack0000000000000018 = pfVar1[2];
  }
  else {
    fStack0000000000000010 = fStack0000000000000010 / fVar6;
    fStack0000000000000014 = fStack0000000000000014 / fVar6;
    fStack0000000000000018 = fStack0000000000000018 / fVar6;
  }
  if (DAT_098854e9 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e9 = '\x01';
  }
  if ((*(int *)(*plVar2 + 0xe4) == 0) && (thunk_FUN_040d65a8(), DAT_098854e9 == '\0')) {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e9 = '\x01';
  }
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar7 = (fVar6 / (fVar5 * fStack0000000000000018 +
                   fVar3 * fStack0000000000000010 + fVar4 * fStack0000000000000014)) / fVar7;
  fVar8 = 1.0;
  if (fVar7 <= 1.0) {
    fVar8 = fVar7;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar7) {
    fVar3 = fVar8;
  }
  if (*(char *)(unaff_x23 + 0x780) == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    *(undefined1 *)(unaff_x23 + 0x780) = 1;
  }
  fVar8 = fStack0000000000000024 * fStack0000000000000024 +
          fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000028 * fStack0000000000000028;
  fStack000000000000003c = fStack000000000000003c + fStack0000000000000034 * fVar3;
  fStack0000000000000038 = fStack0000000000000038 + fStack000000000000002c * fVar3;
  fStack0000000000000088 = fStack0000000000000088 + fStack0000000000000030 * fVar3;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar8) {
    fVar4 = fStack0000000000000024 * (fStack0000000000000088 - fStack0000000000000000) +
            fStack000000000000008c * (fStack0000000000000038 - fStack0000000000000020) +
            fStack0000000000000028 * (fStack000000000000003c - fStack000000000000001c);
    fVar3 = (fStack000000000000008c * fVar4) / fVar8;
    fVar7 = (fStack0000000000000028 * fVar4) / fVar8;
    fVar4 = (fStack0000000000000024 * fVar4) / fVar8;
  }
  else {
    if (*(char *)(unaff_x21 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x21 + 0x4f1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar3 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  if (0.0 <= fStack0000000000000024 * fVar4 +
             fStack000000000000008c * fVar3 + fStack0000000000000028 * fVar7) {
    if (fVar8 < fVar3 * fVar3 + fVar7 * fVar7 + fVar4 * fVar4) {
      fVar7 = fStack0000000000000028;
      fVar3 = fStack000000000000008c;
      fVar4 = fStack0000000000000024;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x21 + 0x4f1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar7 = pfVar1[1];
    fVar3 = *pfVar1;
    fVar4 = pfVar1[2];
  }
  if (DAT_098855ad == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098855ad = '\x01';
  }
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fStack0000000000000038 = fStack0000000000000038 - (fStack0000000000000020 + fVar3);
  fStack0000000000000088 = fStack0000000000000088 - (fStack0000000000000000 + fVar4);
  fStack000000000000003c = fStack000000000000003c - (fStack000000000000001c + fVar7);
  return SQRT(fStack0000000000000088 * fStack0000000000000088 +
              fStack0000000000000038 * fStack0000000000000038 +
              fStack000000000000003c * fStack000000000000003c);
}


