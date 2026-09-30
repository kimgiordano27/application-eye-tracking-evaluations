/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryResults
ENTRY_POINT: 09080744
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__add_SpaceQueryResults
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,long param_8,float *param_9,undefined8 *param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float in_stack_000000a8;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  float fStack_214;
  undefined4 uStack_210;
  undefined8 uStack_20c;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined8 uStack_1ec;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  float fStack_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  undefined8 uStack_1b4;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_164;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 uStack_14c;
  float fStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
                    /* try { // try from 09080764 to 0918076f has its CatchHandler @ 090807a4 */
                    /* try { // try from 09080770 to 0918078f has its CatchHandler @ 090807a0 */
                    /* try { // try from 09080790 to 091807c3 has its CatchHandler @ 090801a8 */
                    /* catch() { ... } // from try @ 090806c8 with catch @ 0908079c */
                    /* catch() { ... } // from try @ 09080770 with catch @ 090807a0 */
  if ((DAT_0b330131 & 1) == 0) {
                    /* catch() { ... } // from try @ 09080764 with catch @ 090807a4 */
                    /* catch() { ... } // from try @ 0908071c with catch @ 090807a8 */
                    /* catch() { ... } // from try @ 09080730 with catch @ 090807ac */
    FUN_04947ee4(PTR_DAT_0ac78720);
                    /* catch() { ... } // from try @ 09080710 with catch @ 090807b0 */
                    /* catch() { ... } // from try @ 090806e0 with catch @ 090807b4 */
    FUN_04947ee4(PTR_DAT_0ac78710);
    DAT_0b330131 = 1;
  }
                    /* try { // try from 090807c4 to 091807db has its CatchHandler @ 090809b8 */
  cVar4 = DAT_0b31f3e7;
  fStack_f4 = 0.0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  fStack_a4 = 0.0;
  uStack_b0 = 0;
  uStack_cc = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  fStack_d4 = 0.0;
  uStack_e0 = 0;
                    /* try { // try from 090807f8 to 091807fb has its CatchHandler @ 090809ac */
  uStack_128 = 0;
  uStack_130 = 0;
                    /* try { // try from 090807fc to 09180807 has its CatchHandler @ 090809a8 */
  param_10[1] = 0;
  *param_10 = 0;
  param_10[3] = 0;
  param_10[2] = 0;
  param_10[5] = 0;
  param_10[4] = 0;
  if (cVar4 == '\0') {
                    /* try { // try from 09080808 to 0918082b has its CatchHandler @ 0908099c */
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e7 = '\x01';
  }
  cVar4 = DAT_0b31f3e4;
  puVar2 = PTR_DAT_0ac0def8;
                    /* try { // try from 09080830 to 0918083f has its CatchHandler @ 09080998 */
  fVar13 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8) + 1);
  *(undefined8 *)param_9 = **(undefined8 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
  param_9[2] = fVar13;
  if (cVar4 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e4 = '\x01';
  }
  lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
  fVar17 = *(float *)(lVar6 + 0x18);
  fVar16 = *(float *)(lVar6 + 0x1c);
  fVar13 = *(float *)(lVar6 + 0x20);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  puVar3 = PTR_DAT_0ac0df00;
  fVar8 = fVar13 * fVar13 + fVar17 * fVar17 + fVar16 * fVar16;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar8) {
    fVar14 = in_stack_000000a8 * fVar13 +
             fStack00000000000000a0 * fVar17 + fStack00000000000000a4 * fVar16;
    fStack00000000000000a0 = fStack00000000000000a0 - (fVar17 * fVar14) / fVar8;
    fStack00000000000000a4 = fStack00000000000000a4 - (fVar16 * fVar14) / fVar8;
    in_stack_000000a8 = in_stack_000000a8 - (fVar13 * fVar14) / fVar8;
  }
  fVar16 = param_5 - param_2;
  fVar13 = *(float *)(param_8 + 0x34);
  if (fVar16 <= *(float *)(param_8 + 0x34)) {
    fVar13 = fVar16;
  }
  if (DAT_0b31f3e4 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e4 = '\x01';
  }
  uVar5 = FUN_09081000(param_8,&uStack_60);
  cVar4 = DAT_0b31f764;
  if ((uVar5 & 1) != 0) {
    fVar17 = param_4 - param_1;
    fVar14 = param_6 - param_3;
    param_10[1] = uStack_58;
    *param_10 = uStack_60;
    param_10[3] = uStack_48;
    param_10[2] = uStack_50;
    fVar8 = fVar14 * fVar14 + fVar17 * fVar17 + fVar16 * fVar16;
    param_10[5] = uStack_38;
    param_10[4] = uStack_40;
    if (cVar4 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      DAT_0b31f764 = '\x01';
    }
    puVar1 = PTR_DAT_0ac0a830;
    fVar9 = ABS(fVar8);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar15 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
    fVar10 = fVar9 * DAT_01df4f4c;
    if (fVar9 * DAT_01df4f4c <= fVar15) {
      fVar10 = fVar15;
    }
    if (ABS(0.0 - fVar8) < fVar10) {
LAB_09080bd0:
      puVar3 = PTR_DAT_0ac78710;
      FUN_06fc65c0(&uStack_30,&uStack_60,*(undefined8 *)PTR_DAT_0ac78710);
      uStack_b8 = uStack_28;
      uStack_c0 = uStack_30;
      uStack_b0 = uStack_20;
      uStack_9c = uStack_c;
      uVar18 = uStack_20;
      fVar16 = fStack_14;
      fVar8 = (float)FUN_0a1f8a64(&uStack_c0,0);
      FUN_06fc65c0(&fStack_15c,&uStack_60,*(undefined8 *)puVar3);
      uStack_b0 = uStack_14c;
      uStack_9c = uStack_138;
      fVar17 = fStack_140;
      fVar14 = (float)FUN_0a1f8a4c(&uStack_c0,0);
      FUN_06fc65c0(&uStack_188,&uStack_60,*(undefined8 *)puVar3);
      uStack_b8 = uStack_180;
      uStack_c0 = uStack_188;
      uStack_b0 = uStack_178;
      uStack_9c = uStack_164;
      fVar9 = (float)FUN_0a1f8a7c(&uStack_c0,0);
      if (DAT_0b31f3e6 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0a830);
        DAT_0b31f3e6 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      fVar15 = (float)uVar18;
      fVar10 = SQRT(fVar16 * fVar16 + fVar8 * fVar8 + fVar15 * fVar15);
      if (fVar10 <= DAT_01df50c4) {
        if (DAT_0b31f3e7 == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
          DAT_0b31f3e7 = '\x01';
        }
        uVar18 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
        fVar10 = *(float *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
      }
      else {
        uVar18 = CONCAT44(-fVar15 / fVar10,-fVar8 / fVar10);
        fVar10 = -fVar16 / fVar10;
      }
      FUN_06fc65c0(&uStack_1b4,&uStack_60,*(undefined8 *)puVar3);
      uStack_b8 = uStack_1ac;
      uStack_c0 = uStack_1b4;
      uStack_b0 = uStack_1a4;
      uStack_9c = uStack_190;
      lVar6 = FUN_0a1f89a0(&uStack_c0,0);
      FUN_06fc65c0(&uStack_1e0,&uStack_60,*(undefined8 *)puVar3);
      uStack_b8 = uStack_1d8;
      uStack_c0 = uStack_1e0;
      uStack_a8 = uStack_1c8;
      uStack_b0 = uStack_1d0;
      uStack_9c = uStack_1bc;
      fStack_a4 = fStack_1c4;
      uStack_a0 = uStack_1c0;
      fVar11 = (float)FUN_0a1f8a7c(&uStack_c0,0);
      if (lVar6 == 0) goto LAB_09080ffc;
      fStack_1f0 = fVar17 + fVar16 * fVar9;
      fStack_1f4 = (float)uStack_14c + fVar15 * fVar9;
      fStack_1f8 = fVar14 + fVar8 * fVar9;
      uStack_1ec = uVar18;
      fStack_1e4 = fVar10;
      uVar5 = FUN_0a1ee23c(fVar11 + DAT_01df5128,lVar6,&fStack_1f8,&uStack_f0,0);
      if ((uVar5 & 1) != 0) {
        uStack_28 = uStack_e8;
        uStack_30 = uStack_f0;
        uStack_18 = uStack_d8;
        uStack_20 = uStack_e0;
        uStack_c = uStack_cc;
        fStack_14 = fStack_d4;
        uStack_10 = uStack_d0;
        FUN_06fc6590(&uStack_60,&uStack_30,*(undefined8 *)PTR_DAT_0ac78720);
      }
    }
    else {
      FUN_06fc65c0(&uStack_30,&uStack_60,*(undefined8 *)PTR_DAT_0ac78710);
      uStack_b8 = uStack_28;
      uStack_c0 = uStack_30;
      uStack_a8 = uStack_18;
      uStack_b0 = uStack_20;
      uStack_9c = uStack_c;
      fStack_a4 = fStack_14;
      uStack_a0 = uStack_10;
      uVar18 = uStack_20;
      fVar9 = fStack_14;
      fVar10 = (float)FUN_0a1f8a64(&uStack_c0,0);
      if (DAT_0b31f3e6 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0a830);
        DAT_0b31f3e6 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      fVar8 = SQRT(fVar8);
      if (fVar8 <= DAT_01df50c4) {
        if (DAT_0b31f3e7 == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
          DAT_0b31f3e7 = '\x01';
        }
        pfVar7 = *(float **)(*(long *)puVar2 + 0xb8);
        fVar17 = *pfVar7;
        fVar16 = pfVar7[1];
        fVar14 = pfVar7[2];
      }
      else {
        fVar17 = fVar17 / fVar8;
        fVar16 = fVar16 / fVar8;
        fVar14 = fVar14 / fVar8;
      }
      if (DAT_01df5128 < ABS(fVar9 * fVar14 + fVar10 * fVar17 + (float)uVar18 * fVar16))
      goto LAB_09080bd0;
    }
    FUN_06fc65c0(&uStack_30,&uStack_60,*(undefined8 *)PTR_DAT_0ac78710);
    uStack_228 = uStack_28;
    uStack_230 = uStack_30;
    uStack_218 = uStack_18;
    uStack_220 = uStack_20;
    uStack_20c = uStack_c;
    fStack_214 = fStack_14;
    uStack_210 = uStack_10;
    FUN_090812c8(&fStack_15c,fStack00000000000000a0,fStack00000000000000a4,in_stack_000000a8,param_8
                 ,&uStack_230);
    in_stack_000000a8 = fStack_154;
    fStack00000000000000a4 = fStack_158;
    fStack00000000000000a0 = fStack_15c;
  }
  if (*(long *)(param_8 + 0x20) != 0) {
    fVar17 = param_5 + fStack00000000000000a4;
    fVar8 = param_6 + in_stack_000000a8;
    fVar16 = (float)FUN_0a1ecf3c(*(long *)(param_8 + 0x20),0);
    uVar5 = FUN_09081468(param_4 + fStack00000000000000a0,fVar17,fVar8,param_7,fVar16 - param_7,
                         param_8,&uStack_90);
    if ((uVar5 & 1) != 0) {
      uVar12 = FUN_0a1f8a4c(&uStack_90,0);
      if (DAT_0b31f3e4 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f3e4 = '\x01';
      }
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      uVar5 = FUN_090818ac(uVar12,fVar17,fVar8,*(undefined4 *)(lVar6 + 0x18),
                           *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),&fStack_f4);
      if (((uVar5 & 1) != 0) &&
         (FUN_0a1f8a4c(&uStack_90,0), fVar17 - (param_2 - param_7) <= *(float *)(param_8 + 0x34))) {
        FUN_0a1f8a64(&uStack_90,0);
        uVar5 = FUN_0907f758(param_8);
        if ((uVar5 & 1) != 0) {
          if (fStack00000000000000a4 <= fVar13 - fStack_f4) {
            fStack00000000000000a4 = fVar13 - fStack_f4;
          }
          FUN_09081eac(0);
          uVar5 = FUN_09081000(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               &uStack_130);
          if ((uVar5 & 1) == 0) {
            *param_9 = fStack00000000000000a0;
            param_9[1] = fStack00000000000000a4;
            param_9[2] = in_stack_000000a8;
            return 1;
          }
        }
      }
    }
    return 0;
  }
LAB_09080ffc:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


