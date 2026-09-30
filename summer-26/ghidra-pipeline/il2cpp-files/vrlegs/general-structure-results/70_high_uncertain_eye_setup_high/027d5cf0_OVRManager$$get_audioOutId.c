/*
FUNCTION_NAME: OVRManager$$get_audioOutId
ENTRY_POINT: 027d5cf0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__get_audioOutId
                (undefined8 param_1,uint param_2,uint param_3,ulong param_4,ushort *param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                undefined8 param_10)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  long *in_x15;
  uint in_w17;
  uint *unaff_x20;
  ulong unaff_x21;
  int iVar16;
  int unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  
  uVar8 = param_4 & 0xffffffffffff | 0x44000000000000;
  uVar7 = param_3 & 0xffff | 0xfa0a0000;
  uVar6 = param_2 & 0xffff | 0xff670000;
  uVar13 = in_w17 & 0xffff | 0xfff00000;
  puVar9 = unaff_x20 + (unaff_x21 & 0xffffffff);
  uVar12 = *puVar9;
  uVar1 = (int)unaff_x21 - 1;
  uVar11 = (ulong)uVar12 / 1000000;
  uVar12 = uVar12 + (uVar12 / 1000000) * uVar13;
  if (-1 < (int)uVar1) {
    lVar14 = (ulong)uVar1 + 1;
    puVar15 = unaff_x20 + uVar1;
    do {
      uVar1 = *puVar15;
      lVar14 = lVar14 + -1;
      uVar12 = (uint)(CONCAT44(uVar12,uVar1) / 1000000);
      *puVar15 = uVar12;
      uVar12 = uVar1 + uVar12 * uVar13;
      puVar15 = puVar15 + -1;
    } while (0 < lVar14);
  }
  uVar13 = 500000;
  do {
    *puVar9 = (uint)uVar11;
    unaff_w28 = unaff_w28 | unaff_w26;
    iVar16 = unaff_w25 + -9;
    uVar1 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)uVar11 == 0);
    unaff_x21 = (ulong)uVar1;
    unaff_w26 = uVar12;
    if (iVar16 == 0 || unaff_w25 < 9) {
      if (uVar1 < 3) {
        if ((uVar12 < uVar13) ||
           (((uVar1 = *unaff_x20, uVar12 <= uVar13 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
LAB_027d6020:
          return (ulong)param_10._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar12 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar12;
          uVar13 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar13 + 1;
        } while (0xfffffffe < uVar13);
        if (uVar12 < 3) goto LAB_027d6020;
        if (param_10._4_4_ == 0) goto LAB_027d6044;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (param_10._4_4_ == 0) {
LAB_027d6044:
        thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
        uVar4 = thunk_FUN_01a89e68();
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfaa68);
        FUN_0277bb94(uVar4,uVar5,0);
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb10);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar5);
      }
      param_10._4_4_ = param_10._4_4_ - 1;
      iVar16 = 1;
    }
    if (iVar16 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x027d56dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)((ulong)param_5[iVar16 - 1U] * 4 + 0x27d56e0))();
      return uVar8;
    }
    if (*(int *)(*in_x15 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*in_x15,uVar6,uVar7,uVar8,param_5,param_6,param_7,param_8);
      param_8 = 0x20c49ba5e353f7cf;
      param_7 = 0x28f5c28f5c28f5c3;
      param_6 = 0xcccccccccccccccd;
      param_5 = &switchD_027d56dc::switchdataD_00e6a1b8;
      uVar8 = 0x44b82fa09b5a53;
      uVar7 = 0xfa0a1f00;
      uVar6 = 0xff676980;
      in_x15 = (long *)PTR_DAT_03cfca30;
    }
    puVar9 = unaff_x20 + unaff_x21;
    uVar13 = (int)unaff_x21 - 1;
    uVar10 = (ulong)(*puVar9 >> 9) * 0x44b83;
    uVar11 = uVar10 >> 0x27;
    uVar12 = *puVar9 + (uint)(uVar10 >> 0x27) * unaff_w27;
    if (-1 < (int)uVar13) {
      lVar14 = (ulong)uVar13 + 1;
      puVar15 = unaff_x20 + uVar13;
      do {
        uVar13 = *puVar15;
        lVar14 = lVar14 + -1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(uVar12,uVar13) >> 9;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar8;
        uVar12 = (uint)(SUB168(auVar2 * auVar3,8) >> 0xb);
        *puVar15 = uVar12;
        uVar12 = uVar13 + uVar12 * unaff_w27;
        puVar15 = puVar15 + -1;
      } while (0 < lVar14);
    }
    uVar13 = 500000000;
    unaff_w25 = iVar16;
  } while( true );
}


