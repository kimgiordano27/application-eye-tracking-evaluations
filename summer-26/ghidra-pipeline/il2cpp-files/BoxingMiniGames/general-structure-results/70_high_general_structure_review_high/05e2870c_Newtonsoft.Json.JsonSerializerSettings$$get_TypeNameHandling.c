/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameHandling
ENTRY_POINT: 05e2870c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializerSettings__get_TypeNameHandling(void)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_w8;
  long lVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort uVar9;
  ulong uVar10;
  short sVar11;
  ulong uVar12;
  ushort unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar13;
  undefined4 unaff_w23;
  uint unaff_w24;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x29;
  ushort auStack_90 [72];
  
  *(undefined1 *)(unaff_x20 + 0xd1b) = in_w8;
  memset(auStack_90,0,0x86);
  if (0x22 < unaff_w24 - 2) {
    thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
    uVar3 = thunk_FUN_0367fe20();
    uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a11768);
    uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a0ac48);
    FUN_05d7e218(uVar3,uVar4,uVar5,0);
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a15458);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar3,uVar4);
    }
    goto LAB_05e28a54;
  }
  uVar10 = -unaff_x25;
  if (unaff_w24 != 10 || -1 < (long)unaff_x25) {
    uVar10 = unaff_x25;
  }
  uVar12 = uVar10;
  if ((unaff_w21 & 0x100) != 0) {
    uVar12 = uVar10 & 0xffffffff;
  }
  if ((unaff_w21 & 0x80) != 0) {
    uVar12 = uVar10 & 0xffff;
  }
  if ((unaff_w21 & 0x40) != 0) {
    uVar12 = uVar10 & 0xff;
  }
  if (uVar12 == 0) {
    uVar13 = 1;
    auStack_90[0] = 0x30;
  }
  else {
    lVar6 = 0;
    uVar10 = (ulong)unaff_w24;
    do {
      uVar1 = 0;
      if (uVar10 != 0) {
        uVar1 = uVar12 / uVar10;
      }
      iVar2 = (int)uVar12 - (int)uVar1 * unaff_w24;
      sVar11 = 0x30;
      if (9 < iVar2) {
        sVar11 = 0x57;
      }
      auStack_90[lVar6] = sVar11 + (short)iVar2;
      if (uVar12 < uVar10) {
        uVar13 = (int)lVar6 + 1;
        goto LAB_05e287c4;
      }
      lVar6 = lVar6 + 1;
      uVar12 = uVar1;
    } while (lVar6 != 0x43);
    uVar13 = 0;
  }
LAB_05e287c4:
  if ((unaff_w24 == 10) || ((unaff_w21 >> 5 & 1) == 0)) {
    if (unaff_w24 != 10) {
LAB_05e288cc:
      if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar3 = FUN_05e18a84(unaff_w23,uVar13,0);
      lVar6 = thunk_FUN_0367d828(uVar3,0);
      if (lVar6 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
      }
      else {
        iVar2 = thunk_FUN_0364e8d0(0);
        puVar8 = (ushort *)(lVar6 + iVar2);
        iVar2 = *(int *)(lVar6 + 0x10) - uVar13;
        if ((unaff_w21 & 1) == 0) {
          if (0 < (int)uVar13) {
            uVar10 = (ulong)uVar13;
            puVar7 = puVar8;
            do {
              if (0x43 < uVar13) goto LAB_05e289c0;
              uVar10 = uVar10 - 1;
              puVar8 = puVar7 + 1;
              *puVar7 = auStack_90[uVar10 & 0xffffffff];
              puVar7 = puVar8;
            } while (uVar10 != 0);
          }
          if (0 < iVar2) {
            do {
              iVar2 = iVar2 + -1;
              *puVar8 = unaff_w19;
              puVar8 = puVar8 + 1;
            } while (iVar2 != 0);
          }
        }
        else {
          puVar7 = puVar8;
          if (0 < iVar2) {
            do {
              iVar2 = iVar2 + -1;
              puVar8 = puVar7 + 1;
              *puVar7 = unaff_w19;
              puVar7 = puVar8;
            } while (iVar2 != 0);
          }
          if (0 < (int)uVar13) {
            uVar10 = (ulong)uVar13;
            do {
              if (0x43 < uVar13) goto LAB_05e289c0;
              uVar10 = uVar10 - 1;
              *puVar8 = auStack_90[uVar10 & 0xffffffff];
              puVar8 = puVar8 + 1;
            } while (uVar10 != 0);
          }
        }
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return lVar6;
        }
      }
      goto LAB_05e28a54;
    }
    if ((long)unaff_x25 < 0) {
      if (uVar13 < 0x43) {
        uVar9 = 0x2d;
FUN_05e288c4:
        auStack_90[uVar13] = uVar9;
        uVar13 = uVar13 + 1;
        goto LAB_05e288cc;
      }
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_05e288cc;
      if (uVar13 < 0x43) {
        uVar9 = 0x20;
        goto FUN_05e288c4;
      }
    }
    else if (uVar13 < 0x43) {
      uVar9 = 0x2b;
      goto FUN_05e288c4;
    }
  }
  else if (unaff_w24 == 8) {
    if (uVar13 < 0x43) {
      uVar9 = 0x30;
      goto FUN_05e288c4;
    }
  }
  else if (unaff_w24 == 0x10) {
    if (uVar13 < 0x43) {
      auStack_90[uVar13] = 0x78;
      if (uVar13 != 0x42) {
        auStack_90[(ulong)uVar13 + 1] = 0x30;
        uVar13 = uVar13 + 2;
        goto LAB_05e288cc;
      }
    }
  }
  else {
    if ((unaff_w21 >> 0xe & 1) == 0) goto LAB_05e288cc;
    if (uVar13 < 0x43) {
      auStack_90[uVar13] = 0x23;
      if (uVar13 != 0x42) {
        uVar9 = (ushort)(unaff_w24 / 10);
        auStack_90[(ulong)uVar13 + 1] = (short)unaff_w24 + uVar9 * -10 | 0x30;
        if (uVar13 < 0x41) {
          auStack_90[(ulong)uVar13 + 2] = uVar9 | 0x30;
          uVar13 = uVar13 + 3;
          goto LAB_05e288cc;
        }
      }
    }
  }
LAB_05e289c0:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
LAB_05e28a54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


