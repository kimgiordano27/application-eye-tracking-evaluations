/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 027d5e68
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__set_hasVrFocus
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
  
  uVar7 = 5000000;
  do {
    *param_1 = (uint)in_x9;
    unaff_w28 = unaff_w28 | unaff_w26;
    iVar10 = unaff_w25 + -9;
    uVar6 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)in_x9 == 0);
    unaff_x21 = (ulong)uVar6;
    if (iVar10 == 0 || unaff_w25 < 9) {
      if (uVar6 < 3) {
        if ((in_w10 < uVar7) ||
           (((uVar6 = *unaff_x20, in_w10 <= uVar7 && ((uVar6 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar6 + 1, uVar6 != 0xffffffff)))) {
LAB_027d6020:
          return (ulong)param_11._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar7 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar7;
          uVar6 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar6 + 1;
        } while (0xfffffffe < uVar6);
        if (uVar7 < 3) goto LAB_027d6020;
        if (param_11._4_4_ == 0) goto LAB_027d6044;
        in_w10 = 0;
        unaff_w28 = 0;
      }
      else if (param_11._4_4_ == 0) {
LAB_027d6044:
        thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
        uVar4 = thunk_FUN_01a89e68();
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfaa68);
        FUN_0277bb94(uVar4,uVar5,0);
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb10);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar5);
      }
      param_11._4_4_ = param_11._4_4_ - 1;
      iVar10 = 1;
    }
    if (iVar10 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x027d56dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)((ulong)param_6[iVar10 - 1U] * 4 + 0x27d56e0))();
      return uVar3;
    }
    if (*(int *)(*in_x15 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*in_x15,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      param_9 = 0x20c49ba5e353f7cf;
      param_8 = 0x28f5c28f5c28f5c3;
      param_7 = 0xcccccccccccccccd;
      param_6 = &switchD_027d56dc::switchdataD_00e6a1b8;
      param_5 = 0x44b82fa09b5a53;
      param_4 = 0xfa0a1f00;
      param_3 = 0xff676980;
      in_x15 = (long *)PTR_DAT_03cfca30;
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


