/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CalculatePropertyValues
ENTRY_POINT: 06761454
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CalculatePropertyValues
               (long param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  short in_w9;
  undefined2 uVar8;
  short in_w10;
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
    uVar2 = in_w11 - uVar10 * unaff_w24;
    sVar1 = in_w10;
    if (uVar2 < 10) {
      sVar1 = in_w9;
    }
    *(short *)(unaff_x20 + param_1 * 2) = sVar1 + (short)uVar2;
    if (in_w11 < unaff_w24) {
      uVar10 = (int)param_1 + 1;
      goto LAB_067614a0;
    }
    param_1 = param_1 + 1;
    in_w11 = uVar10;
  } while (param_1 != 0x42);
  uVar10 = 0;
LAB_067614a0:
  if ((unaff_w24 == 10) || ((unaff_w21 >> 5 & 1) == 0)) {
    if (unaff_w24 != 10) {
LAB_06761550:
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar4 = FUN_06751c44(unaff_w23,uVar10,0);
      lVar5 = thunk_FUN_03ac4ebc(uVar4,0);
      if (lVar5 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
      }
      else {
        iVar3 = thunk_FUN_03a964ec(0);
        puVar7 = (undefined2 *)(lVar5 + iVar3);
        iVar3 = *(int *)(lVar5 + 0x10) - uVar10;
        if ((unaff_w21 & 1) == 0) {
          if (0 < (int)uVar10) {
            uVar9 = (ulong)uVar10;
            puVar6 = puVar7;
            do {
              if (0x42 < uVar10) goto LAB_06761644;
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
              if (0x42 < uVar10) goto LAB_06761644;
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
      goto LAB_067616d8;
    }
    if (unaff_w25 < 0) {
      if (uVar10 < 0x42) {
        uVar8 = 0x2d;
LAB_06761548:
        *(undefined2 *)(unaff_x20 + (ulong)uVar10 * 2) = uVar8;
        uVar10 = uVar10 + 1;
        goto LAB_06761550;
      }
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_06761550;
      if (uVar10 < 0x42) {
        uVar8 = 0x20;
        goto LAB_06761548;
      }
    }
    else if (uVar10 < 0x42) {
      uVar8 = 0x2b;
      goto LAB_06761548;
    }
  }
  else if (unaff_w24 == 8) {
    if (uVar10 < 0x42) {
      uVar8 = 0x30;
      goto LAB_06761548;
    }
  }
  else {
    if (unaff_w24 != 0x10) goto LAB_06761550;
    if (uVar10 < 0x42) {
      puVar7 = (undefined2 *)(unaff_x20 + (ulong)uVar10 * 2);
      *puVar7 = 0x78;
      if (uVar10 != 0x41) {
        puVar7[1] = 0x30;
        uVar10 = uVar10 + 2;
        goto LAB_06761550;
      }
    }
  }
LAB_06761644:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
LAB_067616d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


