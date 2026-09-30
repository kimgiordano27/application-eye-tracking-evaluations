/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_NullValueHandling
ENTRY_POINT: 07689e6c
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_NullValueHandling
               (void *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  short sVar10;
  ulong uVar11;
  uint uVar12;
  undefined2 unaff_w19;
  undefined2 *unaff_x20;
  uint unaff_w21;
  uint uVar13;
  undefined4 unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  long unaff_x26;
  long unaff_x29;
  
  memset(param_1,param_2,0x84);
  if (0x22 < unaff_w24 - 2) {
    thunk_FUN_040dedf8(PTR_DAT_09287028);
    uVar3 = thunk_FUN_040b4efc();
    uVar4 = thunk_FUN_040dedf8(PTR_DAT_092d6808);
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092cf6c0);
    FUN_075ce148(uVar3,uVar4,uVar5,0);
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      uVar4 = thunk_FUN_040dedf8(PTR_DAT_092da748);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar3,uVar4);
    }
    goto LAB_0768a138;
  }
  uVar13 = -unaff_w25;
  if (unaff_w24 != 10 || -1 < (int)unaff_w25) {
    uVar13 = unaff_w25;
  }
  uVar12 = uVar13;
  if ((unaff_w21 & 0x80) != 0) {
    uVar12 = uVar13 & 0xffff;
  }
  if ((unaff_w21 & 0x40) != 0) {
    uVar12 = uVar13 & 0xff;
  }
  if (uVar12 == 0) {
    uVar13 = 1;
    *unaff_x20 = 0x30;
  }
  else {
    lVar6 = 0;
    do {
      uVar13 = 0;
      if (unaff_w24 != 0) {
        uVar13 = uVar12 / unaff_w24;
      }
      uVar1 = uVar12 - uVar13 * unaff_w24;
      sVar10 = 0x57;
      if (uVar1 < 10) {
        sVar10 = 0x30;
      }
      unaff_x20[lVar6] = sVar10 + (short)uVar1;
      if (uVar12 < unaff_w24) {
        uVar13 = (int)lVar6 + 1;
        goto LAB_07689f00;
      }
      lVar6 = lVar6 + 1;
      uVar12 = uVar13;
    } while (lVar6 != 0x42);
    uVar13 = 0;
  }
LAB_07689f00:
  if ((unaff_w24 == 10) || ((unaff_w21 >> 5 & 1) == 0)) {
    if (unaff_w24 != 10) {
LAB_07689fb0:
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar3 = FUN_0767a564(unaff_w23,uVar13,0);
      lVar6 = thunk_FUN_040b28f8(uVar3,0);
      if (lVar6 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        iVar2 = thunk_FUN_04083428(0);
        puVar8 = (undefined2 *)(lVar6 + iVar2);
        iVar2 = *(int *)(lVar6 + 0x10) - uVar13;
        if ((unaff_w21 & 1) == 0) {
          if (0 < (int)uVar13) {
            uVar11 = (ulong)uVar13;
            puVar7 = puVar8;
            do {
              if (0x42 < uVar13) goto LAB_0768a0a4;
              uVar11 = uVar11 - 1;
              puVar8 = puVar7 + 1;
              *puVar7 = unaff_x20[uVar11 & 0xffffffff];
              puVar7 = puVar8;
            } while (uVar11 != 0);
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
            uVar11 = (ulong)uVar13;
            do {
              if (0x42 < uVar13) goto LAB_0768a0a4;
              uVar11 = uVar11 - 1;
              *puVar8 = unaff_x20[uVar11 & 0xffffffff];
              puVar8 = puVar8 + 1;
            } while (uVar11 != 0);
          }
        }
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return lVar6;
        }
      }
      goto LAB_0768a138;
    }
    if ((int)unaff_w25 < 0) {
      if (uVar13 < 0x42) {
        uVar9 = 0x2d;
FUN_07689fa8:
        unaff_x20[uVar13] = uVar9;
        uVar13 = uVar13 + 1;
        goto LAB_07689fb0;
      }
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_07689fb0;
      if (uVar13 < 0x42) {
        uVar9 = 0x20;
        goto FUN_07689fa8;
      }
    }
    else if (uVar13 < 0x42) {
      uVar9 = 0x2b;
      goto FUN_07689fa8;
    }
  }
  else if (unaff_w24 == 8) {
    if (uVar13 < 0x42) {
      uVar9 = 0x30;
      goto FUN_07689fa8;
    }
  }
  else {
    if (unaff_w24 != 0x10) goto LAB_07689fb0;
    if (uVar13 < 0x42) {
      unaff_x20[uVar13] = 0x78;
      if (uVar13 != 0x41) {
        (unaff_x20 + uVar13)[1] = 0x30;
        uVar13 = uVar13 + 2;
        goto LAB_07689fb0;
      }
    }
  }
LAB_0768a0a4:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0768a138:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


