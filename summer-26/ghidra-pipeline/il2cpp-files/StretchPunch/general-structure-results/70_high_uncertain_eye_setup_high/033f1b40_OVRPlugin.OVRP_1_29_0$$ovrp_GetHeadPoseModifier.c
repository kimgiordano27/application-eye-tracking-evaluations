/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetHeadPoseModifier
ENTRY_POINT: 033f1b40
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_29_0__ovrp_GetHeadPoseModifier(void)

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
  undefined8 uVar10;
  undefined8 uVar11;
  ulong in_x6;
  ulong uVar12;
  ulong in_x7;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint *puVar20;
  undefined **in_x15;
  long *plVar21;
  int unaff_w19;
  uint *unaff_x20;
  int iVar22;
  ulong unaff_x21;
  int unaff_w22;
  int unaff_w23;
  ulong unaff_x24;
  int unaff_w25;
  int iVar23;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  int unaff_w29;
  ulong unaff_x30;
  ulong uVar24;
  undefined8 in_stack_00000008;
  
code_r0x033f1b40:
  plVar21 = (long *)in_x15[0x3f];
  uVar24 = unaff_x30 & 0xffff | 0x346dc5d638860000;
  uVar13 = in_x7 & 0xffff | 0x20c49ba5e3530000;
  uVar12 = in_x6 & 0xffff | 0x28f5c28f5c280000;
