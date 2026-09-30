/*
FUNCTION_NAME: OVRPlugin$$SaveSpace
ENTRY_POINT: 07a47c58
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SaveSpace
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,float param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long *unaff_x19;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s9;
  float fVar6;
  float unaff_s10;
  float fVar7;
  float unaff_s11;
  float fVar8;
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float fVar10;
  float fVar11;
  float unaff_s14;
  float unaff_s15;
  float fVar12;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s22;
  float in_s23;
  float in_s24;
  float in_s25;
  float in_s26;
  float in_s27;
  float in_s28;
  float in_stack_00000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  fStack0000000000000010 = in_s25 - param_4 / param_2;
  fStack0000000000000014 = in_s24 - param_5 / param_2;
  fStack0000000000000018 = in_s23 - param_3 / param_2;
  fStack000000000000000c = unaff_s12 - param_7;
  fStack0000000000000008 = unaff_s14 - param_8 / param_2;
  fStack0000000000000004 = unaff_s11 - param_6 / param_2;
  fVar5 = in_s28 - in_s17 / param_2;
  fVar6 = in_s26 - in_s18 / param_2;
  fVar7 = in_s27 - (unaff_s8 * in_s16) / param_2;
  fVar8 = in_s22 - (unaff_s10 * in_s19) / param_2;
  fVar10 = unaff_s13 - (unaff_s9 * in_s19) / param_2;
  fVar12 = unaff_s15 - (unaff_s8 * in_s19) / param_2;
  if (DAT_09885780 == '\0') {
    FUN_04077588();
    DAT_09885780 = '\x01';
    param_1 = **(float **)(*unaff_x19 + 0xb8);
  }
  puVar2 = PTR_DAT_09285d60;
  fVar4 = fVar12 * fVar12 + fVar8 * fVar8 + fVar10 * fVar10;
  fStack000000000000001c = unaff_s14;
  if (param_1 <= fVar4) {
    fVar11 = (fStack0000000000000018 - fStack0000000000000004) * fVar12 +
             (fStack0000000000000010 - fStack000000000000000c) * fVar8 +
             (fStack0000000000000014 - fStack0000000000000008) * fVar10;
    fVar8 = (fVar8 * fVar11) / fVar4;
    fVar10 = (fVar10 * fVar11) / fVar4;
    fVar4 = (fVar12 * fVar11) / fVar4;
  }
  else {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar8 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  puVar1 = PTR_DAT_09285ae0;
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar12 = DAT_01aecf88;
  fVar11 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
  if (fVar11 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
  }
  else {
    fVar5 = fVar5 / fVar11;
    fVar6 = fVar6 / fVar11;
    fVar7 = fVar7 / fVar11;
  }
  fVar8 = fStack000000000000000c + fVar8;
  fVar10 = fStack0000000000000008 + fVar10;
  fVar4 = fStack0000000000000004 + fVar4;
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  fVar10 = fVar10 - fStack0000000000000014;
  fVar8 = fVar8 - fStack0000000000000010;
  fVar4 = fVar4 - fStack0000000000000018;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar9 = SQRT(fVar4 * fVar4 + fVar8 * fVar8 + fVar10 * fVar10);
  if (fVar9 <= fVar12) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar8 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  else {
    fVar8 = fVar8 / fVar9;
    fVar10 = fVar10 / fVar9;
    fVar4 = fVar4 / fVar9;
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
  fVar11 = (fVar9 / (fVar7 * fVar4 + fVar5 * fVar8 + fVar6 * fVar10)) / fVar11;
  fVar5 = 1.0;
  if (fVar11 <= 1.0) {
    fVar5 = fVar11;
  }
  fVar6 = 0.0;
  if (0.0 <= fVar11) {
    fVar6 = fVar5;
  }
  if (DAT_09885780 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_09885780 = '\x01';
  }
  fVar5 = in_stack_00000020._4_4_ * in_stack_00000020._4_4_ +
          fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000028 * fStack0000000000000028;
  fStack000000000000003c = fStack000000000000003c + fStack0000000000000034 * fVar6;
  fStack0000000000000038 = fStack0000000000000038 + fStack000000000000002c * fVar6;
  fStack0000000000000088 = fStack0000000000000088 + fStack0000000000000030 * fVar6;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar5) {
    fVar8 = in_stack_00000020._4_4_ * (fStack0000000000000088 - in_stack_00000000) +
            fStack000000000000008c * (fStack0000000000000038 - unaff_s12) +
            fStack0000000000000028 * (fStack000000000000003c - fStack000000000000001c);
    fVar7 = (fStack000000000000008c * fVar8) / fVar5;
    fVar6 = (fStack0000000000000028 * fVar8) / fVar5;
    fVar8 = (in_stack_00000020._4_4_ * fVar8) / fVar5;
  }
  else {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar7 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  if (0.0 <= in_stack_00000020._4_4_ * fVar8 +
             fStack000000000000008c * fVar7 + fStack0000000000000028 * fVar6) {
    if (fVar5 < fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8) {
      fVar6 = fStack0000000000000028;
      fVar7 = fStack000000000000008c;
      fVar8 = in_stack_00000020._4_4_;
    }
  }
  else {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar6 = pfVar3[1];
    fVar7 = *pfVar3;
    fVar8 = pfVar3[2];
  }
  if (DAT_098855ad == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098855ad = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fStack0000000000000038 = fStack0000000000000038 - (unaff_s12 + fVar7);
  fStack0000000000000088 = fStack0000000000000088 - (in_stack_00000000 + fVar8);
  fStack000000000000003c = fStack000000000000003c - (fStack000000000000001c + fVar6);
  return SQRT(fStack0000000000000088 * fStack0000000000000088 +
              fStack0000000000000038 * fStack0000000000000038 +
              fStack000000000000003c * fStack000000000000003c);
}


