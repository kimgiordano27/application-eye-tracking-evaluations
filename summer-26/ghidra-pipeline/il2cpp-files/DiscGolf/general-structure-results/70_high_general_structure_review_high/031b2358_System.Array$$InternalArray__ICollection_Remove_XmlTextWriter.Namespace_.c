/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<XmlTextWriter.Namespace>
ENTRY_POINT: 031b2358
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<XmlTextWriter_Namespace>
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  undefined4 in_w9;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x28;
  long unaff_x29;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  ulong in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000064;
  
  *(undefined4 *)(unaff_x23 + 0x18) = in_w9;
  *(undefined8 *)(param_1 + 0x20) = 0;
  fVar12 = (float)FUN_0409f2f4(in_stack_00000058,0,*unaff_x19);
  *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
  lVar10 = *(long *)(unaff_x24 + 0x10);
  param_3 = unaff_s9 * fStack0000000000000048 + param_3;
  param_4 = unaff_s10 * fStack0000000000000048 + param_4;
  fStack0000000000000064 = param_3;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x24 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
    *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
    *(float *)(lVar10 + 0x20) = unaff_s8 * fStack0000000000000048 + fVar12;
    *(float *)(lVar10 + 0x24) = param_3;
    *(float *)(lVar10 + 0x28) = param_4;
  }
  else {
    FUN_0409f624();
  }
  fVar12 = DAT_010fce28;
  lVar10 = *(long *)(unaff_x23 + 0x10);
  fStack0000000000000064 = fStack0000000000000064 + DAT_010fce28;
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x23 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
    *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = 0;
  }
  else {
    param_3 = 0.0;
    FUN_0409ce84(0);
  }
  fVar13 = (float)FUN_0409f2f4(in_stack_00000050,0,*unaff_x19);
  *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
  lVar10 = *(long *)(unaff_x24 + 0x10);
  param_4 = param_4 - unaff_s10 * in_stack_00000040._4_4_;
  fVar18 = (param_3 - unaff_s9 * in_stack_00000040._4_4_) + fVar12;
  fStack0000000000000064 = fVar18;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x24 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
    *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
    *(float *)(lVar10 + 0x20) = fVar13 - unaff_s8 * in_stack_00000040._4_4_;
    *(float *)(lVar10 + 0x24) = fVar18;
    *(float *)(lVar10 + 0x28) = param_4;
  }
  else {
    FUN_0409f624();
  }
  lVar10 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x23 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
    *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = 0;
  }
  else {
    fVar18 = 0.0;
    FUN_0409ce84(0);
  }
  fVar14 = (float)FUN_0409f2f4(in_stack_00000050,0,*unaff_x19);
  in_stack_00000040._4_4_ = in_stack_00000040._4_4_ + fStack000000000000003c;
  param_4 = param_4 - in_stack_00000040._4_4_ * unaff_s10;
  fVar13 = fVar18 - in_stack_00000040._4_4_ * unaff_s9;
  uVar15 = FUN_0635bd78(fVar14 - in_stack_00000040._4_4_ * unaff_s8);
  fStack0000000000000064 = fVar13;
  FUN_03199614();
  fVar13 = fStack0000000000000064;
  uVar15 = FUN_0635f58c(uVar15);
  lVar10 = *(long *)(unaff_x24 + 0x10);
  *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x24 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
    *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
    *(undefined4 *)(lVar10 + 0x20) = uVar15;
    *(float *)(lVar10 + 0x24) = fVar13;
    *(float *)(lVar10 + 0x28) = param_4;
  }
  else {
    FUN_0409f624();
  }
  lVar10 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x23 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
    *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = 0;
  }
  else {
    fVar13 = 0.0;
    FUN_0409ce84(0);
  }
  fVar16 = (float)FUN_0409f2f4(in_stack_00000058,0,*unaff_x19);
  fVar18 = param_4;
  fVar19 = fVar13;
  fVar17 = (float)FUN_0409f2f4(in_stack_00000050,0,*unaff_x19);
  fVar14 = fVar18;
  if (*(char *)(unaff_x25 + 0xc75) == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    *(undefined1 *)(unaff_x25 + 0xc75) = 1;
  }
  fVar16 = fVar16 - fVar17;
  fVar13 = fVar13 - fVar19;
  param_4 = param_4 - fVar18;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  fVar19 = param_4 * param_4;
  fVar18 = SQRT(fVar19 + fVar16 * fVar16 + fVar13 * fVar13);
  if (fVar18 <= unaff_s14) {
    if (DAT_06db4c71 == '\0') {
      FUN_02d965b8(PTR_DAT_069fb978);
      DAT_06db4c71 = '\x01';
    }
    pfVar11 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
    fVar16 = *pfVar11;
    fVar13 = pfVar11[1];
    param_4 = pfVar11[2];
  }
  else {
    fVar16 = fVar16 / fVar18;
    fVar13 = fVar13 / fVar18;
    param_4 = param_4 / fVar18;
  }
  fVar17 = (float)FUN_0409f2f4(in_stack_00000058,0,*unaff_x19);
  in_stack_00000030._4_4_ = fStack000000000000004c + in_stack_00000030._4_4_;
  fVar14 = in_stack_00000030._4_4_ * param_4 + fVar14;
  fVar18 = in_stack_00000030._4_4_ * fVar13 + fVar19;
  uVar15 = FUN_0635bd78(in_stack_00000030._4_4_ * fVar16 + fVar17);
  fStack0000000000000064 = fVar18;
  FUN_03199614();
  fVar18 = fStack0000000000000064;
  uVar15 = FUN_0635f58c(uVar15);
  lVar10 = *(long *)(unaff_x24 + 0x10);
  *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x24 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
    *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
    *(undefined4 *)(lVar10 + 0x20) = uVar15;
    *(float *)(lVar10 + 0x24) = fVar18;
    *(float *)(lVar10 + 0x28) = fVar14;
  }
  else {
    FUN_0409f624();
  }
  lVar10 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x23 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
    *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = 0;
  }
  else {
    fVar18 = 0.0;
    FUN_0409ce84(0);
  }
  fVar19 = (float)FUN_0409f2f4(in_stack_00000058,0,*unaff_x19);
  *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
  lVar10 = *(long *)(unaff_x24 + 0x10);
  fVar18 = fVar13 * fStack000000000000004c + fVar18;
  fVar14 = param_4 * fStack000000000000004c + fVar14;
  fStack0000000000000064 = fVar18;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x24 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
    *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
    *(float *)(lVar10 + 0x20) = fVar16 * fStack000000000000004c + fVar19;
    *(float *)(lVar10 + 0x24) = fVar18;
    *(float *)(lVar10 + 0x28) = fVar14;
  }
  else {
    FUN_0409f624();
  }
  lVar10 = *(long *)(unaff_x23 + 0x10);
  fStack0000000000000064 = fStack0000000000000064 + fVar12;
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x23 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
    *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = 0;
  }
  else {
    fVar18 = 0.0;
    FUN_0409ce84(0);
  }
  fVar19 = (float)FUN_0409f2f4(in_stack_00000050,0,*unaff_x19);
  *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
  lVar10 = *(long *)(unaff_x24 + 0x10);
  fVar14 = fVar14 - param_4 * unaff_s11;
  fVar12 = (fVar18 - fVar13 * unaff_s11) + fVar12;
  fStack0000000000000064 = fVar12;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x24 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
    *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
    *(float *)(lVar10 + 0x20) = fVar19 - fVar16 * unaff_s11;
    *(float *)(lVar10 + 0x24) = fVar12;
    *(float *)(lVar10 + 0x28) = fVar14;
  }
  else {
    FUN_0409f624();
  }
  lVar10 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x23 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
    *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = 0;
  }
  else {
    fVar12 = 0.0;
    FUN_0409ce84(0);
  }
  fVar18 = (float)FUN_0409f2f4(in_stack_00000050,0,*unaff_x19);
  fStack0000000000000038 = unaff_s11 + fStack0000000000000038;
  fVar14 = fVar14 - fStack0000000000000038 * param_4;
  fVar12 = fVar12 - fStack0000000000000038 * fVar13;
  uVar15 = FUN_0635bd78(fVar18 - fStack0000000000000038 * fVar16);
  fStack0000000000000064 = fVar12;
  FUN_03199614();
  fVar12 = fStack0000000000000064;
  uVar15 = FUN_0635f58c(uVar15);
  lVar10 = *(long *)(unaff_x24 + 0x10);
  *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x24 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
    *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
    *(undefined4 *)(lVar10 + 0x20) = uVar15;
    *(float *)(lVar10 + 0x24) = fVar12;
    *(float *)(lVar10 + 0x28) = fVar14;
  }
  else {
    FUN_0409f624();
  }
  lVar10 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b31b0;
  uVar2 = *(uint *)(unaff_x23 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
    *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = 0;
  }
  else {
    FUN_0409ce84(0,0);
  }
  puVar3 = PTR_DAT_069fb990;
  *in_stack_00000018 = unaff_x24;
  LeanTween__value();
  lVar10 = *in_stack_00000010;
  if ((in_stack_00000008 & 0x100000000) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_0634eb94(lVar10,0,0);
    if ((uVar6 & 1) != 0) {
LAB_031b2cd8:
      lVar10 = *in_stack_00000010;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_06355200(lVar10,0);
      return;
    }
    if (unaff_x28 != 0) {
      uVar8 = FUN_0635fd00();
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar3);
      }
      uVar6 = FUN_063542dc(uVar8,0);
      if ((uVar6 & 1) == 0) {
        return;
      }
      lVar10 = FUN_0635fd00();
      if (lVar10 != 0) {
        lVar10 = FUN_0634bbcc(lVar10,0);
        *in_stack_00000010 = lVar10;
        LeanTween__value(in_stack_00000010,lVar10);
        lVar10 = *in_stack_00000010;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar6 = FUN_0634eb94(lVar10,0,0);
        if ((uVar6 & 1) == 0) {
          return;
        }
        goto LAB_031b2cd8;
      }
    }
    goto LAB_031b31b0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_06350670(lVar10,0,0);
  if ((uVar6 & 1) != 0) {
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fb980);
    FUN_0634fa84(lVar10,*(undefined8 *)PTR_DAT_06a0bb28,0);
    *in_stack_00000010 = lVar10;
    LeanTween__value(in_stack_00000010,lVar10);
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    FUN_063555a4(*in_stack_00000010,1,0);
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0b528);
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0b530);
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_069fc320);
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0bb18);
    puVar4 = PTR_DAT_069fc748;
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    lVar10 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)PTR_DAT_069fc748);
    plVar7 = (long *)FUN_06347178(*(undefined8 *)PTR_DAT_06a0bb20,0);
    if (lVar10 == 0) goto LAB_031b31b0;
    if (plVar7 == (long *)0x0) {
LAB_031b2cb4:
      plVar7 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_069fc410 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_031b2cb4;
      if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_069fc410)
      {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_0631c1e0(lVar10,plVar7,0);
    if ((*in_stack_00000010 == 0) || (lVar10 = FUN_0634ee08(*in_stack_00000010,0), lVar10 == 0))
    goto LAB_031b31b0;
    FUN_0635e26c();
    if ((*in_stack_00000010 == 0) ||
       ((lVar10 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar4), unaff_x29 == 0 ||
        (lVar10 == 0)))) goto LAB_031b31b0;
    FUN_0631cb1c(lVar10,*(char *)(unaff_x29 + 0x359) == '\0',0);
    if ((*in_stack_00000010 == 0) ||
       (lVar10 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0b538), lVar10 == 0))
    goto LAB_031b31b0;
    FUN_063c35d0(lVar10,*(char *)(unaff_x29 + 0x359) == '\0',0);
    if (*in_stack_00000010 == 0) goto LAB_031b31b0;
    FUN_0634ef7c(*in_stack_00000010,*(undefined4 *)(unaff_x29 + 0x2b0),0);
  }
  if (*in_stack_00000010 != 0) {
    uVar8 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)PTR_DAT_069fc748);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar3);
    }
    uVar6 = FUN_063542dc(uVar8,0);
    if ((uVar6 & 1) == 0) {
      if (*in_stack_00000010 == 0) goto LAB_031b31b0;
      FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0b530);
    }
    puVar4 = PTR_DAT_06a09130;
    if (*in_stack_00000010 != 0) {
      uVar8 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a09130);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar3);
      }
      uVar6 = FUN_063542dc(uVar8,0);
      if ((uVar6 & 1) == 0) {
        if (*in_stack_00000010 == 0) goto LAB_031b31b0;
        FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0b528);
      }
      puVar5 = PTR_DAT_06a0b538;
      if (*in_stack_00000010 != 0) {
        uVar8 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)PTR_DAT_06a0b538);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        uVar6 = FUN_063542dc(uVar8,0);
        if ((uVar6 & 1) == 0) {
          if (*in_stack_00000010 == 0) goto LAB_031b31b0;
          FUN_0364c220(*in_stack_00000010,*(undefined8 *)PTR_DAT_069fc320);
        }
        if ((*in_stack_00000010 != 0) &&
           (lVar10 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar4), lVar10 != 0)) {
          uVar8 = FUN_06324494(lVar10,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar3);
          }
          uVar6 = FUN_0634eb94(uVar8,0,0);
          if ((uVar6 & 1) == 0) {
            lVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ffce8);
            FUN_063250bc(lVar10,0);
            if ((*in_stack_00000010 == 0) ||
               (lVar9 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar4), lVar9 == 0))
            goto LAB_031b31b0;
            FUN_06324564(lVar9,lVar10,0);
            if ((*in_stack_00000010 == 0) ||
               (lVar9 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar5), lVar9 == 0))
            goto LAB_031b31b0;
            FUN_063c8034(lVar9,lVar10,0);
          }
          else {
            if ((*in_stack_00000010 == 0) ||
               (lVar10 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar4), lVar10 == 0))
            goto LAB_031b31b0;
            lVar10 = FUN_06324494(lVar10,0);
          }
          if ((((*in_stack_00000010 != 0) &&
               (lVar9 = FUN_0634ee08(*in_stack_00000010,0), unaff_x28 != 0)) &&
              (FUN_0635d920(), lVar9 != 0)) &&
             ((FUN_0635d9f4(lVar9,0), lVar10 != 0 && (FUN_0632a63c(lVar10,0), unaff_x24 != 0)))) {
            uVar8 = FUN_040a10b0();
            FUN_063281f8(lVar10,uVar8,0);
            if (unaff_x23 != 0) {
              uVar8 = FUN_0409e848();
              FUN_063283fc(lVar10,uVar8,0);
              if (unaff_x22 != 0) {
                uVar8 = FUN_03fb5794();
                FUN_06329900(lVar10,uVar8,0);
                FUN_0632a704(lVar10,0);
                FUN_0632a644(lVar10,0);
                if ((*in_stack_00000010 != 0) &&
                   (lVar9 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar5), lVar9 != 0)) {
                  FUN_063c8034(lVar9,0,0);
                  if ((*in_stack_00000010 != 0) &&
                     ((lVar9 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar5), lVar9 != 0 &&
                      (FUN_063c8034(lVar9,lVar10,0), unaff_x29 != 0)))) {
                    if (*(char *)(unaff_x29 + 0x359) == '\0') {
                      return;
                    }
                    if ((*in_stack_00000010 != 0) &&
                       (lVar10 = FUN_0364c2b0(*in_stack_00000010,*(undefined8 *)puVar5), lVar10 != 0
                       )) {
                      FUN_063c35d0(lVar10,0,0);
                      if (*in_stack_00000010 != 0) {
                        FUN_0634f038(*in_stack_00000010,0,0);
                        if (*in_stack_00000010 != 0) {
                          FUN_0634f038(*in_stack_00000010,1,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031b31b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


