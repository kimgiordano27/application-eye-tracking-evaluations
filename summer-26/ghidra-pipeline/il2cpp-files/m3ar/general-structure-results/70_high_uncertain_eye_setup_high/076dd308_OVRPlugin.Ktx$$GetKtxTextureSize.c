/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureSize
ENTRY_POINT: 076dd308
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_Ktx__GetKtxTextureSize(float param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  char cVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 uStack0000000000000068;
  
  uStack0000000000000058 = 0;
  _uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  *(undefined4 *)(param_4 + 3) = 0;
  uVar9 = FUN_076dcc2c();
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  if ((*(long *)(param_2 + 0x20) == 0) ||
     (lVar10 = FUN_085849e0(*(long *)(param_2 + 0x20),0), lVar10 == 0)) goto LAB_076ddcdc;
  uVar19 = param_3[1];
  fVar21 = (float)param_3[2];
  fVar13 = (float)FUN_0859a4b4(*param_3,lVar10,0);
  if ((*(long *)(param_2 + 0x20) == 0) ||
     (lVar10 = FUN_085849e0(*(long *)(param_2 + 0x20),0), lVar10 == 0)) goto LAB_076ddcdc;
  fVar20 = (float)param_3[4];
  fVar22 = (float)param_3[5];
  fVar14 = (float)FUN_0859a180(param_3[3],lVar10,0);
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  puVar4 = PTR_DAT_08f65580;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar3 = DAT_01a2ef28;
  fVar15 = SQRT(fVar22 * fVar22 + fVar14 * fVar14 + fVar20 * fVar20);
  if (fVar15 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar12 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar14 = *pfVar12;
    fVar20 = pfVar12[1];
    fVar22 = pfVar12[2];
  }
  else {
    fVar14 = fVar14 / fVar15;
    fVar20 = fVar20 / fVar15;
    fVar22 = fVar22 / fVar15;
  }
  _uStack0000000000000060 = CONCAT44(uStack0000000000000064,fVar21);
  uStack0000000000000058 = CONCAT44(uVar19,fVar13);
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar15 = SQRT(fVar22 * fVar22 + fVar14 * fVar14 + fVar20 * fVar20);
  if (fVar15 <= fVar3) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar12 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar14 = *pfVar12;
    fVar20 = pfVar12[1];
    fVar22 = pfVar12[2];
  }
  else {
    fVar14 = fVar14 / fVar15;
    fVar20 = fVar20 / fVar15;
    fVar22 = fVar22 / fVar15;
  }
  _uStack0000000000000060 = CONCAT44(fVar14,uStack0000000000000060);
  uStack0000000000000068 = CONCAT44(fVar22,fVar20);
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar20 = SQRT(fVar14 * fVar14 + fVar22 * fVar22);
  if (fVar20 <= fVar3) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    uVar18 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar22 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  }
  else {
    fVar22 = fVar22 / fVar20;
    uVar18 = CONCAT44(0.0 / fVar20,fVar14 / fVar20);
  }
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar15 = (float)uVar18;
  fVar17 = (float)((ulong)uVar18 >> 0x20);
  fVar14 = SQRT(fVar22 * fVar22 + fVar15 * fVar15 + fVar17 * fVar17);
  if (fVar14 <= fVar3) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    uVar18 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar22 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  }
  else {
    uVar18 = CONCAT44(fVar17 / fVar14,fVar15 / fVar14);
    fVar22 = fVar22 / fVar14;
  }
  if (DAT_0953c2f4 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_0953c2f4 = '\x01';
  }
  puVar5 = PTR_DAT_08f67c68;
  fVar15 = (float)uVar18;
  fVar17 = (float)((ulong)uVar18 >> 0x20);
  fVar14 = fVar22 * fVar22 + fVar15 * fVar15 + fVar17 * fVar17;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar14) {
    fVar24 = (fVar17 * -0.0 - fVar13 * fVar15) - fVar21 * fVar22;
    uStack0000000000000030 = CONCAT44((fVar17 * fVar24) / fVar14,(fVar15 * fVar24) / fVar14);
    fVar14 = (fVar22 * fVar24) / fVar14;
  }
  else {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    uStack0000000000000030 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar14 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  }
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if ((*(int *)(*(long *)puVar4 + 0xe4) == 0) && (thunk_FUN_0408f364(), DAT_09539e18 == '\0')) {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (*(long *)(param_2 + 0x20) == 0) goto LAB_076ddcdc;
  fVar14 = fVar21 + fVar14;
  iVar1 = *(int *)(param_2 + 0x28);
  fVar28 = *(float *)(*(long *)(param_2 + 0x20) + 0x20);
  fVar25 = fVar13 + (float)uStack0000000000000030;
  fVar24 = SQRT(fVar13 * fVar13 + fVar21 * fVar21);
  fVar26 = (float)((ulong)uStack0000000000000030 >> 0x20) + 0.0;
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (iVar1 == 0) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar24) && !NAN(fVar28)) {
      bVar6 = fVar24 < fVar28;
      bVar7 = fVar24 == fVar28;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    iVar1 = 1;
  }
  fVar27 = SQRT(fVar14 * fVar14 + fVar25 * fVar25 + fVar26 * fVar26);
  if (fVar28 < fVar27) {
    return 0;
  }
  if (DAT_09539e11 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539e11 = '\x01';
  }
  fVar16 = ABS(fVar20);
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar23 = **(float **)(*(long *)puVar5 + 0xb8) * 8.0;
  fVar2 = fVar16 * DAT_01a2ee44;
  if (fVar16 * DAT_01a2ee44 <= fVar23) {
    fVar2 = fVar23;
  }
  if (ABS(0.0 - fVar20) < fVar2) {
    return 0;
  }
  if (fVar24 <= fVar28) {
    if (iVar1 == 2) {
      return 0;
    }
  }
  else if ((fVar17 * -0.0 - fVar13 * fVar15) - fVar21 * fVar22 < 0.0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x20) == 0) goto LAB_076ddcdc;
  fVar24 = *(float *)(*(long *)(param_2 + 0x20) + 0x20);
  fVar24 = SQRT(fVar24 * fVar24 - fVar27 * fVar27);
  if (DAT_09539e19 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    cVar11 = DAT_09539e19;
  }
  else {
    cVar11 = '\x01';
  }
  fVar16 = fVar21 - (fVar14 - fVar22 * fVar24);
  fVar28 = (fVar24 * fVar17 - fVar26) + 0.0;
  fVar27 = fVar13 - (fVar25 - fVar24 * fVar15);
  if (cVar11 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  fVar28 = SQRT(fVar16 * fVar16 + fVar27 * fVar27 + fVar28 * fVar28) / fVar20;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar21 = fVar21 - (fVar14 + fVar22 * fVar24);
  fVar13 = fVar13 - (fVar25 + fVar24 * fVar15);
  fVar15 = 0.0 - (fVar26 + fVar24 * fVar17);
  fVar21 = fVar21 * fVar21;
  fVar15 = fVar15 * fVar15;
  fVar20 = SQRT(fVar21 + fVar13 * fVar13 + fVar15) / fVar20;
  uVar18 = FUN_0853dbe0(fVar28,&stack0x00000058,0);
  fVar13 = fVar15;
  fVar14 = fVar21;
  fVar22 = (float)FUN_0853dbe0(fVar20,&stack0x00000058,0);
  if ((param_1 <= 0.0) || (fVar17 = (float)FUN_076dd2c0(fVar28,param_2), fVar17 <= param_1)) {
    fVar17 = *(float *)(param_2 + 0x2c);
    bVar7 = false;
    bVar6 = false;
    if (fVar17 * 0.5 < ABS(fVar15)) {
      bVar7 = false;
      bVar6 = true;
      if (!NAN(fVar17)) {
        bVar7 = fVar17 == 0.0;
        bVar6 = 0.0 <= fVar17;
      }
    }
    bVar6 = bVar6 && !bVar7;
    if (0.0 < param_1) goto LAB_076dda74;
LAB_076dda94:
    if (0.0 < fVar17) {
      bVar7 = fVar17 * 0.5 < ABS(fVar13);
      goto LAB_076ddab0;
    }
    if ((bool)(iVar1 == 1 | bVar6)) goto LAB_076ddad4;
LAB_076ddb88:
    if ((*(long *)(param_2 + 0x20) == 0) ||
       (lVar10 = FUN_085849e0(*(long *)(param_2 + 0x20),0), lVar10 == 0)) goto LAB_076ddcdc;
    fVar13 = fVar21;
    uVar19 = FUN_08596980(uVar18,lVar10,0);
    *(undefined4 *)param_4 = uVar19;
    *(float *)((long)param_4 + 4) = fVar15;
    *(float *)(param_4 + 1) = fVar13;
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_076ddcdc;
    lVar10 = FUN_085849e0(*(long *)(param_2 + 0x20),0);
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar14 = SQRT(fVar21 * fVar21 + (float)uVar18 * (float)uVar18);
    fVar20 = fVar28;
    if (fVar14 <= fVar3) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar13 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar21 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar13 = 0.0 / fVar14;
      fVar21 = fVar21 / fVar14;
    }
  }
  else {
    bVar6 = true;
LAB_076dda74:
    fVar17 = (float)FUN_076dd2c0(fVar20,param_2);
    if (fVar17 <= param_1) {
      fVar17 = *(float *)(param_2 + 0x2c);
      goto LAB_076dda94;
    }
    bVar7 = true;
LAB_076ddab0:
    if ((iVar1 != 1) && (!bVar6)) goto LAB_076ddb88;
    if (bVar7) {
      return 0;
    }
LAB_076ddad4:
    if ((*(long *)(param_2 + 0x20) == 0) ||
       (lVar10 = FUN_085849e0(*(long *)(param_2 + 0x20),0), lVar10 == 0)) goto LAB_076ddcdc;
    fVar21 = fVar14;
    uVar19 = FUN_08596980(fVar22,lVar10,0);
    *(undefined4 *)param_4 = uVar19;
    *(float *)((long)param_4 + 4) = fVar13;
    *(float *)(param_4 + 1) = fVar21;
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_076ddcdc;
    lVar10 = FUN_085849e0(*(long *)(param_2 + 0x20),0);
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar21 = SQRT(fVar14 * fVar14 + fVar22 * fVar22);
    if (fVar21 <= fVar3) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar13 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar21 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar13 = 0.0 / fVar21;
      fVar21 = -fVar14 / fVar21;
    }
  }
  if (lVar10 != 0) {
    uVar19 = FUN_08599d5c(lVar10,0);
    *(undefined4 *)((long)param_4 + 0xc) = uVar19;
    *(float *)(param_4 + 2) = fVar13;
    *(float *)((long)param_4 + 0x14) = fVar21;
    uVar19 = FUN_076dd2c0(fVar20,param_2);
    *(undefined4 *)(param_4 + 3) = uVar19;
    return 1;
  }
LAB_076ddcdc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


