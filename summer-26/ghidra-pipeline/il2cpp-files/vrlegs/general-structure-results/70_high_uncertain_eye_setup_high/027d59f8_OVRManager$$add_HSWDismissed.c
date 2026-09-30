/*
FUNCTION_NAME: OVRManager$$add_HSWDismissed
ENTRY_POINT: 027d59f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__add_HSWDismissed(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  ulong in_x3;
  ulong uVar8;
  ushort *puVar9;
  long in_x4;
  ulong in_x5;
  ulong uVar10;
  ulong in_x6;
  ulong uVar11;
  ulong in_x7;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint *puVar19;
  long *in_x15;
  uint *unaff_x20;
  ulong unaff_x21;
  int iVar20;
  int unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  
  uVar12 = in_x7 & 0xffffffffffff | 0x20c4000000000000;
  uVar11 = in_x6 & 0xffffffffffff | 0x28f5000000000000;
  uVar10 = in_x5 & 0xffffffffffff0000 | 0xcccd;
  puVar9 = (ushort *)(in_x4 + 0x1b8);
  uVar8 = in_x3 & 0xffffffffffff | 0x44000000000000;
  puVar13 = unaff_x20 + (unaff_x21 & 0xffffffff);
  uVar16 = *puVar13;
  uVar17 = (int)unaff_x21 - 1;
  uVar15 = (ulong)uVar16 / 1000;
  uVar16 = uVar16 + (uVar16 / 1000) * unaff_w29;
  if ((int)uVar17 < 0) {
    uVar17 = 500;
  }
  else {
    lVar18 = (ulong)uVar17 + 1;
    puVar19 = unaff_x20 + uVar17;
    do {
      uVar17 = *puVar19;
      lVar18 = lVar18 + -1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(uVar16,uVar17) >> 3;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar12;
      uVar16 = (uint)(SUB168(auVar3 * auVar5,8) >> 4);
      *puVar19 = uVar16;
      uVar16 = uVar17 + uVar16 * unaff_w29;
      puVar19 = puVar19 + -1;
    } while (0 < lVar18);
    uVar17 = 500;
  }
  do {
    *puVar13 = (uint)uVar15;
    unaff_w28 = unaff_w28 | unaff_w26;
    iVar20 = unaff_w25 + -9;
    uVar1 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)uVar15 == 0);
    unaff_x21 = (ulong)uVar1;
    unaff_w26 = uVar16;
    if (iVar20 == 0 || unaff_w25 < 9) {
      if (uVar1 < 3) {
        if ((uVar16 < uVar17) ||
           (((uVar1 = *unaff_x20, uVar16 <= uVar17 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
LAB_027d6020:
          return (ulong)in_stack_00000008._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar16 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar16;
          uVar17 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar17 + 1;
        } while (0xfffffffe < uVar17);
        if (uVar16 < 3) goto LAB_027d6020;
        if (in_stack_00000008._4_4_ == 0) goto LAB_027d6044;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (in_stack_00000008._4_4_ == 0) {
LAB_027d6044:
        thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
        uVar6 = thunk_FUN_01a89e68();
        uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfaa68);
        FUN_0277bb94(uVar6,uVar7,0);
        uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb10);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar6,uVar7);
      }
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - 1;
      iVar20 = 1;
    }
    if (iVar20 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x027d56dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)((ulong)puVar9[iVar20 - 1U] * 4 + 0x27d56e0))();
      return uVar8;
    }
    if (*(int *)(*in_x15 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*in_x15,0xff676980,0xfa0a1f00,uVar8,puVar9,uVar10,uVar11,uVar12);
      uVar12 = 0x20c49ba5e353f7cf;
      uVar11 = 0x28f5c28f5c28f5c3;
      uVar10 = 0xcccccccccccccccd;
      puVar9 = &switchD_027d56dc::switchdataD_00e6a1b8;
      uVar8 = 0x44b82fa09b5a53;
      in_x15 = (long *)PTR_DAT_03cfca30;
    }
    puVar13 = unaff_x20 + unaff_x21;
    uVar17 = (int)unaff_x21 - 1;
    uVar14 = (ulong)(*puVar13 >> 9) * 0x44b83;
    uVar15 = uVar14 >> 0x27;
    uVar16 = *puVar13 + (uint)(uVar14 >> 0x27) * unaff_w27;
    if (-1 < (int)uVar17) {
      lVar18 = (ulong)uVar17 + 1;
      puVar19 = unaff_x20 + uVar17;
      do {
        uVar17 = *puVar19;
        lVar18 = lVar18 + -1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(uVar16,uVar17) >> 9;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar8;
        uVar16 = (uint)(SUB168(auVar2 * auVar4,8) >> 0xb);
        *puVar19 = uVar16;
        uVar16 = uVar17 + uVar16 * unaff_w27;
        puVar19 = puVar19 + -1;
      } while (0 < lVar18);
    }
    uVar17 = 500000000;
    unaff_w25 = iVar20;
  } while( true );
}


