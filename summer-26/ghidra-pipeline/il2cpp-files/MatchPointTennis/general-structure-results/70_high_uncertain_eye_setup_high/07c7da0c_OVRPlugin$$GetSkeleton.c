/*
FUNCTION_NAME: OVRPlugin$$GetSkeleton
ENTRY_POINT: 07c7da0c
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

float OVRPlugin__GetSkeleton(void)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long unaff_x20;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar8;
  float unaff_s12;
  float unaff_s13;
  float fVar9;
  float unaff_s14;
  float fVar10;
  float unaff_s15;
  float fVar11;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  puVar2 = PTR_DAT_09f1f580;
  fVar7 = unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11 + unaff_s9 * unaff_s9;
  fStack0000000000000014 = unaff_s15;
  fStack0000000000000018 = unaff_s14;
  fStack000000000000001c = unaff_s13;
  if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar7) {
    fVar11 = (unaff_s12 - in_stack_00000020._4_4_) * unaff_s10 +
             (unaff_s14 - unaff_s15) * unaff_s11 + (unaff_s13 - in_stack_00000028) * unaff_s9;
    fVar9 = (unaff_s11 * fVar11) / fVar7;
    fVar10 = (unaff_s9 * fVar11) / fVar7;
    fVar11 = (unaff_s10 * fVar11) / fVar7;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar9 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar11 = pfVar3[2];
  }
  fVar4 = (float)FUN_07c7d064();
  if (DAT_0a51c009 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  puVar1 = PTR_DAT_09f1e748;
  fStack000000000000002c = unaff_s11;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar8 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
  if (fVar4 < fVar8) {
    if (DAT_0a51bf42 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (fVar8 <= DAT_01c7607c) {
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
      fVar9 = *pfVar3;
      fVar10 = pfVar3[1];
      fVar11 = pfVar3[2];
    }
    else {
      fVar9 = fVar9 / fVar8;
      fVar10 = fVar10 / fVar8;
      fVar11 = fVar11 / fVar8;
    }
    fVar9 = fVar4 * fVar9;
    fVar10 = fVar4 * fVar10;
    fVar11 = fVar4 * fVar11;
  }
  if (unaff_s10 * fVar11 + fStack000000000000002c * fVar9 + unaff_s9 * fVar10 < 0.0) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar9 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar11 = pfVar3[2];
  }
  fVar9 = fStack0000000000000014 + fVar9;
  if (DAT_0a5233ad == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a5233ad = '\x01';
  }
  fVar4 = fStack0000000000000018 - fVar9;
  fVar10 = fStack000000000000001c - (in_stack_00000028 + fVar10);
  fVar11 = unaff_s12 - (in_stack_00000020._4_4_ + fVar11);
  if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar7) {
    fVar8 = unaff_s10 * fVar11 + fStack000000000000002c * fVar4 + unaff_s9 * fVar10;
    fVar4 = fVar4 - (fStack000000000000002c * fVar8) / fVar7;
    fVar10 = fVar10 - (unaff_s9 * fVar8) / fVar7;
    fVar11 = fVar11 - (unaff_s10 * fVar8) / fVar7;
  }
  fStack0000000000000014 = fVar9;
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar7 = SQRT(fVar11 * fVar11 + fVar4 * fVar4 + fVar10 * fVar10);
  if (fVar7 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    fVar4 = **(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
  }
  else {
    fVar4 = fVar4 / fVar7;
  }
  uVar5 = FUN_07c7cbc4();
  fVar7 = (float)FUN_0770668c(uVar5,0);
  fVar7 = fVar7 - (float)(int)(fVar7 / 360.0) * 360.0;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  fVar11 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  uVar6 = (ulong)(uint)fVar4;
  if ((fVar11 < fVar7) && (uVar6 = uVar5, ABS(fVar7 - fVar11) < ABS(360.0 - fVar7))) {
    uVar6 = FUN_07c7cc70();
  }
  fVar7 = (float)FUN_07c7ce84();
  return fStack0000000000000014 + (float)uVar6 * fVar7;
}


