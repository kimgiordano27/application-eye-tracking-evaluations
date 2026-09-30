/*
FUNCTION_NAME: OVRPlugin$$DestroyVirtualKeyboard
ENTRY_POINT: 074816dc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07481a14) */

float OVRPlugin__DestroyVirtualKeyboard
                (float param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
                float param_5,float param_6,float param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long *unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
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
  
  param_7 = param_7 - param_5;
  param_6 = param_6 - param_2;
  if (DAT_098373f2 == '\0') {
    FUN_03d2d2b0();
    DAT_098373f2 = '\x01';
    param_1 = **(float **)(*unaff_x19 + 0xb8);
  }
  puVar1 = PTR_DAT_091a0f88;
  fVar5 = param_6 * param_6 + unaff_s9 * unaff_s9 + param_7 * param_7;
  if (param_1 <= fVar5) {
    fVar4 = (fStack0000000000000018 - in_s18) * param_6 +
            (fStack0000000000000020 - in_s16) * unaff_s9 +
            (fStack000000000000001c - in_s17) * param_7;
    fVar7 = (unaff_s9 * fVar4) / fVar5;
    fVar10 = (param_7 * fVar4) / fVar5;
    fVar5 = (param_6 * fVar4) / fVar5;
  }
  else {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar7 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar5 = pfVar3[2];
  }
  if (DAT_0983637d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
  }
  puVar2 = PTR_DAT_091a1008;
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar4 = DAT_0191476c;
  fVar9 = SQRT(in_s20 * in_s20 + in_s19 * in_s19 + fStack0000000000000008 * fStack0000000000000008);
  if (fVar9 <= DAT_0191476c) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar6 = *pfVar3;
    fStack0000000000000008 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  else {
    fVar6 = in_s19 / fVar9;
    fStack0000000000000008 = fStack0000000000000008 / fVar9;
    fVar8 = in_s20 / fVar9;
  }
  if (DAT_0983637d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
  }
  fStack0000000000000020 = (in_s16 + fVar7) - fStack0000000000000020;
  fStack000000000000001c = (in_s17 + fVar10) - fStack000000000000001c;
  fStack0000000000000018 = (in_s18 + fVar5) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar5 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000020 * fStack0000000000000020 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar5 <= fVar4) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fStack0000000000000020 = *pfVar3;
    fStack000000000000001c = pfVar3[1];
    fStack0000000000000018 = pfVar3[2];
  }
  else {
    fStack0000000000000020 = fStack0000000000000020 / fVar5;
    fStack000000000000001c = fStack000000000000001c / fVar5;
    fStack0000000000000018 = fStack0000000000000018 / fVar5;
  }
  if (DAT_098362cc == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_098362cc = '\x01';
  }
  if ((*(int *)(*(long *)puVar2 + 0xe0) == 0) && (thunk_FUN_03db619c(), DAT_098362cc == '\0')) {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_098362cc = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar9 = (fVar5 / (fVar8 * fStack0000000000000018 +
                   fVar6 * fStack0000000000000020 + fStack0000000000000008 * fStack000000000000001c)
          ) / fVar9;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  if (DAT_098373f2 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    DAT_098373f2 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar9;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar9;
  fVar5 = fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000030 * fStack0000000000000030 +
          fStack0000000000000088 * fStack0000000000000088;
  fStack000000000000000c = fStack000000000000000c + fStack0000000000000034 * fVar9;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar5) {
    fVar10 = fStack000000000000008c * (fStack000000000000000c - fStack0000000000000014) +
             fStack0000000000000030 * (fStack0000000000000028 - fStack0000000000000024) +
             fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar4 = (fStack0000000000000030 * fVar10) / fVar5;
    fVar7 = (fStack0000000000000088 * fVar10) / fVar5;
    fVar10 = (fStack000000000000008c * fVar10) / fVar5;
  }
  else {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar4 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar10 = pfVar3[2];
  }
  if (0.0 <= fStack000000000000008c * fVar10 +
             fStack0000000000000030 * fVar4 + fStack0000000000000088 * fVar7) {
    if (fVar5 < fVar4 * fVar4 + fVar7 * fVar7 + fVar10 * fVar10) {
      fVar4 = fStack0000000000000030;
      fVar7 = fStack0000000000000088;
      fVar10 = fStack000000000000008c;
    }
  }
  else {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar4 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar10 = pfVar3[2];
  }
  if (DAT_09836324 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_09836324 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar4);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar7);
  fStack000000000000000c = fStack000000000000000c - (fStack0000000000000014 + fVar10);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  return SQRT(fStack000000000000000c * fStack000000000000000c +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


