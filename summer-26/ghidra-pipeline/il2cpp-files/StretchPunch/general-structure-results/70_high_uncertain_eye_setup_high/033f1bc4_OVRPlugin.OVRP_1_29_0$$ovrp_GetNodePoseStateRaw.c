/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetNodePoseStateRaw
ENTRY_POINT: 033f1bc4
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


ulong OVRPlugin_OVRP_1_29_0__ovrp_GetNodePoseStateRaw
                (uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                ulong param_5,ushort *param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool in_NG;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong in_x9;
  int in_w10;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  ulong in_x12;
  long *in_x15;
  uint *unaff_x20;
  ulong unaff_x21;
  int unaff_w23;
  int iVar13;
  int unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  ulong unaff_x30;
  
  uVar9 = in_w10 + (int)in_x9 * unaff_w23;
  if (in_NG) {
    uVar10 = 5000;
  }
  else {
    lVar11 = (in_x12 & 0xffffffff) + 1;
    puVar12 = unaff_x20 + (in_x12 & 0xffffffff);
    do {
      uVar10 = *puVar12;
      lVar11 = lVar11 + -1;
      auVar3._4_4_ = uVar9;
      auVar3._0_4_ = uVar10;
      auVar3._8_8_ = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = unaff_x30;
      uVar9 = (uint)(SUB168(auVar3 * auVar5,8) >> 0xb);
      *puVar12 = uVar9;
      uVar9 = uVar10 + uVar9 * unaff_w23;
      puVar12 = puVar12 + -1;
    } while (0 < lVar11);
    uVar10 = 5000;
  }
  do {
    *param_1 = (uint)in_x9;
    unaff_w28 = unaff_w28 | unaff_w26;
    iVar13 = unaff_w25 + -9;
    uVar1 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)in_x9 == 0);
    unaff_x21 = (ulong)uVar1;
    unaff_w26 = uVar9;
    if (iVar13 == 0 || unaff_w25 < 9) {
      if (uVar1 < 3) {
        if ((uVar9 < uVar10) ||
           (((uVar1 = *unaff_x20, uVar9 <= uVar10 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
LAB_033f20ac:
          return (ulong)param_11._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar9 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar9;
          uVar10 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar10 + 1;
        } while (0xfffffffe < uVar10);
        if (uVar9 < 3) goto LAB_033f20ac;
        if (param_11._4_4_ == 0) goto LAB_033f20d0;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (param_11._4_4_ == 0) {
LAB_033f20d0:
        thunk_FUN_01dd295c(StringLiteral_1150);
        uVar7 = thunk_FUN_01de27b8();
        uVar8 = thunk_FUN_01dd295c(StringLiteral_8348);
        FUN_03390704(uVar7,uVar8,0);
        uVar8 = thunk_FUN_01dd295c(StringLiteral_9351);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7,uVar8);
      }
      param_11._4_4_ = param_11._4_4_ - 1;
      iVar13 = 1;
    }
    if (iVar13 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x033f1768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)((ulong)param_6[iVar13 - 1U] * 4 + 0x33f176c))();
      return uVar6;
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
    uVar10 = (int)unaff_x21 - 1;
    uVar6 = (ulong)(*param_1 >> 9) * 0x44b83;
    in_x9 = uVar6 >> 0x27;
    uVar9 = *param_1 + (uint)(uVar6 >> 0x27) * unaff_w27;
    if (-1 < (int)uVar10) {
      lVar11 = (ulong)uVar10 + 1;
      puVar12 = unaff_x20 + uVar10;
      do {
        uVar10 = *puVar12;
        lVar11 = lVar11 + -1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(uVar9,uVar10) >> 9;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_5;
        uVar9 = (uint)(SUB168(auVar2 * auVar4,8) >> 0xb);
        *puVar12 = uVar9;
        uVar9 = uVar10 + uVar9 * unaff_w27;
        puVar12 = puVar12 + -1;
      } while (0 < lVar11);
    }
    uVar10 = 500000000;
    unaff_w25 = iVar13;
  } while( true );
}


