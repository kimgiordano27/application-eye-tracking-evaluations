/*
FUNCTION_NAME: OVRPlugin$$GetSpaceDynamicObjectData
ENTRY_POINT: 0533138c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetSpaceDynamicObjectData(long param_1)

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
  float in_s3;
  float in_s4;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float fVar5;
  float in_stack_00000000;
  undefined8 in_stack_00000018;
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
  
  pfVar1 = *(float **)(param_1 + 0xb8);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  if (DAT_06bb42c7 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  if ((*(int *)(*unaff_x22 + 0xe4) == 0) && (thunk_FUN_02f6670c(), DAT_06bb42c7 == '\0')) {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar3 = (unaff_s12 / (unaff_s10 * fVar4 + in_s3 * fVar2 + in_s4 * fVar3)) / unaff_s13;
  fVar2 = 1.0;
  if (fVar3 <= 1.0) {
    fVar2 = fVar3;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar2;
  }
  if (*(char *)(unaff_x23 + 0xa49) == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    *(undefined1 *)(unaff_x23 + 0xa49) = 1;
  }
  fVar2 = fStack0000000000000024 * fStack0000000000000024 +
          fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000028 * fStack0000000000000028;
  fStack000000000000003c = fStack000000000000003c + fStack0000000000000034 * fVar4;
  fStack0000000000000038 = fStack0000000000000038 + fStack000000000000002c * fVar4;
  fStack0000000000000088 = fStack0000000000000088 + fStack0000000000000030 * fVar4;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar2) {
    fVar5 = fStack0000000000000024 * (fStack0000000000000088 - in_stack_00000000) +
            fStack000000000000008c * (fStack0000000000000038 - fStack0000000000000020) +
            fStack0000000000000028 * (fStack000000000000003c - in_stack_00000018._4_4_);
    fVar4 = (fStack000000000000008c * fVar5) / fVar2;
    fVar3 = (fStack0000000000000028 * fVar5) / fVar2;
    fVar5 = (fStack0000000000000024 * fVar5) / fVar2;
  }
  else {
    if (*(char *)(unaff_x21 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar4 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  if (0.0 <= fStack0000000000000024 * fVar5 +
             fStack000000000000008c * fVar4 + fStack0000000000000028 * fVar3) {
    if (fVar2 < fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5) {
      fVar3 = fStack0000000000000028;
      fVar4 = fStack000000000000008c;
      fVar5 = fStack0000000000000024;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar3 = pfVar1[1];
    fVar4 = *pfVar1;
    fVar5 = pfVar1[2];
  }
  if (DAT_06bb42c8 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c8 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fStack0000000000000038 = fStack0000000000000038 - (fStack0000000000000020 + fVar4);
  fStack0000000000000088 = fStack0000000000000088 - (in_stack_00000000 + fVar5);
  fStack000000000000003c = fStack000000000000003c - (in_stack_00000018._4_4_ + fVar3);
  return SQRT(fStack0000000000000088 * fStack0000000000000088 +
              fStack0000000000000038 * fStack0000000000000038 +
              fStack000000000000003c * fStack000000000000003c);
}


