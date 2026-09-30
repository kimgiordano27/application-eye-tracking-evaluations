/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 073edba8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


/* WARNING: Removing unreachable block (ram,0x073edd4c) */

float OVRPlugin__StopEyeTracking(float param_1,undefined1 param_2 [16],float param_3)

{
  float *pfVar1;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar3;
  float fVar4;
  float unaff_s13;
  float fVar5;
  float unaff_s14;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
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
  
  fVar4 = SQRT(in_s20 * in_s20 + param_1);
  if (fVar4 <= unaff_s8) {
    if (*(char *)(unaff_x21 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x21 + 0xff5) = 1;
      in_s16 = unaff_s10;
      in_s17 = unaff_s11;
      in_s18 = unaff_s13;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar2 = *pfVar1;
    param_3 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  else {
    fVar2 = in_s19 / fVar4;
    param_3 = param_3 / fVar4;
    fVar3 = in_s20 / fVar4;
  }
  if (*(char *)(unaff_x24 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x24 + 0xb4) = 1;
  }
  fStack0000000000000020 = (in_s16 + unaff_s9) - fStack0000000000000020;
  fStack000000000000001c = (in_s17 + unaff_s14) - fStack000000000000001c;
  fStack0000000000000018 = (in_s18 + unaff_s15) - fStack0000000000000018;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar5 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000020 * fStack0000000000000020 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar5 <= unaff_s8) {
    if (*(char *)(unaff_x21 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x21 + 0xff5) = 1;
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
  if (DAT_094100b5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b5 = '\x01';
  }
  if ((*(int *)(*unaff_x22 + 0xe0) == 0) && (thunk_FUN_03cd7500(), DAT_094100b5 == '\0')) {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b5 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar4 = (fVar5 / (fVar3 * fStack0000000000000018 +
                   fVar2 * fStack0000000000000020 + param_3 * fStack000000000000001c)) / fVar4;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  if (*(char *)(unaff_x23 + 0x12a) == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    *(undefined1 *)(unaff_x23 + 0x12a) = 1;
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar4;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar4;
  fVar2 = fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000030 * fStack0000000000000030 +
          fStack0000000000000088 * fStack0000000000000088;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fStack0000000000000034 * fVar4;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar2) {
    fVar5 = fStack000000000000008c * (in_stack_00000008._4_4_ - fStack0000000000000014) +
            fStack0000000000000030 * (fStack0000000000000028 - fStack0000000000000024) +
            fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar4 = (fStack0000000000000030 * fVar5) / fVar2;
    fVar3 = (fStack0000000000000088 * fVar5) / fVar2;
    fVar5 = (fStack000000000000008c * fVar5) / fVar2;
  }
  else {
    if (*(char *)(unaff_x21 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x21 + 0xff5) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar4 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  if (0.0 <= fStack000000000000008c * fVar5 +
             fStack0000000000000030 * fVar4 + fStack0000000000000088 * fVar3) {
    if (fVar2 < fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5) {
      fVar4 = fStack0000000000000030;
      fVar3 = fStack0000000000000088;
      fVar5 = fStack000000000000008c;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x21 + 0xff5) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar4 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  if (DAT_09410538 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_09410538 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar4);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar3);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (fStack0000000000000014 + fVar5);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  return SQRT(in_stack_00000008._4_4_ * in_stack_00000008._4_4_ +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


