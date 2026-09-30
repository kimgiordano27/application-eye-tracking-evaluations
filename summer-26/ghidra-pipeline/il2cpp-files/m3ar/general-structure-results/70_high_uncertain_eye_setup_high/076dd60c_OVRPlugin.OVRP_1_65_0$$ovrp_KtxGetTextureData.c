/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxGetTextureData
ENTRY_POINT: 076dd60c
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_65_0__ovrp_KtxGetTextureData(void)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  char cVar8;
  int in_w8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float unaff_s9;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s14;
  float fVar20;
  float unaff_s15;
  float fVar21;
  float fStack000000000000000c;
  float in_stack_00000010;
  undefined8 uStack0000000000000030;
  float in_stack_00000040;
  
  if (in_w8 == 0) {
    FUN_0403162c(PTR_DAT_08f65568);
    *(undefined1 *)(unaff_x21 + 0xc10) = 1;
  }
  uVar15 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar17 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  if (DAT_0953c2f4 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_0953c2f4 = '\x01';
  }
  puVar3 = PTR_DAT_08f67c68;
  fVar13 = (float)uVar15;
  fVar11 = (float)((ulong)uVar15 >> 0x20);
  fVar9 = fVar17 * fVar17 + fVar13 * fVar13 + fVar11 * fVar11;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar9) {
    fVar16 = (fVar11 * -0.0 - in_stack_00000040 * fVar13) - unaff_s9 * fVar17;
    uStack0000000000000030 = CONCAT44((fVar11 * fVar16) / fVar9,(fVar13 * fVar16) / fVar9);
    fVar9 = (fVar17 * fVar16) / fVar9;
  }
  else {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    uStack0000000000000030 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar9 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  }
  if (*(char *)(unaff_x22 + 0xe18) == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x22 + 0xe18) = 1;
  }
  if ((*(int *)(*unaff_x23 + 0xe4) == 0) &&
     (thunk_FUN_0408f364(), *(char *)(unaff_x22 + 0xe18) == '\0')) {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x22 + 0xe18) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
  fVar9 = unaff_s9 + fVar9;
  iVar1 = *(int *)(unaff_x20 + 0x28);
  fVar21 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar18 = in_stack_00000040 + (float)uStack0000000000000030;
  fVar16 = SQRT(in_stack_00000040 * in_stack_00000040 + unaff_s9 * unaff_s9);
  fVar19 = (float)((ulong)uStack0000000000000030 >> 0x20) + 0.0;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if (iVar1 == 0) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar16) && !NAN(fVar21)) {
      bVar4 = fVar16 < fVar21;
      bVar5 = fVar16 == fVar21;
      bVar6 = false;
    }
  }
  if (bVar5 || bVar4 != bVar6) {
    iVar1 = 1;
  }
  fVar20 = SQRT(fVar9 * fVar9 + fVar18 * fVar18 + fVar19 * fVar19);
  if (fVar21 < fVar20) {
    return 0;
  }
  fStack000000000000000c = unaff_s15;
  if (DAT_09539e11 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539e11 = '\x01';
  }
  fVar10 = ABS(in_stack_00000010);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar14 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
  fVar2 = fVar10 * DAT_01a2ee44;
  if (fVar10 * DAT_01a2ee44 <= fVar14) {
    fVar2 = fVar14;
  }
  if (ABS(0.0 - in_stack_00000010) < fVar2) {
    return 0;
  }
  if (fVar16 <= fVar21) {
    if (iVar1 == 2) {
      return 0;
    }
  }
  else if ((fVar11 * -0.0 - in_stack_00000040 * fVar13) - unaff_s9 * fVar17 < 0.0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
  fVar16 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar16 = SQRT(fVar16 * fVar16 - fVar20 * fVar20);
  if (DAT_09539e19 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    cVar8 = DAT_09539e19;
  }
  else {
    cVar8 = '\x01';
  }
  fVar10 = unaff_s9 - (fVar9 - fVar17 * fVar16);
  fVar21 = (fVar16 * fVar11 - fVar19) + 0.0;
  fVar20 = in_stack_00000040 - (fVar18 - fVar16 * fVar13);
  if (cVar8 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  fVar21 = SQRT(fVar10 * fVar10 + fVar20 * fVar20 + fVar21 * fVar21) / in_stack_00000010;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar17 = unaff_s9 - (fVar9 + fVar17 * fVar16);
  in_stack_00000040 = in_stack_00000040 - (fVar18 + fVar16 * fVar13);
  fVar16 = 0.0 - (fVar19 + fVar16 * fVar11);
  fVar17 = fVar17 * fVar17;
  fVar16 = fVar16 * fVar16;
  in_stack_00000010 =
       SQRT(fVar17 + in_stack_00000040 * in_stack_00000040 + fVar16) / in_stack_00000010;
  uVar15 = FUN_0853dbe0(fVar21,&stack0x00000058,0);
  fVar9 = fVar16;
  fVar13 = fVar17;
  fVar11 = (float)FUN_0853dbe0(in_stack_00000010,&stack0x00000058,0);
  if ((fStack000000000000000c <= 0.0) ||
     (fVar18 = (float)FUN_076dd2c0(fVar21), fVar18 <= fStack000000000000000c)) {
    fVar18 = *(float *)(unaff_x20 + 0x2c);
    bVar5 = false;
    bVar4 = false;
    if (fVar18 * 0.5 < ABS(fVar16)) {
      bVar5 = false;
      bVar4 = true;
      if (!NAN(fVar18)) {
        bVar5 = fVar18 == 0.0;
        bVar4 = 0.0 <= fVar18;
      }
    }
    bVar4 = bVar4 && !bVar5;
    if (0.0 < fStack000000000000000c) goto LAB_076dda74;
LAB_076dda94:
    if (0.0 < fVar18) {
      bVar5 = fVar18 * 0.5 < ABS(fVar9);
      goto LAB_076ddab0;
    }
    if ((bool)(iVar1 == 1 | bVar4)) goto LAB_076ddad4;
LAB_076ddb88:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar7 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar7 == 0)) goto LAB_076ddcdc;
    fVar9 = fVar17;
    uVar12 = FUN_08596980(uVar15,lVar7,0);
    *unaff_x19 = uVar12;
    unaff_x19[1] = fVar16;
    unaff_x19[2] = fVar9;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar7 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar13 = SQRT(fVar17 * fVar17 + (float)uVar15 * (float)uVar15);
    in_stack_00000010 = fVar21;
    if (fVar13 <= unaff_s14) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar9 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar17 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar9 = 0.0 / fVar13;
      fVar17 = fVar17 / fVar13;
    }
  }
  else {
    bVar4 = true;
LAB_076dda74:
    fVar18 = (float)FUN_076dd2c0(in_stack_00000010);
    if (fVar18 <= fStack000000000000000c) {
      fVar18 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_076dda94;
    }
    bVar5 = true;
LAB_076ddab0:
    if ((iVar1 != 1) && (!bVar4)) goto LAB_076ddb88;
    if (bVar5) {
      return 0;
    }
LAB_076ddad4:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar7 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar7 == 0)) goto LAB_076ddcdc;
    fVar17 = fVar13;
    uVar12 = FUN_08596980(fVar11,lVar7,0);
    *unaff_x19 = uVar12;
    unaff_x19[1] = fVar9;
    unaff_x19[2] = fVar17;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar7 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar17 = SQRT(fVar13 * fVar13 + fVar11 * fVar11);
    if (fVar17 <= unaff_s14) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar9 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar17 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar9 = 0.0 / fVar17;
      fVar17 = -fVar13 / fVar17;
    }
  }
  if (lVar7 != 0) {
    uVar12 = FUN_08599d5c(lVar7,0);
    unaff_x19[3] = uVar12;
    unaff_x19[4] = fVar9;
    unaff_x19[5] = fVar17;
    uVar12 = FUN_076dd2c0(in_stack_00000010);
    unaff_x19[6] = uVar12;
    return 1;
  }
LAB_076ddcdc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


