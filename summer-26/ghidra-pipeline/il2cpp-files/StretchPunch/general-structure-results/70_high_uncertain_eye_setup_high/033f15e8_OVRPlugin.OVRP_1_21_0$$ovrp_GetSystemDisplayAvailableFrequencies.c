/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetSystemDisplayAvailableFrequencies
ENTRY_POINT: 033f15e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_21_0__ovrp_GetSystemDisplayAvailableFrequencies(void)

{
  bool bVar1;
  uint uVar2;
  bool in_CY;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
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
  
  if (in_CY) {
    uVar14 = unaff_x20[unaff_w21];
    if (*(int *)(*in_x15 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      in_x15 = (long *)StringLiteral_9323;
    }
    uVar9 = uVar14 << 0x10;
    if (0xffff < uVar14) {
      uVar9 = uVar14;
    }
    uVar7 = 0x11;
    if (0xffff < uVar14) {
      uVar7 = 1;
    }
    uVar14 = uVar7 | 8;
    uVar10 = uVar9 << 8;
    if (uVar9 >> 0x18 != 0) {
      uVar14 = uVar7;
      uVar10 = uVar9;
    }
    uVar9 = uVar14 | 4;
    uVar7 = uVar10 << 4;
    if (uVar10 >> 0x1c != 0) {
      uVar9 = uVar14;
      uVar7 = uVar10;
    }
    uVar14 = uVar7 << 2;
    uVar10 = uVar9 | 2;
    if (uVar7 >> 0x1e != 0) {
      uVar14 = uVar7;
      uVar10 = uVar9;
    }
    iVar5 = (int)(((unaff_w21 * 0x20 - uVar10) - ((int)uVar14 >> 0x1f)) * 0x4d + -0x138d) >> 8;
    if (unaff_w26 <= iVar5) {
LAB_033f20d0:
      thunk_FUN_01dd295c(StringLiteral_1150);
      uVar3 = thunk_FUN_01de27b8();
      uVar4 = thunk_FUN_01dd295c(StringLiteral_8348);
      FUN_03390704(uVar3,uVar4,0);
      uVar4 = thunk_FUN_01dd295c(StringLiteral_9351);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar3,uVar4);
    }
    iVar5 = iVar5 + 1;
  }
  else {
    iVar5 = 0;
  }
  iVar13 = unaff_w26 + -0x1c;
  if (unaff_w26 + -0x1c <= iVar5) {
    iVar13 = iVar5;
  }
  if (iVar13 == 0) {
    return unaff_w26;
  }
  uVar14 = 0;
  iStack000000000000000c = unaff_w26 - iVar13;
  uVar9 = 0;
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
      uVar8 = *puVar6 / 10;
      uVar7 = *puVar6 % 10;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar7 = (uint)(CONCAT44(uVar7,uVar10) / 10);
          *puVar12 = uVar7;
          uVar7 = uVar10 + uVar7 * -10;
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
      uVar2 = *puVar6;
      uVar10 = unaff_w21 - 1;
      uVar8 = uVar2 / 100;
      uVar7 = uVar2 % 100;
      if ((int)uVar10 < 0) {
        uVar10 = 0x32;
        uVar8 = uVar2 / 100;
      }
      else {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar7 = (uint)(CONCAT44(uVar7,uVar10) / 100);
          *puVar12 = uVar7;
          uVar7 = uVar10 + uVar7 * -100;
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
      uVar2 = *puVar6;
      uVar10 = unaff_w21 - 1;
      uVar8 = uVar2 / 1000;
      uVar7 = uVar2 % 1000;
      if ((int)uVar10 < 0) {
        uVar10 = 500;
        uVar8 = uVar2 / 1000;
      }
      else {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar7 = (uint)(CONCAT44(uVar7,uVar10) / 1000);
          *puVar12 = uVar7;
          uVar7 = uVar10 + uVar7 * -1000;
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
      uVar2 = *puVar6;
      uVar10 = unaff_w21 - 1;
      uVar8 = uVar2 / 10000;
      uVar7 = uVar2 % 10000;
      if ((int)uVar10 < 0) {
        uVar10 = 5000;
        uVar8 = uVar2 / 10000;
      }
      else {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar7 = (uint)(CONCAT44(uVar7,uVar10) / 10000);
          *puVar12 = uVar7;
          uVar7 = uVar10 + uVar7 * -10000;
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
      uVar2 = *puVar6 >> 5;
      uVar8 = uVar2 / 0xc35;
      uVar7 = *puVar6 + (uVar2 / 0xc35) * -100000;
      if ((int)uVar10 < 0) {
        uVar10 = 50000;
        uVar8 = uVar2 / 0xc35;
      }
      else {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar7 = (uint)(CONCAT44(uVar7,uVar10) / 100000);
          *puVar12 = uVar7;
          uVar7 = uVar10 + uVar7 * -100000;
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
      uVar8 = *puVar6;
      uVar10 = unaff_w21 - 1;
      uVar7 = uVar8 % 1000000;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar7 = (uint)(CONCAT44(uVar7,uVar10) / 1000000);
          *puVar12 = uVar7;
          uVar7 = uVar10 + uVar7 * -1000000;
          puVar12 = puVar12 + -1;
        } while (0 < lVar11);
      }
      uVar10 = 500000;
      uVar8 = uVar8 / 1000000;
      break;
    case 7:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        in_x15 = (long *)StringLiteral_9323;
      }
      puVar6 = unaff_x20 + unaff_w21;
      uVar8 = *puVar6;
      uVar10 = unaff_w21 - 1;
      uVar7 = uVar8 % 10000000;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar7 = (uint)(CONCAT44(uVar7,uVar10) / 10000000);
          *puVar12 = uVar7;
          uVar7 = uVar10 + uVar7 * -10000000;
          puVar12 = puVar12 + -1;
        } while (0 < lVar11);
      }
      uVar10 = 5000000;
      uVar8 = uVar8 / 10000000;
      break;
    case 8:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        in_x15 = (long *)StringLiteral_9323;
      }
      puVar6 = unaff_x20 + unaff_w21;
      uVar8 = *puVar6;
      uVar10 = unaff_w21 - 1;
      uVar7 = uVar8 % 100000000;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar7 = (uint)(CONCAT44(uVar7,uVar10) / 100000000);
          *puVar12 = uVar7;
          uVar7 = uVar10 + uVar7 * -100000000;
          puVar12 = puVar12 + -1;
        } while (0 < lVar11);
      }
      uVar10 = 50000000;
      uVar8 = uVar8 / 100000000;
      break;
    default:
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        in_x15 = (long *)StringLiteral_9323;
      }
      puVar6 = unaff_x20 + unaff_w21;
      uVar10 = unaff_w21 - 1;
      uVar8 = (uint)((ulong)(*puVar6 >> 9) * 0x44b83 >> 0x20);
      uVar7 = *puVar6 + (uVar8 >> 7) * -1000000000;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = unaff_x20 + uVar10;
        do {
          uVar10 = *puVar12;
          lVar11 = lVar11 + -1;
          uVar7 = (uint)(CONCAT44(uVar7,uVar10) / 1000000000);
          *puVar12 = uVar7;
          uVar7 = uVar10 + uVar7 * -1000000000;
          puVar12 = puVar12 + -1;
        } while (0 < lVar11);
      }
      uVar10 = 500000000;
      uVar8 = uVar8 >> 7;
    }
    *puVar6 = uVar8;
    uVar14 = uVar14 | uVar9;
    iVar5 = iVar13 + -9;
    unaff_w21 = unaff_w21 - (unaff_w21 != 0 && uVar8 == 0);
    bVar1 = 8 < iVar13;
    iVar13 = iVar5;
    uVar9 = uVar7;
  } while (iVar5 != 0 && bVar1);
  if (unaff_w21 < 3) {
    if (uVar7 < uVar10) {
      return iStack000000000000000c;
    }
    uVar9 = *unaff_x20;
    if ((uVar7 <= uVar10) && ((uVar9 & 1) == 0 && uVar14 == 0)) {
      return iStack000000000000000c;
    }
    *unaff_x20 = uVar9 + 1;
    if (uVar9 != 0xffffffff) {
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
    uVar9 = 0;
    uVar14 = 0;
  }
  else if (iStack000000000000000c == 0) goto LAB_033f20d0;
  iStack000000000000000c = iStack000000000000000c + -1;
  iVar13 = 1;
  goto LAB_033f174c;
}


