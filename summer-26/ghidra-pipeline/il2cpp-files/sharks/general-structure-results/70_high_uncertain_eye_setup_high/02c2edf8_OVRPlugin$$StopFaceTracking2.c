/*
FUNCTION_NAME: OVRPlugin$$StopFaceTracking2
ENTRY_POINT: 02c2edf8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__StopFaceTracking2(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  undefined **in_x15;
  long *plVar15;
  int unaff_w19;
  uint *unaff_x20;
  int iVar16;
  ulong unaff_x21;
  int unaff_w22;
  int unaff_w23;
  ulong unaff_x24;
  int unaff_w25;
  int iVar17;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  int unaff_w29;
  ulong unaff_x30;
  ulong uVar18;
  undefined8 in_stack_00000008;
  
code_r0x02c2edf8:
  plVar15 = (long *)in_x15[0x199];
  uVar18 = unaff_x30 & 0xffff | 0x346dc5d638860000;
LAB_02c2ee68:
  puVar8 = unaff_x20 + (unaff_x21 & 0xffffffff);
  uVar12 = (int)unaff_x21 - 1;
  uVar11 = *puVar8 >> 5;
  uVar10 = (ulong)uVar11 / 0xc35;
  uVar11 = *puVar8 + (uVar11 / 0xc35) * -100000;
  iVar17 = unaff_w25;
  if ((int)uVar12 < 0) {
    uVar12 = 50000;
  }
  else {
    lVar13 = (ulong)uVar12 + 1;
    puVar14 = unaff_x20 + uVar12;
    do {
      uVar12 = *puVar14;
      lVar13 = lVar13 + -1;
      uVar11 = (uint)(CONCAT44(uVar11,uVar12) / 100000);
      *puVar14 = uVar11;
      uVar11 = uVar12 + uVar11 * -100000;
      puVar14 = puVar14 + -1;
    } while (0 < lVar13);
    uVar12 = 50000;
  }
  do {
    *puVar8 = (uint)uVar10;
    unaff_w28 = unaff_w28 | unaff_w26;
    unaff_w25 = iVar17 + -9;
    uVar1 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)uVar10 == 0);
    unaff_x21 = (ulong)uVar1;
    unaff_w26 = uVar11;
    if (unaff_w25 == 0 || iVar17 < 9) {
      if (uVar1 < 3) {
        if ((uVar11 < uVar12) ||
           (((uVar1 = *unaff_x20, uVar11 <= uVar12 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
          return in_stack_00000008._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar11 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar11;
          uVar12 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar12 + 1;
        } while (0xfffffffe < uVar12);
        if (uVar11 < 3) {
          return in_stack_00000008._4_4_;
        }
        if (in_stack_00000008._4_4_ == 0) goto LAB_02c2f2a8;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (in_stack_00000008._4_4_ == 0) {
LAB_02c2f2a8:
        thunk_FUN_01851c08(PTR_DAT_037f87b0);
        uVar6 = thunk_FUN_01861bbc();
        uVar7 = thunk_FUN_01851c08(PTR_DAT_03809d90);
        FUN_02bde04c(uVar6,uVar7,0);
        uVar7 = thunk_FUN_01851c08(PTR_DAT_0380bda8);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar6,uVar7);
      }
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + -1;
      unaff_w25 = 1;
    }
    iVar16 = (int)unaff_x21;
    iVar17 = unaff_w25;
    switch(unaff_w25) {
    case 1:
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar18 = 0x346dc5d63886594b;
        plVar15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar8 = unaff_x20 + unaff_x21;
      uVar11 = *puVar8;
      uVar12 = iVar16 - 1;
      uVar10 = (ulong)uVar11 / 10;
      uVar11 = uVar11 + (uVar11 / 10) * unaff_w19;
      if (-1 < (int)uVar12) {
        lVar13 = (ulong)uVar12 + 1;
        puVar14 = unaff_x20 + uVar12;
        do {
          uVar12 = *puVar14;
          lVar13 = lVar13 + -1;
          uVar11 = (uint)(CONCAT44(uVar11,uVar12) / 10);
          *puVar14 = uVar11;
          uVar11 = uVar12 + uVar11 * unaff_w19;
          puVar14 = puVar14 + -1;
        } while (0 < lVar13);
      }
      uVar12 = 5;
      break;
    case 2:
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar18 = 0x346dc5d63886594b;
        plVar15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar8 = unaff_x20 + unaff_x21;
      uVar11 = *puVar8;
      uVar12 = iVar16 - 1;
      uVar10 = (ulong)uVar11 / 100;
      uVar11 = uVar11 + (uVar11 / 100) * unaff_w22;
      if ((int)uVar12 < 0) {
        uVar12 = 0x32;
      }
      else {
        lVar13 = (ulong)uVar12 + 1;
        puVar14 = unaff_x20 + uVar12;
        do {
          uVar12 = *puVar14;
          lVar13 = lVar13 + -1;
          uVar11 = (uint)(CONCAT44(uVar11,uVar12) / 100);
          *puVar14 = uVar11;
          uVar11 = uVar12 + uVar11 * unaff_w22;
          puVar14 = puVar14 + -1;
        } while (0 < lVar13);
        uVar12 = 0x32;
      }
      break;
    case 3:
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar18 = 0x346dc5d63886594b;
        plVar15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar8 = unaff_x20 + unaff_x21;
      uVar11 = *puVar8;
      uVar12 = iVar16 - 1;
      uVar10 = (ulong)uVar11 / 1000;
      uVar11 = uVar11 + (uVar11 / 1000) * unaff_w29;
      if ((int)uVar12 < 0) {
        uVar12 = 500;
      }
      else {
        lVar13 = (ulong)uVar12 + 1;
        puVar14 = unaff_x20 + uVar12;
        do {
          uVar12 = *puVar14;
          lVar13 = lVar13 + -1;
          uVar11 = (uint)(CONCAT44(uVar11,uVar12) / 1000);
          *puVar14 = uVar11;
          uVar11 = uVar12 + uVar11 * unaff_w29;
          puVar14 = puVar14 + -1;
        } while (0 < lVar13);
        uVar12 = 500;
      }
      break;
    case 4:
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar18 = 0x346dc5d63886594b;
        plVar15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar8 = unaff_x20 + unaff_x21;
      uVar11 = *puVar8;
      uVar12 = iVar16 - 1;
      uVar10 = (ulong)uVar11 / 10000;
      uVar11 = uVar11 + (uVar11 / 10000) * unaff_w23;
      if ((int)uVar12 < 0) {
        uVar12 = 5000;
      }
      else {
        lVar13 = (ulong)uVar12 + 1;
        puVar14 = unaff_x20 + uVar12;
        do {
          uVar12 = *puVar14;
          lVar13 = lVar13 + -1;
          auVar2._4_4_ = uVar11;
          auVar2._0_4_ = uVar12;
          auVar2._8_8_ = 0;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar18;
          uVar11 = (uint)(SUB168(auVar2 * auVar4,8) >> 0xb);
          *puVar14 = uVar11;
          uVar11 = uVar12 + uVar11 * unaff_w23;
          puVar14 = puVar14 + -1;
        } while (0 < lVar13);
        uVar12 = 5000;
      }
      break;
    case 5:
      goto switchD_02c2e940_caseD_5;
    case 6:
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar18 = 0x346dc5d63886594b;
        plVar15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar8 = unaff_x20 + unaff_x21;
      uVar12 = iVar16 - 1;
      uVar10 = (ulong)*puVar8 / 1000000;
      uVar11 = *puVar8 % 1000000;
      if (-1 < (int)uVar12) {
        lVar13 = (ulong)uVar12 + 1;
        puVar14 = unaff_x20 + uVar12;
        do {
          uVar12 = *puVar14;
          lVar13 = lVar13 + -1;
          uVar11 = (uint)(CONCAT44(uVar11,uVar12) / 1000000);
          *puVar14 = uVar11;
          uVar11 = uVar12 + uVar11 * -1000000;
          puVar14 = puVar14 + -1;
        } while (0 < lVar13);
      }
      uVar12 = 500000;
      break;
    case 7:
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar18 = 0x346dc5d63886594b;
        plVar15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar8 = unaff_x20 + unaff_x21;
      uVar12 = iVar16 - 1;
      uVar10 = (ulong)*puVar8 / 10000000;
      uVar11 = *puVar8 % 10000000;
      if (-1 < (int)uVar12) {
        lVar13 = (ulong)uVar12 + 1;
        puVar14 = unaff_x20 + uVar12;
        do {
          uVar12 = *puVar14;
          lVar13 = lVar13 + -1;
          uVar11 = (uint)(CONCAT44(uVar11,uVar12) / 10000000);
          *puVar14 = uVar11;
          uVar11 = uVar12 + uVar11 * -10000000;
          puVar14 = puVar14 + -1;
        } while (0 < lVar13);
      }
      uVar12 = 5000000;
      break;
    case 8:
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar18 = 0x346dc5d63886594b;
        plVar15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar8 = unaff_x20 + unaff_x21;
      uVar12 = iVar16 - 1;
      uVar10 = (ulong)*puVar8 / 100000000;
      uVar11 = *puVar8 % 100000000;
      if (-1 < (int)uVar12) {
        lVar13 = (ulong)uVar12 + 1;
        puVar14 = unaff_x20 + uVar12;
        do {
          uVar12 = *puVar14;
          lVar13 = lVar13 + -1;
          auVar3._4_4_ = uVar11;
          auVar3._0_4_ = uVar12;
          auVar3._8_8_ = 0;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = unaff_x24;
          uVar11 = (uint)(SUB168(auVar3 * auVar5,8) >> 0x1a);
          *puVar14 = uVar11;
          uVar11 = uVar12 + uVar11 * -100000000;
          puVar14 = puVar14 + -1;
        } while (0 < lVar13);
      }
      uVar12 = 50000000;
      break;
    default:
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        uVar18 = 0x346dc5d63886594b;
        plVar15 = (long *)PTR_DAT_0380bcc8;
      }
      puVar8 = unaff_x20 + unaff_x21;
      uVar12 = iVar16 - 1;
      uVar9 = (ulong)(*puVar8 >> 9) * 0x44b83;
      uVar10 = uVar9 >> 0x27;
      uVar11 = *puVar8 + (uint)(uVar9 >> 0x27) * unaff_w27;
      if (-1 < (int)uVar12) {
        lVar13 = (ulong)uVar12 + 1;
        puVar14 = unaff_x20 + uVar12;
        do {
          uVar12 = *puVar14;
          lVar13 = lVar13 + -1;
          uVar11 = (uint)(CONCAT44(uVar11,uVar12) / 1000000000);
          *puVar14 = uVar11;
          uVar11 = uVar12 + uVar11 * unaff_w27;
          puVar14 = puVar14 + -1;
        } while (0 < lVar13);
      }
      uVar12 = 500000000;
    }
  } while( true );
switchD_02c2e940_caseD_5:
  if (*(int *)(*plVar15 + 0xe0) == 0) goto code_r0x02c2edec;
  goto LAB_02c2ee68;
code_r0x02c2edec:
  thunk_FUN_01843fdc();
  in_x15 = &PTR_DAT_0380b000;
  unaff_x30 = 0x594b;
  goto code_r0x02c2edf8;
}


