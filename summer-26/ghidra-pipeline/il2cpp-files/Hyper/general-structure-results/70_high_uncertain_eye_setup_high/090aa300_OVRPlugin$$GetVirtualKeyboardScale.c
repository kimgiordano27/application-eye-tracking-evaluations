/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardScale
ENTRY_POINT: 090aa300
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardScale
               (undefined8 *param_1,undefined1 param_2 [16],float param_3,float param_4,
               float param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fStack000000000000004c;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  undefined8 uStack_90;
  float fStack_88;
  undefined8 uStack_80;
  float fStack_78;
  undefined8 uStack_70;
  float fStack_68;
  undefined8 uStack_60;
  float fStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if ((DAT_0b3302d5 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac59328);
    DAT_0b3302d5 = 1;
  }
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  fStack_58 = 0.0;
  uStack_60 = 0;
  fStack_68 = 0.0;
  uStack_70 = 0;
  fStack_78 = 0.0;
  uStack_80 = 0;
  fStack_88 = 0.0;
  uStack_90 = 0;
  uVar5 = FUN_090a8d60(param_6,param_8);
  fVar14 = param_3;
  fVar18 = param_4;
  fVar20 = param_5;
  FUN_090a8b18(&uStack_b0,param_6,param_8);
  fVar6 = (float)FUN_090a8c04(param_6,param_8);
  uVar21 = *param_7;
  uVar15 = param_7[1];
  uStack_8 = *(undefined8 *)(param_7 + 5);
  uStack_10 = *(undefined8 *)(param_7 + 3);
  uVar16 = param_7[2];
  if (DAT_0b31f3e4 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e4 = '\x01';
  }
  puVar1 = PTR_DAT_0ac0def8;
  lVar4 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
  fVar10 = param_3;
  fVar11 = param_4;
  fVar7 = (float)FUN_0a16adac(uVar5,param_3,param_4,param_5,*(undefined4 *)(lVar4 + 0x18),
                              *(undefined4 *)(lVar4 + 0x1c),*(undefined4 *)(lVar4 + 0x20),0);
  uStack_20 = CONCAT44((float)uStack_a0,uStack_a8._4_4_);
  uStack_18 = CONCAT44(fStack_98,uStack_a0._4_4_);
  fVar9 = fVar7;
  fVar12 = fVar10;
  fVar17 = fVar11;
  fStack000000000000004c = param_4;
  fVar8 = (float)FUN_0a16aa7c(0x43340000,0);
  uStack_28 = CONCAT44(((fStack_98 * fVar17 - uStack_a8._4_4_ * fVar8) - (float)uStack_a0 * fVar9) -
                       uStack_a0._4_4_ * fVar12,
                       ((float)uStack_a0 * fVar8 + uStack_a0._4_4_ * fVar17 + fStack_98 * fVar12) -
                       uStack_a8._4_4_ * fVar9);
  uStack_30 = CONCAT44((uStack_a8._4_4_ * fVar12 + (float)uStack_a0 * fVar17 + fStack_98 * fVar9) -
                       uStack_a0._4_4_ * fVar8,
                       (uStack_a0._4_4_ * fVar9 + uStack_a8._4_4_ * fVar17 + fStack_98 * fVar8) -
                       (float)uStack_a0 * fVar12);
  fVar9 = fVar7;
  fVar12 = fVar10;
  fVar17 = fVar11;
  fVar8 = (float)FUN_0a16aa7c(0x42b40000,0);
  uStack_38 = CONCAT44(((fStack_98 * fVar17 - uStack_a8._4_4_ * fVar8) - (float)uStack_a0 * fVar9) -
                       uStack_a0._4_4_ * fVar12,
                       ((float)uStack_a0 * fVar8 + uStack_a0._4_4_ * fVar17 + fStack_98 * fVar12) -
                       uStack_a8._4_4_ * fVar9);
  uStack_40 = CONCAT44((uStack_a8._4_4_ * fVar12 + (float)uStack_a0 * fVar17 + fStack_98 * fVar9) -
                       uStack_a0._4_4_ * fVar8,
                       (uStack_a0._4_4_ * fVar9 + uStack_a8._4_4_ * fVar17 + fStack_98 * fVar8) -
                       (float)uStack_a0 * fVar12);
  fVar9 = (float)FUN_0a16aa7c(0xc2b40000,0);
  uStack_50 = CONCAT44((uStack_a8._4_4_ * fVar10 + (float)uStack_a0 * fVar11 + fStack_98 * fVar7) -
                       uStack_a0._4_4_ * fVar9,
                       (uStack_a0._4_4_ * fVar7 + uStack_a8._4_4_ * fVar11 + fStack_98 * fVar9) -
                       (float)uStack_a0 * fVar10);
  uStack_48 = CONCAT44(((fStack_98 * fVar11 - uStack_a8._4_4_ * fVar9) - (float)uStack_a0 * fVar7) -
                       uStack_a0._4_4_ * fVar10,
                       ((float)uStack_a0 * fVar9 + uStack_a0._4_4_ * fVar11 + fStack_98 * fVar10) -
                       uStack_a8._4_4_ * fVar7);
  fVar10 = (float)FUN_090aaa10(&uStack_20,&uStack_10);
  fVar9 = (float)FUN_090aaa10(&uStack_30,&uStack_10);
  fVar11 = (float)FUN_090aaa10(&uStack_40,&uStack_10);
  fVar12 = (float)FUN_090aaa10(&uStack_50,&uStack_10);
  if (DAT_0b32c76f == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b32c76f = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar17 = param_3;
  fVar7 = fStack000000000000004c;
  fVar8 = (float)FUN_0a16adac(uVar5,param_3,fStack000000000000004c,param_5,
                              *(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x40),
                              *(undefined4 *)(lVar4 + 0x44),0);
  if (DAT_0b32d23b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b32d23b = '\x01';
  }
  puVar2 = PTR_DAT_0ac59328;
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar19 = fStack000000000000004c;
  fStack000000000000004c =
       (float)FUN_0a16adac(uVar5,param_3,fStack000000000000004c,param_5,
                           *(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c),
                           *(undefined4 *)(lVar4 + 0x50),0);
  FUN_090a94a4(param_6,&uStack_60,&uStack_70,&uStack_80,&uStack_90,param_8);
  fVar13 = fVar11;
  if (fVar11 <= fVar12) {
    fVar13 = fVar12;
  }
  fVar12 = fVar9;
  if (fVar9 <= fVar13) {
    fVar12 = fVar13;
  }
  fVar13 = fVar10;
  if (fVar10 <= fVar12) {
    fVar13 = fVar12;
  }
  if (fVar10 == fVar13) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uVar3 = FUN_07ad77dc(fVar14 * fVar8 + (float)uStack_60,fVar14 * fVar17 + uStack_60._4_4_,
                         fVar14 * fVar7 + fStack_58,fVar6 * fVar8 + (float)uStack_70,
                         fVar6 * fVar17 + uStack_70._4_4_,fVar6 * fVar7 + fStack_68,&uStack_b0,
                         *(undefined8 *)puVar2);
    uStack_c8 = uStack_a8;
    uStack_d0 = uStack_b0;
    uStack_c0 = uStack_a0;
    FUN_090a96b4(uVar21,uVar15,uVar16,uVar3,&uStack_d0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    if (fVar9 == fVar13) {
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uVar3 = FUN_07ad77dc((float)uStack_80 - fVar6 * fVar8,uStack_80._4_4_ - fVar6 * fVar17,
                           fStack_78 - fVar6 * fVar7,(float)uStack_90 - fVar14 * fVar8,
                           uStack_90._4_4_ - fVar14 * fVar17,fStack_88 - fVar14 * fVar7,&uStack_b0,
                           *(undefined8 *)puVar2);
      uStack_e8 = uStack_a8;
      uStack_f0 = uStack_b0;
      uStack_e0 = uStack_a0;
      FUN_090a96b4(uVar21,uVar15,uVar16,uVar3,&uStack_f0);
    }
    else if (fVar11 == fVar13) {
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uVar3 = FUN_07ad77dc((float)uStack_60 - fVar18 * fStack000000000000004c,
                           uStack_60._4_4_ - fVar18 * param_3,fStack_58 - fVar18 * fVar19,
                           (float)uStack_80 - fVar20 * fStack000000000000004c,
                           uStack_80._4_4_ - fVar20 * param_3,fStack_78 - fVar20 * fVar19,&uStack_b0
                           ,*(undefined8 *)puVar2);
      uStack_108 = uStack_a8;
      uStack_110 = uStack_b0;
      uStack_100 = uStack_a0;
      FUN_090a96b4(uVar21,uVar15,uVar16,uVar3,&uStack_110);
    }
    else {
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uVar3 = FUN_07ad77dc(fVar20 * fStack000000000000004c + (float)uStack_70,
                           fVar20 * param_3 + uStack_70._4_4_,fVar20 * fVar19 + fStack_68,
                           fVar18 * fStack000000000000004c + (float)uStack_90,
                           fVar18 * param_3 + uStack_90._4_4_,fVar18 * fVar19 + fStack_88,&uStack_b0
                           ,*(undefined8 *)puVar2);
      uStack_128 = uStack_a8;
      uStack_130 = uStack_b0;
      uStack_120 = uStack_a0;
      FUN_090a96b4(uVar21,uVar15,uVar16,uVar3,&uStack_130);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  FUN_0a188128(param_1,0);
  return;
}


