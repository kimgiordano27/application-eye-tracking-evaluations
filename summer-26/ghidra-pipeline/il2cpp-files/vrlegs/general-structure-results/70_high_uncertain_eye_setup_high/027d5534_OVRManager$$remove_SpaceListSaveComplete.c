/*
FUNCTION_NAME: OVRManager$$remove_SpaceListSaveComplete
ENTRY_POINT: 027d5534
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRManager__remove_SpaceListSaveComplete(ulong param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
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
  long *plVar13;
  long unaff_x19;
  uint unaff_w21;
  int iVar14;
  int unaff_w26;
  uint uVar15;
  int iStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfca30);
    *(undefined1 *)(unaff_x19 + 0xc) = 1;
  }
  if (unaff_w21 < 3) {
    iVar5 = 0;
  }
  else {
    uVar15 = param_2[unaff_w21];
    if (*(int *)(*(long *)PTR_DAT_03cfca30 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar9 = uVar15 << 0x10;
    if (0xffff < uVar15) {
      uVar9 = uVar15;
    }
    uVar7 = 0x11;
    if (0xffff < uVar15) {
      uVar7 = 1;
    }
    uVar15 = uVar7 | 8;
    uVar10 = uVar9 << 8;
    if (uVar9 >> 0x18 != 0) {
      uVar15 = uVar7;
      uVar10 = uVar9;
    }
    uVar9 = uVar15 | 4;
    uVar7 = uVar10 << 4;
    if (uVar10 >> 0x1c != 0) {
      uVar9 = uVar15;
      uVar7 = uVar10;
    }
    uVar15 = uVar7 << 2;
    uVar10 = uVar9 | 2;
    if (uVar7 >> 0x1e != 0) {
      uVar15 = uVar7;
      uVar10 = uVar9;
    }
    iVar5 = (int)(((unaff_w21 * 0x20 - uVar10) - ((int)uVar15 >> 0x1f)) * 0x4d + -0x138d) >> 8;
    if (unaff_w26 <= iVar5) {
LAB_027d6044:
      thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
      uVar3 = thunk_FUN_01a89e68();
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfaa68);
      FUN_0277bb94(uVar3,uVar4,0);
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb10);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar3,uVar4);
    }
    iVar5 = iVar5 + 1;
  }
  iVar14 = unaff_w26 + -0x1c;
  if (unaff_w26 + -0x1c <= iVar5) {
    iVar14 = iVar5;
  }
  if (iVar14 == 0) {
    return unaff_w26;
  }
  uVar15 = 0;
  iStack000000000000000c = unaff_w26 - iVar14;
  plVar13 = (long *)PTR_DAT_03cfca30;
  uVar9 = 0;
LAB_027d56c0:
  do {
    switch(iVar14) {
    case 1:
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = param_2 + unaff_w21;
      uVar10 = unaff_w21 - 1;
      uVar8 = *puVar6 / 10;
      uVar7 = *puVar6 % 10;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = param_2 + uVar10;
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
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = param_2 + unaff_w21;
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
        puVar12 = param_2 + uVar10;
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
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = param_2 + unaff_w21;
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
        puVar12 = param_2 + uVar10;
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
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = param_2 + unaff_w21;
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
        puVar12 = param_2 + uVar10;
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
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = param_2 + unaff_w21;
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
        puVar12 = param_2 + uVar10;
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
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = param_2 + unaff_w21;
      uVar8 = *puVar6;
      uVar10 = unaff_w21 - 1;
      uVar7 = uVar8 % 1000000;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = param_2 + uVar10;
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
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = param_2 + unaff_w21;
      uVar8 = *puVar6;
      uVar10 = unaff_w21 - 1;
      uVar7 = uVar8 % 10000000;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = param_2 + uVar10;
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
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = param_2 + unaff_w21;
      uVar8 = *puVar6;
      uVar10 = unaff_w21 - 1;
      uVar7 = uVar8 % 100000000;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = param_2 + uVar10;
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
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        plVar13 = (long *)PTR_DAT_03cfca30;
      }
      puVar6 = param_2 + unaff_w21;
      uVar10 = unaff_w21 - 1;
      uVar8 = (uint)((ulong)(*puVar6 >> 9) * 0x44b83 >> 0x20);
      uVar7 = *puVar6 + (uVar8 >> 7) * -1000000000;
      if (-1 < (int)uVar10) {
        lVar11 = (ulong)uVar10 + 1;
        puVar12 = param_2 + uVar10;
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
    uVar15 = uVar15 | uVar9;
    iVar5 = iVar14 + -9;
    unaff_w21 = unaff_w21 - (unaff_w21 != 0 && uVar8 == 0);
    bVar1 = 8 < iVar14;
    iVar14 = iVar5;
    uVar9 = uVar7;
  } while (iVar5 != 0 && bVar1);
  if (unaff_w21 < 3) {
    if (uVar7 < uVar10) {
      return iStack000000000000000c;
    }
    uVar9 = *param_2;
    if ((uVar7 <= uVar10) && ((uVar9 & 1) == 0 && uVar15 == 0)) {
      return iStack000000000000000c;
    }
    *param_2 = uVar9 + 1;
    if (uVar9 != 0xffffffff) {
      return iStack000000000000000c;
    }
    unaff_w21 = 0;
    do {
      unaff_w21 = unaff_w21 + 1;
      uVar15 = param_2[unaff_w21];
      param_2[unaff_w21] = uVar15 + 1;
    } while (0xfffffffe < uVar15);
    if (unaff_w21 < 3) {
      return iStack000000000000000c;
    }
    if (iStack000000000000000c == 0) goto LAB_027d6044;
    uVar9 = 0;
    uVar15 = 0;
  }
  else if (iStack000000000000000c == 0) goto LAB_027d6044;
  iStack000000000000000c = iStack000000000000000c + -1;
  iVar14 = 1;
  goto LAB_027d56c0;
}


