/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_PreserveReferencesHandling
ENTRY_POINT: 05e287c0
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


long Newtonsoft_Json_JsonSerializerSettings__get_PreserveReferencesHandling(void)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int in_w8;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  ulong uVar8;
  undefined2 unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar9;
  undefined4 unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  uVar9 = in_w8 + 1;
  if ((unaff_w24 == 10) || ((unaff_w21 >> 5 & 1) == 0)) {
    if (unaff_w24 != 10) {
LAB_05e288cc:
      if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar3 = FUN_05e18a84(unaff_w23,uVar9,0);
      lVar4 = thunk_FUN_0367d828(uVar3,0);
      if (lVar4 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
      }
      else {
        iVar2 = thunk_FUN_0364e8d0(0);
        puVar6 = (undefined2 *)(lVar4 + iVar2);
        iVar2 = *(int *)(lVar4 + 0x10) - uVar9;
        if ((unaff_w21 & 1) == 0) {
          if (0 < (int)uVar9) {
            uVar8 = (ulong)uVar9;
            puVar5 = puVar6;
            do {
              if (0x43 < uVar9) goto LAB_05e289c0;
              uVar8 = uVar8 - 1;
              puVar6 = puVar5 + 1;
              *puVar5 = *(undefined2 *)(unaff_x20 + (uVar8 & 0xffffffff) * 2);
              puVar5 = puVar6;
            } while (uVar8 != 0);
          }
          if (0 < iVar2) {
            do {
              iVar2 = iVar2 + -1;
              *puVar6 = unaff_w19;
              puVar6 = puVar6 + 1;
            } while (iVar2 != 0);
          }
        }
        else {
          puVar5 = puVar6;
          if (0 < iVar2) {
            do {
              iVar2 = iVar2 + -1;
              puVar6 = puVar5 + 1;
              *puVar5 = unaff_w19;
              puVar5 = puVar6;
            } while (iVar2 != 0);
          }
          if (0 < (int)uVar9) {
            uVar8 = (ulong)uVar9;
            do {
              if (0x43 < uVar9) goto LAB_05e289c0;
              uVar8 = uVar8 - 1;
              *puVar6 = *(undefined2 *)(unaff_x20 + (uVar8 & 0xffffffff) * 2);
              puVar6 = puVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return lVar4;
        }
      }
      goto LAB_05e28a54;
    }
    if (unaff_x25 < 0) {
      if (uVar9 < 0x43) {
        uVar7 = 0x2d;
FUN_05e288c4:
        *(undefined2 *)(unaff_x20 + (ulong)uVar9 * 2) = uVar7;
        uVar9 = in_w8 + 2;
        goto LAB_05e288cc;
      }
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_05e288cc;
      if (uVar9 < 0x43) {
        uVar7 = 0x20;
        goto FUN_05e288c4;
      }
    }
    else if (uVar9 < 0x43) {
      uVar7 = 0x2b;
      goto FUN_05e288c4;
    }
  }
  else if (unaff_w24 == 8) {
    if (uVar9 < 0x43) {
      uVar7 = 0x30;
      goto FUN_05e288c4;
    }
  }
  else if (unaff_w24 == 0x10) {
    if (uVar9 < 0x43) {
      puVar6 = (undefined2 *)(unaff_x20 + (ulong)uVar9 * 2);
      *puVar6 = 0x78;
      if (uVar9 != 0x42) {
        puVar6[1] = 0x30;
        uVar9 = in_w8 + 3;
        goto LAB_05e288cc;
      }
    }
  }
  else {
    if ((unaff_w21 >> 0xe & 1) == 0) goto LAB_05e288cc;
    if (uVar9 < 0x43) {
      puVar6 = (undefined2 *)(unaff_x20 + (ulong)uVar9 * 2);
      *puVar6 = 0x23;
      if (uVar9 != 0x42) {
        uVar1 = (ushort)(unaff_w24 / 10);
        puVar6[1] = (short)unaff_w24 + uVar1 * -10 | 0x30;
        if (uVar9 < 0x41) {
          puVar6[2] = uVar1 | 0x30;
          uVar9 = in_w8 + 4;
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


