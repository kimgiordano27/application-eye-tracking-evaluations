/*
FUNCTION_NAME: System.Collections.Generic.Comparer<DiagnosticEvent>$$CreateComparer
ENTRY_POINT: 04f6bab4
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Collections_Generic_Comparer<DiagnosticEvent>__CreateComparer(undefined8 param_1)

{
  void *__src;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  float fVar16;
  double dVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double in_stack_000000b8;
  
  uVar9 = FUN_0366303c(param_1,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_016466fc(*unaff_x23);
  }
  uVar10 = FUN_051d94d4(uVar9,0,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  if (*(char *)(unaff_x19 + 0x218) != '\0') {
    return;
  }
  if (*(long *)(unaff_x19 + 0x238) == 0) {
    FUN_04f6d3b4();
  }
  if (DAT_0722a89c == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e4d340);
    DAT_0722a89c = '\x01';
  }
  iVar8 = *(int *)(unaff_x19 + 0x224);
  iVar6 = FUN_04f60b58();
  if (((*(long *)(unaff_x19 + 0x120) == 0) ||
      (lVar11 = FUN_04ec8ec8(*(long *)(unaff_x19 + 0x120),0), lVar11 == 0)) ||
     (*(long *)(lVar11 + 0x38) == 0)) goto LAB_04f6cae0;
  if (*(int *)(*(long *)(lVar11 + 0x38) + 0x18) <= iVar6 + iVar8) {
    return;
  }
  iVar8 = *(int *)(unaff_x19 + 0x224);
  iVar6 = FUN_04f60b58();
  if (iVar6 + iVar8 < 0) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x120) == 0) ||
     (lVar11 = FUN_04ec8ec8(*(long *)(unaff_x19 + 0x120),0), lVar11 == 0)) goto LAB_04f6cae0;
  lVar11 = *(long *)(lVar11 + 0x38);
  iVar8 = *(int *)(unaff_x19 + 0x224);
  iVar6 = FUN_04f60b58();
  if (lVar11 == 0) goto LAB_04f6cae0;
  uVar1 = iVar6 + iVar8;
  if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_04f6cae4;
  uVar1 = *(uint *)(lVar11 + (long)(int)uVar1 * 0x178 + 0x5c);
  iVar8 = *(int *)(unaff_x19 + 0x224);
  iVar6 = FUN_04f60b58();
  if (((*(long *)(unaff_x19 + 0x120) == 0) ||
      (lVar11 = FUN_04ec8ec8(*(long *)(unaff_x19 + 0x120),0), lVar11 == 0)) ||
     (lVar11 = *(long *)(lVar11 + 0x50), lVar11 == 0)) goto LAB_04f6cae0;
  if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_04f6cae4;
  if (*(long *)(unaff_x19 + 0x120) == 0) goto LAB_04f6cae0;
  iVar3 = *(int *)(lVar11 + (long)(int)uVar1 * 0x60 + 0x38);
  lVar11 = FUN_04ec8ec8(*(long *)(unaff_x19 + 0x120),0);
  if (lVar11 == 0) goto LAB_04f6cae0;
  lVar11 = *(long *)(lVar11 + 0x38);
  iVar4 = *(int *)(unaff_x19 + 0x224);
  iVar7 = FUN_04f60b58();
  if (lVar11 == 0) goto LAB_04f6cae0;
  uVar2 = iVar7 + iVar4;
  if (iVar6 + iVar8 == iVar3) {
    if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_04f6cae4;
    if (*(long *)(unaff_x19 + 0x120) == 0) goto LAB_04f6cae0;
    lVar11 = lVar11 + (long)(int)uVar2 * 0x178;
    iVar8 = *(int *)(*(long *)(unaff_x19 + 0x120) + 0x290);
    fVar21 = *(float *)(lVar11 + 0x138);
  }
  else {
    if (*(uint *)(lVar11 + 0x18) <= uVar2 - 1) goto LAB_04f6cae4;
    if (*(long *)(unaff_x19 + 0x120) == 0) goto LAB_04f6cae0;
    lVar11 = lVar11 + (long)(int)(uVar2 - 1) * 0x178;
    iVar8 = *(int *)(*(long *)(unaff_x19 + 0x120) + 0x290);
    fVar21 = *(float *)(lVar11 + 0x13c);
  }
  fVar24 = *(float *)(lVar11 + 0x148);
  fVar22 = *(float *)(lVar11 + 0x140) - fVar24;
  if (iVar8 == 0x1000) {
    fVar24 = fVar22 * -0.5 + 0.0;
  }
  if ((*(long *)(unaff_x19 + 0xf8) != 0) && (iVar8 = FUN_04f60b58(), iVar8 == 0)) {
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_04f6cae0;
    uVar2 = *(uint *)(unaff_x19 + 0x21c);
    lVar11 = FUN_051ddcd0(*(long *)(unaff_x19 + 0xf8),0);
    if (lVar11 == 0) {
      uVar14 = 0;
    }
    else {
      if ((*(long *)(unaff_x19 + 0xf8) == 0) ||
         (lVar11 = FUN_051ddcd0(*(long *)(unaff_x19 + 0xf8),0), lVar11 == 0)) goto LAB_04f6cae0;
      uVar14 = *(uint *)(lVar11 + 0x10);
    }
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    lVar11 = *(long *)(unaff_x19 + 0xf8);
    if ((int)uVar2 <= (int)uVar14) {
      uVar14 = uVar2;
    }
    in_stack_000000b8 = 0.0;
    FUN_051e0114(&stack0x000000b8,uVar14,0,0);
    if (lVar11 == 0) goto LAB_04f6cae0;
    FUN_051ddf98(lVar11,in_stack_000000b8,0);
  }
  if ((((*(char *)(unaff_x19 + 600) != '\0') &&
       (fVar16 = fVar21 - *(float *)(unaff_x19 + 0x248),
       fVar19 = fVar24 - *(float *)(unaff_x19 + 0x24c),
       DAT_0534bf7c <= fVar16 * fVar16 + fVar19 * fVar19)) || (*(char *)(unaff_x19 + 0x2e4) != '\0')
      ) || (*(char *)(unaff_x19 + 0x293) != '\0')) {
    FUN_04f6d514(fVar21,fVar24,fVar22);
  }
  lVar11 = *(long *)(unaff_x19 + 0x120);
  *(float *)(unaff_x19 + 0x248) = fVar21;
  *(float *)(unaff_x19 + 0x24c) = fVar24;
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0xf0) == 0)) goto LAB_04f6cae0;
  fVar25 = *(float *)(lVar11 + 0x204);
  __src = (void *)(*(long *)(lVar11 + 0xf0) + 0x28);
  iVar8 = FUN_04ab1930(__src,0);
  fVar16 = (float)FUN_04ab1938(__src,0);
  iVar6 = *(int *)(unaff_x19 + 0x214);
  memmove(&stack0x00000010,__src,0x60);
  fVar19 = (float)FUN_04ab1958(&stack0x00000010,0);
  lVar11 = *(long *)(unaff_x19 + 0x238);
  if (lVar11 == 0) goto LAB_04f6cae0;
  if (*(int *)(lVar11 + 0x18) == 0) goto LAB_04f6cae4;
  fVar24 = fVar24 + fVar22;
  fVar22 = fVar24 - fVar22;
  *(float *)(lVar11 + 0x20) = fVar21;
  *(float *)(lVar11 + 0x24) = fVar22;
  *(undefined4 *)(lVar11 + 0x28) = 0;
  lVar11 = *(long *)(unaff_x19 + 0x238);
  if (lVar11 == 0) goto LAB_04f6cae0;
  if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_04f6cae4;
  *(float *)(lVar11 + 0x8c) = fVar21;
  *(float *)(lVar11 + 0x90) = fVar24;
  *(undefined4 *)(lVar11 + 0x94) = 0;
  lVar11 = *(long *)(unaff_x19 + 0x238);
  if (lVar11 == 0) goto LAB_04f6cae0;
  if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_04f6cae4;
  fVar16 = fVar16 * (fVar25 / (float)iVar8);
  fVar21 = fVar21 + fVar16 * fVar19 * (float)iVar6 * DAT_0534c364;
  *(float *)(lVar11 + 0xf8) = fVar21;
  *(float *)(lVar11 + 0xfc) = fVar24;
  *(undefined4 *)(lVar11 + 0x100) = 0;
  lVar11 = *(long *)(unaff_x19 + 0x238);
  if (lVar11 == 0) goto LAB_04f6cae0;
  if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_04f6cae4;
  *(float *)(lVar11 + 0x164) = fVar21;
  *(float *)(lVar11 + 0x168) = fVar22;
  *(undefined4 *)(lVar11 + 0x16c) = 0;
  lVar11 = *(long *)(unaff_x19 + 0x238);
  if (lVar11 == 0) goto LAB_04f6cae0;
  fVar19 = (float)FUN_04f62080();
  fVar25 = 1.0;
  fVar21 = fVar19;
  if (1.0 < fVar19) {
    fVar21 = fVar25;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar19 < 0.0) {
    fVar21 = 0.0;
  }
  fVar19 = fVar16;
  fVar23 = fVar24;
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6bf24;
    }
    fVar26 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6bf24:
    fVar26 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar26 = fVar21;
    }
  }
  else {
    fVar26 = (float)(int)(fVar21 + -0.5);
  }
  fVar21 = fVar22;
  if (1.0 < fVar22) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar22 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6bfb0;
    }
    fVar22 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6bfb0:
    fVar22 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar22 = fVar21;
    }
  }
  else {
    fVar22 = (float)(int)(fVar21 + -0.5);
  }
  fVar21 = fVar24;
  if (1.0 < fVar24) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar24 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c03c;
    }
    fVar24 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c03c:
    fVar24 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar24 = fVar21;
    }
  }
  else {
    fVar24 = (float)(int)(fVar21 + -0.5);
  }
  fVar21 = fVar16;
  if (1.0 < fVar16) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * 255.0;
  fVar20 = 0.0;
  if (fVar16 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar20 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c0c8;
    }
    fVar21 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar20 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c0c8:
    fVar21 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar21 = fVar20;
    }
  }
  else {
    fVar21 = (float)(int)(fVar21 + -0.5);
  }
  if (*(int *)(lVar11 + 0x18) == 0) goto LAB_04f6cae4;
  *(uint *)(lVar11 + 0x48) =
       (int)fVar26 & 0xffU | ((int)fVar22 & 0xffU) << 8 | ((int)fVar24 & 0xffU) << 0x10 |
       (int)fVar21 << 0x18;
  lVar11 = *(long *)(unaff_x19 + 0x238);
  if (lVar11 == 0) goto LAB_04f6cae0;
  fVar22 = (float)FUN_04f62080();
  fVar21 = fVar22;
  if (1.0 < fVar22) {
    fVar21 = fVar25;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar22 < 0.0) {
    fVar21 = 0.0;
  }
  fVar22 = fVar19;
  fVar24 = fVar23;
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c1c0;
    }
    fVar16 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c1c0:
    fVar16 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar16 = fVar21;
    }
  }
  else {
    fVar16 = (float)(int)(fVar21 + -0.5);
  }
  fVar21 = fVar20;
  if (1.0 < fVar20) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar20 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c24c;
    }
    fVar26 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c24c:
    fVar26 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar26 = fVar21;
    }
  }
  else {
    fVar26 = (float)(int)(fVar21 + -0.5);
  }
  fVar21 = fVar23;
  if (1.0 < fVar23) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar23 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c2d8;
    }
    fVar23 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c2d8:
    fVar23 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar23 = fVar21;
    }
  }
  else {
    fVar23 = (float)(int)(fVar21 + -0.5);
  }
  fVar21 = fVar19;
  if (1.0 < fVar19) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * 255.0;
  fVar20 = 0.0;
  if (fVar19 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar20 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c364;
    }
    fVar21 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar20 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c364:
    fVar21 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar21 = fVar20;
    }
  }
  else {
    fVar21 = (float)(int)(fVar21 + -0.5);
  }
  if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_04f6cae4;
  *(uint *)(lVar11 + 0xb4) =
       (int)fVar16 & 0xffU | ((int)fVar26 & 0xffU) << 8 | ((int)fVar23 & 0xffU) << 0x10 |
       (int)fVar21 << 0x18;
  lVar11 = *(long *)(unaff_x19 + 0x238);
  if (lVar11 == 0) goto LAB_04f6cae0;
  fVar16 = (float)FUN_04f62080();
  fVar21 = fVar16;
  if (1.0 < fVar16) {
    fVar21 = fVar25;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar16 < 0.0) {
    fVar21 = 0.0;
  }
  fVar16 = fVar22;
  fVar19 = fVar24;
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c460;
    }
    fVar23 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c460:
    fVar23 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar23 = fVar21;
    }
  }
  else {
    fVar23 = (float)(int)(fVar21 + -0.5);
  }
  fVar21 = fVar20;
  if (1.0 < fVar20) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar20 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c4ec;
    }
    fVar26 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c4ec:
    fVar26 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar26 = fVar21;
    }
  }
  else {
    fVar26 = (float)(int)(fVar21 + -0.5);
  }
  fVar21 = fVar24;
  if (1.0 < fVar24) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar24 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c578;
    }
    fVar24 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c578:
    fVar24 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar24 = fVar21;
    }
  }
  else {
    fVar24 = (float)(int)(fVar21 + -0.5);
  }
  fVar21 = fVar22;
  if (1.0 < fVar22) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * 255.0;
  fVar20 = 0.0;
  if (fVar22 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar20 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c604;
    }
    fVar21 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar20 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c604:
    fVar21 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar21 = fVar20;
    }
  }
  else {
    fVar21 = (float)(int)(fVar21 + -0.5);
  }
  if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_04f6cae4;
  *(uint *)(lVar11 + 0x120) =
       (int)fVar23 & 0xffU | ((int)fVar26 & 0xffU) << 8 | ((int)fVar24 & 0xffU) << 0x10 |
       (int)fVar21 << 0x18;
  lVar11 = *(long *)(unaff_x19 + 0x238);
  if (lVar11 == 0) goto LAB_04f6cae0;
  fVar22 = (float)FUN_04f62080();
  fVar21 = fVar22;
  if (1.0 < fVar22) {
    fVar21 = fVar25;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar22 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c700;
    }
    fVar22 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c700:
    fVar22 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar22 = fVar21;
    }
  }
  else {
    fVar22 = (float)(int)(fVar21 + -0.5);
  }
  fVar21 = fVar20;
  if (1.0 < fVar20) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar20 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c78c;
    }
    fVar24 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c78c:
    fVar24 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar24 = fVar21;
    }
  }
  else {
    fVar24 = (float)(int)(fVar21 + -0.5);
  }
  fVar21 = fVar19;
  if (1.0 < fVar19) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar19 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c818;
    }
    fVar19 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c818:
    fVar19 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar19 = fVar21;
    }
  }
  else {
    fVar19 = (float)(int)(fVar21 + -0.5);
  }
  fVar21 = fVar16;
  if (1.0 < fVar16) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * 255.0;
  if (fVar16 < 0.0) {
    fVar21 = 0.0;
  }
  dVar17 = modf((double)fVar21,&stack0x000000b8);
  if (0.0 <= fVar21) {
    if (dVar17 == 0.5) {
      fVar21 = (float)in_stack_000000b8 + 1.0;
      goto LAB_04f6c8a4;
    }
    fVar16 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar17 == -0.5) {
    fVar21 = (float)in_stack_000000b8 + -1.0;
LAB_04f6c8a4:
    fVar16 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar16 = fVar21;
    }
  }
  else {
    fVar16 = (float)(int)(fVar21 + -0.5);
  }
  if (*(uint *)(lVar11 + 0x18) < 4) {
LAB_04f6cae4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  *(uint *)(lVar11 + 0x18c) =
       (int)fVar22 & 0xffU | ((int)fVar24 & 0xffU) << 8 | ((int)fVar19 & 0xffU) << 0x10 |
       (int)fVar16 << 0x18;
  if (unaff_x20 != 0) {
    FUN_0309de40();
    if ((*(char *)(unaff_x19 + 0x2a2) == '\0') && (uVar1 == *(uint *)(unaff_x19 + 0x2a4))) {
      return;
    }
    *(undefined1 *)(unaff_x19 + 0x2a2) = 0;
    *(uint *)(unaff_x19 + 0x2a4) = uVar1;
    if ((*(long *)(unaff_x19 + 0x120) != 0) &&
       (lVar11 = FUN_0366303c(*(long *)(unaff_x19 + 0x120),0), lVar11 != 0)) {
      iVar8 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar11,0);
      if (iVar8 == 0) {
        uVar9 = 0;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x120) == 0) ||
           (lVar11 = FUN_0366303c(*(long *)(unaff_x19 + 0x120),0), lVar11 == 0)) goto LAB_04f6cae0;
        uVar9 = FUN_036e1620(lVar11,0);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x23);
        }
        uVar10 = FUN_051d94d4(uVar9,0,0);
        if ((uVar10 & 1) != 0) {
          uVar9 = FUN_051d85ec(0);
        }
      }
      if ((*(long *)(unaff_x19 + 0x240) != 0) &&
         (lVar11 = FUN_051e516c(*(long *)(unaff_x19 + 0x240),0), lVar11 != 0)) {
        lVar11 = FUN_051df7a8(lVar11,0);
        puVar5 = PTR_DAT_06e492b0;
        lVar15 = *(long *)(unaff_x19 + 0x238);
        if (lVar15 != 0) {
          if (*(int *)(lVar15 + 0x18) == 0) goto LAB_04f6cae4;
          if (lVar11 != 0) {
            uVar10 = (ulong)*(uint *)(lVar15 + 0x24);
            uVar12 = (ulong)*(uint *)(lVar15 + 0x28);
            uVar18 = FUN_04f1c778(*(undefined4 *)(lVar15 + 0x20),uVar10,uVar12,lVar11,0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar18 = FUN_036df8cc(uVar18,uVar10,uVar12,uVar9,0);
            iVar8 = FUN_04882fc0(0);
            uVar9 = FUN_04f609b4();
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_016466fc(*unaff_x23);
            }
            uVar12 = FUN_051d2ac0(uVar9,0,0);
            if ((uVar12 & 1) != 0) {
              plVar13 = (long *)FUN_04f609b4();
              if (plVar13 == (long *)0x0) goto LAB_04f6cae0;
              (**(code **)(*plVar13 + 0x288))
                        (uVar18,(float)iVar8 - (float)uVar10,plVar13,
                         *(undefined8 *)(*plVar13 + 0x290));
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


