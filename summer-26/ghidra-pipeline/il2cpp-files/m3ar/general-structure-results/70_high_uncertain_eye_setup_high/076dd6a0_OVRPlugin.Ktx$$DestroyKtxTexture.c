/*
FUNCTION_NAME: OVRPlugin.Ktx$$DestroyKtxTexture
ENTRY_POINT: 076dd6a0
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Ktx__DestroyKtxTexture(long param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  char cVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s9;
  float unaff_s10;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s14;
  float fVar16;
  float unaff_s15;
  float fVar17;
  float fStack000000000000000c;
  float in_stack_00000010;
  undefined8 in_stack_00000020;
  float in_stack_00000040;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0x568));
  *(undefined1 *)(unaff_x21 + 0xc10) = 1;
  uVar9 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar15 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
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
  fVar15 = unaff_s9 + fVar15;
  iVar1 = *(int *)(unaff_x20 + 0x28);
  fVar17 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar13 = in_stack_00000040 + (float)uVar9;
  fVar12 = SQRT(in_stack_00000040 * in_stack_00000040 + unaff_s9 * unaff_s9);
  fVar14 = (float)((ulong)uVar9 >> 0x20) + 0.0;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  if (iVar1 == 0) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar12) && !NAN(fVar17)) {
      bVar2 = fVar12 < fVar17;
      bVar3 = fVar12 == fVar17;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar2 != bVar4) {
    iVar1 = 1;
  }
  fVar16 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14);
  if (fVar17 < fVar16) {
    return 0;
  }
  fStack000000000000000c = unaff_s15;
  if (DAT_09539e11 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539e11 = '\x01';
  }
  fVar7 = ABS(in_stack_00000010);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar11 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  fVar10 = fVar7 * DAT_01a2ee44;
  if (fVar7 * DAT_01a2ee44 <= fVar11) {
    fVar10 = fVar11;
  }
  if (ABS(0.0 - in_stack_00000010) < fVar10) {
    return 0;
  }
  fVar7 = (float)((ulong)in_stack_00000020 >> 0x20);
  if (fVar12 <= fVar17) {
    if (iVar1 == 2) {
      return 0;
    }
  }
  else if ((fVar7 * -0.0 - in_stack_00000040 * (float)in_stack_00000020) - unaff_s9 * unaff_s10 <
           0.0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
  fVar12 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar17 = SQRT(fVar12 * fVar12 - fVar16 * fVar16);
  fVar12 = fVar17 * (float)in_stack_00000020;
  if (DAT_09539e19 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  fVar7 = fVar17 * fVar7;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    cVar6 = DAT_09539e19;
  }
  else {
    cVar6 = '\x01';
  }
  fVar11 = unaff_s9 - (fVar15 - unaff_s10 * fVar17);
  fVar16 = (fVar7 - fVar14) + 0.0;
  fVar10 = in_stack_00000040 - (fVar13 - fVar12);
  if (cVar6 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  fVar16 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar16 * fVar16) / in_stack_00000010;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar15 = unaff_s9 - (fVar15 + unaff_s10 * fVar17);
  in_stack_00000040 = in_stack_00000040 - (fVar13 + fVar12);
  fVar17 = 0.0 - (fVar14 + fVar7);
  fVar15 = fVar15 * fVar15;
  fVar17 = fVar17 * fVar17;
  in_stack_00000010 =
       SQRT(fVar15 + in_stack_00000040 * in_stack_00000040 + fVar17) / in_stack_00000010;
  uVar9 = FUN_0853dbe0(fVar16,&stack0x00000058,0);
  fVar12 = fVar17;
  fVar13 = fVar15;
  fVar14 = (float)FUN_0853dbe0(in_stack_00000010,&stack0x00000058,0);
  if ((fStack000000000000000c <= 0.0) ||
     (fVar7 = (float)FUN_076dd2c0(fVar16), fVar7 <= fStack000000000000000c)) {
    fVar7 = *(float *)(unaff_x20 + 0x2c);
    bVar3 = false;
    bVar2 = false;
    if (fVar7 * 0.5 < ABS(fVar17)) {
      bVar3 = false;
      bVar2 = true;
      if (!NAN(fVar7)) {
        bVar3 = fVar7 == 0.0;
        bVar2 = 0.0 <= fVar7;
      }
    }
    bVar2 = bVar2 && !bVar3;
    if (0.0 < fStack000000000000000c) goto LAB_076dda74;
LAB_076dda94:
    if (0.0 < fVar7) {
      bVar3 = fVar7 * 0.5 < ABS(fVar12);
      goto LAB_076ddab0;
    }
    if ((bool)(iVar1 == 1 | bVar2)) goto LAB_076ddad4;
LAB_076ddb88:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar5 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar5 == 0)) goto LAB_076ddcdc;
    fVar12 = fVar15;
    uVar8 = FUN_08596980(uVar9,lVar5,0);
    *unaff_x19 = uVar8;
    unaff_x19[1] = fVar17;
    unaff_x19[2] = fVar12;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar5 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar13 = SQRT(fVar15 * fVar15 + (float)uVar9 * (float)uVar9);
    in_stack_00000010 = fVar16;
    if (fVar13 <= unaff_s14) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar12 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar15 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar12 = 0.0 / fVar13;
      fVar15 = fVar15 / fVar13;
    }
  }
  else {
    bVar2 = true;
LAB_076dda74:
    fVar7 = (float)FUN_076dd2c0(in_stack_00000010);
    if (fVar7 <= fStack000000000000000c) {
      fVar7 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_076dda94;
    }
    bVar3 = true;
LAB_076ddab0:
    if ((iVar1 != 1) && (!bVar2)) goto LAB_076ddb88;
    if (bVar3) {
      return 0;
    }
LAB_076ddad4:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar5 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar5 == 0)) goto LAB_076ddcdc;
    fVar15 = fVar13;
    uVar8 = FUN_08596980(fVar14,lVar5,0);
    *unaff_x19 = uVar8;
    unaff_x19[1] = fVar12;
    unaff_x19[2] = fVar15;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar5 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar15 = SQRT(fVar13 * fVar13 + fVar14 * fVar14);
    if (fVar15 <= unaff_s14) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar12 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar15 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar12 = 0.0 / fVar15;
      fVar15 = -fVar13 / fVar15;
    }
  }
  if (lVar5 != 0) {
    uVar8 = FUN_08599d5c(lVar5,0);
    unaff_x19[3] = uVar8;
    unaff_x19[4] = fVar12;
    unaff_x19[5] = fVar15;
    uVar8 = FUN_076dd2c0(in_stack_00000010);
    unaff_x19[6] = uVar8;
    return 1;
  }
LAB_076ddcdc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


