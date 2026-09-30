/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 01ec41e4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  float fVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  float *pfVar7;
  ulong uVar8;
  long *in_x10;
  int *piVar9;
  long unaff_x19;
  uint unaff_w20;
  char cVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack000000000000005c;
  
  uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar9 + 7) * 0x10 + 0x138);
        goto LAB_01ec4230;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01dde8fc();
LAB_01ec4230:
  lVar4 = (*(code *)*puVar3)();
  lVar5 = FUN_03d71c60();
  if (lVar4 == 0) {
LAB_01ec47c4:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  fVar11 = (float)FUN_03d7eda4(lVar4,0);
  if ((*(long *)(unaff_x19 + 0x180) == 0) ||
     (fVar13 = param_4, fVar15 = param_3,
     fVar12 = (float)FUN_03d7eda4(*(long *)(unaff_x19 + 0x180),0), lVar5 == 0)) goto LAB_01ec47c4;
  param_4 = param_4 - fVar13;
  uVar16 = FUN_03d80370(fVar11 - fVar12,param_3 - fVar15,lVar5,0);
  lVar5 = FUN_03d71c60();
  puVar2 = 
  Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
  ;
  if (lVar5 == 0) goto LAB_01ec47c4;
  fVar15 = 0.0;
  fVar11 = param_4;
  fVar13 = (float)FUN_03d802b4(uVar16,lVar5,0);
  if (DAT_044a2dbe == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    DAT_044a2dbe = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  if (DAT_044a2dbc == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    DAT_044a2dbc = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar1 = DAT_00bafc24;
  fVar14 = (float)uVar16;
  fVar12 = param_4 * param_4;
  fVar17 = SQRT(fVar12 + fVar14 * fVar14 + 0.0);
  if (fVar17 <= DAT_00bafc24) {
    if (DAT_044a2dbb == '\0') {
      FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
      DAT_044a2dbb = '\x01';
    }
    pfVar7 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
    fStack000000000000005c = *pfVar7;
    fStack000000000000000c = pfVar7[1];
    param_4 = pfVar7[2];
  }
  else {
    fVar12 = fVar14 / fVar17;
    fStack000000000000000c = 0.0 / fVar17;
    param_4 = param_4 / fVar17;
    fStack000000000000005c = fVar12;
  }
  lVar5 = FUN_03d71c60();
  FUN_03d7f21c(lVar4,0);
  if (lVar5 == 0) goto LAB_01ec47c4;
  fVar14 = (float)FUN_03d801f8(lVar5,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  if (DAT_044a2dbc == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    DAT_044a2dbc = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar20 = fVar12 * fVar12;
  fVar18 = SQRT(fVar20 + fVar14 * fVar14 + 0.0);
  if (fVar18 <= fVar1) {
    if (DAT_044a2dbb == '\0') {
      FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
      DAT_044a2dbb = '\x01';
    }
    pfVar7 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
    fVar14 = *pfVar7;
    fStack0000000000000008 = pfVar7[1];
    fVar12 = pfVar7[2];
  }
  else {
    fStack0000000000000008 = 0.0 / fVar18;
    fVar14 = fVar14 / fVar18;
    fVar12 = fVar12 / fVar18;
  }
  lVar5 = FUN_03d71c60();
  FUN_03d7f1a0(lVar4,0);
  if (lVar5 == 0) goto LAB_01ec47c4;
  fVar18 = (float)FUN_03d801f8(lVar5,0);
  if (DAT_044a2dbc == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    DAT_044a2dbc = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar19 = SQRT(fVar20 * fVar20 + fVar18 * fVar18 + 0.0);
  fVar11 = SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar15 * fVar15);
  if (fVar19 <= fVar1) {
    if (DAT_044a2dbb == '\0') {
      FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
      DAT_044a2dbb = '\x01';
    }
    pfVar7 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
    fVar18 = *pfVar7;
    fVar13 = pfVar7[1];
    fVar20 = pfVar7[2];
  }
  else {
    fVar18 = fVar18 / fVar19;
    fVar13 = 0.0 / fVar19;
    fVar20 = fVar20 / fVar19;
  }
  cVar10 = *(char *)(unaff_x19 + 0x1b8);
  if (cVar10 != '\0' && (unaff_w20 & 1) == 0) {
    fVar11 = fVar11 * DAT_00bafae8;
  }
  if (*(float *)(unaff_x19 + 0x19c) <= fVar11) {
    if (cVar10 == '\x01' && (unaff_w20 & 1) == 0) goto LAB_01ec4604;
    *(float *)(unaff_x19 + 0x1c4) = *(float *)(unaff_x19 + 0x1c4) + *(float *)(unaff_x19 + 0x1c0);
    fVar15 = atan2f(param_4,fStack000000000000005c);
    fVar11 = DAT_00bafe88;
    cVar10 = '\x01';
    *(undefined4 *)(unaff_x19 + 0x1c0) = 0;
    *(float *)(unaff_x19 + 0x1bc) = fVar15 * fVar11;
  }
  else {
    cVar10 = '\0';
  }
  *(char *)(unaff_x19 + 0x1b8) = cVar10;
LAB_01ec4604:
  cVar6 = *(char *)(unaff_x19 + 0x1b9);
  fVar17 = ABS(fVar17);
  if ((unaff_w20 & 1) == 0) {
    fVar11 = DAT_00bafbe4;
    if (cVar6 != '\0') {
      cVar6 = '\x01';
      fVar11 = DAT_00bafc30;
    }
    fVar17 = fVar17 * fVar11;
  }
  if (fVar17 <= DAT_00bafcb0) {
    if (cVar6 != '\0' || (unaff_w20 & 1) != 0) {
      *(float *)(unaff_x19 + 0x1dc) = *(float *)(unaff_x19 + 0x1dc) + *(float *)(unaff_x19 + 0x1d8);
      fVar15 = atan2f(fVar12,fVar14);
      fVar11 = DAT_00bafe88;
      cVar6 = '\0';
      *(undefined4 *)(unaff_x19 + 0x1d8) = 0;
      *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
      *(float *)(unaff_x19 + 0x1d4) = fVar15 * fVar11;
    }
  }
  else if (cVar6 != '\x01' || (unaff_w20 & 1) != 0) {
    *(float *)(unaff_x19 + 0x1d0) = *(float *)(unaff_x19 + 0x1d0) + *(float *)(unaff_x19 + 0x1cc);
    fVar15 = atan2f(fVar20,fVar18);
    fVar11 = DAT_00bafe88;
    cVar6 = '\x01';
    *(undefined4 *)(unaff_x19 + 0x1cc) = 0;
    *(undefined1 *)(unaff_x19 + 0x1b9) = 1;
    *(float *)(unaff_x19 + 0x1c8) = fVar15 * fVar11;
  }
  if (cVar10 != '\0') {
    FUN_01ec4870(fStack000000000000005c,fStack000000000000000c,param_4,unaff_x19 + 0x1bc);
    cVar6 = *(char *)(unaff_x19 + 0x1b9);
  }
  if (cVar6 == '\0') {
    lVar4 = unaff_x19 + 0x1d4;
  }
  else {
    lVar4 = unaff_x19 + 0x1c8;
    fStack0000000000000008 = fVar13;
    fVar14 = fVar18;
    fVar12 = fVar20;
  }
  FUN_01ec4870(fVar14,fStack0000000000000008,fVar12,lVar4);
  fVar13 = (*(float *)(unaff_x19 + 0x1e0) -
           *(float *)(unaff_x19 + 0x1a0) *
           (*(float *)(unaff_x19 + 0x1d0) + *(float *)(unaff_x19 + 0x1cc) +
           *(float *)(unaff_x19 + 0x1dc) + *(float *)(unaff_x19 + 0x1d8))) -
           (*(float *)(unaff_x19 + 0x1c4) + *(float *)(unaff_x19 + 0x1c0));
  fVar11 = fVar13;
  if (((*(char *)(unaff_x19 + 0x18c) != '\0') &&
      (fVar11 = *(float *)(unaff_x19 + 0x194), *(float *)(unaff_x19 + 0x194) <= fVar13)) &&
     (fVar11 = *(float *)(unaff_x19 + 400), fVar13 <= *(float *)(unaff_x19 + 400))) {
    fVar11 = fVar13;
  }
  FUN_01ec3cbc(fVar11);
  FUN_01ec3b28((fVar11 - *(float *)(unaff_x19 + 0x194)) /
               (*(float *)(unaff_x19 + 400) - *(float *)(unaff_x19 + 0x194)));
  return;
}


