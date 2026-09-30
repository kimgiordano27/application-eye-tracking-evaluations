/*
FUNCTION_NAME: OVRPlugin$$IsValidBone
ENTRY_POINT: 07c7d9bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x07c7ddb8) */

float OVRPlugin__IsValidBone(float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float unaff_s12;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  
  fVar11 = param_2;
  fVar4 = (float)FUN_07c7cdcc();
  fVar9 = fVar11;
  fStack0000000000000024 = param_3;
  fVar5 = (float)FUN_07c7d040(param_4);
  if (DAT_0a51c0c3 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a51c0c3 = '\x01';
  }
  puVar2 = PTR_DAT_09f1f580;
  fVar10 = param_3 * param_3 + fVar5 * fVar5 + fVar9 * fVar9;
  fStack0000000000000014 = fVar4;
  fStack000000000000001c = param_2;
  if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar10) {
    fVar4 = (unaff_s12 - fStack0000000000000024) * param_3 +
            (param_1 - fVar4) * fVar5 + (param_2 - fVar11) * fVar9;
    fVar12 = (fVar5 * fVar4) / fVar10;
    fVar13 = (fVar9 * fVar4) / fVar10;
    fVar4 = (param_3 * fVar4) / fVar10;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar12 = *pfVar3;
    fVar13 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  fVar6 = (float)FUN_07c7d064(param_4);
  if (DAT_0a51c009 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  puVar1 = PTR_DAT_09f1e748;
  fStack000000000000002c = fVar5;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar5 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar4 * fVar4);
  if (fVar6 < fVar5) {
    if (DAT_0a51bf42 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (fVar5 <= DAT_01c7607c) {
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
      fVar12 = *pfVar3;
      fVar13 = pfVar3[1];
      fVar4 = pfVar3[2];
    }
    else {
      fVar12 = fVar12 / fVar5;
      fVar13 = fVar13 / fVar5;
      fVar4 = fVar4 / fVar5;
    }
    fVar12 = fVar6 * fVar12;
    fVar13 = fVar6 * fVar13;
    fVar4 = fVar6 * fVar4;
  }
  if (param_3 * fVar4 + fStack000000000000002c * fVar12 + fVar9 * fVar13 < 0.0) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar12 = *pfVar3;
    fVar13 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  fVar12 = fStack0000000000000014 + fVar12;
  fVar11 = fVar11 + fVar13;
  fVar4 = fStack0000000000000024 + fVar4;
  if (DAT_0a5233ad == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a5233ad = '\x01';
  }
  param_1 = param_1 - fVar12;
  fVar5 = fStack000000000000001c - fVar11;
  fVar4 = unaff_s12 - fVar4;
  if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar10) {
    fVar13 = param_3 * fVar4 + fStack000000000000002c * param_1 + fVar9 * fVar5;
    param_1 = param_1 - (fStack000000000000002c * fVar13) / fVar10;
    fVar5 = fVar5 - (fVar9 * fVar13) / fVar10;
    fVar4 = fVar4 - (param_3 * fVar13) / fVar10;
  }
  fStack0000000000000014 = fVar12;
  fStack0000000000000024 = fVar11;
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar11 = SQRT(fVar4 * fVar4 + param_1 * param_1 + fVar5 * fVar5);
  if (fVar11 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    param_1 = **(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
  }
  else {
    param_1 = param_1 / fVar11;
  }
  uVar7 = FUN_07c7cbc4(param_4);
  fStack0000000000000004 = fVar9;
  fVar11 = (float)FUN_0770668c(uVar7,0);
  fVar11 = fVar11 - (float)(int)(fVar11 / 360.0) * 360.0;
  if (fVar11 < 0.0) {
    fVar11 = 0.0;
  }
  if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  fVar9 = *(float *)(*(long *)(param_4 + 0x20) + 0x2c);
  uVar8 = (ulong)(uint)param_1;
  if ((fVar9 < fVar11) && (uVar8 = uVar7, ABS(fVar11 - fVar9) < ABS(360.0 - fVar11))) {
    uVar8 = FUN_07c7cc70(param_4);
  }
  fVar11 = (float)FUN_07c7ce84(param_4);
  return fStack0000000000000014 + (float)uVar8 * fVar11;
}


