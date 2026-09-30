/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 02c2eeb8
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__StartBodyTracking2
                (uint *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                ushort *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                undefined8 param_10,undefined8 param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong in_x9;
  uint uVar8;
  uint in_w10;
  int iVar9;
  uint uVar10;
  long lVar11;
  long in_x11;
  uint *puVar12;
  int *in_x12;
  int in_w13;
  long *in_x15;
  int in_w16;
  uint *unaff_x20;
  ulong unaff_x21;
  int unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  
  while( true ) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT44(in_w10,in_w13) >> 5;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_2;
    iVar9 = (int)(SUB168(auVar2 * auVar4,8) >> 7);
    *in_x12 = iVar9;
    in_w10 = in_w13 + iVar9 * in_w16;
    if ((bool)in_ZR || in_NG != in_OV) break;
    in_w13 = in_x12[-1];
    in_x11 = in_x11 + -1;
    in_OV = '\0';
    in_NG = in_x11 < 0;
    in_ZR = in_x11 == 0;
    in_x12 = in_x12 + -1;
  }
  uVar10 = 50000;
  do {
    *param_1 = (uint)in_x9;
    unaff_w28 = unaff_w28 | unaff_w26;
    iVar9 = unaff_w25 + -9;
    uVar8 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)in_x9 == 0);
    unaff_x21 = (ulong)uVar8;
    unaff_w26 = in_w10;
    if (iVar9 == 0 || unaff_w25 < 9) {
      if (uVar8 < 3) {
        if ((in_w10 < uVar10) ||
           (((uVar8 = *unaff_x20, in_w10 <= uVar10 && ((uVar8 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar8 + 1, uVar8 != 0xffffffff)))) {
LAB_02c2f284:
          return (ulong)param_11._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar10 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar10;
          uVar8 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar8 + 1;
        } while (0xfffffffe < uVar8);
        if (uVar10 < 3) goto LAB_02c2f284;
        if (param_11._4_4_ == 0) goto LAB_02c2f2a8;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (param_11._4_4_ == 0) {
LAB_02c2f2a8:
        thunk_FUN_01851c08(PTR_DAT_037f87b0);
        uVar6 = thunk_FUN_01861bbc();
        uVar7 = thunk_FUN_01851c08(PTR_DAT_03809d90);
        FUN_02bde04c(uVar6,uVar7,0);
        uVar7 = thunk_FUN_01851c08(PTR_DAT_0380bda8);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar6,uVar7);
      }
      param_11._4_4_ = param_11._4_4_ - 1;
      iVar9 = 1;
    }
    if (iVar9 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x02c2e940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)((ulong)param_6[iVar9 - 1U] * 4 + 0x2c2e944))();
      return uVar5;
    }
    if (*(int *)(*in_x15 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*in_x15,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      param_9 = 0x20c49ba5e353f7cf;
      param_8 = 0x28f5c28f5c28f5c3;
      param_7 = 0xcccccccccccccccd;
      param_6 = &switchD_02c2e940::switchdataD_00a36f00;
      param_5 = 0x44b82fa09b5a53;
      param_4 = 0xfa0a1f00;
      param_3 = 0xff676980;
      in_x15 = (long *)PTR_DAT_0380bcc8;
    }
    param_1 = unaff_x20 + unaff_x21;
    uVar10 = (int)unaff_x21 - 1;
    uVar5 = (ulong)(*param_1 >> 9) * 0x44b83;
    in_x9 = uVar5 >> 0x27;
    in_w10 = *param_1 + (uint)(uVar5 >> 0x27) * unaff_w27;
    if (-1 < (int)uVar10) {
      lVar11 = (ulong)uVar10 + 1;
      puVar12 = unaff_x20 + uVar10;
      do {
        uVar10 = *puVar12;
        lVar11 = lVar11 + -1;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = CONCAT44(in_w10,uVar10) >> 9;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_5;
        uVar8 = (uint)(SUB168(auVar1 * auVar3,8) >> 0xb);
        *puVar12 = uVar8;
        in_w10 = uVar10 + uVar8 * unaff_w27;
        puVar12 = puVar12 + -1;
      } while (0 < lVar11);
    }
    uVar10 = 500000000;
    unaff_w25 = iVar9;
  } while( true );
}


