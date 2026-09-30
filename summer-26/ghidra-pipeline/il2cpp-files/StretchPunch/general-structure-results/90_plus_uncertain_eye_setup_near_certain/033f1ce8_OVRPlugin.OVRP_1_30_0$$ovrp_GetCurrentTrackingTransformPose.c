/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 033f1ce8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose
                (uint *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                ushort *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong in_x9;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long in_x11;
  uint *puVar13;
  int *in_x12;
  int in_w13;
  ulong in_x14;
  long *in_x15;
  int in_w16;
  uint *unaff_x20;
  ulong unaff_x21;
  int unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  
  while( true ) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = in_x14 >> 5;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_2;
    iVar10 = (int)(SUB168(auVar3 * auVar5,8) >> 7);
    *in_x12 = iVar10;
    uVar9 = in_w13 + iVar10 * in_w16;
    if ((bool)in_ZR || in_NG != in_OV) break;
    in_w13 = in_x12[-1];
    in_x11 = in_x11 + -1;
    in_OV = '\0';
    in_NG = in_x11 < 0;
    in_ZR = in_x11 == 0;
    in_x14 = CONCAT44(uVar9,in_w13);
    in_x12 = in_x12 + -1;
  }
  uVar11 = 50000;
  do {
    *param_1 = (uint)in_x9;
    unaff_w28 = unaff_w28 | unaff_w26;
    iVar10 = unaff_w25 + -9;
    uVar1 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)in_x9 == 0);
    unaff_x21 = (ulong)uVar1;
    unaff_w26 = uVar9;
    if (iVar10 == 0 || unaff_w25 < 9) {
      if (uVar1 < 3) {
        if ((uVar9 < uVar11) ||
           (((uVar1 = *unaff_x20, uVar9 <= uVar11 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
LAB_033f20ac:
          return (ulong)param_11._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar9 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar9;
          uVar11 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar11 + 1;
        } while (0xfffffffe < uVar11);
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
      iVar10 = 1;
    }
    if (iVar10 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x033f1768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)((ulong)param_6[iVar10 - 1U] * 4 + 0x33f176c))();
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
    uVar11 = (int)unaff_x21 - 1;
    uVar6 = (ulong)(*param_1 >> 9) * 0x44b83;
    in_x9 = uVar6 >> 0x27;
    uVar9 = *param_1 + (uint)(uVar6 >> 0x27) * unaff_w27;
    if (-1 < (int)uVar11) {
      lVar12 = (ulong)uVar11 + 1;
      puVar13 = unaff_x20 + uVar11;
      do {
        uVar11 = *puVar13;
        lVar12 = lVar12 + -1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(uVar9,uVar11) >> 9;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_5;
        uVar9 = (uint)(SUB168(auVar2 * auVar4,8) >> 0xb);
        *puVar13 = uVar9;
        uVar9 = uVar11 + uVar9 * unaff_w27;
        puVar13 = puVar13 + -1;
      } while (0 < lVar12);
    }
    uVar11 = 500000000;
    unaff_w25 = iVar10;
  } while( true );
}


