/*
FUNCTION_NAME: OVRManager$$add_SceneCaptureComplete
ENTRY_POINT: 027d5628
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRManager__add_SceneCaptureComplete(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
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
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  uint *puVar23;
  long *in_x15;
  uint *unaff_x20;
  uint unaff_w21;
  int unaff_w25;
  int unaff_w26;
  uint uVar24;
  ulong unaff_x30;
  ulong uVar25;
  int iStack000000000000000c;
  
  uVar24 = 0;
  iStack000000000000000c = unaff_w26 - unaff_w25;
  uVar14 = in_x3 & 0xffff | 0x44b82fa09b0000;
  uVar15 = in_x6 & 0xffff | 0x28f5c28f5c280000;
  uVar16 = in_x7 & 0xffff | 0x20c49ba5e3530000;
  uVar25 = unaff_x30 & 0xffff | 0x346dc5d638860000;
  uVar19 = 0;
  do {
    do {
      switch(unaff_w25) {
      case 1:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar25 = 0x346dc5d63886594b;
          uVar16 = 0x20c49ba5e353f7cf;
          uVar15 = 0x28f5c28f5c28f5c3;
          uVar14 = 0x44b82fa09b5a53;
          in_x15 = (long *)PTR_DAT_03cfca30;
        }
        puVar17 = unaff_x20 + unaff_w21;
        uVar21 = unaff_w21 - 1;
        uVar18 = *puVar17 / 10;
        uVar20 = *puVar17 % 10;
        if (-1 < (int)uVar21) {
          lVar22 = (ulong)uVar21 + 1;
          puVar23 = unaff_x20 + uVar21;
          do {
            uVar21 = *puVar23;
            lVar22 = lVar22 + -1;
            uVar20 = (uint)(CONCAT44(uVar20,uVar21) / 10);
            *puVar23 = uVar20;
            uVar20 = uVar21 + uVar20 * -10;
            puVar23 = puVar23 + -1;
          } while (0 < lVar22);
        }
        uVar21 = 5;
        break;
      case 2:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar25 = 0x346dc5d63886594b;
          uVar16 = 0x20c49ba5e353f7cf;
          uVar15 = 0x28f5c28f5c28f5c3;
          uVar14 = 0x44b82fa09b5a53;
          in_x15 = (long *)PTR_DAT_03cfca30;
        }
        puVar17 = unaff_x20 + unaff_w21;
        uVar2 = *puVar17;
        uVar21 = unaff_w21 - 1;
        uVar18 = uVar2 / 100;
        uVar20 = uVar2 % 100;
        if ((int)uVar21 < 0) {
          uVar21 = 0x32;
          uVar18 = uVar2 / 100;
        }
        else {
          lVar22 = (ulong)uVar21 + 1;
          puVar23 = unaff_x20 + uVar21;
          do {
            uVar21 = *puVar23;
            lVar22 = lVar22 + -1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = CONCAT44(uVar20,uVar21) >> 2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar15;
            uVar20 = (uint)(SUB168(auVar5 * auVar9,8) >> 2);
            *puVar23 = uVar20;
            uVar20 = uVar21 + uVar20 * -100;
            puVar23 = puVar23 + -1;
          } while (0 < lVar22);
          uVar21 = 0x32;
        }
        break;
      case 3:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar25 = 0x346dc5d63886594b;
          uVar16 = 0x20c49ba5e353f7cf;
          uVar15 = 0x28f5c28f5c28f5c3;
          uVar14 = 0x44b82fa09b5a53;
          in_x15 = (long *)PTR_DAT_03cfca30;
        }
        puVar17 = unaff_x20 + unaff_w21;
        uVar2 = *puVar17;
        uVar21 = unaff_w21 - 1;
        uVar18 = uVar2 / 1000;
        uVar20 = uVar2 % 1000;
        if ((int)uVar21 < 0) {
          uVar21 = 500;
          uVar18 = uVar2 / 1000;
        }
        else {
          lVar22 = (ulong)uVar21 + 1;
          puVar23 = unaff_x20 + uVar21;
          do {
            uVar21 = *puVar23;
            lVar22 = lVar22 + -1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = CONCAT44(uVar20,uVar21) >> 3;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar16;
            uVar20 = (uint)(SUB168(auVar6 * auVar10,8) >> 4);
            *puVar23 = uVar20;
            uVar20 = uVar21 + uVar20 * -1000;
            puVar23 = puVar23 + -1;
          } while (0 < lVar22);
          uVar21 = 500;
        }
        break;
      case 4:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar25 = 0x346dc5d63886594b;
          uVar16 = 0x20c49ba5e353f7cf;
          uVar15 = 0x28f5c28f5c28f5c3;
          uVar14 = 0x44b82fa09b5a53;
          in_x15 = (long *)PTR_DAT_03cfca30;
        }
        puVar17 = unaff_x20 + unaff_w21;
        uVar2 = *puVar17;
        uVar21 = unaff_w21 - 1;
        uVar18 = uVar2 / 10000;
        uVar20 = uVar2 % 10000;
        if ((int)uVar21 < 0) {
          uVar21 = 5000;
          uVar18 = uVar2 / 10000;
        }
        else {
          lVar22 = (ulong)uVar21 + 1;
          puVar23 = unaff_x20 + uVar21;
          do {
            uVar21 = *puVar23;
            lVar22 = lVar22 + -1;
            auVar7._4_4_ = uVar20;
            auVar7._0_4_ = uVar21;
            auVar7._8_8_ = 0;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar25;
            uVar20 = (uint)(SUB168(auVar7 * auVar11,8) >> 0xb);
            *puVar23 = uVar20;
            uVar20 = uVar21 + uVar20 * -10000;
            puVar23 = puVar23 + -1;
          } while (0 < lVar22);
          uVar21 = 5000;
        }
        break;
      case 5:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar25 = 0x346dc5d63886594b;
          uVar16 = 0x20c49ba5e353f7cf;
          uVar15 = 0x28f5c28f5c28f5c3;
          uVar14 = 0x44b82fa09b5a53;
          in_x15 = (long *)PTR_DAT_03cfca30;
        }
        puVar17 = unaff_x20 + unaff_w21;
        uVar21 = unaff_w21 - 1;
        uVar2 = *puVar17 >> 5;
        uVar18 = uVar2 / 0xc35;
        uVar20 = *puVar17 + (uVar2 / 0xc35) * -100000;
        if ((int)uVar21 < 0) {
          uVar21 = 50000;
          uVar18 = uVar2 / 0xc35;
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
          thunk_FUN_01a58e78();
          uVar25 = 0x346dc5d63886594b;
          uVar16 = 0x20c49ba5e353f7cf;
          uVar15 = 0x28f5c28f5c28f5c3;
          uVar14 = 0x44b82fa09b5a53;
          in_x15 = (long *)PTR_DAT_03cfca30;
        }
        puVar17 = unaff_x20 + unaff_w21;
        uVar18 = *puVar17;
        uVar21 = unaff_w21 - 1;
        uVar20 = uVar18 % 1000000;
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
        uVar18 = uVar18 / 1000000;
        break;
      case 7:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar25 = 0x346dc5d63886594b;
          uVar16 = 0x20c49ba5e353f7cf;
          uVar15 = 0x28f5c28f5c28f5c3;
          uVar14 = 0x44b82fa09b5a53;
          in_x15 = (long *)PTR_DAT_03cfca30;
        }
        puVar17 = unaff_x20 + unaff_w21;
        uVar18 = *puVar17;
        uVar21 = unaff_w21 - 1;
        uVar20 = uVar18 % 10000000;
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
        uVar18 = uVar18 / 10000000;
        break;
      case 8:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar25 = 0x346dc5d63886594b;
          uVar16 = 0x20c49ba5e353f7cf;
          uVar15 = 0x28f5c28f5c28f5c3;
          uVar14 = 0x44b82fa09b5a53;
          in_x15 = (long *)PTR_DAT_03cfca30;
        }
        puVar17 = unaff_x20 + unaff_w21;
        uVar18 = *puVar17;
        uVar21 = unaff_w21 - 1;
        uVar20 = uVar18 % 100000000;
        if (-1 < (int)uVar21) {
          lVar22 = (ulong)uVar21 + 1;
          puVar23 = unaff_x20 + uVar21;
          do {
            uVar21 = *puVar23;
            lVar22 = lVar22 + -1;
            uVar20 = (uint)(CONCAT44(uVar20,uVar21) / 100000000);
            *puVar23 = uVar20;
            uVar20 = uVar21 + uVar20 * -100000000;
            puVar23 = puVar23 + -1;
          } while (0 < lVar22);
        }
        uVar21 = 50000000;
        uVar18 = uVar18 / 100000000;
        break;
      default:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar25 = 0x346dc5d63886594b;
          uVar16 = 0x20c49ba5e353f7cf;
          uVar15 = 0x28f5c28f5c28f5c3;
          uVar14 = 0x44b82fa09b5a53;
          in_x15 = (long *)PTR_DAT_03cfca30;
        }
        puVar17 = unaff_x20 + unaff_w21;
        uVar21 = unaff_w21 - 1;
        uVar18 = (uint)((ulong)(*puVar17 >> 9) * 0x44b83 >> 0x20);
        uVar20 = *puVar17 + (uVar18 >> 7) * -1000000000;
        if (-1 < (int)uVar21) {
          lVar22 = (ulong)uVar21 + 1;
          puVar23 = unaff_x20 + uVar21;
          do {
            uVar21 = *puVar23;
            lVar22 = lVar22 + -1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = CONCAT44(uVar20,uVar21) >> 9;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar14;
            uVar20 = (uint)(SUB168(auVar4 * auVar8,8) >> 0xb);
            *puVar23 = uVar20;
            uVar20 = uVar21 + uVar20 * -1000000000;
            puVar23 = puVar23 + -1;
          } while (0 < lVar22);
        }
        uVar21 = 500000000;
        uVar18 = uVar18 >> 7;
      }
      *puVar17 = uVar18;
      uVar24 = uVar24 | uVar19;
      iVar3 = unaff_w25 + -9;
      unaff_w21 = unaff_w21 - (unaff_w21 != 0 && uVar18 == 0);
      bVar1 = 8 < unaff_w25;
      unaff_w25 = iVar3;
      uVar19 = uVar20;
    } while (iVar3 != 0 && bVar1);
    if (unaff_w21 < 3) {
      if ((uVar20 < uVar21) ||
         (((uVar19 = *unaff_x20, uVar20 <= uVar21 && ((uVar19 & 1) == 0 && uVar24 == 0)) ||
          (*unaff_x20 = uVar19 + 1, uVar19 != 0xffffffff)))) {
        return iStack000000000000000c;
      }
      unaff_w21 = 0;
      do {
        unaff_w21 = unaff_w21 + 1;
        uVar24 = unaff_x20[unaff_w21];
        unaff_x20[unaff_w21] = uVar24 + 1;
      } while (0xfffffffe < uVar24);
      if (unaff_w21 < 3) {
        return iStack000000000000000c;
      }
      if (iStack000000000000000c == 0) {
LAB_027d6044:
        thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
        uVar12 = thunk_FUN_01a89e68();
        uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cfaa68);
        FUN_0277bb94(uVar12,uVar13,0);
        uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb10);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar12,uVar13);
      }
      uVar19 = 0;
      uVar24 = 0;
    }
    else if (iStack000000000000000c == 0) goto LAB_027d6044;
    iStack000000000000000c = iStack000000000000000c + -1;
    unaff_w25 = 1;
  } while( true );
}


