/*
FUNCTION_NAME: OVRManager$$set_isHmdPresent
ENTRY_POINT: 027d5c88
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


int OVRManager__set_isHmdPresent(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  int unaff_w19;
  uint *unaff_x20;
  int iVar14;
  ulong unaff_x21;
  int unaff_w22;
  int unaff_w23;
  ulong unaff_x24;
  int unaff_w25;
  int iVar15;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  
code_r0x027d5c88:
  thunk_FUN_01a58e78();
                    /* catch() { ... } // from try @ 027d5c80 with catch @ 027d5ca8 */
                    /* try { // try from 027d5cac to 028d5cb3 has its CatchHandler @ 027d5cc8 */
                    /* try { // try from 027d5cb4 to 028d5cbf has its CatchHandler @ 027d5b08 */
                    /* try { // try from 027d5cc0 to 028d5cc7 has its CatchHandler @ 027d5cc8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027d5cac with catch @ 027d5cc8
                       catch(type#2 @ 00000000) { ... } // from try @ 027d5cc0 with catch @ 027d5cc8
                        */
  plVar13 = (long *)PTR_DAT_03cfca30;
LAB_027d5d04:
  puVar6 = unaff_x20 + (unaff_x21 & 0xffffffff);
  uVar10 = (int)unaff_x21 - 1;
  uVar8 = (ulong)*puVar6 / 1000000;
  uVar9 = *puVar6 % 1000000;
  if (-1 < (int)uVar10) {
    lVar11 = (ulong)uVar10 + 1;
    puVar12 = unaff_x20 + uVar10;
    do {
      uVar10 = *puVar12;
      lVar11 = lVar11 + -1;
      uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 1000000);
      *puVar12 = uVar9;
      uVar9 = uVar10 + uVar9 * -1000000;
      puVar12 = puVar12 + -1;
    } while (0 < lVar11);
  }
  uVar10 = 500000;
  iVar15 = unaff_w25;
  do {
    *puVar6 = (uint)uVar8;
    unaff_w28 = unaff_w28 | unaff_w26;
    unaff_w25 = iVar15 + -9;
    uVar1 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)uVar8 == 0);
    unaff_x21 = (ulong)uVar1;
    unaff_w26 = uVar9;
    if (unaff_w25 == 0 || iVar15 < 9) {
      if (uVar1 < 3) {
        if ((uVar9 < uVar10) ||
           (((uVar1 = *unaff_x20, uVar9 <= uVar10 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
          return in_stack_00000008._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar9 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar9;
          uVar10 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar10 + 1;
        } while (0xfffffffe < uVar10);
        if (uVar9 < 3) {
          return in_stack_00000008._4_4_;
        }
        if (in_stack_00000008._4_4_ == 0) goto LAB_027d6044;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (in_stack_00000008._4_4_ == 0) {
LAB_027d6044:
        thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
        uVar4 = thunk_FUN_01a89e68();
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfaa68);
        FUN_0277bb94(uVar4,uVar5,0);
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb10);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar5);
      }
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + -1;
      unaff_w25 = 1;
    }
    iVar14 = (int)unaff_x21;
    iVar15 = unaff_w25;
    switch(unaff_w25) {
    case 1:
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = unaff_x20 + unaff_x21;
      uVar9 = *puVar6;
      uVar10 = iVar14 - 1;
      uVar8 = (ulong)uVar9 / 10;
      uVar9 = uVar9 + (uVar9 / 10) * unaff_w19;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 10);
          *puVar12 = uVar9;
          uVar9 = uVar10 + uVar9 * unaff_w19;
          puVar12 = puVar12 + -1;
        } while (0 < lVar11);
      }
      uVar10 = 5;
      break;
    case 2:
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = unaff_x20 + unaff_x21;
      uVar9 = *puVar6;
      uVar10 = iVar14 - 1;
      uVar8 = (ulong)uVar9 / 100;
      uVar9 = uVar9 + (uVar9 / 100) * unaff_w22;
      if ((int)uVar10 < 0) {
        uVar10 = 0x32;
      }
      else {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 100);
          *puVar12 = uVar9;
          uVar9 = uVar10 + uVar9 * unaff_w22;
          puVar12 = puVar12 + -1;
        } while (0 < lVar11);
        uVar10 = 0x32;
      }
      break;
    case 3:
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = unaff_x20 + unaff_x21;
      uVar9 = *puVar6;
      uVar10 = iVar14 - 1;
      uVar8 = (ulong)uVar9 / 1000;
      uVar9 = uVar9 + (uVar9 / 1000) * unaff_w29;
      if ((int)uVar10 < 0) {
        uVar10 = 500;
      }
      else {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 1000);
          *puVar12 = uVar9;
          uVar9 = uVar10 + uVar9 * unaff_w29;
          puVar12 = puVar12 + -1;
        } while (0 < lVar11);
        uVar10 = 500;
      }
      break;
    case 4:
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = unaff_x20 + unaff_x21;
      uVar9 = *puVar6;
      uVar10 = iVar14 - 1;
      uVar8 = (ulong)uVar9 / 10000;
      uVar9 = uVar9 + (uVar9 / 10000) * unaff_w23;
      if ((int)uVar10 < 0) {
        uVar10 = 5000;
      }
      else {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 10000);
          *puVar12 = uVar9;
          uVar9 = uVar10 + uVar9 * unaff_w23;
          puVar12 = puVar12 + -1;
        } while (0 < lVar11);
        uVar10 = 5000;
      }
      break;
    case 5:
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = unaff_x20 + unaff_x21;
      uVar10 = iVar14 - 1;
      uVar9 = *puVar6 >> 5;
      uVar8 = (ulong)uVar9 / 0xc35;
      uVar9 = *puVar6 + (uVar9 / 0xc35) * -100000;
      if ((int)uVar10 < 0) {
        uVar10 = 50000;
      }
      else {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 100000);
          *puVar12 = uVar9;
          uVar9 = uVar10 + uVar9 * -100000;
          puVar12 = puVar12 + -1;
        } while (0 < lVar11);
        uVar10 = 50000;
      }
      break;
    case 6:
      goto switchD_027d56dc_caseD_6;
    case 7:
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = unaff_x20 + unaff_x21;
      uVar10 = iVar14 - 1;
      uVar8 = (ulong)*puVar6 / 10000000;
      uVar9 = *puVar6 % 10000000;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 10000000);
          *puVar12 = uVar9;
          uVar9 = uVar10 + uVar9 * -10000000;
          puVar12 = puVar12 + -1;
        } while (0 < lVar11);
      }
      uVar10 = 5000000;
      break;
    case 8:
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = unaff_x20 + unaff_x21;
      uVar10 = iVar14 - 1;
      uVar8 = (ulong)*puVar6 / 100000000;
      uVar9 = *puVar6 % 100000000;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          auVar2._4_4_ = uVar9;
          auVar2._0_4_ = uVar10;
          auVar2._8_8_ = 0;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = unaff_x24;
          uVar9 = (uint)(SUB168(auVar2 * auVar3,8) >> 0x1a);
          *puVar12 = uVar9;
          uVar9 = uVar10 + uVar9 * -100000000;
          puVar12 = puVar12 + -1;
        } while (0 < lVar11);
      }
      uVar10 = 50000000;
      break;
    default:
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = unaff_x20 + unaff_x21;
      uVar10 = iVar14 - 1;
      uVar7 = (ulong)(*puVar6 >> 9) * 0x44b83;
      uVar8 = uVar7 >> 0x27;
      uVar9 = *puVar6 + (uint)(uVar7 >> 0x27) * unaff_w27;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 1000000000);
          *puVar12 = uVar9;
          uVar9 = uVar10 + uVar9 * unaff_w27;
          puVar12 = puVar12 + -1;
        } while (0 < lVar11);
      }
      uVar10 = 500000000;
    }
  } while( true );
switchD_027d56dc_caseD_6:
  if (*(int *)(*plVar13 + 0xe0) == 0) goto code_r0x027d5c88;
  goto LAB_027d5d04;
}


