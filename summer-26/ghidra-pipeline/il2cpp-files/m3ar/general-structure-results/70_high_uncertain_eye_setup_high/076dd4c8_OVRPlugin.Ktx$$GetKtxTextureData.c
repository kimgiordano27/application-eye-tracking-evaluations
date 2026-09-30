/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureData
ENTRY_POINT: 076dd4c8
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Ktx__GetKtxTextureData(void)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  char cVar8;
  float *pfVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s9;
  float fVar20;
  float fVar21;
  float unaff_s14;
  float fVar22;
  float unaff_s15;
  float fVar23;
  float fStack000000000000000c;
  undefined8 uStack0000000000000030;
  float in_stack_00000040;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  
  if (*(char *)(unaff_x21 + 0xc10) == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    *(undefined1 *)(unaff_x21 + 0xc10) = 1;
  }
  pfVar9 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar17 = *pfVar9;
  in_stack_00000068 = pfVar9[1];
  fVar18 = pfVar9[2];
  fStack0000000000000064 = fVar17;
  fStack000000000000006c = fVar18;
  if (*(char *)(unaff_x22 + 0xe18) == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x22 + 0xe18) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar15 = SQRT(fVar17 * fVar17 + fVar18 * fVar18);
  if (fVar15 <= unaff_s14) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    uVar13 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar18 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  }
  else {
    fVar18 = fVar18 / fVar15;
    uVar13 = CONCAT44(0.0 / fVar15,fVar17 / fVar15);
  }
  if (*(char *)(unaff_x22 + 0xe18) == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x22 + 0xe18) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar14 = (float)uVar13;
  fVar11 = (float)((ulong)uVar13 >> 0x20);
  fVar17 = SQRT(fVar18 * fVar18 + fVar14 * fVar14 + fVar11 * fVar11);
  if (fVar17 <= unaff_s14) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    uVar13 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar18 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  }
  else {
    uVar13 = CONCAT44(fVar11 / fVar17,fVar14 / fVar17);
    fVar18 = fVar18 / fVar17;
  }
  if (DAT_0953c2f4 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_0953c2f4 = '\x01';
  }
  puVar3 = PTR_DAT_08f67c68;
  fVar14 = (float)uVar13;
  fVar11 = (float)((ulong)uVar13 >> 0x20);
  fVar17 = fVar18 * fVar18 + fVar14 * fVar14 + fVar11 * fVar11;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar17) {
    fVar19 = (fVar11 * -0.0 - in_stack_00000040 * fVar14) - unaff_s9 * fVar18;
    uStack0000000000000030 = CONCAT44((fVar11 * fVar19) / fVar17,(fVar14 * fVar19) / fVar17);
    fVar17 = (fVar18 * fVar19) / fVar17;
  }
  else {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    uStack0000000000000030 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar17 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
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
  fVar17 = unaff_s9 + fVar17;
  iVar1 = *(int *)(unaff_x20 + 0x28);
  fVar23 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar20 = in_stack_00000040 + (float)uStack0000000000000030;
  fVar19 = SQRT(in_stack_00000040 * in_stack_00000040 + unaff_s9 * unaff_s9);
  fVar21 = (float)((ulong)uStack0000000000000030 >> 0x20) + 0.0;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if (iVar1 == 0) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar19) && !NAN(fVar23)) {
      bVar4 = fVar19 < fVar23;
      bVar5 = fVar19 == fVar23;
      bVar6 = false;
    }
  }
  if (bVar5 || bVar4 != bVar6) {
    iVar1 = 1;
  }
  fVar22 = SQRT(fVar17 * fVar17 + fVar20 * fVar20 + fVar21 * fVar21);
  if (fVar23 < fVar22) {
    return 0;
  }
  fStack000000000000000c = unaff_s15;
  if (DAT_09539e11 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539e11 = '\x01';
  }
  fVar10 = ABS(fVar15);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar16 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
  fVar2 = fVar10 * DAT_01a2ee44;
  if (fVar10 * DAT_01a2ee44 <= fVar16) {
    fVar2 = fVar16;
  }
  if (ABS(0.0 - fVar15) < fVar2) {
    return 0;
  }
  if (fVar19 <= fVar23) {
    if (iVar1 == 2) {
      return 0;
    }
  }
  else if ((fVar11 * -0.0 - in_stack_00000040 * fVar14) - unaff_s9 * fVar18 < 0.0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
  fVar19 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar19 = SQRT(fVar19 * fVar19 - fVar22 * fVar22);
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
  fVar10 = unaff_s9 - (fVar17 - fVar18 * fVar19);
  fVar23 = (fVar19 * fVar11 - fVar21) + 0.0;
  fVar22 = in_stack_00000040 - (fVar20 - fVar19 * fVar14);
  if (cVar8 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  fVar23 = SQRT(fVar10 * fVar10 + fVar22 * fVar22 + fVar23 * fVar23) / fVar15;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar17 = unaff_s9 - (fVar17 + fVar18 * fVar19);
  in_stack_00000040 = in_stack_00000040 - (fVar20 + fVar19 * fVar14);
  fVar19 = 0.0 - (fVar21 + fVar19 * fVar11);
  fVar17 = fVar17 * fVar17;
  fVar19 = fVar19 * fVar19;
  fVar15 = SQRT(fVar17 + in_stack_00000040 * in_stack_00000040 + fVar19) / fVar15;
  uVar13 = FUN_0853dbe0(fVar23,&stack0x00000058,0);
  fVar18 = fVar19;
  fVar14 = fVar17;
  fVar11 = (float)FUN_0853dbe0(fVar15,&stack0x00000058,0);
  if ((fStack000000000000000c <= 0.0) ||
     (fVar20 = (float)FUN_076dd2c0(fVar23), fVar20 <= fStack000000000000000c)) {
    fVar20 = *(float *)(unaff_x20 + 0x2c);
    bVar5 = false;
    bVar4 = false;
    if (fVar20 * 0.5 < ABS(fVar19)) {
      bVar5 = false;
      bVar4 = true;
      if (!NAN(fVar20)) {
        bVar5 = fVar20 == 0.0;
        bVar4 = 0.0 <= fVar20;
      }
    }
    bVar4 = bVar4 && !bVar5;
    if (0.0 < fStack000000000000000c) goto LAB_076dda74;
LAB_076dda94:
    if (0.0 < fVar20) {
      bVar5 = fVar20 * 0.5 < ABS(fVar18);
      goto LAB_076ddab0;
    }
    if ((bool)(iVar1 == 1 | bVar4)) goto LAB_076ddad4;
LAB_076ddb88:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar7 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar7 == 0)) goto LAB_076ddcdc;
    fVar18 = fVar17;
    uVar12 = FUN_08596980(uVar13,lVar7,0);
    *unaff_x19 = uVar12;
    unaff_x19[1] = fVar19;
    unaff_x19[2] = fVar18;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar7 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar14 = SQRT(fVar17 * fVar17 + (float)uVar13 * (float)uVar13);
    fVar15 = fVar23;
    if (fVar14 <= unaff_s14) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar18 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar17 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar18 = 0.0 / fVar14;
      fVar17 = fVar17 / fVar14;
    }
  }
  else {
    bVar4 = true;
LAB_076dda74:
    fVar20 = (float)FUN_076dd2c0(fVar15);
    if (fVar20 <= fStack000000000000000c) {
      fVar20 = *(float *)(unaff_x20 + 0x2c);
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
    fVar17 = fVar14;
    uVar12 = FUN_08596980(fVar11,lVar7,0);
    *unaff_x19 = uVar12;
    unaff_x19[1] = fVar18;
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
    fVar17 = SQRT(fVar14 * fVar14 + fVar11 * fVar11);
    if (fVar17 <= unaff_s14) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar18 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar17 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar18 = 0.0 / fVar17;
      fVar17 = -fVar14 / fVar17;
    }
  }
  if (lVar7 != 0) {
    uVar12 = FUN_08599d5c(lVar7,0);
    unaff_x19[3] = uVar12;
    unaff_x19[4] = fVar18;
    unaff_x19[5] = fVar17;
    uVar12 = FUN_076dd2c0(fVar15);
    unaff_x19[6] = uVar12;
    return 1;
  }
LAB_076ddcdc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


