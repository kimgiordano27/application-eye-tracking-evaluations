/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ObjectCreationHandling
ENTRY_POINT: 07689e8c
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ObjectCreationHandling(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint in_w8;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  short sVar9;
  ulong uVar10;
  uint uVar11;
  undefined2 unaff_w19;
  undefined2 *unaff_x20;
  uint unaff_w21;
  undefined4 unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long unaff_x29;
  
  uVar11 = in_w8;
  if ((unaff_w21 & 0x80) != 0) {
    uVar11 = in_w8 & 0xffff;
  }
  if ((unaff_w21 & 0x40) != 0) {
    uVar11 = in_w8 & 0xff;
  }
  if (uVar11 == 0) {
    uVar11 = 1;
    *unaff_x20 = 0x30;
  }
  else {
    lVar5 = 0;
    do {
      uVar2 = 0;
      if (unaff_w24 != 0) {
        uVar2 = uVar11 / unaff_w24;
      }
      uVar1 = uVar11 - uVar2 * unaff_w24;
      sVar9 = 0x57;
      if (uVar1 < 10) {
        sVar9 = 0x30;
      }
      unaff_x20[lVar5] = sVar9 + (short)uVar1;
      if (uVar11 < unaff_w24) {
        uVar11 = (int)lVar5 + 1;
        goto LAB_07689f00;
      }
      lVar5 = lVar5 + 1;
      uVar11 = uVar2;
    } while (lVar5 != 0x42);
    uVar11 = 0;
  }
LAB_07689f00:
  if ((unaff_w24 == 10) || ((unaff_w21 >> 5 & 1) == 0)) {
    if (unaff_w24 != 10) {
LAB_07689fb0:
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_0767a564(unaff_w23,uVar11,0);
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
        iVar3 = *(int *)(lVar5 + 0x10) - uVar11;
        if ((unaff_w21 & 1) == 0) {
          if (0 < (int)uVar11) {
            uVar10 = (ulong)uVar11;
            puVar6 = puVar7;
            do {
              if (0x42 < uVar11) goto LAB_0768a0a4;
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
          if (0 < (int)uVar11) {
            uVar10 = (ulong)uVar11;
            do {
              if (0x42 < uVar11) goto LAB_0768a0a4;
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
      goto LAB_0768a138;
    }
    if (unaff_w25 < 0) {
      if (uVar11 < 0x42) {
        uVar8 = 0x2d;
FUN_07689fa8:
        unaff_x20[uVar11] = uVar8;
        uVar11 = uVar11 + 1;
        goto LAB_07689fb0;
      }
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_07689fb0;
      if (uVar11 < 0x42) {
        uVar8 = 0x20;
        goto FUN_07689fa8;
      }
    }
    else if (uVar11 < 0x42) {
      uVar8 = 0x2b;
      goto FUN_07689fa8;
    }
  }
  else if (unaff_w24 == 8) {
    if (uVar11 < 0x42) {
      uVar8 = 0x30;
      goto FUN_07689fa8;
    }
  }
  else {
    if (unaff_w24 != 0x10) goto LAB_07689fb0;
    if (uVar11 < 0x42) {
      unaff_x20[uVar11] = 0x78;
      if (uVar11 != 0x41) {
        (unaff_x20 + uVar11)[1] = 0x30;
        uVar11 = uVar11 + 2;
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


