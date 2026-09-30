/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MetadataPropertyHandling
ENTRY_POINT: 05e28748
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Newtonsoft_Json_JsonSerializerSettings__get_MetadataPropertyHandling(ulong param_1)

{
  ulong uVar1;
  ushort uVar2;
  bool in_ZR;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  ulong in_x9;
  ulong uVar9;
  ulong uVar10;
  short sVar11;
  undefined2 unaff_w19;
  undefined2 *unaff_x20;
  uint unaff_w21;
  uint uVar12;
  undefined4 unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  uVar10 = param_1;
  if (!in_ZR) {
    uVar10 = in_x9;
  }
  if ((unaff_w21 & 0x80) != 0) {
    uVar10 = param_1 & 0xffff;
  }
  if ((unaff_w21 & 0x40) != 0) {
    uVar10 = param_1 & 0xff;
  }
  if (uVar10 == 0) {
    uVar12 = 1;
    *unaff_x20 = 0x30;
  }
  else {
    lVar5 = 0;
    uVar9 = (ulong)unaff_w24;
    do {
      uVar1 = 0;
      if (uVar9 != 0) {
        uVar1 = uVar10 / uVar9;
      }
      iVar3 = (int)uVar10 - (int)uVar1 * unaff_w24;
      sVar11 = 0x30;
      if (9 < iVar3) {
        sVar11 = 0x57;
      }
      unaff_x20[lVar5] = sVar11 + (short)iVar3;
      if (uVar10 < uVar9) {
        uVar12 = (int)lVar5 + 1;
        goto LAB_05e287c4;
      }
      lVar5 = lVar5 + 1;
      uVar10 = uVar1;
    } while (lVar5 != 0x43);
    uVar12 = 0;
  }
LAB_05e287c4:
  if ((unaff_w24 == 10) || ((unaff_w21 >> 5 & 1) == 0)) {
    if (unaff_w24 != 10) {
LAB_05e288cc:
      if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_05e18a84(unaff_w23,uVar12,0);
      lVar5 = thunk_FUN_0367d828(uVar4,0);
      if (lVar5 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
      }
      else {
        iVar3 = thunk_FUN_0364e8d0(0);
        puVar7 = (undefined2 *)(lVar5 + iVar3);
        iVar3 = *(int *)(lVar5 + 0x10) - uVar12;
        if ((unaff_w21 & 1) == 0) {
          if (0 < (int)uVar12) {
            uVar10 = (ulong)uVar12;
            puVar6 = puVar7;
            do {
              if (0x43 < uVar12) goto LAB_05e289c0;
              uVar10 = uVar10 - 1;
              puVar7 = puVar6 + 1;
              *puVar6 = unaff_x20[uVar10 & 0xffffffff];
              puVar6 = puVar7;
            } while (uVar10 != 0);
          }
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              *puVar7 = unaff_w19;
              puVar7 = puVar7 + 1;
            } while (iVar3 != 0);
          }
        }
        else {
          puVar6 = puVar7;
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              puVar7 = puVar6 + 1;
              *puVar6 = unaff_w19;
              puVar6 = puVar7;
            } while (iVar3 != 0);
          }
          if (0 < (int)uVar12) {
            uVar10 = (ulong)uVar12;
            do {
              if (0x43 < uVar12) goto LAB_05e289c0;
              uVar10 = uVar10 - 1;
              *puVar7 = unaff_x20[uVar10 & 0xffffffff];
              puVar7 = puVar7 + 1;
            } while (uVar10 != 0);
          }
        }
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return lVar5;
        }
      }
      goto LAB_05e28a54;
    }
    if (unaff_x25 < 0) {
      if (uVar12 < 0x43) {
        uVar8 = 0x2d;
FUN_05e288c4:
        unaff_x20[uVar12] = uVar8;
        uVar12 = uVar12 + 1;
        goto LAB_05e288cc;
      }
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_05e288cc;
      if (uVar12 < 0x43) {
        uVar8 = 0x20;
        goto FUN_05e288c4;
      }
    }
    else if (uVar12 < 0x43) {
      uVar8 = 0x2b;
      goto FUN_05e288c4;
    }
  }
  else if (unaff_w24 == 8) {
    if (uVar12 < 0x43) {
      uVar8 = 0x30;
      goto FUN_05e288c4;
    }
  }
  else if (unaff_w24 == 0x10) {
    if (uVar12 < 0x43) {
      unaff_x20[uVar12] = 0x78;
      if (uVar12 != 0x42) {
        (unaff_x20 + uVar12)[1] = 0x30;
        uVar12 = uVar12 + 2;
        goto LAB_05e288cc;
      }
    }
  }
  else {
    if ((unaff_w21 >> 0xe & 1) == 0) goto LAB_05e288cc;
    if (uVar12 < 0x43) {
      puVar7 = unaff_x20 + uVar12;
      *puVar7 = 0x23;
      if (uVar12 != 0x42) {
        uVar2 = (ushort)(unaff_w24 / 10);
        puVar7[1] = (short)unaff_w24 + uVar2 * -10 | 0x30;
        if (uVar12 < 0x41) {
          puVar7[2] = uVar2 | 0x30;
          uVar12 = uVar12 + 3;
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


