/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 02c2eaac
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__get_faceTracking2Enabled
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                ushort *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  long *in_x15;
  uint *unaff_x20;
  uint unaff_w21;
  int iVar12;
  int unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  
  do {
    uVar9 = unaff_x20[unaff_w21];
    uVar1 = unaff_w21 - 1;
    uVar4 = (uint)((ulong)(uVar9 >> 9) * 0x44b83 >> 0x20);
    uVar8 = uVar4 >> 7;
    uVar9 = uVar9 + uVar8 * unaff_w27;
    if (-1 < (int)uVar1) {
      lVar10 = (ulong)uVar1 + 1;
      puVar11 = unaff_x20 + uVar1;
      do {
        uVar1 = *puVar11;
        lVar10 = lVar10 + -1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(uVar9,uVar1) >> 9;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_4;
        uVar9 = (uint)(SUB168(auVar2 * auVar3,8) >> 0xb);
        *puVar11 = uVar9;
        uVar9 = uVar1 + uVar9 * unaff_w27;
        puVar11 = puVar11 + -1;
      } while (0 < lVar10);
    }
    unaff_x20[unaff_w21] = uVar4 >> 7;
    unaff_w28 = unaff_w28 | unaff_w26;
    iVar12 = unaff_w25 + -9;
    unaff_w21 = unaff_w21 - (unaff_w21 != 0 && uVar8 == 0);
    if (iVar12 == 0 || unaff_w25 < 9) {
      if (unaff_w21 < 3) {
        if ((uVar9 < 500000000) ||
           (((uVar1 = *unaff_x20, uVar9 < 0x1dcd6501 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
LAB_02c2f284:
          return (ulong)param_10._4_4_;
        }
        unaff_w21 = 0;
        do {
          unaff_w21 = unaff_w21 + 1;
          uVar9 = unaff_x20[unaff_w21];
          unaff_x20[unaff_w21] = uVar9 + 1;
        } while (0xfffffffe < uVar9);
        if (unaff_w21 < 3) goto LAB_02c2f284;
        if (param_10._4_4_ == 0) goto LAB_02c2f2a8;
        uVar9 = 0;
        unaff_w28 = 0;
      }
      else if (param_10._4_4_ == 0) {
LAB_02c2f2a8:
        thunk_FUN_01851c08(PTR_DAT_037f87b0);
        uVar6 = thunk_FUN_01861bbc();
        uVar7 = thunk_FUN_01851c08(PTR_DAT_03809d90);
        FUN_02bde04c(uVar6,uVar7,0);
        uVar7 = thunk_FUN_01851c08(PTR_DAT_0380bda8);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar6,uVar7);
      }
      param_10._4_4_ = param_10._4_4_ - 1;
      iVar12 = 1;
    }
    if (iVar12 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x02c2e940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)((ulong)param_5[iVar12 - 1U] * 4 + 0x2c2e944))();
      return uVar5;
    }
    unaff_w25 = iVar12;
    unaff_w26 = uVar9;
    if (*(int *)(*in_x15 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*in_x15,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      param_8 = 0x20c49ba5e353f7cf;
      param_7 = 0x28f5c28f5c28f5c3;
      param_6 = 0xcccccccccccccccd;
      param_5 = &switchD_02c2e940::switchdataD_00a36f00;
      param_4 = 0x44b82fa09b5a53;
      param_3 = 0xfa0a1f00;
      param_2 = 0xff676980;
      in_x15 = (long *)PTR_DAT_0380bcc8;
    }
  } while( true );
}


