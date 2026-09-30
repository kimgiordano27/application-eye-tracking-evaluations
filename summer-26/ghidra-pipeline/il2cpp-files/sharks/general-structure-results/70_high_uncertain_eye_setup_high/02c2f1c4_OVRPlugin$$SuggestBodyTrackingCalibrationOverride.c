/*
FUNCTION_NAME: OVRPlugin$$SuggestBodyTrackingCalibrationOverride
ENTRY_POINT: 02c2f1c4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__SuggestBodyTrackingCalibrationOverride
                (uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                ulong param_5,ushort *param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong in_x9;
  uint uVar6;
  uint in_w10;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  long *in_x15;
  uint *unaff_x20;
  ulong unaff_x21;
  int iVar10;
  int unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  
  uVar7 = 0x32;
  do {
    *param_1 = (uint)in_x9;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2f0f8 with catch @ 02c2f1f8
                       try { // try from 02c2f1f8 to 02d2f227 has its CatchHandler @ 02c2eff4 */
    unaff_w28 = unaff_w28 | unaff_w26;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2f0a8 with catch @ 02c2f1fc
                        */
    iVar10 = unaff_w25 + -9;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2f1a4 with catch @ 02c2f200
                        */
    uVar6 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)in_x9 == 0);
    unaff_x21 = (ulong)uVar6;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2f080 with catch @ 02c2f204
                        */
    if (iVar10 == 0 || unaff_w25 < 9) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2f198 with catch @ 02c2f208
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2f0cc with catch @ 02c2f20c
                        */
      if (uVar6 < 3) {
                    /* try { // try from 02c2f228 to 02d2f22b has its CatchHandler @ 02c2f240 */
                    /* catch() { ... } // from try @ 02c2f228 with catch @ 02c2f240 */
        if ((in_w10 < uVar7) ||
           (((uVar6 = *unaff_x20, in_w10 <= uVar7 && ((uVar6 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar6 + 1, uVar6 != 0xffffffff)))) {
LAB_02c2f284:
          return (ulong)param_11._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar7 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar7;
          uVar6 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar6 + 1;
        } while (0xfffffffe < uVar6);
        if (uVar7 < 3) goto LAB_02c2f284;
        if (param_11._4_4_ == 0) goto LAB_02c2f2a8;
        in_w10 = 0;
        unaff_w28 = 0;
      }
      else {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2f178 with catch @ 02c2f210
                        */
        if (param_11._4_4_ == 0) {
LAB_02c2f2a8:
                    /* try { // try from 02c2f2ac to 02d2f2b3 has its CatchHandler @ 02c2f2b4 */
          thunk_FUN_01851c08(PTR_DAT_037f87b0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02c2f278 with catch @ 02c2f2b4
                       catch(type#2 @ 00000000) { ... } // from try @ 02c2f2ac with catch @ 02c2f2b4
                        */
          uVar4 = thunk_FUN_01861bbc();
                    /* try { // try from 02c2f2b8 to 02d2f40f has its CatchHandler @ 02c2f2b8
                       catch() { ... } // from try @ 02c2f2b8 with catch @ 02c2f2b8
                       catch() { ... } // from try @ 02c2f62c with catch @ 02c2f2b8
                       catch() { ... } // from try @ 02c2f67c with catch @ 02c2f2b8
                       catch() { ... } // from try @ 02c2f6f4 with catch @ 02c2f2b8 */
          uVar5 = thunk_FUN_01851c08(PTR_DAT_03809d90);
          FUN_02bde04c(uVar4,uVar5,0);
          uVar5 = thunk_FUN_01851c08(PTR_DAT_0380bda8);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar4,uVar5);
        }
      }
      param_11._4_4_ = param_11._4_4_ - 1;
                    /* try { // try from 02c2f278 to 02d2f29f has its CatchHandler @ 02c2f2b4 */
      iVar10 = 1;
    }
    if (iVar10 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x02c2e940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)((ulong)param_6[iVar10 - 1U] * 4 + 0x2c2e944))();
      return uVar3;
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
    uVar7 = (int)unaff_x21 - 1;
    uVar3 = (ulong)(*param_1 >> 9) * 0x44b83;
    in_x9 = uVar3 >> 0x27;
    uVar6 = *param_1 + (uint)(uVar3 >> 0x27) * unaff_w27;
    if (-1 < (int)uVar7) {
      lVar8 = (ulong)uVar7 + 1;
      puVar9 = unaff_x20 + uVar7;
      do {
        uVar7 = *puVar9;
        lVar8 = lVar8 + -1;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = CONCAT44(uVar6,uVar7) >> 9;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_5;
        uVar6 = (uint)(SUB168(auVar1 * auVar2,8) >> 0xb);
        *puVar9 = uVar6;
        uVar6 = uVar7 + uVar6 * unaff_w27;
        puVar9 = puVar9 + -1;
      } while (0 < lVar8);
    }
    uVar7 = 500000000;
    unaff_w25 = iVar10;
    unaff_w26 = in_w10;
    in_w10 = uVar6;
  } while( true );
}


