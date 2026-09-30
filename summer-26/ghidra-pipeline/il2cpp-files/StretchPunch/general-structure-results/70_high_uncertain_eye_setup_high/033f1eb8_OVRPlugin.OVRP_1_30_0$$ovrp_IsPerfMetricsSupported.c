/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_IsPerfMetricsSupported
ENTRY_POINT: 033f1eb8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_30_0__ovrp_IsPerfMetricsSupported
                (uint *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                ushort *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                undefined8 param_10,undefined8 param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong in_x9;
  uint in_w10;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  ulong in_x12;
  long *in_x15;
  uint *unaff_x20;
  ulong unaff_x21;
  int iVar12;
  int unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  
  lVar10 = (in_x12 & 0xffffffff) + 1;
  puVar11 = unaff_x20 + (in_x12 & 0xffffffff);
  do {
    uVar9 = *puVar11;
    lVar10 = lVar10 + -1;
    auVar2._4_4_ = in_w10;
    auVar2._0_4_ = uVar9;
    auVar2._8_8_ = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_2 & 0xffffffff | 0xd6bf94d500000000;
    uVar8 = (uint)(SUB168(auVar2 * auVar4,8) >> 0x17);
    *puVar11 = uVar8;
    in_w10 = uVar9 + uVar8 * (int)param_3;
    puVar11 = puVar11 + -1;
  } while (0 < lVar10);
  uVar9 = 5000000;
  do {
    *param_1 = (uint)in_x9;
    unaff_w28 = unaff_w28 | unaff_w26;
    iVar12 = unaff_w25 + -9;
    uVar8 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)in_x9 == 0);
    unaff_x21 = (ulong)uVar8;
    unaff_w26 = in_w10;
    if (iVar12 == 0 || unaff_w25 < 9) {
      if (uVar8 < 3) {
        if ((in_w10 < uVar9) ||
           (((uVar8 = *unaff_x20, in_w10 <= uVar9 && ((uVar8 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar8 + 1, uVar8 != 0xffffffff)))) {
LAB_033f20ac:
          return (ulong)param_11._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar9 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar9;
          uVar8 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar8 + 1;
        } while (0xfffffffe < uVar8);
        if (uVar9 < 3) goto LAB_033f20ac;
        if (param_11._4_4_ == 0) goto LAB_033f20d0;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (param_11._4_4_ == 0) {
LAB_033f20d0:
        thunk_FUN_01dd295c(StringLiteral_1150);
        uVar6 = thunk_FUN_01de27b8();
        uVar7 = thunk_FUN_01dd295c(StringLiteral_8348);
        FUN_03390704(uVar6,uVar7,0);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_9351);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar6,uVar7);
      }
      param_11._4_4_ = param_11._4_4_ - 1;
      iVar12 = 1;
    }
    if (iVar12 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x033f1768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)((ulong)param_6[iVar12 - 1U] * 4 + 0x33f176c))();
      return uVar5;
    }
    if (*(int *)(*in_x15 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*in_x15,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      param_9 = 0x20c49ba5e353f7cf;
      param_8 = 0x28f5c28f5c28f5c3;
      param_7 = 0xcccccccccccccccd;
      param_6 = &switchD_033f1768::switchdataD_00c4bcd6;
      param_5 = 0x44b82fa09b5a53;
      param_4 = 0xfa0a1f00;
      param_3 = 0xff676980;
      in_x15 = (long *)StringLiteral_9323;
    }
    param_1 = unaff_x20 + unaff_x21;
    uVar9 = (int)unaff_x21 - 1;
    uVar5 = (ulong)(*param_1 >> 9) * 0x44b83;
    in_x9 = uVar5 >> 0x27;
    in_w10 = *param_1 + (uint)(uVar5 >> 0x27) * unaff_w27;
    if (-1 < (int)uVar9) {
      lVar10 = (ulong)uVar9 + 1;
      puVar11 = unaff_x20 + uVar9;
      do {
        uVar9 = *puVar11;
        lVar10 = lVar10 + -1;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = CONCAT44(in_w10,uVar9) >> 9;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_5;
        uVar8 = (uint)(SUB168(auVar1 * auVar3,8) >> 0xb);
        *puVar11 = uVar8;
        in_w10 = uVar9 + uVar8 * unaff_w27;
        puVar11 = puVar11 + -1;
      } while (0 < lVar10);
    }
    uVar9 = 500000000;
    unaff_w25 = iVar12;
  } while( true );
}


