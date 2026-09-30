/*
FUNCTION_NAME: OVRPlugin$$SendVirtualKeyboardInput
ENTRY_POINT: 07481798
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07481a14) */

float OVRPlugin__SendVirtualKeyboardInput(long param_1)

{
  undefined *puVar1;
  float *pfVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  float fVar6;
  float fVar7;
  float unaff_s13;
  float fVar8;
  float fVar9;
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
  
  pfVar2 = *(float **)(param_1 + 0xb8);
  fVar5 = *pfVar2;
  fVar8 = pfVar2[1];
  fVar9 = pfVar2[2];
  if (DAT_0983637d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
    in_s16 = unaff_s10;
    in_s17 = unaff_s11;
    in_s18 = unaff_s13;
  }
  puVar1 = PTR_DAT_091a1008;
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    in_s16 = unaff_s10;
    in_s17 = unaff_s11;
    in_s18 = unaff_s13;
  }
  fVar3 = DAT_0191476c;
  fVar7 = SQRT(in_s20 * in_s20 + in_s19 * in_s19 + fStack0000000000000008 * fStack0000000000000008);
  if (fVar7 <= DAT_0191476c) {
    if (*(char *)(unaff_x21 + 0x2c7) == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      *(undefined1 *)(unaff_x21 + 0x2c7) = 1;
      in_s16 = unaff_s10;
      in_s17 = unaff_s11;
      in_s18 = unaff_s13;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar4 = *pfVar2;
    fStack0000000000000008 = pfVar2[1];
    fVar6 = pfVar2[2];
  }
  else {
    fVar4 = in_s19 / fVar7;
    fStack0000000000000008 = fStack0000000000000008 / fVar7;
    fVar6 = in_s20 / fVar7;
  }
  if (DAT_0983637d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
  }
  fStack0000000000000020 = (in_s16 + fVar5) - fStack0000000000000020;
  fStack000000000000001c = (in_s17 + fVar8) - fStack000000000000001c;
  fStack0000000000000018 = (in_s18 + fVar9) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar5 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000020 * fStack0000000000000020 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar5 <= fVar3) {
    if (*(char *)(unaff_x21 + 0x2c7) == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      *(undefined1 *)(unaff_x21 + 0x2c7) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fStack0000000000000020 = *pfVar2;
    fStack000000000000001c = pfVar2[1];
    fStack0000000000000018 = pfVar2[2];
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
  if ((*(int *)(*(long *)puVar1 + 0xe0) == 0) && (thunk_FUN_03db619c(), DAT_098362cc == '\0')) {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_098362cc = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar7 = (fVar5 / (fVar6 * fStack0000000000000018 +
                   fVar4 * fStack0000000000000020 + fStack0000000000000008 * fStack000000000000001c)
          ) / fVar7;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  if (*(char *)(unaff_x23 + 0x3f2) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x23 + 0x3f2) = 1;
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar7;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar7;
  fVar5 = fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000030 * fStack0000000000000030 +
          fStack0000000000000088 * fStack0000000000000088;
  fStack000000000000000c = fStack000000000000000c + fStack0000000000000034 * fVar7;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar5) {
    fVar3 = fStack000000000000008c * (fStack000000000000000c - fStack0000000000000014) +
            fStack0000000000000030 * (fStack0000000000000028 - fStack0000000000000024) +
            fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar8 = (fStack0000000000000030 * fVar3) / fVar5;
    fVar9 = (fStack0000000000000088 * fVar3) / fVar5;
    fVar3 = (fStack000000000000008c * fVar3) / fVar5;
  }
  else {
    if (*(char *)(unaff_x21 + 0x2c7) == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      *(undefined1 *)(unaff_x21 + 0x2c7) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar8 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar3 = pfVar2[2];
  }
  if (0.0 <= fStack000000000000008c * fVar3 +
             fStack0000000000000030 * fVar8 + fStack0000000000000088 * fVar9) {
    if (fVar5 < fVar8 * fVar8 + fVar9 * fVar9 + fVar3 * fVar3) {
      fVar8 = fStack0000000000000030;
      fVar9 = fStack0000000000000088;
      fVar3 = fStack000000000000008c;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0x2c7) == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      *(undefined1 *)(unaff_x21 + 0x2c7) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar8 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar3 = pfVar2[2];
  }
  if (DAT_09836324 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_09836324 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar8);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar9);
  fStack000000000000000c = fStack000000000000000c - (fStack0000000000000014 + fVar3);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  return SQRT(fStack000000000000000c * fStack000000000000000c +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


