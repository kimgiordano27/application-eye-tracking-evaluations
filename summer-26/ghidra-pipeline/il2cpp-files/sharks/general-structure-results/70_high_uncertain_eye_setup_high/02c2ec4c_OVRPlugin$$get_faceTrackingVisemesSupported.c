/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingVisemesSupported
ENTRY_POINT: 02c2ec4c
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__get_faceTrackingVisemesSupported(void)

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
  undefined8 uVar12;
  undefined8 uVar13;
  ulong in_x3;
  ulong uVar14;
  ulong in_x6;
  ulong uVar15;
  ulong in_x7;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  uint *puVar23;
  long *in_x15;
  int unaff_w19;
  uint *unaff_x20;
  int iVar24;
  ulong unaff_x21;
  int unaff_w22;
  int unaff_w23;
  ulong unaff_x24;
  int unaff_w25;
  int iVar25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  int unaff_w29;
  ulong unaff_x30;
  ulong uVar26;
  undefined8 in_stack_00000008;
  
code_r0x02c2ec4c:
  uVar26 = unaff_x30 & 0xffffffffffff | 0x346d000000000000;
  uVar16 = in_x7 & 0xffffffffffff | 0x20c4000000000000;
  uVar15 = in_x6 & 0xffffffff | 0x28f5c28f00000000;
  uVar14 = in_x3 & 0xffffffff | 0x44b82f00000000;
