/*
FUNCTION_NAME: OVRManager$$PrepareCameraForSpaceWarp
ENTRY_POINT: 07a23ec8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__PrepareCameraForSpaceWarp(float param_1,float param_2)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_s8;
  float unaff_s9;
  float fVar19;
  float unaff_s11;
  float fVar20;
  float unaff_s12;
  float unaff_s13;
  float fVar21;
  float fStack0000000000000004;
  float fStack000000000000001c;
  float in_stack_00000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  undefined8 in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined4 in_stack_00000048;
  
  fStack0000000000000024 = DAT_01aecf88;
  fStack000000000000002c = SQRT(unaff_s11 * unaff_s11 + param_1 + param_2);
  if (fStack000000000000002c <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar15 = *pfVar9;
    fVar17 = pfVar9[1];
    fStack000000000000002c = pfVar9[2];
  }
  else {
    fVar15 = unaff_s8 / fStack000000000000002c;
    fVar17 = unaff_s9 / fStack000000000000002c;
    fStack000000000000002c = unaff_s11 / fStack000000000000002c;
  }
  fVar20 = unaff_s12 * fStack000000000000002c;
  fVar19 = in_stack_00000020 * fStack000000000000002c;
  if (*(char *)(unaff_x23 + 0x4e7) == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    *(undefined1 *)(unaff_x23 + 0x4e7) = 1;
  }
  fVar20 = fVar20 - unaff_s13 * fVar17;
  fVar19 = unaff_s13 * fVar15 - fVar19;
  fVar21 = in_stack_00000020 * fVar17 - unaff_s12 * fVar15;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar3 = fStack000000000000002c;
  fVar2 = fStack0000000000000024;
  fVar18 = SQRT(fVar21 * fVar21 + fVar20 * fVar20 + fVar19 * fVar19);
  if (fVar18 <= fStack0000000000000024) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar20 = *pfVar9;
    fStack000000000000001c = pfVar9[1];
    fVar21 = pfVar9[2];
  }
  else {
    fVar20 = fVar20 / fVar18;
    fStack000000000000001c = fVar19 / fVar18;
    fVar21 = fVar21 / fVar18;
  }
  puVar1 = PTR_DAT_092ecf40;
  bVar4 = unaff_w20 != 1;
  if (bVar4) {
    fVar20 = -fVar20;
    fVar21 = -fVar21;
  }
  lVar6 = *(long *)PTR_DAT_092ecf40;
  if (bVar4) {
    fStack000000000000001c = -fStack000000000000001c;
  }
  if (bVar4) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    puVar8 = (undefined4 *)(lVar6 + 0x6c);
    puVar10 = (undefined4 *)(lVar6 + 0x70);
    puVar12 = (undefined4 *)(lVar6 + 0x74);
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    puVar8 = (undefined4 *)(lVar6 + 0x24);
    puVar10 = (undefined4 *)(lVar6 + 0x28);
    puVar12 = (undefined4 *)(lVar6 + 0x2c);
  }
  fVar19 = (float)FUN_089b9694(in_stack_00000038._4_4_,fStack0000000000000040,fStack0000000000000044
                               ,in_stack_00000048,*puVar8,*puVar10,*puVar12,0);
  if (DAT_098854e6 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_098854e6 = '\x01';
  }
  fVar18 = fVar3 * fVar3 + fVar15 * fVar15 + fVar17 * fVar17;
  if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar18) {
    fVar16 = fVar3 * fStack0000000000000044 + fVar15 * fVar19 + fVar17 * fStack0000000000000040;
    fVar19 = fVar19 - (fVar15 * fVar16) / fVar18;
    fStack0000000000000040 = fStack0000000000000040 - (fVar17 * fVar16) / fVar18;
    fStack0000000000000044 = fStack0000000000000044 - (fVar3 * fVar16) / fVar18;
  }
  if (*(char *)(unaff_x23 + 0x4e7) == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    *(undefined1 *)(unaff_x23 + 0x4e7) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar15 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                fVar19 * fVar19 + fStack0000000000000040 * fStack0000000000000040);
  if (fVar15 <= fVar2) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar19 = *pfVar9;
    fStack0000000000000040 = pfVar9[1];
    fStack0000000000000044 = pfVar9[2];
  }
  else {
    fVar19 = fVar19 / fVar15;
    fStack0000000000000040 = fStack0000000000000040 / fVar15;
    fStack0000000000000044 = fStack0000000000000044 / fVar15;
  }
  fStack0000000000000004 = fVar17;
  fVar15 = (float)FUN_041ee3bc(fVar19,fStack0000000000000040,fStack0000000000000044,fVar20,
                               fStack000000000000001c,fVar21,0);
  plVar14 = *(long **)(unaff_x19 + 0x28);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar14;
  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *unaff_x21) {
        puVar7 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_07a24218;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00(plVar14,*unaff_x21,0);
LAB_07a24218:
  iVar5 = (*(code *)*puVar7)(plVar14,puVar7[1]);
  fVar17 = -fVar15;
  if (iVar5 != 1) {
    fVar17 = fVar15;
  }
  if (fVar17 < -70.0) {
    fVar17 = fVar17 + 360.0;
  }
  return fVar17;
}


