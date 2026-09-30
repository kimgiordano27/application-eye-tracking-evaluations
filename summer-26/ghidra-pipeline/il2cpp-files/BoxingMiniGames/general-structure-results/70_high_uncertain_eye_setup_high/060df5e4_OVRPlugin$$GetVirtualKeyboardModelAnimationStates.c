/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 060df5e4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetVirtualKeyboardModelAnimationStates(float param_1,float param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long unaff_x19;
  long *plVar4;
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
  
  plVar4 = *(long **)(unaff_x19 + 0xdf8);
  fVar6 = unaff_s8 * unaff_s8 + param_1 + param_2;
  fVar5 = **(float **)(*plVar4 + 0xb8);
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
  if (DAT_07edda98 == '\0') {
    FUN_03642964(plVar4);
    DAT_07edda98 = '\x01';
    fVar5 = **(float **)(*plVar4 + 0xb8);
  }
  puVar1 = PTR_DAT_079f4dc0;
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
    if (DAT_07ed76b5 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b5 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar3;
    fVar13 = pfVar3[1];
    fVar7 = pfVar3[2];
  }
  if (DAT_07ed76b7 == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed76b7 = '\x01';
  }
  puVar2 = PTR_DAT_079f4df0;
  if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar5 = DAT_01651354;
  fVar6 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar6 <= DAT_01651354) {
    if (DAT_07ed76b5 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b5 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar8 = *pfVar3;
    fVar9 = pfVar3[1];
    fVar10 = pfVar3[2];
  }
  else {
    fVar8 = fVar8 / fVar6;
    fVar9 = fVar9 / fVar6;
    fVar10 = fVar10 / fVar6;
  }
  fVar11 = fStack000000000000000c + fVar11;
  fVar13 = fStack0000000000000008 + fVar13;
  fVar7 = fStack0000000000000004 + fVar7;
  if (DAT_07ed76b7 == '\0') {
                    /* try { // try from 060df8c0 to 061df9bb has its CatchHandler @ 060df8c0
                       catch() { ... } // from try @ 060df8c0 with catch @ 060df8c0
                       catch() { ... } // from try @ 060dfca8 with catch @ 060df8c0
                       catch() { ... } // from try @ 060dfcfc with catch @ 060df8c0
                       catch() { ... } // from try @ 060dfd24 with catch @ 060df8c0 */
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed76b7 = '\x01';
  }
  fVar13 = fVar13 - fStack0000000000000014;
  fVar11 = fVar11 - fStack0000000000000010;
  fVar7 = fVar7 - fStack0000000000000018;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar12 = SQRT(fVar7 * fVar7 + fVar11 * fVar11 + fVar13 * fVar13);
  if (fVar12 <= fVar5) {
    if (DAT_07ed76b5 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b5 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar3;
    fVar13 = pfVar3[1];
    fVar7 = pfVar3[2];
  }
  else {
    fVar11 = fVar11 / fVar12;
    fVar13 = fVar13 / fVar12;
    fVar7 = fVar7 / fVar12;
  }
  if (DAT_07ed76bb == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed76bb = '\x01';
  }
  if ((*(int *)(*(long *)puVar2 + 0xe4) == 0) && (thunk_FUN_036a1978(), DAT_07ed76bb == '\0')) {
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed76bb = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
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
  if (DAT_07edda98 == '\0') {
    FUN_03642964(PTR_DAT_079f4df8);
    DAT_07edda98 = '\x01';
  }
  fVar5 = fStack0000000000000024 * fStack0000000000000024 +
          fStack000000000000008c * fStack000000000000008c + unaff_s13 * unaff_s13;
  fStack000000000000003c = fStack000000000000003c + fStack0000000000000034 * fVar13;
  fStack0000000000000038 = fStack0000000000000038 + in_stack_00000028._4_4_ * fVar13;
  fStack0000000000000088 = fStack0000000000000088 + fStack0000000000000030 * fVar13;
  if (**(float **)(*plVar4 + 0xb8) <= fVar5) {
    fVar9 = fStack0000000000000024 * (fStack0000000000000088 - fStack0000000000000000) +
            fStack000000000000008c * (fStack0000000000000038 - unaff_s12) +
            unaff_s13 * (fStack000000000000003c - fStack000000000000001c);
    fVar13 = (fStack000000000000008c * fVar9) / fVar5;
    fVar6 = (unaff_s13 * fVar9) / fVar5;
    fVar9 = (fStack0000000000000024 * fVar9) / fVar5;
  }
  else {
    if (DAT_07ed76b5 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b5 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar13 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar9 = pfVar3[2];
  }
  if (0.0 <= fStack0000000000000024 * fVar9 + fStack000000000000008c * fVar13 + unaff_s13 * fVar6) {
    if (fVar5 < fVar13 * fVar13 + fVar6 * fVar6 + fVar9 * fVar9) {
      fVar6 = unaff_s13;
      fVar13 = fStack000000000000008c;
      fVar9 = fStack0000000000000024;
    }
  }
  else {
    if (DAT_07ed76b5 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b5 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar6 = pfVar3[1];
    fVar13 = *pfVar3;
    fVar9 = pfVar3[2];
  }
  if (DAT_07ed78be == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed78be = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fStack0000000000000038 = fStack0000000000000038 - (unaff_s12 + fVar13);
  fStack0000000000000088 = fStack0000000000000088 - (fStack0000000000000000 + fVar9);
  fStack000000000000003c = fStack000000000000003c - (fStack000000000000001c + fVar6);
  return SQRT(fStack0000000000000088 * fStack0000000000000088 +
              fStack0000000000000038 * fStack0000000000000038 +
              fStack000000000000003c * fStack000000000000003c);
}