LAB_02c2ec94:
  puVar17 = unaff_x20 + (unaff_x21 & 0xffffffff);
  uVar20 = *puVar17;
  uVar21 = (int)unaff_x21 - 1;
  uVar19 = (ulong)uVar20 / 1000;
  uVar20 = uVar20 + (uVar20 / 1000) * unaff_w29;
  iVar25 = unaff_w25;
  if ((int)uVar21 < 0) {
    uVar21 = 500;
  }
  else {
    lVar22 = (ulong)uVar21 + 1;
    puVar23 = unaff_x20 + uVar21;
    do {
      uVar21 = *puVar23;
      lVar22 = lVar22 + -1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = CONCAT44(uVar20,uVar21) >> 3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar16;
      uVar20 = (uint)(SUB168(auVar4 * auVar9,8) >> 4);
      *puVar23 = uVar20;
      uVar20 = uVar21 + uVar20 * unaff_w29;
      puVar23 = puVar23 + -1;
    } while (0 < lVar22);
    uVar21 = 500;
  }
  do {
    *puVar17 = (uint)uVar19;
    unaff_w28 = unaff_w28 | unaff_w26;
    unaff_w25 = iVar25 + -9;
    uVar1 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)uVar19 == 0);
    unaff_x21 = (ulong)uVar1;
    unaff_w26 = uVar20;
    if (unaff_w25 == 0 || iVar25 < 9) {
      if (uVar1 < 3) {
        if ((uVar20 < uVar21) ||
           (((uVar1 = *unaff_x20, uVar20 <= uVar21 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
          return in_stack_00000008._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar20 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar20;
          uVar21 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar21 + 1;
        } while (0xfffffffe < uVar21);
        if (uVar20 < 3) {
          return in_stack_00000008._4_4_;
        }
        if (in_stack_00000008._4_4_ == 0) goto LAB_02c2f2a8;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (in_stack_00000008._4_4_ == 0) {
LAB_02c2f2a8:
        thunk_FUN_01851c08(PTR_DAT_037f87b0);
        uVar12 = thunk_FUN_01861bbc();
        uVar13 = thunk_FUN_01851c08(PTR_DAT_03809d90);
        FUN_02bde04c(uVar12,uVar13,0);
        uVar13 = thunk_FUN_01851c08(PTR_DAT_0380bda8);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar12,uVar13);
      }
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + -1;
      unaff_w25 = 1;
    }
    iVar24 = (int)unaff_x21;
    iVar25 = unaff_w25;
    switch(unaff_w25) {
    case 1:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar26 = 0x346dc5d63886594b;
        uVar16 = 0x20c49ba5e353f7cf;
        uVar15 = 0x28f5c28f5c28f5c3;
        uVar14 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar17 = unaff_x20 + unaff_x21;
      uVar20 = *puVar17;
      uVar21 = iVar24 - 1;
      uVar19 = (ulong)uVar20 / 10;
      uVar20 = uVar20 + (uVar20 / 10) * unaff_w19;
      if (-1 < (int)uVar21) {
        lVar22 = (ulong)uVar21 + 1;
        puVar23 = unaff_x20 + uVar21;
        do {
          uVar21 = *puVar23;
          lVar22 = lVar22 + -1;
          uVar20 = (uint)(CONCAT44(uVar20,uVar21) / 10);
          *puVar23 = uVar20;
          uVar20 = uVar21 + uVar20 * unaff_w19;
          puVar23 = puVar23 + -1;
        } while (0 < lVar22);
      }
      uVar21 = 5;
      break;
    case 2:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar26 = 0x346dc5d63886594b;
        uVar16 = 0x20c49ba5e353f7cf;
        uVar15 = 0x28f5c28f5c28f5c3;
        uVar14 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar17 = unaff_x20 + unaff_x21;
      uVar20 = *puVar17;
      uVar21 = iVar24 - 1;
      uVar19 = (ulong)uVar20 / 100;
      uVar20 = uVar20 + (uVar20 / 100) * unaff_w22;
      if ((int)uVar21 < 0) {
        uVar21 = 0x32;
      }
      else {
        lVar22 = (ulong)uVar21 + 1;
        puVar23 = unaff_x20 + uVar21;
        do {
          uVar21 = *puVar23;
          lVar22 = lVar22 + -1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = CONCAT44(uVar20,uVar21) >> 2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar15;
          uVar20 = (uint)(SUB168(auVar3 * auVar8,8) >> 2);
          *puVar23 = uVar20;
          uVar20 = uVar21 + uVar20 * unaff_w22;
          puVar23 = puVar23 + -1;
        } while (0 < lVar22);
        uVar21 = 0x32;
      }
      break;
    case 3:
      goto switchD_02c2e940_caseD_3;
    case 4:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar26 = 0x346dc5d63886594b;
        uVar16 = 0x20c49ba5e353f7cf;
        uVar15 = 0x28f5c28f5c28f5c3;
        uVar14 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar17 = unaff_x20 + unaff_x21;
      uVar20 = *puVar17;
      uVar21 = iVar24 - 1;
      uVar19 = (ulong)uVar20 / 10000;
      uVar20 = uVar20 + (uVar20 / 10000) * unaff_w23;
      if ((int)uVar21 < 0) {
        uVar21 = 5000;
      }
      else {
        lVar22 = (ulong)uVar21 + 1;
        puVar23 = unaff_x20 + uVar21;
        do {
          uVar21 = *puVar23;
          lVar22 = lVar22 + -1;
          auVar5._4_4_ = uVar20;
          auVar5._0_4_ = uVar21;
          auVar5._8_8_ = 0;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar26;
          uVar20 = (uint)(SUB168(auVar5 * auVar10,8) >> 0xb);
          *puVar23 = uVar20;
          uVar20 = uVar21 + uVar20 * unaff_w23;
          puVar23 = puVar23 + -1;
        } while (0 < lVar22);
        uVar21 = 5000;
      }
      break;
    case 5:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar26 = 0x346dc5d63886594b;
        uVar16 = 0x20c49ba5e353f7cf;
        uVar15 = 0x28f5c28f5c28f5c3;
        uVar14 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar17 = unaff_x20 + unaff_x21;
      uVar21 = iVar24 - 1;
      uVar20 = *puVar17 >> 5;
      uVar19 = (ulong)uVar20 / 0xc35;
      uVar20 = *puVar17 + (uVar20 / 0xc35) * -100000;
      if ((int)uVar21 < 0) {
        uVar21 = 50000;
      }
      else {
        lVar22 = (ulong)uVar21 + 1;
        puVar23 = unaff_x20 + uVar21;
        do {
          uVar21 = *puVar23;
          lVar22 = lVar22 + -1;
          uVar20 = (uint)(CONCAT44(uVar20,uVar21) / 100000);
          *puVar23 = uVar20;
          uVar20 = uVar21 + uVar20 * -100000;
          puVar23 = puVar23 + -1;
        } while (0 < lVar22);
        uVar21 = 50000;
      }
      break;
    case 6:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar26 = 0x346dc5d63886594b;
        uVar16 = 0x20c49ba5e353f7cf;
        uVar15 = 0x28f5c28f5c28f5c3;
        uVar14 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar17 = unaff_x20 + unaff_x21;
      uVar21 = iVar24 - 1;
      uVar19 = (ulong)*puVar17 / 1000000;
      uVar20 = *puVar17 % 1000000;
      if (-1 < (int)uVar21) {
        lVar22 = (ulong)uVar21 + 1;
        puVar23 = unaff_x20 + uVar21;
        do {
          uVar21 = *puVar23;
          lVar22 = lVar22 + -1;
          uVar20 = (uint)(CONCAT44(uVar20,uVar21) / 1000000);
          *puVar23 = uVar20;
          uVar20 = uVar21 + uVar20 * -1000000;
          puVar23 = puVar23 + -1;
        } while (0 < lVar22);
      }
      uVar21 = 500000;
      break;
    case 7:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar26 = 0x346dc5d63886594b;
        uVar16 = 0x20c49ba5e353f7cf;
        uVar15 = 0x28f5c28f5c28f5c3;
        uVar14 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar17 = unaff_x20 + unaff_x21;
      uVar21 = iVar24 - 1;
      uVar19 = (ulong)*puVar17 / 10000000;
      uVar20 = *puVar17 % 10000000;
      if (-1 < (int)uVar21) {
        lVar22 = (ulong)uVar21 + 1;
        puVar23 = unaff_x20 + uVar21;
        do {
          uVar21 = *puVar23;
          lVar22 = lVar22 + -1;
          uVar20 = (uint)(CONCAT44(uVar20,uVar21) / 10000000);
          *puVar23 = uVar20;
          uVar20 = uVar21 + uVar20 * -10000000;
          puVar23 = puVar23 + -1;
        } while (0 < lVar22);
      }
      uVar21 = 5000000;
      break;
    case 8:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar26 = 0x346dc5d63886594b;
        uVar16 = 0x20c49ba5e353f7cf;
        uVar15 = 0x28f5c28f5c28f5c3;
        uVar14 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar17 = unaff_x20 + unaff_x21;
      uVar21 = iVar24 - 1;
      uVar19 = (ulong)*puVar17 / 100000000;
      uVar20 = *puVar17 % 100000000;
      if (-1 < (int)uVar21) {
        lVar22 = (ulong)uVar21 + 1;
        puVar23 = unaff_x20 + uVar21;
        do {
          uVar21 = *puVar23;
          lVar22 = lVar22 + -1;
          auVar6._4_4_ = uVar20;
          auVar6._0_4_ = uVar21;
          auVar6._8_8_ = 0;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = unaff_x24;
          uVar20 = (uint)(SUB168(auVar6 * auVar11,8) >> 0x1a);
          *puVar23 = uVar20;
          uVar20 = uVar21 + uVar20 * -100000000;
          puVar23 = puVar23 + -1;
        } while (0 < lVar22);
      }
      uVar21 = 50000000;
      break;
    default:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar26 = 0x346dc5d63886594b;
        uVar16 = 0x20c49ba5e353f7cf;
        uVar15 = 0x28f5c28f5c28f5c3;
        uVar14 = 0x44b82fa09b5a53;
        in_x15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar17 = unaff_x20 + unaff_x21;
      uVar21 = iVar24 - 1;
      uVar18 = (ulong)(*puVar17 >> 9) * 0x44b83;
      uVar19 = uVar18 >> 0x27;
      uVar20 = *puVar17 + (uint)(uVar18 >> 0x27) * unaff_w27;
      if (-1 < (int)uVar21) {
        lVar22 = (ulong)uVar21 + 1;
        puVar23 = unaff_x20 + uVar21;
        do {
          uVar21 = *puVar23;
          lVar22 = lVar22 + -1;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = CONCAT44(uVar20,uVar21) >> 9;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar14;
          uVar20 = (uint)(SUB168(auVar2 * auVar7,8) >> 0xb);
          *puVar23 = uVar20;
          uVar20 = uVar21 + uVar20 * unaff_w27;
          puVar23 = puVar23 + -1;
        } while (0 < lVar22);
      }
      uVar21 = 500000000;
    }
  } while( true );
switchD_02c2e940_caseD_3:
  if (*(int *)(*in_x15 + 0xe0) == 0) goto code_r0x02c2ec18;
  goto LAB_02c2ec94;
code_r0x02c2ec18:
  thunk_FUN_01843fdc();
  in_x6 = 0x5c28f5c3;
  in_x3 = 0xa09b5a53;
  unaff_x30 = 0xc5d63886594b;
  in_x7 = 0x9ba5e353f7cf;
  in_x15 = (long *)PTR_DAT_0380bcc8;
  goto code_r0x02c2ec4c;
}


