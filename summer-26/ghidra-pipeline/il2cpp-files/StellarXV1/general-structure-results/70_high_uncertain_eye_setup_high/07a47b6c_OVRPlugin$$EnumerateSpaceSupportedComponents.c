/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 07a47b6c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__EnumerateSpaceSupportedComponents(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float *pfVar4;
  long unaff_x19;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar10;
  float unaff_s11;
  float unaff_s12;
  float fVar11;
  float fVar12;
  float unaff_s13;
  float unaff_s14;
  float fVar13;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  *(undefined1 *)(unaff_x19 + 0x4e6) = 1;
  puVar2 = PTR_DAT_09285d58;
  fVar6 = unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9;
  fVar5 = **(float **)(*(long *)PTR_DAT_09285d58 + 0xb8);
  if (fVar5 <= fVar6) {
    fVar9 = unaff_s11 * unaff_s8 + unaff_s12 * unaff_s10 + unaff_s14 * unaff_s9;
    fVar13 = fStack0000000000000088 * unaff_s8 +
             fStack0000000000000038 * unaff_s10 + fStack000000000000003c * unaff_s9;
    fVar10 = fStack0000000000000030 * unaff_s8 +
             in_stack_00000028._4_4_ * unaff_s10 + fStack0000000000000034 * unaff_s9;
    fVar7 = unaff_s15 * unaff_s8 + fStack000000000000008c * unaff_s10 + unaff_s13 * unaff_s9;
    fStack0000000000000010 = fStack0000000000000038 - (unaff_s10 * fVar13) / fVar6;
    fStack0000000000000014 = fStack000000000000003c - (unaff_s9 * fVar13) / fVar6;
    fStack0000000000000018 = fStack0000000000000088 - (unaff_s8 * fVar13) / fVar6;
    fStack000000000000000c = unaff_s12 - (unaff_s10 * fVar9) / fVar6;
    fStack0000000000000008 = unaff_s14 - (unaff_s9 * fVar9) / fVar6;
    fStack0000000000000004 = unaff_s11 - (unaff_s8 * fVar9) / fVar6;
    fVar8 = in_stack_00000028._4_4_ - (unaff_s10 * fVar10) / fVar6;
    fVar9 = fStack0000000000000034 - (unaff_s9 * fVar10) / fVar6;
    fVar10 = fStack0000000000000030 - (unaff_s8 * fVar10) / fVar6;
    fVar11 = fStack000000000000008c - (unaff_s10 * fVar7) / fVar6;
    fVar13 = unaff_s13 - (unaff_s9 * fVar7) / fVar6;
    fVar6 = unaff_s15 - (unaff_s8 * fVar7) / fVar6;
  }
  else {
    fStack0000000000000014 = fStack000000000000003c;
    fStack0000000000000018 = fStack0000000000000088;
    fStack0000000000000010 = fStack0000000000000038;
    fVar13 = unaff_s13;
    fVar6 = unaff_s15;
    fVar9 = fStack0000000000000034;
    fVar10 = fStack0000000000000030;
    fVar8 = in_stack_00000028._4_4_;
    fVar11 = fStack000000000000008c;
    fStack0000000000000004 = unaff_s11;
    fStack0000000000000008 = unaff_s14;
    fStack000000000000000c = unaff_s12;
  }
  fStack0000000000000000 = unaff_s11;
  fStack0000000000000024 = unaff_s15;
  if (DAT_09885780 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_09885780 = '\x01';
    fVar5 = **(float **)(*(long *)puVar2 + 0xb8);
  }
  puVar3 = PTR_DAT_09285d60;
  fVar7 = fVar6 * fVar6 + fVar11 * fVar11 + fVar13 * fVar13;
  fStack000000000000001c = unaff_s14;
  if (fVar5 <= fVar7) {
    fVar5 = (fStack0000000000000018 - fStack0000000000000004) * fVar6 +
            (fStack0000000000000010 - fStack000000000000000c) * fVar11 +
            (fStack0000000000000014 - fStack0000000000000008) * fVar13;
    fVar11 = (fVar11 * fVar5) / fVar7;
    fVar13 = (fVar13 * fVar5) / fVar7;
    fVar7 = (fVar6 * fVar5) / fVar7;
  }
  else {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar11 = *pfVar4;
    fVar13 = pfVar4[1];
    fVar7 = pfVar4[2];
  }
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  puVar1 = PTR_DAT_09285ae0;
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar5 = DAT_01aecf88;
  fVar6 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar6 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar8 = *pfVar4;
    fVar9 = pfVar4[1];
    fVar10 = pfVar4[2];
  }
  else {
    fVar8 = fVar8 / fVar6;
    fVar9 = fVar9 / fVar6;
    fVar10 = fVar10 / fVar6;
  }
  fVar11 = fStack000000000000000c + fVar11;
  fVar13 = fStack0000000000000008 + fVar13;
  fVar7 = fStack0000000000000004 + fVar7;
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  fVar13 = fVar13 - fStack0000000000000014;
  fVar11 = fVar11 - fStack0000000000000010;
  fVar7 = fVar7 - fStack0000000000000018;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar12 = SQRT(fVar7 * fVar7 + fVar11 * fVar11 + fVar13 * fVar13);
  if (fVar12 <= fVar5) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar11 = *pfVar4;
    fVar13 = pfVar4[1];
    fVar7 = pfVar4[2];
  }
  else {
    fVar11 = fVar11 / fVar12;
    fVar13 = fVar13 / fVar12;
    fVar7 = fVar7 / fVar12;
  }
  if (DAT_098854e9 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e9 = '\x01';
  }
  if ((*(int *)(*(long *)puVar1 + 0xe4) == 0) && (thunk_FUN_040d65a8(), DAT_098854e9 == '\0')) {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e9 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar6 = (fVar12 / (fVar10 * fVar7 + fVar8 * fVar11 + fVar9 * fVar13)) / fVar6;
  fVar5 = 1.0;
  if (fVar6 <= 1.0) {
    fVar5 = fVar6;
  }
  fVar13 = 0.0;
  if (0.0 <= fVar6) {
    fVar13 = fVar5;
  }
  if (DAT_09885780 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_09885780 = '\x01';
  }
  fVar5 = fStack0000000000000024 * fStack0000000000000024 +
          fStack000000000000008c * fStack000000000000008c + unaff_s13 * unaff_s13;
  fStack000000000000003c = fStack000000000000003c + fStack0000000000000034 * fVar13;
  fStack0000000000000038 = fStack0000000000000038 + in_stack_00000028._4_4_ * fVar13;
  fStack0000000000000088 = fStack0000000000000088 + fStack0000000000000030 * fVar13;
  if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar5) {
    fVar9 = fStack0000000000000024 * (fStack0000000000000088 - fStack0000000000000000) +
            fStack000000000000008c * (fStack0000000000000038 - unaff_s12) +
            unaff_s13 * (fStack000000000000003c - fStack000000000000001c);
    fVar13 = (fStack000000000000008c * fVar9) / fVar5;
    fVar6 = (unaff_s13 * fVar9) / fVar5;
    fVar9 = (fStack0000000000000024 * fVar9) / fVar5;
  }
  else {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar13 = *pfVar4;
    fVar6 = pfVar4[1];
    fVar9 = pfVar4[2];
  }
  if (0.0 <= fStack0000000000000024 * fVar9 + fStack000000000000008c * fVar13 + unaff_s13 * fVar6) {
    if (fVar5 < fVar13 * fVar13 + fVar6 * fVar6 + fVar9 * fVar9) {
      fVar6 = unaff_s13;
      fVar13 = fStack000000000000008c;
      fVar9 = fStack0000000000000024;
    }
  }
  else {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar6 = pfVar4[1];
    fVar13 = *pfVar4;
    fVar9 = pfVar4[2];
  }
  if (DAT_098855ad == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098855ad = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fStack0000000000000038 = fStack0000000000000038 - (unaff_s12 + fVar13);
  fStack0000000000000088 = fStack0000000000000088 - (fStack0000000000000000 + fVar9);
  fStack000000000000003c = fStack000000000000003c - (fStack000000000000001c + fVar6);
  return SQRT(fStack0000000000000088 * fStack0000000000000088 +
              fStack0000000000000038 * fStack0000000000000038 +
              fStack000000000000003c * fStack000000000000003c);
}


