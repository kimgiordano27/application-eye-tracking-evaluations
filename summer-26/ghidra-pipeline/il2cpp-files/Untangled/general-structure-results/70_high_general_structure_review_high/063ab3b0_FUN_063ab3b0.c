/*
FUNCTION_NAME: FUN_063ab3b0
ENTRY_POINT: 063ab3b0
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void FUN_063ab3b0(undefined8 param_1,long param_2,long *param_3,long param_4,long param_5,
                 long param_6)

{
  char cVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_78 [8];
  
                    /* try { // try from 063ab3c4 to 064ab3d7 has its CatchHandler @ 063ab530 */
  if ((DAT_071cd4e4 & 1) == 0) {
                    /* try { // try from 063ab3fc to 064ab40f has its CatchHandler @ 063ab524 */
    FUN_02f07e70(
                System_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>_var
                );
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d01e20);
                    /* try { // try from 063ab424 to 064ab42b has its CatchHandler @ 063ab51c */
    FUN_02f07e70(PlayFab_DataModels_FinalizeFileUploadsRequest_var);
    FUN_02f07e70(System_Action<StringBuilder>_TypeInfo);
                    /* try { // try from 063ab440 to 064ab44b has its CatchHandler @ 063ab528 */
    FUN_02f07e70(System_Action<TMP_TextInfo>_TypeInfo);
                    /* try { // try from 063ab44c to 064ab503 has its CatchHandler @ 063ab058 */
    FUN_02f07e70(System_Action<Task>_TypeInfo);
    FUN_02f07e70(System_Action<TimerState>_TypeInfo);
    FUN_02f07e70(System_Action<Transform>_TypeInfo);
    DAT_071cd4e4 = 1;
  }
  local_78[0] = 0;
  if (param_2 == 0) {
LAB_063aba00:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar13 = *(long *)(param_2 + 0x238);
  iVar5 = *(int *)(param_2 + 0x240);
  cVar1 = *(char *)(param_2 + 0x244);
  cVar2 = *(char *)(param_2 + 0x245);
  if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar9 = FUN_066ca6a0(lVar13,0,0);
  if ((uVar9 & 1) != 0) {
    plVar10 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,1);
    if (plVar10 != (long *)0x0) {
      if ((lVar13 != 0) &&
         (lVar11 = thunk_FUN_02ef170c(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
        uVar12 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar12,0);
      }
      if ((int)plVar10[3] != 0) {
        plVar10[4] = lVar13;
        thunk_FUN_02f411dc(plVar10 + 4,lVar13);
                    /* try { // try from 063ab504 to 064ab507 has its CatchHandler @ 063ab558 */
                    /* try { // try from 063ab508 to 064ab50b has its CatchHandler @ 063ab554 */
                    /* try { // try from 063ab50c to 064ab50f has its CatchHandler @ 063ab058 */
                    /* try { // try from 063ab510 to 064ab513 has its CatchHandler @ 063ab534 */
                    /* try { // try from 063ab514 to 064ab517 has its CatchHandler @ 063ab52c */
        if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
                    /* try { // try from 063ab518 to 064ab51b has its CatchHandler @ 063ab520 */
          thunk_FUN_02f12b58();
        }
                    /* catch() { ... } // from try @ 063ab424 with catch @ 063ab51c
                       try { // try from 063ab51c to 064ab577 has its CatchHandler @ 063ab058 */
                    /* catch() { ... } // from try @ 063ab518 with catch @ 063ab520 */
                    /* catch() { ... } // from try @ 063ab3fc with catch @ 063ab524 */
                    /* catch() { ... } // from try @ 063ab440 with catch @ 063ab528 */
                    /* catch() { ... } // from try @ 063ab514 with catch @ 063ab52c */
                    /* catch() { ... } // from try @ 063ab3c4 with catch @ 063ab530 */
        FUN_06693fdc(*(undefined8 *)System_Action<Transform>_TypeInfo,plVar10,0);
        return;
                    /* catch() { ... } // from try @ 063ab510 with catch @ 063ab534 */
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    goto LAB_063aba00;
  }
                    /* catch() { ... } // from try @ 063ab384 with catch @ 063ab538 */
                    /* catch() { ... } // from try @ 063ab350 with catch @ 063ab53c */
  lVar11 = *param_3;
                    /* catch() { ... } // from try @ 063ab2d0 with catch @ 063ab540 */
                    /* catch() { ... } // from try @ 063ab31c with catch @ 063ab544 */
                    /* catch() { ... } // from try @ 063ab2b0 with catch @ 063ab548 */
                    /* catch() { ... } // from try @ 063ab2f0 with catch @ 063ab54c */
  uVar12 = FUN_03b59e58(6,*(undefined8 *)PlayFab_DataModels_FinalizeFileUploadsRequest_var);
                    /* catch() { ... } // from try @ 063ab294 with catch @ 063ab550 */
                    /* catch() { ... } // from try @ 063ab508 with catch @ 063ab554 */
                    /* catch() { ... } // from try @ 063ab504 with catch @ 063ab558 */
                    /* catch() { ... } // from try @ 063ab32c with catch @ 063ab55c */
                    /* catch() { ... } // from try @ 063ab274 with catch @ 063ab560 */
  FUN_062a6cd4(local_78,lVar11,uVar12,0);
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_4 + 0xe0);
  }
  iVar4 = FUN_066d0db8(0);
                    /* try { // try from 063ab578 to 064ab57b has its CatchHandler @ 063ab5a8 */
                    /* try { // try from 063ab57c to 064ab5b7 has its CatchHandler @ 063ab058 */
  if (iVar4 == 0 || cVar1 != '\0') {
    iVar5 = 1;
  }
  if (iVar5 == 2) {
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e42cc(*param_3,*(undefined8 *)System_Action<TMP_TextInfo>_TypeInfo,0);
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e4310(*param_3,*(undefined8 *)System_Action<StringBuilder>_TypeInfo,0);
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e4310(*param_3,*(undefined8 *)System_Action<Task>_TypeInfo,0);
  }
  else if (iVar5 == 4) {
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e4310(*param_3,*(undefined8 *)System_Action<TMP_TextInfo>_TypeInfo,0);
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e42cc(*param_3,*(undefined8 *)System_Action<StringBuilder>_TypeInfo,0);
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e4310(*param_3,*(undefined8 *)System_Action<Task>_TypeInfo,0);
  }
  else if (iVar5 == 8) {
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e4310(*param_3,*(undefined8 *)System_Action<TMP_TextInfo>_TypeInfo,0);
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e4310(*param_3,*(undefined8 *)System_Action<StringBuilder>_TypeInfo,0);
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e42cc(*param_3,*(undefined8 *)System_Action<Task>_TypeInfo,0);
  }
  else {
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e4310(*param_3,*(undefined8 *)System_Action<TMP_TextInfo>_TypeInfo,0);
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e4310(*param_3,*(undefined8 *)System_Action<StringBuilder>_TypeInfo,0);
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e4310(*param_3,*(undefined8 *)System_Action<Task>_TypeInfo,0);
  }
  if (cVar2 == '\0') {
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(long *)(param_6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    iVar5 = FUN_066b364c(*(long *)(param_6 + 0x18),0);
    if (iVar5 != 0) {
      if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_066e4310(*param_3,*(undefined8 *)System_Action<TimerState>_TypeInfo,0);
      goto LAB_063ab758;
    }
  }
  if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066e42cc(*param_3,*(undefined8 *)System_Action<TimerState>_TypeInfo,0);
LAB_063ab758:
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(char *)(param_5 + 0xa8) == '\0') {
    if (DAT_071bb655 == '\0') {
      FUN_02f07e70(PTR_DAT_06d03888);
      DAT_071bb655 = '\x01';
    }
    uVar14 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_06d03888 + 0xb8) + 8);
    fVar15 = *(float *)(*(long *)(*(long *)PTR_DAT_06d03888 + 0xb8) + 0xc);
  }
  else {
    FUN_062cac84(&local_b0,param_5,0);
    uVar14 = (undefined4)local_90;
    FUN_062cac84(&local_b0,param_5,0);
    fVar15 = local_90._4_4_;
  }
  if (*(int *)(param_4 + 0x168) == 1) {
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    local_90 = *(undefined8 *)(param_6 + 0x48);
    uStack_98 = *(undefined8 *)(param_6 + 0x40);
    uStack_a0 = *(undefined8 *)(param_6 + 0x38);
    uStack_a8 = *(undefined8 *)(param_6 + 0x30);
    local_b0 = *(undefined8 *)(param_6 + 0x28);
    FUN_066e1d9c(&local_e0,2,0);
    uStack_138 = uStack_d8;
    local_140 = local_e0;
    uStack_128 = uStack_c8;
    uStack_130 = uStack_d0;
    local_120 = local_c0;
    uStack_108 = uStack_a8;
    local_110 = local_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    local_f0 = local_90;
    uVar6 = FUN_066e22c4(&local_110,&local_140,0);
    uVar6 = uVar6 & 1;
  }
  else {
    uVar6 = 0;
  }
  if (*(long *)(param_4 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar9 = FUN_06278cf8(*(long *)(param_4 + 0x178),0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_4 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar9 = FUN_0627c6bc(*(long *)(param_4 + 0x178),0);
    if ((uVar9 & 1) != 0) {
      if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_066e4cbc(*param_3,0,0);
    }
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uStack_168 = *(undefined8 *)(param_6 + 0x30);
    local_170 = *(undefined8 *)(param_6 + 0x28);
    local_150 = *(undefined8 *)(param_6 + 0x48);
    uStack_158 = *(undefined8 *)(param_6 + 0x40);
    uStack_160 = *(undefined8 *)(param_6 + 0x38);
    local_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    FUN_066e1b00(&local_b0,&local_170,0,0xffffffff,0,0);
    lVar11 = *(long *)(param_4 + 0x178);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    local_180 = *(undefined8 *)(lVar11 + 0x50);
    uStack_198 = *(undefined8 *)(lVar11 + 0x38);
    local_1a0 = *(undefined8 *)(lVar11 + 0x30);
    uStack_188 = *(undefined8 *)(lVar11 + 0x48);
    uStack_190 = *(undefined8 *)(lVar11 + 0x40);
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    FUN_066e1b00(&local_e0,&local_1a0,0,0xffffffff,0,0);
    uStack_1c8 = uStack_a8;
    local_1d0 = local_b0;
    uStack_1b8 = uStack_98;
    uStack_1c0 = uStack_a0;
    local_1b0 = local_90;
    uStack_1f8 = uStack_d8;
    local_200 = local_e0;
    uStack_1e8 = uStack_c8;
    uStack_1f0 = uStack_d0;
    local_1e0 = local_c0;
    uVar7 = FUN_066e22c4(&local_1d0,&local_200,0);
    uVar6 = uVar6 | uVar7 & 1;
  }
  uVar7 = FUN_063917c8(param_4,param_5,0);
  uVar8 = FUN_063917c8(param_4,param_6,0);
  fVar3 = -fVar15;
  if (((uVar7 ^ uVar8) & 1) == 0) {
    fVar3 = fVar15;
    fVar15 = 0.0;
  }
  if (uVar6 != 0) {
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066e3704(*(undefined4 *)(param_4 + 0x10c),*(undefined4 *)(param_4 + 0x110),
                 *(undefined4 *)(param_4 + 0x114),*(undefined4 *)(param_4 + 0x118),*param_3,0);
  }
  lVar11 = *param_3;
  if (*(int *)(*(long *)
                System_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>_var
              + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_062d8cf0(uVar14,fVar3,0,fVar15,lVar11,param_5,lVar13,0,0);
  FUN_062a6cd8(local_78,0);
  return;
}


