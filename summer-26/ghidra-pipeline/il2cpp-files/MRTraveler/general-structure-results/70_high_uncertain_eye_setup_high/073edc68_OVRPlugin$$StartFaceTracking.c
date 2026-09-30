/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 073edc68
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073edd4c) */

float OVRPlugin__StartFaceTracking
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float *pfVar1;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar5;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  fVar5 = SQRT(unaff_s14 * unaff_s14 + param_1 + unaff_s15 * unaff_s15);
  if (fVar5 <= unaff_s8) {
    if (*(char *)(unaff_x21 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x21 + 0xff5) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  else {
    fVar2 = unaff_s9 / fVar5;
    fVar3 = unaff_s15 / fVar5;
    fVar4 = unaff_s14 / fVar5;
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
  fVar5 = (fVar5 / (unaff_s11 * fVar4 + param_4 * fVar2 + unaff_s10 * fVar3)) / unaff_s12;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  if (*(char *)(unaff_x23 + 0x12a) == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    *(undefined1 *)(unaff_x23 + 0x12a) = 1;
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar5;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar5;
  fVar2 = fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000030 * fStack0000000000000030 +
          fStack0000000000000088 * fStack0000000000000088;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fStack0000000000000034 * fVar5;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar2) {
    fVar4 = fStack000000000000008c * (in_stack_00000008._4_4_ - fStack0000000000000014) +
            fStack0000000000000030 * (fStack0000000000000028 - in_stack_00000020._4_4_) +
            fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar5 = (fStack0000000000000030 * fVar4) / fVar2;
    fVar3 = (fStack0000000000000088 * fVar4) / fVar2;
    fVar4 = (fStack000000000000008c * fVar4) / fVar2;
  }
  else {
    if (*(char *)(unaff_x21 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x21 + 0xff5) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar5 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  if (0.0 <= fStack000000000000008c * fVar4 +
             fStack0000000000000030 * fVar5 + fStack0000000000000088 * fVar3) {
    if (fVar2 < fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4) {
      fVar5 = fStack0000000000000030;
      fVar3 = fStack0000000000000088;
      fVar4 = fStack000000000000008c;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x21 + 0xff5) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar5 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  if (DAT_09410538 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_09410538 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (in_stack_00000020._4_4_ + fVar5);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar3);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (fStack0000000000000014 + fVar4);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  return SQRT(in_stack_00000008._4_4_ * in_stack_00000008._4_4_ +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


