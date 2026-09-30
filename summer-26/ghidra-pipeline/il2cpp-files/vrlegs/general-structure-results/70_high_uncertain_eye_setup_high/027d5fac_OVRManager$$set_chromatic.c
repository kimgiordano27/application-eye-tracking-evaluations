/*
FUNCTION_NAME: OVRManager$$set_chromatic
ENTRY_POINT: 027d5fac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__set_chromatic
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                ushort *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint in_w10;
  long lVar13;
  uint *puVar14;
  long *in_x15;
  uint *unaff_x20;
  uint unaff_w21;
  int iVar15;
  int unaff_w27;
  uint unaff_w28;
  
  while (param_10._4_4_ != 0) {
    while( true ) {
      param_10._4_4_ = param_10._4_4_ - 1;
      iVar15 = 1;
      uVar11 = in_w10;
      do {
        if (iVar15 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x027d56dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)((ulong)param_5[iVar15 - 1U] * 4 + 0x27d56e0))();
          return uVar7;
        }
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*in_x15,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          param_8 = 0x20c49ba5e353f7cf;
          param_7 = 0x28f5c28f5c28f5c3;
          param_6 = 0xcccccccccccccccd;
          param_5 = &switchD_027d56dc::switchdataD_00e6a1b8;
          param_4 = 0x44b82fa09b5a53;
          param_3 = 0xfa0a1f00;
          param_2 = 0xff676980;
          in_x15 = (long *)PTR_DAT_03cfca30;
        }
        uVar2 = unaff_x20[unaff_w21];
        uVar12 = unaff_w21 - 1;
        uVar6 = (uint)((ulong)(uVar2 >> 9) * 0x44b83 >> 0x20);
        uVar10 = uVar6 >> 7;
        in_w10 = uVar2 + uVar10 * unaff_w27;
        if (-1 < (int)uVar12) {
          lVar13 = (ulong)uVar12 + 1;
          puVar14 = unaff_x20 + uVar12;
          do {
            uVar2 = *puVar14;
            lVar13 = lVar13 + -1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = CONCAT44(in_w10,uVar2) >> 9;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = param_4;
            uVar12 = (uint)(SUB168(auVar4 * auVar5,8) >> 0xb);
            *puVar14 = uVar12;
            in_w10 = uVar2 + uVar12 * unaff_w27;
            puVar14 = puVar14 + -1;
          } while (0 < lVar13);
        }
        unaff_x20[unaff_w21] = uVar6 >> 7;
        unaff_w28 = unaff_w28 | uVar11;
        iVar3 = iVar15 + -9;
        unaff_w21 = unaff_w21 - (unaff_w21 != 0 && uVar10 == 0);
        bVar1 = 8 < iVar15;
        iVar15 = iVar3;
        uVar11 = in_w10;
      } while (iVar3 != 0 && bVar1);
      if (2 < unaff_w21) break;
      if ((in_w10 < 500000000) ||
         (((uVar11 = *unaff_x20, in_w10 < 0x1dcd6501 && ((uVar11 & 1) == 0 && unaff_w28 == 0)) ||
          (*unaff_x20 = uVar11 + 1, uVar11 != 0xffffffff)))) {
LAB_027d6020:
        return (ulong)param_10._4_4_;
      }
      unaff_w21 = 0;
      do {
        unaff_w21 = unaff_w21 + 1;
        uVar11 = unaff_x20[unaff_w21];
        unaff_x20[unaff_w21] = uVar11 + 1;
      } while (0xfffffffe < uVar11);
      if (unaff_w21 < 3) goto LAB_027d6020;
      if (param_10._4_4_ == 0) goto LAB_027d6044;
      in_w10 = 0;
      unaff_w28 = 0;
    }
  }
LAB_027d6044:
  thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
  uVar8 = thunk_FUN_01a89e68();
  uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cfaa68);
  FUN_0277bb94(uVar8,uVar9,0);
  uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb10);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar8,uVar9);
}