LAB_033f1ba8:
  puVar14 = unaff_x20 + (unaff_x21 & 0xffffffff);
  uVar17 = *puVar14;
  uVar18 = (int)unaff_x21 - 1;
  uVar16 = (ulong)uVar17 / 10000;
  uVar17 = uVar17 + (uVar17 / 10000) * unaff_w23;
  iVar23 = unaff_w25;
  if ((int)uVar18 < 0) {
    uVar18 = 5000;
  }
  else {
    lVar19 = (ulong)uVar18 + 1;
    puVar20 = unaff_x20 + uVar18;
    do {
      uVar18 = *puVar20;
      lVar19 = lVar19 + -1;
      auVar4._4_4_ = uVar17;
      auVar4._0_4_ = uVar18;
      auVar4._8_8_ = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar24;
      uVar17 = (uint)(SUB168(auVar4 * auVar8,8) >> 0xb);
      *puVar20 = uVar17;
      uVar17 = uVar18 + uVar17 * unaff_w23;
      puVar20 = puVar20 + -1;
    } while (0 < lVar19);
    uVar18 = 5000;
  }
  do {
    *puVar14 = (uint)uVar16;
    unaff_w28 = unaff_w28 | unaff_w26;
    unaff_w25 = iVar23 + -9;
    uVar1 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)uVar16 == 0);
    unaff_x21 = (ulong)uVar1;
    unaff_w26 = uVar17;
    if (unaff_w25 == 0 || iVar23 < 9) {
      if (uVar1 < 3) {
        if ((uVar17 < uVar18) ||
           (((uVar1 = *unaff_x20, uVar17 <= uVar18 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
          return in_stack_00000008._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar17 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar17;
          uVar18 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar18 + 1;
        } while (0xfffffffe < uVar18);
        if (uVar17 < 3) {
          return in_stack_00000008._4_4_;
        }
        if (in_stack_00000008._4_4_ == 0) goto LAB_033f20d0;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (in_stack_00000008._4_4_ == 0) {
LAB_033f20d0:
        thunk_FUN_01dd295c(StringLiteral_1150);
        uVar10 = thunk_FUN_01de27b8();
        uVar11 = thunk_FUN_01dd295c(StringLiteral_8348);
        FUN_03390704(uVar10,uVar11,0);
        uVar11 = thunk_FUN_01dd295c(StringLiteral_9351);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar10,uVar11);
      }
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + -1;
      unaff_w25 = 1;
    }
    iVar22 = (int)unaff_x21;
    iVar23 = unaff_w25;
    switch(unaff_w25) {
    case 1:
      if (*(int *)(*plVar21 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        uVar24 = 0x346dc5d63886594b;
        uVar13 = 0x20c49ba5e353f7cf;
        uVar12 = 0x28f5c28f5c28f5c3;
        plVar21 = (long *)StringLiteral_9323;
      }
      puVar14 = unaff_x20 + unaff_x21;
      uVar17 = *puVar14;
      uVar18 = iVar22 - 1;
      uVar16 = (ulong)uVar17 / 10;
      uVar17 = uVar17 + (uVar17 / 10) * unaff_w19;
      if (-1 < (int)uVar18) {
        lVar19 = (ulong)uVar18 + 1;
        puVar20 = unaff_x20 + uVar18;
        do {
          uVar18 = *puVar20;
          lVar19 = lVar19 + -1;
          uVar17 = (uint)(CONCAT44(uVar17,uVar18) / 10);
          *puVar20 = uVar17;
          uVar17 = uVar18 + uVar17 * unaff_w19;
          puVar20 = puVar20 + -1;
        } while (0 < lVar19);
      }
      uVar18 = 5;
      break;
    case 2:
      if (*(int *)(*plVar21 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        uVar24 = 0x346dc5d63886594b;
        uVar13 = 0x20c49ba5e353f7cf;
        uVar12 = 0x28f5c28f5c28f5c3;
        plVar21 = (long *)StringLiteral_9323;
      }
      puVar14 = unaff_x20 + unaff_x21;
      uVar17 = *puVar14;
      uVar18 = iVar22 - 1;
      uVar16 = (ulong)uVar17 / 100;
      uVar17 = uVar17 + (uVar17 / 100) * unaff_w22;
      if ((int)uVar18 < 0) {
        uVar18 = 0x32;
      }
      else {
        lVar19 = (ulong)uVar18 + 1;
        puVar20 = unaff_x20 + uVar18;
        do {
          uVar18 = *puVar20;
          lVar19 = lVar19 + -1;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = CONCAT44(uVar17,uVar18) >> 2;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar12;
          uVar17 = (uint)(SUB168(auVar2 * auVar6,8) >> 2);
          *puVar20 = uVar17;
          uVar17 = uVar18 + uVar17 * unaff_w22;
          puVar20 = puVar20 + -1;
        } while (0 < lVar19);
        uVar18 = 0x32;
      }
      break;
    case 3:
      if (*(int *)(*plVar21 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        uVar24 = 0x346dc5d63886594b;
        uVar13 = 0x20c49ba5e353f7cf;
        uVar12 = 0x28f5c28f5c28f5c3;
        plVar21 = (long *)StringLiteral_9323;
      }
      puVar14 = unaff_x20 + unaff_x21;
      uVar17 = *puVar14;
      uVar18 = iVar22 - 1;
      uVar16 = (ulong)uVar17 / 1000;
      uVar17 = uVar17 + (uVar17 / 1000) * unaff_w29;
      if ((int)uVar18 < 0) {
        uVar18 = 500;
      }
      else {
        lVar19 = (ulong)uVar18 + 1;
        puVar20 = unaff_x20 + uVar18;
        do {
          uVar18 = *puVar20;
          lVar19 = lVar19 + -1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = CONCAT44(uVar17,uVar18) >> 3;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar13;
          uVar17 = (uint)(SUB168(auVar3 * auVar7,8) >> 4);
          *puVar20 = uVar17;
          uVar17 = uVar18 + uVar17 * unaff_w29;
          puVar20 = puVar20 + -1;
        } while (0 < lVar19);
        uVar18 = 500;
      }
      break;
    case 4:
      goto switchD_033f1768_caseD_4;
    case 5:
      if (*(int *)(*plVar21 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        uVar24 = 0x346dc5d63886594b;
        uVar13 = 0x20c49ba5e353f7cf;
        uVar12 = 0x28f5c28f5c28f5c3;
        plVar21 = (long *)StringLiteral_9323;
      }
      puVar14 = unaff_x20 + unaff_x21;
      uVar18 = iVar22 - 1;
      uVar17 = *puVar14 >> 5;
      uVar16 = (ulong)uVar17 / 0xc35;
      uVar17 = *puVar14 + (uVar17 / 0xc35) * -100000;
      if ((int)uVar18 < 0) {
        uVar18 = 50000;
      }
      else {
        lVar19 = (ulong)uVar18 + 1;
        puVar20 = unaff_x20 + uVar18;
        do {
          uVar18 = *puVar20;
          lVar19 = lVar19 + -1;
          uVar17 = (uint)(CONCAT44(uVar17,uVar18) / 100000);
          *puVar20 = uVar17;
          uVar17 = uVar18 + uVar17 * -100000;
          puVar20 = puVar20 + -1;
        } while (0 < lVar19);
        uVar18 = 50000;
      }
      break;
    case 6:
      if (*(int *)(*plVar21 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        uVar24 = 0x346dc5d63886594b;
        uVar13 = 0x20c49ba5e353f7cf;
        uVar12 = 0x28f5c28f5c28f5c3;
        plVar21 = (long *)StringLiteral_9323;
      }
      puVar14 = unaff_x20 + unaff_x21;
      uVar18 = iVar22 - 1;
      uVar16 = (ulong)*puVar14 / 1000000;
      uVar17 = *puVar14 % 1000000;
      if (-1 < (int)uVar18) {
        lVar19 = (ulong)uVar18 + 1;
        puVar20 = unaff_x20 + uVar18;
        do {
          uVar18 = *puVar20;
          lVar19 = lVar19 + -1;
          uVar17 = (uint)(CONCAT44(uVar17,uVar18) / 1000000);
          *puVar20 = uVar17;
          uVar17 = uVar18 + uVar17 * -1000000;
          puVar20 = puVar20 + -1;
        } while (0 < lVar19);
      }
      uVar18 = 500000;
      break;
    case 7:
      if (*(int *)(*plVar21 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        uVar24 = 0x346dc5d63886594b;
        uVar13 = 0x20c49ba5e353f7cf;
        uVar12 = 0x28f5c28f5c28f5c3;
        plVar21 = (long *)StringLiteral_9323;
      }
      puVar14 = unaff_x20 + unaff_x21;
      uVar18 = iVar22 - 1;
      uVar16 = (ulong)*puVar14 / 10000000;
      uVar17 = *puVar14 % 10000000;
      if (-1 < (int)uVar18) {
        lVar19 = (ulong)uVar18 + 1;
        puVar20 = unaff_x20 + uVar18;
        do {
          uVar18 = *puVar20;
          lVar19 = lVar19 + -1;
          uVar17 = (uint)(CONCAT44(uVar17,uVar18) / 10000000);
          *puVar20 = uVar17;
          uVar17 = uVar18 + uVar17 * -10000000;
          puVar20 = puVar20 + -1;
        } while (0 < lVar19);
      }
      uVar18 = 5000000;
      break;
    case 8:
      if (*(int *)(*plVar21 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        uVar24 = 0x346dc5d63886594b;
        uVar13 = 0x20c49ba5e353f7cf;
        uVar12 = 0x28f5c28f5c28f5c3;
        plVar21 = (long *)StringLiteral_9323;
      }
      puVar14 = unaff_x20 + unaff_x21;
      uVar18 = iVar22 - 1;
      uVar16 = (ulong)*puVar14 / 100000000;
      uVar17 = *puVar14 % 100000000;
      if (-1 < (int)uVar18) {
        lVar19 = (ulong)uVar18 + 1;
        puVar20 = unaff_x20 + uVar18;
        do {
          uVar18 = *puVar20;
          lVar19 = lVar19 + -1;
          auVar5._4_4_ = uVar17;
          auVar5._0_4_ = uVar18;
          auVar5._8_8_ = 0;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = unaff_x24;
          uVar17 = (uint)(SUB168(auVar5 * auVar9,8) >> 0x1a);
          *puVar20 = uVar17;
          uVar17 = uVar18 + uVar17 * -100000000;
          puVar20 = puVar20 + -1;
        } while (0 < lVar19);
      }
      uVar18 = 50000000;
      break;
    default:
      if (*(int *)(*plVar21 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        uVar24 = 0x346dc5d63886594b;
        uVar13 = 0x20c49ba5e353f7cf;
        uVar12 = 0x28f5c28f5c28f5c3;
        plVar21 = (long *)StringLiteral_9323;
      }
      puVar14 = unaff_x20 + unaff_x21;
      uVar18 = iVar22 - 1;
      uVar15 = (ulong)(*puVar14 >> 9) * 0x44b83;
      uVar16 = uVar15 >> 0x27;
      uVar17 = *puVar14 + (uint)(uVar15 >> 0x27) * unaff_w27;
      if (-1 < (int)uVar18) {
        lVar19 = (ulong)uVar18 + 1;
        puVar20 = unaff_x20 + uVar18;
        do {
          uVar18 = *puVar20;
          lVar19 = lVar19 + -1;
          uVar17 = (uint)(CONCAT44(uVar17,uVar18) / 1000000000);
          *puVar20 = uVar17;
          uVar17 = uVar18 + uVar17 * unaff_w27;
          puVar20 = puVar20 + -1;
        } while (0 < lVar19);
      }
      uVar18 = 500000000;
    }
  } while( true );
switchD_033f1768_caseD_4:
  if (*(int *)(*plVar21 + 0xe0) == 0) goto code_r0x033f1b2c;
  goto LAB_033f1ba8;
code_r0x033f1b2c:
  thunk_FUN_01dc4f30();
  in_x15 = &StringLiteral_9260;
  unaff_x30 = 0x594b;
  in_x7 = 0xf7cf;
  in_x6 = 0xf5c3;
  goto code_r0x033f1b40;
}


