/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_SetSystemDisplayFrequency
ENTRY_POINT: 033f166c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_21_0__ovrp_SetSystemDisplayFrequency(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  uint *puVar6;
  int in_w9;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  long *in_x15;
  uint *unaff_x20;
  uint unaff_w21;
  int iVar13;
  int unaff_w26;
  uint uVar14;
  int iStack000000000000000c;
  
  iVar2 = (in_w9 - (in_w8 >> 0x1f)) * 0x4d + -0x138d >> 8;
  if (iVar2 < unaff_w26) {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033f157c with catch @ 033f1688
                        */
    iVar2 = iVar2 + 1;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033f1580 with catch @ 033f168c
                        */
    iVar13 = unaff_w26 + -0x1c;
    if (unaff_w26 + -0x1c <= iVar2) {
      iVar13 = iVar2;
    }
    if (iVar13 == 0) {
      return unaff_w26;
    }
                    /* try { // try from 033f16a4 to 034f170f has its CatchHandler @ 033f173c */
    uVar14 = 0;
    iStack000000000000000c = unaff_w26 - iVar13;
    uVar8 = 0;
LAB_033f174c:
    do {
      switch(iVar13) {
      case 1:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          in_x15 = (long *)StringLiteral_9323;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar10 = unaff_w21 - 1;
        uVar7 = *puVar6 / 10;
        uVar9 = *puVar6 % 10;
        if (-1 < (int)uVar10) {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 10);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -10;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
        }
        uVar10 = 5;
        break;
      case 2:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          in_x15 = (long *)StringLiteral_9323;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar3 = *puVar6;
        uVar10 = unaff_w21 - 1;
        uVar7 = uVar3 / 100;
        uVar9 = uVar3 % 100;
        if ((int)uVar10 < 0) {
          uVar10 = 0x32;
          uVar7 = uVar3 / 100;
        }
        else {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 100);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -100;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
          uVar10 = 0x32;
        }
        break;
      case 3:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          in_x15 = (long *)StringLiteral_9323;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar3 = *puVar6;
        uVar10 = unaff_w21 - 1;
        uVar7 = uVar3 / 1000;
        uVar9 = uVar3 % 1000;
        if ((int)uVar10 < 0) {
          uVar10 = 500;
          uVar7 = uVar3 / 1000;
        }
        else {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 1000);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -1000;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
          uVar10 = 500;
        }
        break;
      case 4:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          in_x15 = (long *)StringLiteral_9323;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar3 = *puVar6;
        uVar10 = unaff_w21 - 1;
        uVar7 = uVar3 / 10000;
        uVar9 = uVar3 % 10000;
        if ((int)uVar10 < 0) {
          uVar10 = 5000;
          uVar7 = uVar3 / 10000;
        }
        else {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 10000);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -10000;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
          uVar10 = 5000;
        }
        break;
      case 5:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          in_x15 = (long *)StringLiteral_9323;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar10 = unaff_w21 - 1;
        uVar3 = *puVar6 >> 5;
        uVar7 = uVar3 / 0xc35;
        uVar9 = *puVar6 + (uVar3 / 0xc35) * -100000;
        if ((int)uVar10 < 0) {
          uVar10 = 50000;
          uVar7 = uVar3 / 0xc35;
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
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          in_x15 = (long *)StringLiteral_9323;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar7 = *puVar6;
        uVar10 = unaff_w21 - 1;
        uVar9 = uVar7 % 1000000;
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
        uVar7 = uVar7 / 1000000;
        break;
      case 7:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          in_x15 = (long *)StringLiteral_9323;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar7 = *puVar6;
        uVar10 = unaff_w21 - 1;
        uVar9 = uVar7 % 10000000;
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
        uVar7 = uVar7 / 10000000;
        break;
      case 8:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          in_x15 = (long *)StringLiteral_9323;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar7 = *puVar6;
        uVar10 = unaff_w21 - 1;
        uVar9 = uVar7 % 100000000;
        if (-1 < (int)uVar10) {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 100000000);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -100000000;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
        }
        uVar10 = 50000000;
        uVar7 = uVar7 / 100000000;
        break;
      default:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          in_x15 = (long *)StringLiteral_9323;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar10 = unaff_w21 - 1;
        uVar7 = (uint)((ulong)(*puVar6 >> 9) * 0x44b83 >> 0x20);
        uVar9 = *puVar6 + (uVar7 >> 7) * -1000000000;
        if (-1 < (int)uVar10) {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 1000000000);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -1000000000;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
        }
        uVar10 = 500000000;
        uVar7 = uVar7 >> 7;
      }
      *puVar6 = uVar7;
      uVar14 = uVar14 | uVar8;
      iVar2 = iVar13 + -9;
      unaff_w21 = unaff_w21 - (unaff_w21 != 0 && uVar7 == 0);
      bVar1 = 8 < iVar13;
      iVar13 = iVar2;
      uVar8 = uVar9;
    } while (iVar2 != 0 && bVar1);
    if (unaff_w21 < 3) {
      if (uVar9 < uVar10) {
        return iStack000000000000000c;
      }
      uVar8 = *unaff_x20;
      if ((uVar9 <= uVar10) && ((uVar8 & 1) == 0 && uVar14 == 0)) {
        return iStack000000000000000c;
      }
      *unaff_x20 = uVar8 + 1;
      if (uVar8 != 0xffffffff) {
        return iStack000000000000000c;
      }
      unaff_w21 = 0;
      do {
        unaff_w21 = unaff_w21 + 1;
        uVar14 = unaff_x20[unaff_w21];
        unaff_x20[unaff_w21] = uVar14 + 1;
      } while (0xfffffffe < uVar14);
      if (unaff_w21 < 3) {
        return iStack000000000000000c;
      }
      if (iStack000000000000000c == 0) goto LAB_033f20d0;
      uVar8 = 0;
      uVar14 = 0;
    }
    else if (iStack000000000000000c == 0) goto LAB_033f20d0;
    iStack000000000000000c = iStack000000000000000c + -1;
    iVar13 = 1;
    goto LAB_033f174c;
  }
LAB_033f20d0:
  thunk_FUN_01dd295c(StringLiteral_1150);
  uVar4 = thunk_FUN_01de27b8();
  uVar5 = thunk_FUN_01dd295c(StringLiteral_8348);
  FUN_03390704(uVar4,uVar5,0);
  uVar5 = thunk_FUN_01dd295c(StringLiteral_9351);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar4,uVar5);
}


