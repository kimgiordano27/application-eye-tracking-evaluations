/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 05e28784
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


long Newtonsoft_Json_JsonSerializerSettings__get_TypeNameAssemblyFormatHandling(long param_1)

{
  short sVar1;
  ushort uVar2;
  char in_NG;
  char in_OV;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  ulong in_x9;
  short in_w10;
  ulong uVar9;
  short in_w11;
  ulong in_x12;
  ulong in_x13;
  int in_w14;
  undefined2 unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar10;
  undefined4 unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  while( true ) {
    sVar1 = in_w11;
    if (in_NG == in_OV) {
      sVar1 = in_w10;
    }
    *(short *)(unaff_x20 + param_1 * 2) = sVar1 + (short)in_w14;
    if (in_x12 < in_x9) {
      uVar10 = (int)param_1 + 1;
      goto LAB_05e287c4;
    }
    param_1 = param_1 + 1;
    if (param_1 == 0x43) break;
    uVar9 = 0;
    if (in_x9 != 0) {
      uVar9 = in_x13 / in_x9;
    }
    in_w14 = (int)in_x13 - (int)uVar9 * (int)in_x9;
    in_OV = SBORROW4(in_w14,10);
    in_NG = in_w14 + -10 < 0;
    in_x12 = in_x13;
    in_x13 = uVar9;
  }
  uVar10 = 0;
LAB_05e287c4:
  if ((unaff_w24 == 10) || ((unaff_w21 >> 5 & 1) == 0)) {
    if (unaff_w24 != 10) {
LAB_05e288cc:
      if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_05e18a84(unaff_w23,uVar10,0);
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
        iVar3 = *(int *)(lVar5 + 0x10) - uVar10;
        if ((unaff_w21 & 1) == 0) {
          if (0 < (int)uVar10) {
            uVar9 = (ulong)uVar10;
            puVar6 = puVar7;
            do {
              if (0x43 < uVar10) goto LAB_05e289c0;
              uVar9 = uVar9 - 1;
              puVar7 = puVar6 + 1;
              *puVar6 = *(undefined2 *)(unaff_x20 + (uVar9 & 0xffffffff) * 2);
              puVar6 = puVar7;
            } while (uVar9 != 0);
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
          if (0 < (int)uVar10) {
            uVar9 = (ulong)uVar10;
            do {
              if (0x43 < uVar10) goto LAB_05e289c0;
              uVar9 = uVar9 - 1;
              *puVar7 = *(undefined2 *)(unaff_x20 + (uVar9 & 0xffffffff) * 2);
              puVar7 = puVar7 + 1;
            } while (uVar9 != 0);
          }
        }
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return lVar5;
        }
      }
      goto LAB_05e28a54;
    }
    if (unaff_x25 < 0) {
      if (uVar10 < 0x43) {
        uVar8 = 0x2d;
FUN_05e288c4:
        *(undefined2 *)(unaff_x20 + (ulong)uVar10 * 2) = uVar8;
        uVar10 = uVar10 + 1;
        goto LAB_05e288cc;
      }
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_05e288cc;
      if (uVar10 < 0x43) {
        uVar8 = 0x20;
        goto FUN_05e288c4;
      }
    }
    else if (uVar10 < 0x43) {
      uVar8 = 0x2b;
      goto FUN_05e288c4;
    }
  }
  else if (unaff_w24 == 8) {
    if (uVar10 < 0x43) {
      uVar8 = 0x30;
      goto FUN_05e288c4;
    }
  }
  else if (unaff_w24 == 0x10) {
    if (uVar10 < 0x43) {
      puVar7 = (undefined2 *)(unaff_x20 + (ulong)uVar10 * 2);
      *puVar7 = 0x78;
      if (uVar10 != 0x42) {
        puVar7[1] = 0x30;
        uVar10 = uVar10 + 2;
        goto LAB_05e288cc;
      }
    }
  }
  else {
    if ((unaff_w21 >> 0xe & 1) == 0) goto LAB_05e288cc;
    if (uVar10 < 0x43) {
      puVar7 = (undefined2 *)(unaff_x20 + (ulong)uVar10 * 2);
      *puVar7 = 0x23;
      if (uVar10 != 0x42) {
        uVar2 = (ushort)(unaff_w24 / 10);
        puVar7[1] = (short)unaff_w24 + uVar2 * -10 | 0x30;
        if (uVar10 < 0x41) {
          puVar7[2] = uVar2 | 0x30;
          uVar10 = uVar10 + 3;
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


