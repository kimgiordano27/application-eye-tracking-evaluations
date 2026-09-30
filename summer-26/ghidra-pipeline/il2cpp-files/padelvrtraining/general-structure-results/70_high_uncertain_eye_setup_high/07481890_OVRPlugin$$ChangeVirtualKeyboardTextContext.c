/*
FUNCTION_NAME: OVRPlugin$$ChangeVirtualKeyboardTextContext
ENTRY_POINT: 07481890
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07481a14) */

float OVRPlugin__ChangeVirtualKeyboardTextContext(void)

{
  float *pfVar1;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar2;
  float fVar3;
  float in_s3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar5;
  float unaff_s14;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s18;
  undefined8 in_stack_00000008;
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
  
  if (*(char *)(unaff_x24 + 0x37d) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    *(undefined1 *)(unaff_x24 + 0x37d) = 1;
  }
  fStack0000000000000020 = (in_s16 + unaff_s9) - fStack0000000000000020;
  fStack000000000000001c = (in_s17 + unaff_s14) - fStack000000000000001c;
  fStack0000000000000018 = (in_s18 + unaff_s15) - fStack0000000000000018;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar5 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000020 * fStack0000000000000020 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar5 <= unaff_s8) {
    if (*(char *)(unaff_x21 + 0x2c7) == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      *(undefined1 *)(unaff_x21 + 0x2c7) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fStack0000000000000020 = *pfVar1;
    fStack000000000000001c = pfVar1[1];
    fStack0000000000000018 = pfVar1[2];
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
  if ((*(int *)(*unaff_x22 + 0xe0) == 0) && (thunk_FUN_03db619c(), DAT_098362cc == '\0')) {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_098362cc = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar5 = (fVar5 / (unaff_s11 * fStack0000000000000018 +
                   in_s3 * fStack0000000000000020 + unaff_s10 * fStack000000000000001c)) / unaff_s12
  ;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  if (*(char *)(unaff_x23 + 0x3f2) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x23 + 0x3f2) = 1;
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar5;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar5;
  fVar4 = fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000030 * fStack0000000000000030 +
          fStack0000000000000088 * fStack0000000000000088;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fStack0000000000000034 * fVar5;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar4) {
    fVar3 = fStack000000000000008c * (in_stack_00000008._4_4_ - fStack0000000000000014) +
            fStack0000000000000030 * (fStack0000000000000028 - fStack0000000000000024) +
            fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar5 = (fStack0000000000000030 * fVar3) / fVar4;
    fVar2 = (fStack0000000000000088 * fVar3) / fVar4;
    fVar3 = (fStack000000000000008c * fVar3) / fVar4;
  }
  else {
    if (*(char *)(unaff_x21 + 0x2c7) == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      *(undefined1 *)(unaff_x21 + 0x2c7) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar5 = *pfVar1;
    fVar2 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  if (0.0 <= fStack000000000000008c * fVar3 +
             fStack0000000000000030 * fVar5 + fStack0000000000000088 * fVar2) {
    if (fVar4 < fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3) {
      fVar5 = fStack0000000000000030;
      fVar2 = fStack0000000000000088;
      fVar3 = fStack000000000000008c;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0x2c7) == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      *(undefined1 *)(unaff_x21 + 0x2c7) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar5 = *pfVar1;
    fVar2 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  if (DAT_09836324 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_09836324 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar5);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar2);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (fStack0000000000000014 + fVar3);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  return SQRT(in_stack_00000008._4_4_ * in_stack_00000008._4_4_ +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


