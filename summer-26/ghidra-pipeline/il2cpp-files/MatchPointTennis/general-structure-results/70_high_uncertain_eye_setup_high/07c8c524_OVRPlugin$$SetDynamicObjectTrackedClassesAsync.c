/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClassesAsync
ENTRY_POINT: 07c8c524
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c8c738) */

float OVRPlugin__SetDynamicObjectTrackedClassesAsync(void)

{
  undefined *puVar1;
  float *pfVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar5;
  float fVar6;
  float unaff_s13;
  float fVar7;
  float unaff_s14;
  float unaff_s15;
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
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x24 + 0xf42) = 1;
  puVar1 = PTR_DAT_09f1e748;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar4 = DAT_01c7607c;
  fVar6 = SQRT(in_s20 * in_s20 +
               unaff_s8 * unaff_s8 + fStack0000000000000008 * fStack0000000000000008);
  if (fVar6 <= DAT_01c7607c) {
    if (*(char *)(unaff_x21 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x21 + 0xf43) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar3 = *pfVar2;
    fStack0000000000000008 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  else {
    fVar3 = unaff_s8 / fVar6;
    fStack0000000000000008 = fStack0000000000000008 / fVar6;
    fVar5 = in_s20 / fVar6;
  }
  if (*(char *)(unaff_x24 + 0xf42) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x24 + 0xf42) = 1;
  }
  fStack0000000000000020 = (unaff_s10 + unaff_s9) - fStack0000000000000020;
  fStack000000000000001c = (unaff_s11 + unaff_s14) - fStack000000000000001c;
  fStack0000000000000018 = (unaff_s13 + unaff_s15) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar7 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000020 * fStack0000000000000020 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar7 <= fVar4) {
    if (*(char *)(unaff_x21 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x21 + 0xf43) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fStack0000000000000020 = *pfVar2;
    fStack000000000000001c = pfVar2[1];
    fStack0000000000000018 = pfVar2[2];
  }
  else {
    fStack0000000000000020 = fStack0000000000000020 / fVar7;
    fStack000000000000001c = fStack000000000000001c / fVar7;
    fStack0000000000000018 = fStack0000000000000018 / fVar7;
  }
  if (DAT_0a51c009 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  if ((*(int *)(*(long *)puVar1 + 0xe4) == 0) && (thunk_FUN_044a54b4(), DAT_0a51c009 == '\0')) {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar6 = (fVar7 / (fVar5 * fStack0000000000000018 +
                   fVar3 * fStack0000000000000020 + fStack0000000000000008 * fStack000000000000001c)
          ) / fVar6;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  if (*(char *)(unaff_x23 + 0xc3) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    *(undefined1 *)(unaff_x23 + 0xc3) = 1;
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar6;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar6;
  fVar4 = fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000030 * fStack0000000000000030 +
          fStack0000000000000088 * fStack0000000000000088;
  fStack000000000000000c = fStack000000000000000c + fStack0000000000000034 * fVar6;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar4) {
    fVar5 = fStack000000000000008c * (fStack000000000000000c - fStack0000000000000014) +
            fStack0000000000000030 * (fStack0000000000000028 - fStack0000000000000024) +
            fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar6 = (fStack0000000000000030 * fVar5) / fVar4;
    fVar3 = (fStack0000000000000088 * fVar5) / fVar4;
    fVar5 = (fStack000000000000008c * fVar5) / fVar4;
  }
  else {
    if (*(char *)(unaff_x21 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x21 + 0xf43) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar6 = *pfVar2;
    fVar3 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  if (0.0 <= fStack000000000000008c * fVar5 +
             fStack0000000000000030 * fVar6 + fStack0000000000000088 * fVar3) {
    if (fVar4 < fVar6 * fVar6 + fVar3 * fVar3 + fVar5 * fVar5) {
      fVar6 = fStack0000000000000030;
      fVar3 = fStack0000000000000088;
      fVar5 = fStack000000000000008c;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x21 + 0xf43) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar6 = *pfVar2;
    fVar3 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  if (DAT_0a51c00a == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c00a = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar6);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar3);
  fStack000000000000000c = fStack000000000000000c - (fStack0000000000000014 + fVar5);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  return SQRT(fStack000000000000000c * fStack000000000000000c +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


