/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ObjectCreationHandling
ENTRY_POINT: 07689eac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ObjectCreationHandling(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  short sVar8;
  ulong uVar9;
  uint in_w11;
  undefined2 unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar10;
  undefined4 unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long unaff_x29;
  
  do {
    uVar10 = 0;
    if (unaff_w24 != 0) {
      uVar10 = in_w11 / unaff_w24;
    }
    uVar1 = in_w11 - uVar10 * unaff_w24;
    sVar8 = 0x57;
    if (uVar1 < 10) {
      sVar8 = 0x30;
    }
    *(short *)(unaff_x20 + param_1 * 2) = sVar8 + (short)uVar1;
    if (in_w11 < unaff_w24) {
      uVar10 = (int)param_1 + 1;
      goto LAB_07689f00;
    }
    param_1 = param_1 + 1;
    in_w11 = uVar10;
  } while (param_1 != 0x42);
  uVar10 = 0;
LAB_07689f00:
  if ((unaff_w24 == 10) || ((unaff_w21 >> 5 & 1) == 0)) {
    if (unaff_w24 != 10) {
LAB_07689fb0:
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar3 = FUN_0767a564(unaff_w23,uVar10,0);
      lVar4 = thunk_FUN_040b28f8(uVar3,0);
      if (lVar4 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        iVar2 = thunk_FUN_04083428(0);
        puVar6 = (undefined2 *)(lVar4 + iVar2);
        iVar2 = *(int *)(lVar4 + 0x10) - uVar10;
        if ((unaff_w21 & 1) == 0) {
          if (0 < (int)uVar10) {
            uVar9 = (ulong)uVar10;
            puVar5 = puVar6;
            do {
              if (0x42 < uVar10) goto LAB_0768a0a4;
              uVar9 = uVar9 - 1;
              puVar6 = puVar5 + 1;
              *puVar5 = *(undefined2 *)(unaff_x20 + (uVar9 & 0xffffffff) * 2);
              puVar5 = puVar6;
            } while (uVar9 != 0);
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
          if (0 < (int)uVar10) {
            uVar9 = (ulong)uVar10;
            do {
              if (0x42 < uVar10) goto LAB_0768a0a4;
              uVar9 = uVar9 - 1;
              *puVar6 = *(undefined2 *)(unaff_x20 + (uVar9 & 0xffffffff) * 2);
              puVar6 = puVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return lVar4;
        }
      }
      goto LAB_0768a138;
    }
    if (unaff_w25 < 0) {
      if (uVar10 < 0x42) {
        uVar7 = 0x2d;
FUN_07689fa8:
        *(undefined2 *)(unaff_x20 + (ulong)uVar10 * 2) = uVar7;
        uVar10 = uVar10 + 1;
        goto LAB_07689fb0;
      }
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_07689fb0;
      if (uVar10 < 0x42) {
        uVar7 = 0x20;
        goto FUN_07689fa8;
      }
    }
    else if (uVar10 < 0x42) {
      uVar7 = 0x2b;
      goto FUN_07689fa8;
    }
  }
  else if (unaff_w24 == 8) {
    if (uVar10 < 0x42) {
      uVar7 = 0x30;
      goto FUN_07689fa8;
    }
  }
  else {
    if (unaff_w24 != 0x10) goto LAB_07689fb0;
    if (uVar10 < 0x42) {
      puVar6 = (undefined2 *)(unaff_x20 + (ulong)uVar10 * 2);
      *puVar6 = 0x78;
      if (uVar10 != 0x41) {
        puVar6[1] = 0x30;
        uVar10 = uVar10 + 2;
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


