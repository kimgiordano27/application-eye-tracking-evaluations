/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTracker
ENTRY_POINT: 05330f78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__CreateDynamicObjectTracker
                (float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
                float param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s11;
  float fVar13;
  float unaff_s14;
  float in_s17;
  float fVar14;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float in_stack_000000c0;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float in_stack_000000d8;
  
  fStack000000000000002c = param_4 - param_1;
  fStack0000000000000030 = param_6 - param_3;
  fStack00000000000000d4 = fStack00000000000000d4 - unaff_s14;
  in_stack_000000d8 = in_stack_000000d8 - unaff_s11;
  fStack000000000000008c = fStack00000000000000d0 - in_stack_000000c0;
  fVar11 = in_s17 * in_stack_000000d8 - fStack0000000000000030 * fStack00000000000000d4;
  fVar10 = fStack0000000000000030 * fStack000000000000008c -
           fStack000000000000002c * in_stack_000000d8;
  fVar9 = fStack000000000000002c * fStack00000000000000d4 - in_s17 * fStack000000000000008c;
  fStack0000000000000034 = in_s17;
  fStack0000000000000038 = param_1;
  fStack000000000000003c = param_2;
  fStack0000000000000088 = param_3;
  if (DAT_06bb8c34 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8c34 = '\x01';
  }
  puVar3 = PTR_DAT_067c8fa8;
  fVar6 = fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10;
  fVar5 = **(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8);
  if (fVar5 <= fVar6) {
    fVar12 = unaff_s11 * fVar9 + in_stack_000000c0 * fVar11 + unaff_s14 * fVar10;
    fVar8 = fStack0000000000000088 * fVar9 +
            fStack0000000000000038 * fVar11 + fStack000000000000003c * fVar10;
    fVar13 = fStack0000000000000030 * fVar9 +
             fStack000000000000002c * fVar11 + fStack0000000000000034 * fVar10;
    fVar14 = in_stack_000000d8 * fVar9 +
             fStack000000000000008c * fVar11 + fStack00000000000000d4 * fVar10;
    fStack0000000000000010 = fStack0000000000000038 - (fVar11 * fVar8) / fVar6;
    fStack0000000000000014 = fStack000000000000003c - (fVar10 * fVar8) / fVar6;
    fStack0000000000000018 = fStack0000000000000088 - (fVar9 * fVar8) / fVar6;
    fStack000000000000000c = in_stack_000000c0 - (fVar11 * fVar12) / fVar6;
    fStack0000000000000008 = unaff_s14 - (fVar10 * fVar12) / fVar6;
    fStack0000000000000004 = unaff_s11 - (fVar9 * fVar12) / fVar6;
    fVar7 = fStack000000000000002c - (fVar11 * fVar13) / fVar6;
    fVar8 = fStack0000000000000034 - (fVar10 * fVar13) / fVar6;
    fVar12 = fStack0000000000000030 - (fVar9 * fVar13) / fVar6;
    fVar11 = fStack000000000000008c - (fVar11 * fVar14) / fVar6;
    fVar10 = fStack00000000000000d4 - (fVar10 * fVar14) / fVar6;
    fVar9 = in_stack_000000d8 - (fVar9 * fVar14) / fVar6;
  }
  else {
    fStack0000000000000014 = fStack000000000000003c;
    fStack0000000000000018 = fStack0000000000000088;
    fStack000000000000000c = in_stack_000000c0;
    fStack0000000000000010 = fStack0000000000000038;
    fVar10 = fStack00000000000000d4;
    fVar9 = in_stack_000000d8;
    fVar8 = fStack0000000000000034;
    fVar12 = fStack0000000000000030;
    fVar7 = fStack000000000000002c;
    fVar11 = fStack000000000000008c;
    fStack0000000000000004 = unaff_s11;
    fStack0000000000000008 = unaff_s14;
  }
  fStack0000000000000024 = in_stack_000000d8;
  if (DAT_06bb8a49 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8a49 = '\x01';
    fVar5 = **(float **)(*(long *)puVar3 + 0xb8);
  }
  puVar1 = PTR_DAT_067c8f78;
  fVar6 = fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10;
  fStack000000000000001c = unaff_s14;
  if (fVar5 <= fVar6) {
    fVar5 = (fStack0000000000000018 - fStack0000000000000004) * fVar9 +
            (fStack0000000000000010 - fStack000000000000000c) * fVar11 +
            (fStack0000000000000014 - fStack0000000000000008) * fVar10;
    fVar11 = (fVar11 * fVar5) / fVar6;
    fVar10 = (fVar10 * fVar5) / fVar6;
    fVar6 = (fVar9 * fVar5) / fVar6;
  }
  else {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar4;
    fVar10 = pfVar4[1];
    fVar6 = pfVar4[2];
  }
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  puVar2 = PTR_DAT_067c8f80;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar9 = DAT_011b06e4;
  fVar5 = SQRT(fVar12 * fVar12 + fVar7 * fVar7 + fVar8 * fVar8);
  if (fVar5 <= DAT_011b06e4) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar7 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar12 = pfVar4[2];
  }
  else {
    fVar7 = fVar7 / fVar5;
    fVar8 = fVar8 / fVar5;
    fVar12 = fVar12 / fVar5;
  }
  fVar11 = fStack000000000000000c + fVar11;
  fVar6 = fStack0000000000000004 + fVar6;
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  fVar10 = (fStack0000000000000008 + fVar10) - fStack0000000000000014;
  fVar11 = fVar11 - fStack0000000000000010;
  fVar6 = fVar6 - fStack0000000000000018;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar13 = SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar10 * fVar10);
  if (fVar13 <= fVar9) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar4;
    fVar10 = pfVar4[1];
    fVar6 = pfVar4[2];
  }
  else {
    fVar11 = fVar11 / fVar13;
    fVar10 = fVar10 / fVar13;
    fVar6 = fVar6 / fVar13;
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
  fVar5 = (fVar13 / (fVar12 * fVar6 + fVar7 * fVar11 + fVar8 * fVar10)) / fVar5;
  fVar9 = 1.0;
  if (fVar5 <= 1.0) {
    fVar9 = fVar5;
  }
  fVar10 = 0.0;
  if (0.0 <= fVar5) {
    fVar10 = fVar9;
  }
  fVar9 = fStack000000000000002c * fVar10;
  fVar11 = fStack0000000000000030 * fVar10;
  if (DAT_06bb8a49 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8a49 = '\x01';
  }
  fVar5 = fStack0000000000000024 * fStack0000000000000024 +
          fStack000000000000008c * fStack000000000000008c +
          fStack00000000000000d4 * fStack00000000000000d4;
  fVar10 = fStack000000000000003c + fStack0000000000000034 * fVar10;
  fVar9 = fStack0000000000000038 + fVar9;
  fVar11 = fStack0000000000000088 + fVar11;
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar5) {
    fVar12 = fStack0000000000000024 * (fVar11 - unaff_s11) +
             fStack000000000000008c * (fVar9 - in_stack_000000c0) +
             fStack00000000000000d4 * (fVar10 - fStack000000000000001c);
    fVar8 = (fStack000000000000008c * fVar12) / fVar5;
    fVar6 = (fStack00000000000000d4 * fVar12) / fVar5;
    fVar12 = (fStack0000000000000024 * fVar12) / fVar5;
  }
  else {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar8 = *pfVar4;
    fVar6 = pfVar4[1];
    fVar12 = pfVar4[2];
  }
  if (0.0 <= fStack0000000000000024 * fVar12 +
             fStack000000000000008c * fVar8 + fStack00000000000000d4 * fVar6) {
    if (fVar5 < fVar8 * fVar8 + fVar6 * fVar6 + fVar12 * fVar12) {
      fVar6 = fStack00000000000000d4;
      fVar8 = fStack000000000000008c;
      fVar12 = fStack0000000000000024;
    }
  }
  else {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar6 = pfVar4[1];
    fVar8 = *pfVar4;
    fVar12 = pfVar4[2];
  }
  if (DAT_06bb42c8 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c8 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar9 = fVar9 - (in_stack_000000c0 + fVar8);
  fVar11 = fVar11 - (unaff_s11 + fVar12);
  fVar10 = fVar10 - (fStack000000000000001c + fVar6);
  return SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
}


