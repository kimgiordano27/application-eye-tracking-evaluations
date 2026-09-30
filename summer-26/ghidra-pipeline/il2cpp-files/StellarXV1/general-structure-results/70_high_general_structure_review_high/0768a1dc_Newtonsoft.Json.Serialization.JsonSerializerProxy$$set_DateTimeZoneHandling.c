/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DateTimeZoneHandling
ENTRY_POINT: 0768a1dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateTimeZoneHandling(void)

{
  ulong uVar1;
  ushort uVar2;
  char in_NG;
  char in_OV;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  ulong uVar9;
  short sVar10;
  ulong uVar11;
  undefined2 unaff_w19;
  undefined2 *unaff_x20;
  uint unaff_w21;
  uint uVar12;
  undefined4 unaff_w23;
  uint unaff_w24;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  uVar9 = -unaff_x25;
  if (in_NG == in_OV) {
    uVar9 = unaff_x25;
  }
  uVar11 = uVar9;
  if ((unaff_w21 & 0x100) != 0) {
    uVar11 = uVar9 & 0xffffffff;
  }
  if ((unaff_w21 & 0x80) != 0) {
    uVar11 = uVar9 & 0xffff;
  }
  if ((unaff_w21 & 0x40) != 0) {
    uVar11 = uVar9 & 0xff;
  }
  if (uVar11 == 0) {
    uVar12 = 1;
    *unaff_x20 = 0x30;
  }
  else {
    lVar5 = 0;
    uVar9 = (ulong)unaff_w24;
    do {
      uVar1 = 0;
      if (uVar9 != 0) {
        uVar1 = uVar11 / uVar9;
      }
      iVar3 = (int)uVar11 - (int)uVar1 * unaff_w24;
      sVar10 = 0x30;
      if (9 < iVar3) {
        sVar10 = 0x57;
      }
      unaff_x20[lVar5] = sVar10 + (short)iVar3;
      if (uVar11 < uVar9) {
        uVar12 = (int)lVar5 + 1;
        goto FUN_0768a264;
      }
      lVar5 = lVar5 + 1;
      uVar11 = uVar1;
    } while (lVar5 != 0x43);
    uVar12 = 0;
  }
FUN_0768a264:
  if ((unaff_w24 == 10) || ((unaff_w21 >> 5 & 1) == 0)) {
    if (unaff_w24 != 10) {
FUN_0768a36c:
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_0767a564(unaff_w23,uVar12,0);
      lVar5 = thunk_FUN_040b28f8(uVar4,0);
      if (lVar5 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        iVar3 = thunk_FUN_04083428(0);
        puVar7 = (undefined2 *)(lVar5 + iVar3);
        iVar3 = *(int *)(lVar5 + 0x10) - uVar12;
        if ((unaff_w21 & 1) == 0) {
          if (0 < (int)uVar12) {
            uVar9 = (ulong)uVar12;
            puVar6 = puVar7;
            do {
              if (0x43 < uVar12) goto LAB_0768a460;
              uVar9 = uVar9 - 1;
              puVar7 = puVar6 + 1;
              *puVar6 = unaff_x20[uVar9 & 0xffffffff];
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
          if (0 < (int)uVar12) {
            uVar9 = (ulong)uVar12;
            do {
              if (0x43 < uVar12) goto LAB_0768a460;
              uVar9 = uVar9 - 1;
              *puVar7 = unaff_x20[uVar9 & 0xffffffff];
              puVar7 = puVar7 + 1;
            } while (uVar9 != 0);
          }
        }
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return lVar5;
        }
      }
      goto LAB_0768a4f4;
    }
    if ((long)unaff_x25 < 0) {
      if (uVar12 < 0x43) {
        uVar8 = 0x2d;
LAB_0768a364:
        unaff_x20[uVar12] = uVar8;
        uVar12 = uVar12 + 1;
        goto FUN_0768a36c;
      }
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto FUN_0768a36c;
      if (uVar12 < 0x43) {
        uVar8 = 0x20;
        goto LAB_0768a364;
      }
    }
    else if (uVar12 < 0x43) {
      uVar8 = 0x2b;
      goto LAB_0768a364;
    }
  }
  else if (unaff_w24 == 8) {
    if (uVar12 < 0x43) {
      uVar8 = 0x30;
      goto LAB_0768a364;
    }
  }
  else if (unaff_w24 == 0x10) {
    if (uVar12 < 0x43) {
      unaff_x20[uVar12] = 0x78;
      if (uVar12 != 0x42) {
        (unaff_x20 + uVar12)[1] = 0x30;
        uVar12 = uVar12 + 2;
        goto FUN_0768a36c;
      }
    }
  }
  else {
    if ((unaff_w21 >> 0xe & 1) == 0) goto FUN_0768a36c;
    if (uVar12 < 0x43) {
      puVar7 = unaff_x20 + uVar12;
      *puVar7 = 0x23;
      if (uVar12 != 0x42) {
        uVar2 = (ushort)(unaff_w24 / 10);
        puVar7[1] = (short)unaff_w24 + uVar2 * -10 | 0x30;
        if (uVar12 < 0x41) {
          puVar7[2] = uVar2 | 0x30;
          uVar12 = uVar12 + 3;
          goto FUN_0768a36c;
        }
      }
    }
  }
LAB_0768a460:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0768a4f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


