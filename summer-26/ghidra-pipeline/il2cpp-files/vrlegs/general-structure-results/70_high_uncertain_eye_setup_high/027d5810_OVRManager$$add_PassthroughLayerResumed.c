/*
FUNCTION_NAME: OVRManager$$add_PassthroughLayerResumed
ENTRY_POINT: 027d5810
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRManager__add_PassthroughLayerResumed(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  ulong in_x3;
  ulong uVar16;
  ulong in_x5;
  ulong uVar17;
  ulong in_x6;
  ulong uVar18;
  ulong in_x7;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  uint *puVar26;
  long *in_x15;
  int unaff_w19;
  uint *unaff_x20;
  int iVar27;
  ulong unaff_x21;
  int unaff_w22;
  int unaff_w23;
  ulong unaff_x24;
  int unaff_w25;
  int iVar28;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  int unaff_w29;
  ulong unaff_x30;
  ulong uVar29;
  undefined8 in_stack_00000008;
  
code_r0x027d5810:
  uVar29 = unaff_x30 & 0xffffffffffff | 0x346d000000000000;
  uVar19 = in_x7 & 0xffffffffffff | 0x20c4000000000000;
  uVar18 = in_x6 & 0xffffffffffff | 0x28f5000000000000;
  uVar17 = in_x5 & 0xffffffffffff0000 | 0xcccd;
  uVar16 = in_x3 & 0xffffffff | 0x44b82f00000000;
LAB_027d5850:
  puVar20 = unaff_x20 + (unaff_x21 & 0xffffffff);
  uVar24 = (int)unaff_x21 - 1;
  uVar21 = (ulong)(*puVar20 >> 9) * 0x44b83;
  uVar22 = uVar21 >> 0x27;
  uVar23 = *puVar20 + (uint)(uVar21 >> 0x27) * unaff_w27;
  if (-1 < (int)uVar24) {
    lVar25 = (ulong)uVar24 + 1;
    puVar26 = unaff_x20 + uVar24;
    do {
      uVar24 = *puVar26;
      lVar25 = lVar25 + -1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(uVar23,uVar24) >> 9;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar16;
      uVar23 = (uint)(SUB168(auVar3 * auVar9,8) >> 0xb);
      *puVar26 = uVar23;
      uVar23 = uVar24 + uVar23 * unaff_w27;
      puVar26 = puVar26 + -1;
    } while (0 < lVar25);
  }
  uVar24 = 500000000;
  iVar28 = unaff_w25;
  do {
    *puVar20 = (uint)uVar22;
    unaff_w28 = unaff_w28 | unaff_w26;
    unaff_w25 = iVar28 + -9;
    uVar1 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)uVar22 == 0);
    unaff_x21 = (ulong)uVar1;
    unaff_w26 = uVar23;
    if (unaff_w25 == 0 || iVar28 < 9) {
      if (uVar1 < 3) {
        if ((uVar23 < uVar24) ||
           (((uVar1 = *unaff_x20, uVar23 <= uVar24 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
          return in_stack_00000008._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar23 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar23;
          uVar24 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar24 + 1;
        } while (0xfffffffe < uVar24);
        if (uVar23 < 3) {
          return in_stack_00000008._4_4_;
        }
        if (in_stack_00000008._4_4_ == 0) goto LAB_027d6044;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (in_stack_00000008._4_4_ == 0) {
LAB_027d6044:
        thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
        uVar14 = thunk_FUN_01a89e68();
        uVar15 = thunk_FUN_01a6ca08(PTR_DAT_03cfaa68);
        FUN_0277bb94(uVar14,uVar15,0);
        uVar15 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb10);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar14,uVar15);
      }
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + -1;
      unaff_w25 = 1;
    }
    iVar27 = (int)unaff_x21;
    iVar28 = unaff_w25;
    switch(unaff_w25) {
    case 1:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar29 = 0x346dc5d63886594b;
        uVar19 = 0x20c49ba5e353f7cf;
        uVar18 = 0x28f5c28f5c28f5c3;
        uVar17 = 0xcccccccccccccccd;
        uVar16 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_03cfca30;
      }
      puVar20 = unaff_x20 + unaff_x21;
      uVar23 = *puVar20;
      uVar24 = iVar27 - 1;
      uVar22 = (ulong)uVar23 / 10;
      uVar23 = uVar23 + (uVar23 / 10) * unaff_w19;
      if (-1 < (int)uVar24) {
        lVar25 = (ulong)uVar24 + 1;
        puVar26 = unaff_x20 + uVar24;
        do {
          uVar24 = *puVar26;
          lVar25 = lVar25 + -1;
          auVar2._4_4_ = uVar23;
          auVar2._0_4_ = uVar24;
          auVar2._8_8_ = 0;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar17;
          uVar23 = (uint)(SUB168(auVar2 * auVar8,8) >> 3);
          *puVar26 = uVar23;
          uVar23 = uVar24 + uVar23 * unaff_w19;
          puVar26 = puVar26 + -1;
        } while (0 < lVar25);
      }
      uVar24 = 5;
      break;
    case 2:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar29 = 0x346dc5d63886594b;
        uVar19 = 0x20c49ba5e353f7cf;
        uVar18 = 0x28f5c28f5c28f5c3;
        uVar17 = 0xcccccccccccccccd;
        uVar16 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_03cfca30;
      }
      puVar20 = unaff_x20 + unaff_x21;
      uVar23 = *puVar20;
      uVar24 = iVar27 - 1;
      uVar22 = (ulong)uVar23 / 100;
      uVar23 = uVar23 + (uVar23 / 100) * unaff_w22;
      if ((int)uVar24 < 0) {
        uVar24 = 0x32;
      }
      else {
        lVar25 = (ulong)uVar24 + 1;
        puVar26 = unaff_x20 + uVar24;
        do {
          uVar24 = *puVar26;
          lVar25 = lVar25 + -1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = CONCAT44(uVar23,uVar24) >> 2;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar18;
          uVar23 = (uint)(SUB168(auVar4 * auVar10,8) >> 2);
          *puVar26 = uVar23;
          uVar23 = uVar24 + uVar23 * unaff_w22;
          puVar26 = puVar26 + -1;
        } while (0 < lVar25);
        uVar24 = 0x32;
      }
      break;
    case 3:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar29 = 0x346dc5d63886594b;
        uVar19 = 0x20c49ba5e353f7cf;
        uVar18 = 0x28f5c28f5c28f5c3;
        uVar17 = 0xcccccccccccccccd;
        uVar16 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_03cfca30;
      }
      puVar20 = unaff_x20 + unaff_x21;
      uVar23 = *puVar20;
      uVar24 = iVar27 - 1;
      uVar22 = (ulong)uVar23 / 1000;
      uVar23 = uVar23 + (uVar23 / 1000) * unaff_w29;
      if ((int)uVar24 < 0) {
        uVar24 = 500;
      }
      else {
        lVar25 = (ulong)uVar24 + 1;
        puVar26 = unaff_x20 + uVar24;
        do {
          uVar24 = *puVar26;
          lVar25 = lVar25 + -1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = CONCAT44(uVar23,uVar24) >> 3;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar19;
          uVar23 = (uint)(SUB168(auVar5 * auVar11,8) >> 4);
          *puVar26 = uVar23;
          uVar23 = uVar24 + uVar23 * unaff_w29;
          puVar26 = puVar26 + -1;
        } while (0 < lVar25);
        uVar24 = 500;
      }
      break;
    case 4:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar29 = 0x346dc5d63886594b;
        uVar19 = 0x20c49ba5e353f7cf;
        uVar18 = 0x28f5c28f5c28f5c3;
        uVar17 = 0xcccccccccccccccd;
        uVar16 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_03cfca30;
      }
      puVar20 = unaff_x20 + unaff_x21;
      uVar23 = *puVar20;
      uVar24 = iVar27 - 1;
      uVar22 = (ulong)uVar23 / 10000;
      uVar23 = uVar23 + (uVar23 / 10000) * unaff_w23;
      if ((int)uVar24 < 0) {
        uVar24 = 5000;
      }
      else {
        lVar25 = (ulong)uVar24 + 1;
        puVar26 = unaff_x20 + uVar24;
        do {
          uVar24 = *puVar26;
          lVar25 = lVar25 + -1;
          auVar6._4_4_ = uVar23;
          auVar6._0_4_ = uVar24;
          auVar6._8_8_ = 0;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar29;
          uVar23 = (uint)(SUB168(auVar6 * auVar12,8) >> 0xb);
          *puVar26 = uVar23;
          uVar23 = uVar24 + uVar23 * unaff_w23;
          puVar26 = puVar26 + -1;
        } while (0 < lVar25);
        uVar24 = 5000;
      }
      break;
    case 5:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar29 = 0x346dc5d63886594b;
        uVar19 = 0x20c49ba5e353f7cf;
        uVar18 = 0x28f5c28f5c28f5c3;
        uVar17 = 0xcccccccccccccccd;
        uVar16 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_03cfca30;
      }
      puVar20 = unaff_x20 + unaff_x21;
      uVar24 = iVar27 - 1;
      uVar23 = *puVar20 >> 5;
      uVar22 = (ulong)uVar23 / 0xc35;
      uVar23 = *puVar20 + (uVar23 / 0xc35) * -100000;
      if ((int)uVar24 < 0) {
        uVar24 = 50000;
      }
      else {
        lVar25 = (ulong)uVar24 + 1;
        puVar26 = unaff_x20 + uVar24;
        do {
          uVar24 = *puVar26;
          lVar25 = lVar25 + -1;
          uVar23 = (uint)(CONCAT44(uVar23,uVar24) / 100000);
          *puVar26 = uVar23;
          uVar23 = uVar24 + uVar23 * -100000;
          puVar26 = puVar26 + -1;
        } while (0 < lVar25);
        uVar24 = 50000;
      }
      break;
    case 6:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar29 = 0x346dc5d63886594b;
        uVar19 = 0x20c49ba5e353f7cf;
        uVar18 = 0x28f5c28f5c28f5c3;
        uVar17 = 0xcccccccccccccccd;
        uVar16 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_03cfca30;
      }
      puVar20 = unaff_x20 + unaff_x21;
      uVar24 = iVar27 - 1;
      uVar22 = (ulong)*puVar20 / 1000000;
      uVar23 = *puVar20 % 1000000;
      if (-1 < (int)uVar24) {
        lVar25 = (ulong)uVar24 + 1;
        puVar26 = unaff_x20 + uVar24;
        do {
          uVar24 = *puVar26;
          lVar25 = lVar25 + -1;
          uVar23 = (uint)(CONCAT44(uVar23,uVar24) / 1000000);
          *puVar26 = uVar23;
          uVar23 = uVar24 + uVar23 * -1000000;
          puVar26 = puVar26 + -1;
        } while (0 < lVar25);
      }
      uVar24 = 500000;
      break;
    case 7:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar29 = 0x346dc5d63886594b;
        uVar19 = 0x20c49ba5e353f7cf;
        uVar18 = 0x28f5c28f5c28f5c3;
        uVar17 = 0xcccccccccccccccd;
        uVar16 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_03cfca30;
      }
      puVar20 = unaff_x20 + unaff_x21;
      uVar24 = iVar27 - 1;
      uVar22 = (ulong)*puVar20 / 10000000;
      uVar23 = *puVar20 % 10000000;
      if (-1 < (int)uVar24) {
        lVar25 = (ulong)uVar24 + 1;
        puVar26 = unaff_x20 + uVar24;
        do {
          uVar24 = *puVar26;
          lVar25 = lVar25 + -1;
          uVar23 = (uint)(CONCAT44(uVar23,uVar24) / 10000000);
          *puVar26 = uVar23;
          uVar23 = uVar24 + uVar23 * -10000000;
          puVar26 = puVar26 + -1;
        } while (0 < lVar25);
      }
      uVar24 = 5000000;
      break;
    case 8:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar29 = 0x346dc5d63886594b;
        uVar19 = 0x20c49ba5e353f7cf;
        uVar18 = 0x28f5c28f5c28f5c3;
        uVar17 = 0xcccccccccccccccd;
        uVar16 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_03cfca30;
      }
      puVar20 = unaff_x20 + unaff_x21;
      uVar24 = iVar27 - 1;
      uVar22 = (ulong)*puVar20 / 100000000;
      uVar23 = *puVar20 % 100000000;
      if (-1 < (int)uVar24) {
        lVar25 = (ulong)uVar24 + 1;
        puVar26 = unaff_x20 + uVar24;
        do {
          uVar24 = *puVar26;
          lVar25 = lVar25 + -1;
          auVar7._4_4_ = uVar23;
          auVar7._0_4_ = uVar24;
          auVar7._8_8_ = 0;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = unaff_x24;
          uVar23 = (uint)(SUB168(auVar7 * auVar13,8) >> 0x1a);
          *puVar26 = uVar23;
          uVar23 = uVar24 + uVar23 * -100000000;
          puVar26 = puVar26 + -1;
        } while (0 < lVar25);
      }
      uVar24 = 50000000;
      break;
    default:
      goto switchD_027d56dc_default;
    }
  } while( true );
switchD_027d56dc_default:
  if (*(int *)(*in_x15 + 0xe0) == 0) goto code_r0x027d57d4;
  goto LAB_027d5850;
code_r0x027d57d4:
  thunk_FUN_01a58e78();
  in_x3 = 0xa09b5a53;
  unaff_x30 = 0xc5d63886594b;
  in_x7 = 0x9ba5e353f7cf;
  in_x6 = 0xc28f5c28f5c3;
  in_x5 = 0xcccccccccccccccc;
  in_x15 = (long *)PTR_DAT_03cfca30;
  goto code_r0x027d5810;
}


