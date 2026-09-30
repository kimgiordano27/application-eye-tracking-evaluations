/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$.cctor
ENTRY_POINT: 033f19b0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_28_0___cctor
                (undefined8 param_1,uint param_2,uint param_3,ulong param_4,long param_5,
                ulong param_6,ulong param_7,undefined8 param_8,undefined8 param_9,
                undefined8 param_10)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint *puVar20;
  long *in_x15;
  uint *unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  int iVar21;
  int unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  
  uVar13 = param_7 & 0xffffffffffff | 0x28f5000000000000;
  uVar12 = param_6 & 0xffffffffffff0000 | 0xcccd;
  puVar11 = (ushort *)(param_5 + 0xcd6);
  uVar10 = param_4 & 0xffffffffffff | 0x44000000000000;
  uVar9 = param_3 & 0xffff | 0xfa0a0000;
  uVar8 = param_2 & 0xffff | 0xff670000;
  puVar14 = unaff_x20 + (unaff_x21 & 0xffffffff);
  uVar17 = *puVar14;
  uVar18 = (int)unaff_x21 - 1;
  uVar16 = (ulong)uVar17 / 100;
  uVar17 = uVar17 + (uVar17 / 100) * unaff_w22;
  if ((int)uVar18 < 0) {
    uVar18 = 0x32;
  }
  else {
    lVar19 = (ulong)uVar18 + 1;
    puVar20 = unaff_x20 + uVar18;
    do {
      uVar18 = *puVar20;
      lVar19 = lVar19 + -1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(uVar17,uVar18) >> 2;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar13;
      uVar17 = (uint)(SUB168(auVar3 * auVar5,8) >> 2);
      *puVar20 = uVar17;
      uVar17 = uVar18 + uVar17 * unaff_w22;
      puVar20 = puVar20 + -1;
    } while (0 < lVar19);
    uVar18 = 0x32;
  }
  do {
    *puVar14 = (uint)uVar16;
    unaff_w28 = unaff_w28 | unaff_w26;
    iVar21 = unaff_w25 + -9;
    uVar1 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)uVar16 == 0);
    unaff_x21 = (ulong)uVar1;
    unaff_w26 = uVar17;
    if (iVar21 == 0 || unaff_w25 < 9) {
      if (uVar1 < 3) {
        if ((uVar17 < uVar18) ||
           (((uVar1 = *unaff_x20, uVar17 <= uVar18 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
LAB_033f20ac:
          return (ulong)param_10._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar17 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar17;
          uVar18 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar18 + 1;
        } while (0xfffffffe < uVar18);
        if (uVar17 < 3) goto LAB_033f20ac;
        if (param_10._4_4_ == 0) goto LAB_033f20d0;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (param_10._4_4_ == 0) {
LAB_033f20d0:
        thunk_FUN_01dd295c(StringLiteral_1150);
        uVar6 = thunk_FUN_01de27b8();
        uVar7 = thunk_FUN_01dd295c(StringLiteral_8348);
        FUN_03390704(uVar6,uVar7,0);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_9351);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar6,uVar7);
      }
      param_10._4_4_ = param_10._4_4_ - 1;
      iVar21 = 1;
    }
    if (iVar21 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x033f1768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*(code *)((ulong)puVar11[iVar21 - 1U] * 4 + 0x33f176c))();
      return uVar10;
    }
    if (*(int *)(*in_x15 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*in_x15,uVar8,uVar9,uVar10,puVar11,uVar12,uVar13,param_8);
      param_8 = 0x20c49ba5e353f7cf;
      uVar13 = 0x28f5c28f5c28f5c3;
      uVar12 = 0xcccccccccccccccd;
      puVar11 = &switchD_033f1768::switchdataD_00c4bcd6;
      uVar10 = 0x44b82fa09b5a53;
      uVar9 = 0xfa0a1f00;
      uVar8 = 0xff676980;
      in_x15 = (long *)StringLiteral_9323;
    }
    puVar14 = unaff_x20 + unaff_x21;
    uVar18 = (int)unaff_x21 - 1;
    uVar15 = (ulong)(*puVar14 >> 9) * 0x44b83;
    uVar16 = uVar15 >> 0x27;
    uVar17 = *puVar14 + (uint)(uVar15 >> 0x27) * unaff_w27;
    if (-1 < (int)uVar18) {
      lVar19 = (ulong)uVar18 + 1;
      puVar20 = unaff_x20 + uVar18;
      do {
        uVar18 = *puVar20;
        lVar19 = lVar19 + -1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(uVar17,uVar18) >> 9;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar10;
        uVar17 = (uint)(SUB168(auVar2 * auVar4,8) >> 0xb);
        *puVar20 = uVar17;
        uVar17 = uVar18 + uVar17 * unaff_w27;
        puVar20 = puVar20 + -1;
      } while (0 < lVar19);
    }
    uVar18 = 500000000;
    unaff_w25 = iVar21;
  } while( true );
}


