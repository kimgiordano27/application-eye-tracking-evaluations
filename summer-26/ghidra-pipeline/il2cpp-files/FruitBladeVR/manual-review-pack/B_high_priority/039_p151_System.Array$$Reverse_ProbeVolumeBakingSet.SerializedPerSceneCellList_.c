/*
FUNCTION_NAME: System.Array$$Reverse<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 01d4c720
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__Reverse<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  long unaff_x19;
  uint unaff_w20;
  char cVar4;
  long *unaff_x23;
  float *pfVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float fVar18;
  float fStack000000000000005c;
  
  fVar18 = param_3;
  if (DAT_03ef141e == '\0') {
    FUN_01c5c92c(PTR_DAT_03cb5ea0);
    DAT_03ef141e = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef141d == '\0') {
    FUN_01c5c92c(PTR_DAT_03cb5ea0);
    DAT_03ef141d = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  fVar16 = DAT_00b46114;
  fVar10 = unaff_s10 * unaff_s10;
  fVar7 = SQRT(fVar10 + unaff_s8 * unaff_s8);
  if (fVar7 <= DAT_00b46114) {
    if (DAT_03ef1415 == '\0') {
      FUN_01c5c92c(PTR_DAT_03cb5ab0);
      DAT_03ef1415 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_03cb5ab0 + 0xb8);
    fStack000000000000005c = *pfVar2;
    fVar15 = pfVar2[1];
    fVar7 = pfVar2[2];
  }
  else {
    fStack000000000000005c = unaff_s8 / fVar7;
    fVar10 = 0.0;
    fVar15 = 0.0 / fVar7;
    fVar7 = unaff_s10 / fVar7;
  }
  lVar1 = FUN_0376d85c();
  FUN_0377f168();
  if (lVar1 == 0) {
LAB_01d4cbfc:
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  fVar8 = (float)FUN_037802fc(lVar1,0);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef141d == '\0') {
    FUN_01c5c92c(PTR_DAT_03cb5ea0);
    DAT_03ef141d = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  fVar12 = fVar8 * fVar8;
  fVar13 = SQRT(fVar18 * fVar18 + fVar12);
  if (fVar13 <= fVar16) {
    if (DAT_03ef1415 == '\0') {
      FUN_01c5c92c(PTR_DAT_03cb5ab0);
      DAT_03ef1415 = '\x01';
    }
    uVar17 = **(ulong **)(*(long *)PTR_DAT_03cb5ab0 + 0xb8);
    fVar18 = *(float *)(*(ulong **)(*(long *)PTR_DAT_03cb5ab0 + 0xb8) + 1);
  }
  else {
    fVar18 = fVar18 / fVar13;
    uVar17 = CONCAT44(0.0 / fVar13,fVar8 / fVar13);
    fVar12 = fVar13;
  }
  lVar1 = FUN_0376d85c();
  FUN_0377f0ec();
  if (lVar1 == 0) goto LAB_01d4cbfc;
  fVar8 = (float)FUN_037802fc(lVar1,0);
  if (DAT_03ef141d == '\0') {
    FUN_01c5c92c(PTR_DAT_03cb5ea0);
    DAT_03ef141d = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  fVar13 = SQRT(param_3 * param_3 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13);
  fVar14 = SQRT(fVar12 * fVar12 + fVar8 * fVar8);
  if (fVar14 <= fVar16) {
    if (DAT_03ef1415 == '\0') {
      FUN_01c5c92c(PTR_DAT_03cb5ab0);
      DAT_03ef1415 = '\x01';
    }
    uVar9 = **(ulong **)(*(long *)PTR_DAT_03cb5ab0 + 0xb8);
    fVar12 = *(float *)(*(ulong **)(*(long *)PTR_DAT_03cb5ab0 + 0xb8) + 1);
  }
  else {
    fVar12 = fVar12 / fVar14;
    uVar9 = CONCAT44(0.0 / fVar14,fVar8 / fVar14);
  }
  cVar6 = *(char *)(unaff_x19 + 0x1d8);
  if (cVar6 != '\0' && (unaff_w20 & 1) == 0) {
    fVar13 = fVar13 * DAT_00b45eb8;
  }
  if (*(float *)(unaff_x19 + 0x1bc) <= fVar13) {
    if (cVar6 != '\x01' || (unaff_w20 & 1) != 0) {
      *(float *)(unaff_x19 + 0x1e4) = *(float *)(unaff_x19 + 0x1e4) + *(float *)(unaff_x19 + 0x1e0);
      fVar16 = atan2f(fVar7,fStack000000000000005c);
      cVar6 = '\x01';
      *(undefined4 *)(unaff_x19 + 0x1e0) = 0;
      *(float *)(unaff_x19 + 0x1dc) = fVar16 * DAT_00b45f84;
      goto LAB_01d4ca4c;
    }
  }
  else {
    cVar6 = '\0';
LAB_01d4ca4c:
    *(char *)(unaff_x19 + 0x1d8) = cVar6;
  }
  fVar10 = ABS(fVar10);
  if ((unaff_w20 & 1) == 0) {
    fVar16 = DAT_00b45f6c;
    if (*(char *)(unaff_x19 + 0x1d9) != '\0') {
      fVar16 = DAT_00b46148;
    }
    fVar10 = fVar10 * fVar16;
  }
  cVar4 = *(char *)(unaff_x19 + 0x1d9);
  if (fVar10 <= DAT_00b45f08) {
    if (cVar4 == '\0' && (unaff_w20 & 1) == 0) goto LAB_01d4cb0c;
    fVar10 = *(float *)(unaff_x19 + 0x1fc);
    cVar4 = '\0';
    pfVar2 = (float *)(unaff_x19 + 500);
    pfVar3 = (float *)(unaff_x19 + 0x1fc);
    pfVar5 = (float *)(unaff_x19 + 0x1f8);
    uVar11 = uVar17;
    fVar16 = fVar18;
  }
  else {
    if (cVar4 == '\x01' && (unaff_w20 & 1) == 0) goto LAB_01d4cb0c;
    fVar10 = *(float *)(unaff_x19 + 0x1f0);
    pfVar2 = (float *)(unaff_x19 + 0x1e8);
    pfVar3 = (float *)(unaff_x19 + 0x1f0);
    pfVar5 = (float *)(unaff_x19 + 0x1ec);
    cVar4 = '\x01';
    uVar11 = uVar9;
    fVar16 = fVar12;
  }
  *pfVar3 = fVar10 + *pfVar5;
  fVar10 = atan2f(fVar16,(float)uVar11);
  *pfVar5 = 0.0;
  fVar16 = DAT_00b45f84;
  *(char *)(unaff_x19 + 0x1d9) = cVar4;
  *pfVar2 = fVar10 * fVar16;
LAB_01d4cb0c:
  if (cVar6 != '\0') {
    FUN_01d4cca0(fStack000000000000005c,fVar15,fVar7,unaff_x19 + 0x1dc);
    cVar4 = *(char *)(unaff_x19 + 0x1d9);
  }
  lVar1 = unaff_x19 + 500;
  if (cVar4 != '\0') {
    lVar1 = unaff_x19 + 0x1e8;
    fVar18 = fVar12;
  }
  cVar6 = -(cVar4 == '\0');
  uVar9 = uVar9 ^ (uVar9 ^ uVar17) &
                  CONCAT17(cVar6,CONCAT16(cVar6,CONCAT15(cVar6,CONCAT14(cVar6,CONCAT13(cVar6,
                                                  CONCAT12(cVar6,CONCAT11(cVar6,cVar6)))))));
  FUN_01d4cca0(uVar9,uVar9 >> 0x20,fVar18,lVar1);
  fVar16 = (*(float *)(unaff_x19 + 0x200) -
           *(float *)(unaff_x19 + 0x1c0) *
           (*(float *)(unaff_x19 + 0x1f0) + *(float *)(unaff_x19 + 0x1ec) +
           *(float *)(unaff_x19 + 0x1fc) + *(float *)(unaff_x19 + 0x1f8))) -
           (*(float *)(unaff_x19 + 0x1e4) + *(float *)(unaff_x19 + 0x1e0));
  fVar18 = fVar16;
  if (*(char *)(unaff_x19 + 0x1ac) != '\0') {
    fVar7 = *(float *)(unaff_x19 + 0x1b0);
    if (fVar16 <= *(float *)(unaff_x19 + 0x1b0)) {
      fVar7 = fVar16;
    }
    fVar18 = *(float *)(unaff_x19 + 0x1b4);
    if (*(float *)(unaff_x19 + 0x1b4) <= fVar16) {
      fVar18 = fVar7;
    }
  }
  FUN_01d4c100(fVar18);
  FUN_01d4bf54((fVar18 - *(float *)(unaff_x19 + 0x1b4)) /
               (*(float *)(unaff_x19 + 0x1b0) - *(float *)(unaff_x19 + 0x1b4)));
  return;
}


