/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTrackerAsync
ENTRY_POINT: 05331040
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__CreateDynamicObjectTrackerAsync
                (float param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long *unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  float unaff_s11;
  float fVar8;
  float unaff_s12;
  float fVar9;
  float fVar10;
  float unaff_s13;
  float fVar11;
  float unaff_s14;
  float fVar12;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
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
  
  fStack000000000000000c = unaff_s12;
  fStack0000000000000010 = param_2;
  fStack0000000000000014 = param_4;
  fStack0000000000000018 = param_3;
  if (DAT_06bb8a49 == '\0') {
    FUN_02f08768();
    DAT_06bb8a49 = '\x01';
    param_1 = **(float **)(*unaff_x19 + 0xb8);
  }
  puVar1 = PTR_DAT_067c8f78;
  fVar4 = unaff_s15 * unaff_s15 + unaff_s11 * unaff_s11 + unaff_s13 * unaff_s13;
  fStack000000000000001c = unaff_s14;
  if (param_1 <= fVar4) {
    fVar8 = (fStack0000000000000018 - fStack0000000000000004) * unaff_s15 +
            (fStack0000000000000010 - fStack000000000000000c) * unaff_s11 +
            (fStack0000000000000014 - in_stack_00000008) * unaff_s13;
    fVar9 = (unaff_s11 * fVar8) / fVar4;
    fVar12 = (unaff_s13 * fVar8) / fVar4;
    fVar4 = (unaff_s15 * fVar8) / fVar4;
  }
  else {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar9 = *pfVar3;
    fVar12 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  puVar2 = PTR_DAT_067c8f80;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar8 = DAT_011b06e4;
  fVar11 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar11 <= DAT_011b06e4) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
  }
  else {
    fVar5 = unaff_s8 / fVar11;
    fVar6 = unaff_s9 / fVar11;
    fVar7 = unaff_s10 / fVar11;
  }
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  fVar12 = (in_stack_00000008 + fVar12) - fStack0000000000000014;
  fVar9 = (fStack000000000000000c + fVar9) - fStack0000000000000010;
  fVar4 = (fStack0000000000000004 + fVar4) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar10 = SQRT(fVar4 * fVar4 + fVar9 * fVar9 + fVar12 * fVar12);
  if (fVar10 <= fVar8) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar9 = *pfVar3;
    fVar12 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  else {
    fVar9 = fVar9 / fVar10;
    fVar12 = fVar12 / fVar10;
    fVar4 = fVar4 / fVar10;
  }
  if (DAT_06bb42c7 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  if ((*(int *)(*(long *)puVar2 + 0xe4) == 0) && (thunk_FUN_02f6670c(), DAT_06bb42c7 == '\0')) {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar11 = (fVar10 / (fVar7 * fVar4 + fVar5 * fVar9 + fVar6 * fVar12)) / fVar11;
  fVar4 = 1.0;
  if (fVar11 <= 1.0) {
    fVar4 = fVar11;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar11) {
    fVar8 = fVar4;
  }
  if (DAT_06bb8a49 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8a49 = '\x01';
  }
  fVar4 = in_stack_00000020._4_4_ * in_stack_00000020._4_4_ +
          fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000028 * fStack0000000000000028;
  fStack000000000000003c = fStack000000000000003c + fStack0000000000000034 * fVar8;
  fStack0000000000000038 = fStack0000000000000038 + fStack000000000000002c * fVar8;
  fStack0000000000000088 = fStack0000000000000088 + fStack0000000000000030 * fVar8;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar4) {
    fVar12 = in_stack_00000020._4_4_ * (fStack0000000000000088 - fStack0000000000000000) +
             fStack000000000000008c * (fStack0000000000000038 - unaff_s12) +
             fStack0000000000000028 * (fStack000000000000003c - fStack000000000000001c);
    fVar9 = (fStack000000000000008c * fVar12) / fVar4;
    fVar8 = (fStack0000000000000028 * fVar12) / fVar4;
    fVar12 = (in_stack_00000020._4_4_ * fVar12) / fVar4;
  }
  else {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar9 = *pfVar3;
    fVar8 = pfVar3[1];
    fVar12 = pfVar3[2];
  }
  if (0.0 <= in_stack_00000020._4_4_ * fVar12 +
             fStack000000000000008c * fVar9 + fStack0000000000000028 * fVar8) {
    if (fVar4 < fVar9 * fVar9 + fVar8 * fVar8 + fVar12 * fVar12) {
      fVar8 = fStack0000000000000028;
      fVar9 = fStack000000000000008c;
      fVar12 = in_stack_00000020._4_4_;
    }
  }
  else {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar8 = pfVar3[1];
    fVar9 = *pfVar3;
    fVar12 = pfVar3[2];
  }
  if (DAT_06bb42c8 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c8 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fStack0000000000000038 = fStack0000000000000038 - (unaff_s12 + fVar9);
  fStack0000000000000088 = fStack0000000000000088 - (fStack0000000000000000 + fVar12);
  fStack000000000000003c = fStack000000000000003c - (fStack000000000000001c + fVar8);
  return SQRT(fStack0000000000000088 * fStack0000000000000088 +
              fStack0000000000000038 * fStack0000000000000038 +
              fStack000000000000003c * fStack000000000000003c);
}


