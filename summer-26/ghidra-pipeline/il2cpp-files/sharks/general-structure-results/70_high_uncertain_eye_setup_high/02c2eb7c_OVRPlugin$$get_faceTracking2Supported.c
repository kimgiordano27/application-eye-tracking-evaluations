/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Supported
ENTRY_POINT: 02c2eb7c
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


ulong OVRPlugin__get_faceTracking2Supported
                (undefined8 param_1,uint param_2,uint param_3,ulong param_4,long param_5,
                ulong param_6,ulong param_7,ulong param_8,undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  uint *puVar21;
  long *in_x15;
  uint *unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  int iVar22;
  int unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  
  uVar14 = param_8 & 0xffffffffffff | 0x20c4000000000000;
  uVar13 = param_7 & 0xffffffffffff | 0x28f5000000000000;
  uVar12 = param_6 & 0xffffffffffff0000 | 0xcccd;
  puVar11 = (ushort *)(param_5 + 0xf00);
  uVar10 = param_4 & 0xffffffffffff | 0x44000000000000;
  uVar9 = param_3 & 0xffff | 0xfa0a0000;
  uVar8 = param_2 & 0xffff | 0xff670000;
  puVar15 = unaff_x20 + (unaff_x21 & 0xffffffff);
  uVar18 = *puVar15;
  uVar19 = (int)unaff_x21 - 1;
  uVar17 = (ulong)uVar18 / 100;
  uVar18 = uVar18 + (uVar18 / 100) * unaff_w22;
  if ((int)uVar19 < 0) {
    uVar19 = 0x32;
  }
  else {
    lVar20 = (ulong)uVar19 + 1;
    puVar21 = unaff_x20 + uVar19;
    do {
      uVar19 = *puVar21;
      lVar20 = lVar20 + -1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(uVar18,uVar19) >> 2;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar13;
      uVar18 = (uint)(SUB168(auVar3 * auVar5,8) >> 2);
      *puVar21 = uVar18;
      uVar18 = uVar19 + uVar18 * unaff_w22;
      puVar21 = puVar21 + -1;
    } while (0 < lVar20);
    uVar19 = 0x32;
  }
  do {
    *puVar15 = (uint)uVar17;
    unaff_w28 = unaff_w28 | unaff_w26;
    iVar22 = unaff_w25 + -9;
    uVar1 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)uVar17 == 0);
    unaff_x21 = (ulong)uVar1;
    unaff_w26 = uVar18;
    if (iVar22 == 0 || unaff_w25 < 9) {
      if (uVar1 < 3) {
        if ((uVar18 < uVar19) ||
           (((uVar1 = *unaff_x20, uVar18 <= uVar19 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
LAB_02c2f284:
          return (ulong)param_10._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar18 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar18;
          uVar19 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar19 + 1;
        } while (0xfffffffe < uVar19);
        if (uVar18 < 3) goto LAB_02c2f284;
        if (param_10._4_4_ == 0) goto LAB_02c2f2a8;
        unaff_w26 = 0;
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
      iVar22 = 1;
    }
    if (iVar22 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x02c2e940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*(code *)((ulong)puVar11[iVar22 - 1U] * 4 + 0x2c2e944))();
      return uVar10;
    }
    if (*(int *)(*in_x15 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*in_x15,uVar8,uVar9,uVar10,puVar11,uVar12,uVar13,uVar14);
      uVar14 = 0x20c49ba5e353f7cf;
      uVar13 = 0x28f5c28f5c28f5c3;
      uVar12 = 0xcccccccccccccccd;
      puVar11 = &switchD_02c2e940::switchdataD_00a36f00;
      uVar10 = 0x44b82fa09b5a53;
      uVar9 = 0xfa0a1f00;
      uVar8 = 0xff676980;
      in_x15 = (long *)PTR_DAT_0380bcc8;
    }
    puVar15 = unaff_x20 + unaff_x21;
    uVar19 = (int)unaff_x21 - 1;
    uVar16 = (ulong)(*puVar15 >> 9) * 0x44b83;
    uVar17 = uVar16 >> 0x27;
    uVar18 = *puVar15 + (uint)(uVar16 >> 0x27) * unaff_w27;
    if (-1 < (int)uVar19) {
      lVar20 = (ulong)uVar19 + 1;
      puVar21 = unaff_x20 + uVar19;
      do {
        uVar19 = *puVar21;
        lVar20 = lVar20 + -1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(uVar18,uVar19) >> 9;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar10;
        uVar18 = (uint)(SUB168(auVar2 * auVar4,8) >> 0xb);
        *puVar21 = uVar18;
        uVar18 = uVar19 + uVar18 * unaff_w27;
        puVar21 = puVar21 + -1;
      } while (0 < lVar20);
    }
    uVar19 = 500000000;
    unaff_w25 = iVar22;
  } while( true );
}


