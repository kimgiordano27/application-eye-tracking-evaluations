/*
FUNCTION_NAME: OVRPlugin$$GetSpaceDynamicObjectData
ENTRY_POINT: 07c8c5e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c8c738) */

float OVRPlugin__GetSpaceDynamicObjectData(float *param_1)

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
  float fVar3;
  float fVar4;
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
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  if (*(char *)(unaff_x24 + 0xf42) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x24 + 0xf42) = 1;
  }
  fStack0000000000000020 = (in_s16 + unaff_s9) - fStack0000000000000020;
  fStack000000000000001c = (in_s17 + unaff_s14) - fStack000000000000001c;
  fStack0000000000000018 = (in_s18 + unaff_s15) - fStack0000000000000018;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar5 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000020 * fStack0000000000000020 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar5 <= unaff_s8) {
    if (*(char *)(unaff_x21 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x21 + 0xf43) = 1;
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
  if (DAT_0a51c009 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  if ((*(int *)(*unaff_x22 + 0xe4) == 0) && (thunk_FUN_044a54b4(), DAT_0a51c009 == '\0')) {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar2 = (fVar5 / (fVar4 * fStack0000000000000018 +
                   fVar2 * fStack0000000000000020 + fVar3 * fStack000000000000001c)) / unaff_s12;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  if (*(char *)(unaff_x23 + 0xc3) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    *(undefined1 *)(unaff_x23 + 0xc3) = 1;
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar2;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar2;
  fVar3 = fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000030 * fStack0000000000000030 +
          fStack0000000000000088 * fStack0000000000000088;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fStack0000000000000034 * fVar2;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar3) {
    fVar5 = fStack000000000000008c * (in_stack_00000008._4_4_ - fStack0000000000000014) +
            fStack0000000000000030 * (fStack0000000000000028 - fStack0000000000000024) +
            fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar2 = (fStack0000000000000030 * fVar5) / fVar3;
    fVar4 = (fStack0000000000000088 * fVar5) / fVar3;
    fVar5 = (fStack000000000000008c * fVar5) / fVar3;
  }
  else {
    if (*(char *)(unaff_x21 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x21 + 0xf43) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar2 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  if (0.0 <= fStack000000000000008c * fVar5 +
             fStack0000000000000030 * fVar2 + fStack0000000000000088 * fVar4) {
    if (fVar3 < fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5) {
      fVar2 = fStack0000000000000030;
      fVar4 = fStack0000000000000088;
      fVar5 = fStack000000000000008c;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x21 + 0xf43) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar2 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  if (DAT_0a51c00a == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c00a = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar2);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar4);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (fStack0000000000000014 + fVar5);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  return SQRT(in_stack_00000008._4_4_ * in_stack_00000008._4_4_ +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


