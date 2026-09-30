/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces
ENTRY_POINT: 07a47f7c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__QuerySpaces(void)

{
  undefined1 in_w8;
  float *pfVar1;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar2;
  float unaff_s8;
  float unaff_s12;
  float fVar3;
  float unaff_s13;
  float fVar4;
  float fVar5;
  float unaff_s15;
  undefined8 in_stack_00000018;
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
  
  *(undefined1 *)(unaff_x24 + 0x4e9) = in_w8;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar2 = (unaff_s12 / unaff_s8) / unaff_s13;
  fVar5 = 1.0;
  if (fVar2 <= 1.0) {
    fVar5 = fVar2;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar5;
  }
  if (*(char *)(unaff_x23 + 0x780) == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    *(undefined1 *)(unaff_x23 + 0x780) = 1;
  }
  fVar5 = fStack0000000000000024 * fStack0000000000000024 +
          fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000028 * fStack0000000000000028;
  fStack000000000000003c = fStack000000000000003c + fStack0000000000000034 * fVar3;
  fStack0000000000000038 = fStack0000000000000038 + fStack000000000000002c * fVar3;
  fStack0000000000000088 = fStack0000000000000088 + fStack0000000000000030 * fVar3;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar5) {
    fVar4 = fStack0000000000000024 * (fStack0000000000000088 - unaff_s15) +
            fStack000000000000008c * (fStack0000000000000038 - fStack0000000000000020) +
            fStack0000000000000028 * (fStack000000000000003c - in_stack_00000018._4_4_);
    fVar3 = (fStack000000000000008c * fVar4) / fVar5;
    fVar2 = (fStack0000000000000028 * fVar4) / fVar5;
    fVar4 = (fStack0000000000000024 * fVar4) / fVar5;
  }
  else {
    if (*(char *)(unaff_x21 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x21 + 0x4f1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar3 = *pfVar1;
    fVar2 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  if (0.0 <= fStack0000000000000024 * fVar4 +
             fStack000000000000008c * fVar3 + fStack0000000000000028 * fVar2) {
    if (fVar5 < fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4) {
      fVar2 = fStack0000000000000028;
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
    fVar2 = pfVar1[1];
    fVar3 = *pfVar1;
    fVar4 = pfVar1[2];
  }
  if (DAT_098855ad == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098855ad = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fStack0000000000000038 = fStack0000000000000038 - (fStack0000000000000020 + fVar3);
  fStack0000000000000088 = fStack0000000000000088 - (unaff_s15 + fVar4);
  fStack000000000000003c = fStack000000000000003c - (in_stack_00000018._4_4_ + fVar2);
  return SQRT(fStack0000000000000088 * fStack0000000000000088 +
              fStack0000000000000038 * fStack0000000000000038 +
              fStack000000000000003c * fStack000000000000003c);
}


