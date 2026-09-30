/*
FUNCTION_NAME: FUN_04f6ba2c
ENTRY_POINT: 04f6ba2c
PROGRAM: vrfs-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_04f6ba2c(long param_1,long param_2)

{
  void *__src;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  float fVar18;
  double dVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_58;
  
  if ((bRam0000000007244f03 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    thunk_FUN_0159f088(PTR_DAT_06e492b0);
    bRam0000000007244f03 = 1;
  }
  puVar6 = PTR_DAT_06d9fd78;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (*(char *)(param_1 + 0x25c) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x120) == 0) goto LAB_04f6cae0;
  uVar11 = FUN_0366303c(*(long *)(param_1 + 0x120),0);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar6);
  }
  uVar12 = FUN_051d94d4(uVar11,0,0);
  if ((uVar12 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x218) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x238) == 0) {
    FUN_04f6d3b4(param_1);
  }
  if (DAT_0722a89c == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e4d340);
    DAT_0722a89c = '\x01';
  }
  iVar10 = *(int *)(param_1 + 0x224);
  iVar8 = FUN_04f60b58(param_1);
  if (((*(long *)(param_1 + 0x120) == 0) ||
      (lVar13 = FUN_04ec8ec8(*(long *)(param_1 + 0x120),0), lVar13 == 0)) ||
     (*(long *)(lVar13 + 0x38) == 0)) goto LAB_04f6cae0;
  if (*(int *)(*(long *)(lVar13 + 0x38) + 0x18) <= iVar8 + iVar10) {
    return;
  }
  iVar10 = *(int *)(param_1 + 0x224);
  iVar8 = FUN_04f60b58(param_1);
  if (iVar8 + iVar10 < 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x120) == 0) ||
     (lVar13 = FUN_04ec8ec8(*(long *)(param_1 + 0x120),0), lVar13 == 0)) goto LAB_04f6cae0;
  lVar13 = *(long *)(lVar13 + 0x38);
  iVar10 = *(int *)(param_1 + 0x224);
  iVar8 = FUN_04f60b58(param_1);
  if (lVar13 == 0) goto LAB_04f6cae0;
  uVar1 = iVar8 + iVar10;
  if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_04f6cae4;
  uVar1 = *(uint *)(lVar13 + (long)(int)uVar1 * 0x178 + 0x5c);
  iVar10 = *(int *)(param_1 + 0x224);
  iVar8 = FUN_04f60b58(param_1);
  if (((*(long *)(param_1 + 0x120) == 0) ||
      (lVar13 = FUN_04ec8ec8(*(long *)(param_1 + 0x120),0), lVar13 == 0)) ||
     (lVar13 = *(long *)(lVar13 + 0x50), lVar13 == 0)) goto LAB_04f6cae0;
  if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_04f6cae4;
  if (*(long *)(param_1 + 0x120) == 0) goto LAB_04f6cae0;
  iVar3 = *(int *)(lVar13 + (long)(int)uVar1 * 0x60 + 0x38);
  lVar13 = FUN_04ec8ec8(*(long *)(param_1 + 0x120),0);
  if (lVar13 == 0) goto LAB_04f6cae0;
  lVar13 = *(long *)(lVar13 + 0x38);
  iVar4 = *(int *)(param_1 + 0x224);
  iVar9 = FUN_04f60b58(param_1);
  if (lVar13 == 0) goto LAB_04f6cae0;
  uVar2 = iVar9 + iVar4;
  if (iVar8 + iVar10 == iVar3) {
    if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_04f6cae4;
    if (*(long *)(param_1 + 0x120) == 0) goto LAB_04f6cae0;
    lVar13 = lVar13 + (long)(int)uVar2 * 0x178;
    iVar10 = *(int *)(*(long *)(param_1 + 0x120) + 0x290);
    fVar23 = *(float *)(lVar13 + 0x138);
  }
  else {
    if (*(uint *)(lVar13 + 0x18) <= uVar2 - 1) goto LAB_04f6cae4;
    if (*(long *)(param_1 + 0x120) == 0) goto LAB_04f6cae0;
    lVar13 = lVar13 + (long)(int)(uVar2 - 1) * 0x178;
    iVar10 = *(int *)(*(long *)(param_1 + 0x120) + 0x290);
    fVar23 = *(float *)(lVar13 + 0x13c);
  }
  fVar26 = *(float *)(lVar13 + 0x148);
  bVar5 = *(byte *)(lVar13 + 400);
  fVar24 = *(float *)(lVar13 + 0x140) - fVar26;
  if (iVar10 == 0x1000) {
    fVar26 = fVar24 * -0.5 + 0.0;
  }
  if ((*(long *)(param_1 + 0xf8) != 0) && (iVar10 = FUN_04f60b58(param_1), iVar10 == 0)) {
    if (*(long *)(param_1 + 0xf8) == 0) goto LAB_04f6cae0;
    uVar2 = *(uint *)(param_1 + 0x21c);
    lVar13 = FUN_051ddcd0(*(long *)(param_1 + 0xf8),0);
    if (lVar13 == 0) {
      uVar16 = 0;
    }
    else {
      if ((*(long *)(param_1 + 0xf8) == 0) ||
         (lVar13 = FUN_051ddcd0(*(long *)(param_1 + 0xf8),0), lVar13 == 0)) goto LAB_04f6cae0;
      uVar16 = *(uint *)(lVar13 + 0x10);
    }
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    lVar13 = *(long *)(param_1 + 0xf8);
    if ((int)uVar2 <= (int)uVar16) {
      uVar16 = uVar2;
    }
    dStack_58 = 0.0;
    FUN_051e0114(&dStack_58,uVar16,0,0);
    if (lVar13 == 0) goto LAB_04f6cae0;
    FUN_051ddf98(lVar13,dStack_58,0);
  }
  if ((((*(char *)(param_1 + 600) != '\0') &&
       (fVar18 = fVar23 - *(float *)(param_1 + 0x248), fVar21 = fVar26 - *(float *)(param_1 + 0x24c)
       , DAT_0534bf7c <= fVar18 * fVar18 + fVar21 * fVar21)) || (*(char *)(param_1 + 0x2e4) != '\0')
      ) || (*(char *)(param_1 + 0x293) != '\0')) {
    FUN_04f6d514(fVar23,fVar26,fVar24,param_1,bVar5 & 1);
  }
  lVar13 = *(long *)(param_1 + 0x120);
  *(float *)(param_1 + 0x248) = fVar23;
  *(float *)(param_1 + 0x24c) = fVar26;
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0xf0) == 0)) goto LAB_04f6cae0;
  fVar27 = *(float *)(lVar13 + 0x204);
  __src = (void *)(*(long *)(lVar13 + 0xf0) + 0x28);
  iVar10 = FUN_04ab1930(__src,0);
  fVar18 = (float)FUN_04ab1938(__src,0);
  iVar8 = *(int *)(param_1 + 0x214);
  memmove(&uStack_100,__src,0x60);
  fVar21 = (float)FUN_04ab1958(&uStack_100,0);
  lVar13 = *(long *)(param_1 + 0x238);
  if (lVar13 == 0) goto LAB_04f6cae0;
  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_04f6cae4;
  fVar26 = fVar26 + fVar24;
  fVar24 = fVar26 - fVar24;
  *(float *)(lVar13 + 0x20) = fVar23;
  *(float *)(lVar13 + 0x24) = fVar24;
  *(undefined4 *)(lVar13 + 0x28) = 0;
  lVar13 = *(long *)(param_1 + 0x238);
  if (lVar13 == 0) goto LAB_04f6cae0;
  if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_04f6cae4;
  *(float *)(lVar13 + 0x8c) = fVar23;
  *(float *)(lVar13 + 0x90) = fVar26;
  *(undefined4 *)(lVar13 + 0x94) = 0;
  lVar13 = *(long *)(param_1 + 0x238);
  if (lVar13 == 0) goto LAB_04f6cae0;
  if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_04f6cae4;
  fVar18 = fVar18 * (fVar27 / (float)iVar10);
  fVar23 = fVar23 + fVar18 * fVar21 * (float)iVar8 * DAT_0534c364;
  *(float *)(lVar13 + 0xf8) = fVar23;
  *(float *)(lVar13 + 0xfc) = fVar26;
  *(undefined4 *)(lVar13 + 0x100) = 0;
  lVar13 = *(long *)(param_1 + 0x238);
  if (lVar13 == 0) goto LAB_04f6cae0;
  if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_04f6cae4;
  *(float *)(lVar13 + 0x164) = fVar23;
  *(float *)(lVar13 + 0x168) = fVar24;
  *(undefined4 *)(lVar13 + 0x16c) = 0;
  lVar13 = *(long *)(param_1 + 0x238);
  if (lVar13 == 0) goto LAB_04f6cae0;
  fVar21 = (float)FUN_04f62080(param_1);
  fVar27 = 1.0;
  fVar23 = fVar21;
  if (1.0 < fVar21) {
    fVar23 = fVar27;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar21 < 0.0) {
    fVar23 = 0.0;
  }
  fVar21 = fVar18;
  fVar25 = fVar26;
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6bf24;
    }
    fVar28 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6bf24:
    fVar28 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar28 = fVar23;
    }
  }
  else {
    fVar28 = (float)(int)(fVar23 + -0.5);
  }
  fVar23 = fVar24;
  if (1.0 < fVar24) {
    fVar23 = 1.0;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar24 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6bfb0;
    }
    fVar24 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6bfb0:
    fVar24 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar24 = fVar23;
    }
  }
  else {
    fVar24 = (float)(int)(fVar23 + -0.5);
  }
  fVar23 = fVar26;
  if (1.0 < fVar26) {
    fVar23 = 1.0;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar26 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6c03c;
    }
    fVar26 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6c03c:
    fVar26 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar26 = fVar23;
    }
  }
  else {
    fVar26 = (float)(int)(fVar23 + -0.5);
  }
  fVar23 = fVar18;
  if (1.0 < fVar18) {
    fVar23 = 1.0;
  }
  fVar23 = fVar23 * 255.0;
  fVar22 = 0.0;
  if (fVar18 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar22 = (float)dStack_58 + 1.0;
      goto LAB_04f6c0c8;
    }
    fVar23 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar22 = (float)dStack_58 + -1.0;
LAB_04f6c0c8:
    fVar23 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar23 = fVar22;
    }
  }
  else {
    fVar23 = (float)(int)(fVar23 + -0.5);
  }
  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_04f6cae4;
  *(uint *)(lVar13 + 0x48) =
       (int)fVar28 & 0xffU | ((int)fVar24 & 0xffU) << 8 | ((int)fVar26 & 0xffU) << 0x10 |
       (int)fVar23 << 0x18;
  lVar13 = *(long *)(param_1 + 0x238);
  if (lVar13 == 0) goto LAB_04f6cae0;
  fVar24 = (float)FUN_04f62080(param_1);
  fVar23 = fVar24;
  if (1.0 < fVar24) {
    fVar23 = fVar27;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar24 < 0.0) {
    fVar23 = 0.0;
  }
  fVar24 = fVar21;
  fVar26 = fVar25;
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6c1c0;
    }
    fVar18 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6c1c0:
    fVar18 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar18 = fVar23;
    }
  }
  else {
    fVar18 = (float)(int)(fVar23 + -0.5);
  }
  fVar23 = fVar22;
  if (1.0 < fVar22) {
    fVar23 = 1.0;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar22 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6c24c;
    }
    fVar28 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6c24c:
    fVar28 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar28 = fVar23;
    }
  }
  else {
    fVar28 = (float)(int)(fVar23 + -0.5);
  }
  fVar23 = fVar25;
  if (1.0 < fVar25) {
    fVar23 = 1.0;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar25 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6c2d8;
    }
    fVar25 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6c2d8:
    fVar25 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar25 = fVar23;
    }
  }
  else {
    fVar25 = (float)(int)(fVar23 + -0.5);
  }
  fVar23 = fVar21;
  if (1.0 < fVar21) {
    fVar23 = 1.0;
  }
  fVar23 = fVar23 * 255.0;
  fVar22 = 0.0;
  if (fVar21 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar22 = (float)dStack_58 + 1.0;
      goto LAB_04f6c364;
    }
    fVar23 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar22 = (float)dStack_58 + -1.0;
LAB_04f6c364:
    fVar23 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar23 = fVar22;
    }
  }
  else {
    fVar23 = (float)(int)(fVar23 + -0.5);
  }
  if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_04f6cae4;
  *(uint *)(lVar13 + 0xb4) =
       (int)fVar18 & 0xffU | ((int)fVar28 & 0xffU) << 8 | ((int)fVar25 & 0xffU) << 0x10 |
       (int)fVar23 << 0x18;
  lVar13 = *(long *)(param_1 + 0x238);
  if (lVar13 == 0) goto LAB_04f6cae0;
  fVar18 = (float)FUN_04f62080(param_1);
  fVar23 = fVar18;
  if (1.0 < fVar18) {
    fVar23 = fVar27;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar18 < 0.0) {
    fVar23 = 0.0;
  }
  fVar18 = fVar24;
  fVar21 = fVar26;
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6c460;
    }
    fVar25 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6c460:
    fVar25 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar25 = fVar23;
    }
  }
  else {
    fVar25 = (float)(int)(fVar23 + -0.5);
  }
  fVar23 = fVar22;
  if (1.0 < fVar22) {
    fVar23 = 1.0;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar22 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6c4ec;
    }
    fVar28 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6c4ec:
    fVar28 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar28 = fVar23;
    }
  }
  else {
    fVar28 = (float)(int)(fVar23 + -0.5);
  }
  fVar23 = fVar26;
  if (1.0 < fVar26) {
    fVar23 = 1.0;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar26 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6c578;
    }
    fVar26 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6c578:
    fVar26 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar26 = fVar23;
    }
  }
  else {
    fVar26 = (float)(int)(fVar23 + -0.5);
  }
  fVar23 = fVar24;
  if (1.0 < fVar24) {
    fVar23 = 1.0;
  }
  fVar23 = fVar23 * 255.0;
  fVar22 = 0.0;
  if (fVar24 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar22 = (float)dStack_58 + 1.0;
      goto LAB_04f6c604;
    }
    fVar23 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar22 = (float)dStack_58 + -1.0;
LAB_04f6c604:
    fVar23 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar23 = fVar22;
    }
  }
  else {
    fVar23 = (float)(int)(fVar23 + -0.5);
  }
  if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_04f6cae4;
  *(uint *)(lVar13 + 0x120) =
       (int)fVar25 & 0xffU | ((int)fVar28 & 0xffU) << 8 | ((int)fVar26 & 0xffU) << 0x10 |
       (int)fVar23 << 0x18;
  lVar13 = *(long *)(param_1 + 0x238);
  if (lVar13 == 0) goto LAB_04f6cae0;
  fVar24 = (float)FUN_04f62080(param_1);
  fVar23 = fVar24;
  if (1.0 < fVar24) {
    fVar23 = fVar27;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar24 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6c700;
    }
    fVar24 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6c700:
    fVar24 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar24 = fVar23;
    }
  }
  else {
    fVar24 = (float)(int)(fVar23 + -0.5);
  }
  fVar23 = fVar22;
  if (1.0 < fVar22) {
    fVar23 = 1.0;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar22 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6c78c;
    }
    fVar26 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6c78c:
    fVar26 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar26 = fVar23;
    }
  }
  else {
    fVar26 = (float)(int)(fVar23 + -0.5);
  }
  fVar23 = fVar21;
  if (1.0 < fVar21) {
    fVar23 = 1.0;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar21 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6c818;
    }
    fVar21 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6c818:
    fVar21 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar21 = fVar23;
    }
  }
  else {
    fVar21 = (float)(int)(fVar23 + -0.5);
  }
  fVar23 = fVar18;
  if (1.0 < fVar18) {
    fVar23 = 1.0;
  }
  fVar23 = fVar23 * 255.0;
  if (fVar18 < 0.0) {
    fVar23 = 0.0;
  }
  dVar19 = modf((double)fVar23,&dStack_58);
  if (0.0 <= fVar23) {
    if (dVar19 == 0.5) {
      fVar23 = (float)dStack_58 + 1.0;
      goto LAB_04f6c8a4;
    }
    fVar18 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar19 == -0.5) {
    fVar23 = (float)dStack_58 + -1.0;
LAB_04f6c8a4:
    fVar18 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar18 = fVar23;
    }
  }
  else {
    fVar18 = (float)(int)(fVar23 + -0.5);
  }
  if (*(uint *)(lVar13 + 0x18) < 4) {
LAB_04f6cae4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  *(uint *)(lVar13 + 0x18c) =
       (int)fVar24 & 0xffU | ((int)fVar26 & 0xffU) << 8 | ((int)fVar21 & 0xffU) << 0x10 |
       (int)fVar18 << 0x18;
  if (param_2 != 0) {
    FUN_0309de40(param_2,*(undefined8 *)(param_1 + 0x238),0);
    if ((*(char *)(param_1 + 0x2a2) == '\0') && (uVar1 == *(uint *)(param_1 + 0x2a4))) {
      return;
    }
    *(undefined1 *)(param_1 + 0x2a2) = 0;
    *(uint *)(param_1 + 0x2a4) = uVar1;
    if ((*(long *)(param_1 + 0x120) != 0) &&
       (lVar13 = FUN_0366303c(*(long *)(param_1 + 0x120),0), lVar13 != 0)) {
      iVar10 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar13,0);
      if (iVar10 == 0) {
        uVar11 = 0;
      }
      else {
        if ((*(long *)(param_1 + 0x120) == 0) ||
           (lVar13 = FUN_0366303c(*(long *)(param_1 + 0x120),0), lVar13 == 0)) goto LAB_04f6cae0;
        uVar11 = FUN_036e1620(lVar13,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_016466fc(*(long *)puVar6);
        }
        uVar12 = FUN_051d94d4(uVar11,0,0);
        if ((uVar12 & 1) != 0) {
          uVar11 = FUN_051d85ec(0);
        }
      }
      if ((*(long *)(param_1 + 0x240) != 0) &&
         (lVar13 = FUN_051e516c(*(long *)(param_1 + 0x240),0), lVar13 != 0)) {
        lVar13 = FUN_051df7a8(lVar13,0);
        puVar7 = PTR_DAT_06e492b0;
        lVar17 = *(long *)(param_1 + 0x238);
        if (lVar17 != 0) {
          if (*(int *)(lVar17 + 0x18) == 0) goto LAB_04f6cae4;
          if (lVar13 != 0) {
            uVar12 = (ulong)*(uint *)(lVar17 + 0x24);
            uVar14 = (ulong)*(uint *)(lVar17 + 0x28);
            uVar20 = FUN_04f1c778(*(undefined4 *)(lVar17 + 0x20),uVar12,uVar14,lVar13,0);
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar20 = FUN_036df8cc(uVar20,uVar12,uVar14,uVar11,0);
            iVar10 = FUN_04882fc0(0);
            uVar11 = FUN_04f609b4();
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_016466fc(*(long *)puVar6);
            }
            uVar14 = FUN_051d2ac0(uVar11,0,0);
            if ((uVar14 & 1) != 0) {
              plVar15 = (long *)FUN_04f609b4();
              if (plVar15 == (long *)0x0) goto LAB_04f6cae0;
              (**(code **)(*plVar15 + 0x288))
                        (uVar20,(float)iVar10 - (float)uVar12,plVar15,
                         *(undefined8 *)(*plVar15 + 0x290));
            }
            return;
          }
        }
      }
    }
  }
LAB_04f6cae0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


