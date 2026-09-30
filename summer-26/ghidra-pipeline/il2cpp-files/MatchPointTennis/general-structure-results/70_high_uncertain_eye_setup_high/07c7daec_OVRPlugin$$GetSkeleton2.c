/*
FUNCTION_NAME: OVRPlugin$$GetSkeleton2
ENTRY_POINT: 07c7daec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c7ddb8) */

float OVRPlugin__GetSkeleton2(void)

{
  undefined *puVar1;
  float *pfVar2;
  long unaff_x20;
  long *unaff_x21;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar7;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  puVar1 = PTR_DAT_09f1e748;
  fStack000000000000002c = unaff_s11;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar7 = SQRT(unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14 + unaff_s15 * unaff_s15);
  if (unaff_s12 < fVar7) {
    if (DAT_0a51bf42 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (fVar7 <= DAT_01c7607c) {
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      pfVar2 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
      fVar3 = *pfVar2;
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
    }
    else {
      fVar3 = unaff_s13 / fVar7;
      fVar6 = unaff_s14 / fVar7;
      fVar7 = unaff_s15 / fVar7;
    }
    unaff_s13 = unaff_s12 * fVar3;
    unaff_s14 = unaff_s12 * fVar6;
    unaff_s15 = unaff_s12 * fVar7;
  }
  if (unaff_s10 * unaff_s15 + fStack000000000000002c * unaff_s13 + unaff_s9 * unaff_s14 < 0.0) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    unaff_s13 = *pfVar2;
    unaff_s14 = pfVar2[1];
    unaff_s15 = pfVar2[2];
  }
  if (DAT_0a5233ad == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a5233ad = '\x01';
  }
  fStack0000000000000018 = fStack0000000000000018 - (in_stack_00000010._4_4_ + unaff_s13);
  fStack000000000000001c = fStack000000000000001c - (in_stack_00000028 + unaff_s14);
  fStack0000000000000020 = fStack0000000000000020 - (fStack0000000000000024 + unaff_s15);
  if (**(float **)(*unaff_x21 + 0xb8) <= unaff_s8) {
    fVar7 = unaff_s10 * fStack0000000000000020 +
            fStack000000000000002c * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (fStack000000000000002c * fVar7) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar7) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar7) / unaff_s8;
  }
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar7 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar7 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    fStack0000000000000018 = **(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar7;
  }
  uVar4 = FUN_07c7cbc4();
  fVar7 = (float)FUN_0770668c(uVar4,0);
  fVar7 = fVar7 - (float)(int)(fVar7 / 360.0) * 360.0;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  fVar3 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  uVar5 = (ulong)(uint)fStack0000000000000018;
  if ((fVar3 < fVar7) && (uVar5 = uVar4, ABS(fVar7 - fVar3) < ABS(360.0 - fVar7))) {
    uVar5 = FUN_07c7cc70();
  }
  fVar7 = (float)FUN_07c7ce84();
  return in_stack_00000010._4_4_ + unaff_s13 + (float)uVar5 * fVar7;
}


