/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClasses
ENTRY_POINT: 053311b4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetDynamicObjectTrackedClasses(void)

{
  undefined *puVar1;
  float *pfVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack0000000000000000;
  float fStack0000000000000004;
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
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
  pfVar2 = *(float **)(*unaff_x20 + 0xb8);
  fVar6 = *pfVar2;
  fVar9 = pfVar2[1];
  fVar10 = pfVar2[2];
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  puVar1 = PTR_DAT_067c8f80;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar8 = DAT_011b06e4;
  fVar7 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar7 <= DAT_011b06e4) {
    if (*(char *)(unaff_x21 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar3 = *pfVar2;
    fVar4 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  else {
    fVar3 = unaff_s8 / fVar7;
    fVar4 = unaff_s9 / fVar7;
    fVar5 = unaff_s10 / fVar7;
  }
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  fStack0000000000000014 = (fStack0000000000000008 + fVar9) - fStack0000000000000014;
  fStack0000000000000010 = (fStack000000000000000c + fVar6) - fStack0000000000000010;
  fStack0000000000000018 = (fStack0000000000000004 + fVar10) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar6 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000010 * fStack0000000000000010 +
               fStack0000000000000014 * fStack0000000000000014);
  if (fVar6 <= fVar8) {
    if (*(char *)(unaff_x21 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fStack0000000000000010 = *pfVar2;
    fStack0000000000000014 = pfVar2[1];
    fStack0000000000000018 = pfVar2[2];
  }
  else {
    fStack0000000000000010 = fStack0000000000000010 / fVar6;
    fStack0000000000000014 = fStack0000000000000014 / fVar6;
    fStack0000000000000018 = fStack0000000000000018 / fVar6;
  }
  if (DAT_06bb42c7 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  if ((*(int *)(*(long *)puVar1 + 0xe4) == 0) && (thunk_FUN_02f6670c(), DAT_06bb42c7 == '\0')) {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar7 = (fVar6 / (fVar5 * fStack0000000000000018 +
                   fVar3 * fStack0000000000000010 + fVar4 * fStack0000000000000014)) / fVar7;
  fVar6 = 1.0;
  if (fVar7 <= 1.0) {
    fVar6 = fVar7;
  }
  fVar9 = 0.0;
  if (0.0 <= fVar7) {
    fVar9 = fVar6;
  }
  if (*(char *)(unaff_x23 + 0xa49) == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    *(undefined1 *)(unaff_x23 + 0xa49) = 1;
  }
  fVar6 = fStack0000000000000024 * fStack0000000000000024 +
          fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000028 * fStack0000000000000028;
  fStack000000000000003c = fStack000000000000003c + fStack0000000000000034 * fVar9;
  fStack0000000000000038 = fStack0000000000000038 + fStack000000000000002c * fVar9;
  fStack0000000000000088 = fStack0000000000000088 + fStack0000000000000030 * fVar9;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar6) {
    fVar8 = fStack0000000000000024 * (fStack0000000000000088 - fStack0000000000000000) +
            fStack000000000000008c * (fStack0000000000000038 - fStack0000000000000020) +
            fStack0000000000000028 * (fStack000000000000003c - fStack000000000000001c);
    fVar10 = (fStack000000000000008c * fVar8) / fVar6;
    fVar9 = (fStack0000000000000028 * fVar8) / fVar6;
    fVar8 = (fStack0000000000000024 * fVar8) / fVar6;
  }
  else {
    if (*(char *)(unaff_x21 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar10 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar8 = pfVar2[2];
  }
  if (0.0 <= fStack0000000000000024 * fVar8 +
             fStack000000000000008c * fVar10 + fStack0000000000000028 * fVar9) {
    if (fVar6 < fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8) {
      fVar9 = fStack0000000000000028;
      fVar10 = fStack000000000000008c;
      fVar8 = fStack0000000000000024;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar9 = pfVar2[1];
    fVar10 = *pfVar2;
    fVar8 = pfVar2[2];
  }
  if (DAT_06bb42c8 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c8 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fStack0000000000000038 = fStack0000000000000038 - (fStack0000000000000020 + fVar10);
  fStack0000000000000088 = fStack0000000000000088 - (fStack0000000000000000 + fVar8);
  fStack000000000000003c = fStack000000000000003c - (fStack000000000000001c + fVar9);
  return SQRT(fStack0000000000000088 * fStack0000000000000088 +
              fStack0000000000000038 * fStack0000000000000038 +
              fStack000000000000003c * fStack000000000000003c);
}


