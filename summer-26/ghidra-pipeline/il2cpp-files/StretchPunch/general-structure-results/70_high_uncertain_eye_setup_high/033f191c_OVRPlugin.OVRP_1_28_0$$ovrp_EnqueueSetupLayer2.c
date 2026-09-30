/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_EnqueueSetupLayer2
ENTRY_POINT: 033f191c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_28_0__ovrp_EnqueueSetupLayer2
                (uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                ulong param_5,ushort *param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong in_x9;
  uint in_w10;
  uint uVar7;
  long in_x11;
  uint *puVar8;
  uint *in_x12;
  uint in_w13;
  long *in_x15;
  uint *unaff_x20;
  ulong unaff_x21;
  int unaff_w25;
  int iVar9;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  
  do {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT44(in_w10,in_w13) >> 9;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_5;
    uVar7 = (uint)(SUB168(auVar2 * auVar3,8) >> 0xb);
    puVar8 = in_x12 + -1;
    *in_x12 = uVar7;
    in_w10 = in_w13 + uVar7 * unaff_w27;
    iVar9 = unaff_w25;
    if ((bool)in_ZR || in_NG != in_OV) {
      do {
        *param_1 = (uint)in_x9;
        unaff_w28 = unaff_w28 | unaff_w26;
        unaff_w25 = iVar9 + -9;
        uVar7 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)in_x9 == 0);
        unaff_x21 = (ulong)uVar7;
        unaff_w26 = in_w10;
        if (unaff_w25 == 0 || iVar9 < 9) {
          if (uVar7 < 3) {
            if ((in_w10 < 500000000) ||
               (((uVar7 = *unaff_x20, in_w10 < 0x1dcd6501 && ((uVar7 & 1) == 0 && unaff_w28 == 0))
                || (*unaff_x20 = uVar7 + 1, uVar7 != 0xffffffff)))) {
LAB_033f20ac:
              return (ulong)param_11._4_4_;
            }
            unaff_x21 = 0;
            do {
              uVar7 = (int)unaff_x21 + 1;
              unaff_x21 = (ulong)uVar7;
              uVar1 = unaff_x20[unaff_x21];
              unaff_x20[unaff_x21] = uVar1 + 1;
            } while (0xfffffffe < uVar1);
            if (uVar7 < 3) goto LAB_033f20ac;
            if (param_11._4_4_ == 0) goto LAB_033f20d0;
            unaff_w26 = 0;
            unaff_w28 = 0;
          }
          else if (param_11._4_4_ == 0) {
LAB_033f20d0:
            thunk_FUN_01dd295c(StringLiteral_1150);
            uVar5 = thunk_FUN_01de27b8();
            uVar6 = thunk_FUN_01dd295c(StringLiteral_8348);
            FUN_03390704(uVar5,uVar6,0);
            uVar6 = thunk_FUN_01dd295c(StringLiteral_9351);
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar5,uVar6);
          }
          param_11._4_4_ = param_11._4_4_ - 1;
          unaff_w25 = 1;
        }
        if (unaff_w25 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x033f1768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*(code *)((ulong)param_6[unaff_w25 - 1U] * 4 + 0x33f176c))();
          return uVar4;
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
        uVar7 = (int)unaff_x21 - 1;
        uVar4 = (ulong)(*param_1 >> 9) * 0x44b83;
        in_x9 = uVar4 >> 0x27;
        in_w10 = *param_1 + (uint)(uVar4 >> 0x27) * unaff_w27;
        iVar9 = unaff_w25;
      } while ((int)uVar7 < 0);
      in_x11 = (ulong)uVar7 + 1;
      puVar8 = unaff_x20 + uVar7;
    }
    in_w13 = *puVar8;
    in_x11 = in_x11 + -1;
    in_OV = '\0';
    in_NG = in_x11 < 0;
    in_ZR = in_x11 == 0;
    in_x12 = puVar8;
  } while( true );
}


