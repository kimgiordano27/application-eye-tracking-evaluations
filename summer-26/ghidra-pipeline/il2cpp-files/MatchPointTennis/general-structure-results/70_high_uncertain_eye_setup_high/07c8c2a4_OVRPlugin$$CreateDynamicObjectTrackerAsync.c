/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTrackerAsync
ENTRY_POINT: 07c8c2a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c8c738) */

float OVRPlugin__CreateDynamicObjectTrackerAsync
                (float *param_1,undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long *unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float fVar9;
  float unaff_s9;
  float fVar10;
  float fVar11;
  float unaff_s10;
  float fVar12;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar13;
  float fVar14;
  float unaff_s15;
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
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  fVar4 = *param_1;
  fVar10 = unaff_s15;
  fVar9 = fStack000000000000008c;
  fVar13 = fStack0000000000000088;
  fStack0000000000000008 = fStack0000000000000038;
  fVar6 = fStack000000000000003c;
  fVar8 = in_stack_00000030._4_4_;
  fVar11 = unaff_s10;
  fVar7 = unaff_s9;
  fVar14 = unaff_s8;
  fStack0000000000000018 = unaff_s11;
  fStack000000000000001c = fStack000000000000002c;
  fStack0000000000000020 = fStack0000000000000028;
  if (fVar4 <= param_3) {
    fVar6 = unaff_s11 * unaff_s12 +
            fStack0000000000000028 * unaff_s14 + fStack000000000000002c * unaff_s13;
    fStack0000000000000020 = fStack0000000000000028 - (unaff_s14 * fVar6) / param_3;
    fStack000000000000001c = fStack000000000000002c - (unaff_s13 * fVar6) / param_3;
    fStack0000000000000018 = unaff_s11 - (unaff_s12 * fVar6) / param_3;
    fVar7 = unaff_s8 * unaff_s12 + unaff_s10 * unaff_s14 + unaff_s9 * unaff_s13;
    fVar8 = in_stack_00000030._4_4_ * unaff_s12 +
            fStack000000000000003c * unaff_s14 + fStack0000000000000038 * unaff_s13;
    fStack0000000000000008 = fStack0000000000000038 - (unaff_s13 * fVar8) / param_3;
    fVar6 = fStack000000000000008c * unaff_s12 +
            unaff_s15 * unaff_s14 + fStack0000000000000088 * unaff_s13;
    fVar10 = unaff_s15 - (unaff_s14 * fVar6) / param_3;
    fVar9 = fStack000000000000008c - (unaff_s12 * fVar6) / param_3;
    fVar13 = fStack0000000000000088 - (unaff_s13 * fVar6) / param_3;
    fVar6 = fStack000000000000003c - (unaff_s14 * fVar8) / param_3;
    fVar8 = in_stack_00000030._4_4_ - (unaff_s12 * fVar8) / param_3;
    fVar11 = unaff_s10 - (unaff_s14 * fVar7) / param_3;
    fVar7 = unaff_s9 - (unaff_s13 * fVar7) / param_3;
    fVar14 = unaff_s8 - (unaff_s12 * fVar7) / param_3;
  }
  fStack000000000000000c = unaff_s11;
  fStack0000000000000010 = unaff_s9;
  fStack0000000000000014 = unaff_s8;
  fStack0000000000000024 = unaff_s10;
  if (DAT_0a51c0c3 == '\0') {
    FUN_04447ba8();
    DAT_0a51c0c3 = '\x01';
    fVar4 = **(float **)(*unaff_x19 + 0xb8);
  }
  puVar1 = PTR_DAT_09f1e740;
  fVar5 = fVar9 * fVar9 + fVar10 * fVar10 + fVar13 * fVar13;
  if (fVar4 <= fVar5) {
    fVar4 = (fStack0000000000000018 - fVar14) * fVar9 +
            (fStack0000000000000020 - fVar11) * fVar10 + (fStack000000000000001c - fVar7) * fVar13;
    fVar10 = (fVar10 * fVar4) / fVar5;
    fVar13 = (fVar13 * fVar4) / fVar5;
    fVar5 = (fVar9 * fVar4) / fVar5;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar10 = *pfVar3;
    fVar13 = pfVar3[1];
    fVar5 = pfVar3[2];
  }
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  puVar2 = PTR_DAT_09f1e748;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar9 = DAT_01c7607c;
  fVar4 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fStack0000000000000008 * fStack0000000000000008);
  if (fVar4 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar6 = *pfVar3;
    fVar12 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  else {
    fVar6 = fVar6 / fVar4;
    fVar12 = fStack0000000000000008 / fVar4;
    fVar8 = fVar8 / fVar4;
  }
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  fVar11 = (fVar11 + fVar10) - fStack0000000000000020;
  fVar7 = (fVar7 + fVar13) - fStack000000000000001c;
  fVar14 = (fVar14 + fVar5) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar10 = SQRT(fVar14 * fVar14 + fVar11 * fVar11 + fVar7 * fVar7);
  if (fVar10 <= fVar9) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar14 = pfVar3[2];
  }
  else {
    fVar11 = fVar11 / fVar10;
    fVar7 = fVar7 / fVar10;
    fVar14 = fVar14 / fVar10;
  }
  if (DAT_0a51c009 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  if ((*(int *)(*(long *)puVar2 + 0xe4) == 0) && (thunk_FUN_044a54b4(), DAT_0a51c009 == '\0')) {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar4 = (fVar10 / (fVar8 * fVar14 + fVar6 * fVar11 + fVar12 * fVar7)) / fVar4;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  if (DAT_0a51c0c3 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a51c0c3 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar4;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar4;
  fVar6 = fStack000000000000008c * fStack000000000000008c +
          unaff_s15 * unaff_s15 + fStack0000000000000088 * fStack0000000000000088;
  fVar8 = fStack000000000000000c + in_stack_00000030._4_4_ * fVar4;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar6) {
    fVar14 = fStack000000000000008c * (fVar8 - fStack0000000000000014) +
             unaff_s15 * (fStack0000000000000028 - fStack0000000000000024) +
             fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar11 = (unaff_s15 * fVar14) / fVar6;
    fVar7 = (fStack0000000000000088 * fVar14) / fVar6;
    fVar14 = (fStack000000000000008c * fVar14) / fVar6;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar14 = pfVar3[2];
  }
  if (0.0 <= fStack000000000000008c * fVar14 + unaff_s15 * fVar11 + fStack0000000000000088 * fVar7)
  {
    if (fVar6 < fVar11 * fVar11 + fVar7 * fVar7 + fVar14 * fVar14) {
      fVar11 = unaff_s15;
      fVar7 = fStack0000000000000088;
      fVar14 = fStack000000000000008c;
    }
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar14 = pfVar3[2];
  }
  if (DAT_0a51c00a == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c00a = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar11);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar7);
  fVar8 = fVar8 - (fStack0000000000000014 + fVar14);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  return SQRT(fVar8 * fVar8 +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


