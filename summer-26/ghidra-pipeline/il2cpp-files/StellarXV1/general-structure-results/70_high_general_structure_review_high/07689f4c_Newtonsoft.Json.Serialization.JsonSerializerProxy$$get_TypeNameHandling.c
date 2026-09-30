/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameHandling
ENTRY_POINT: 07689f4c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameHandling(void)

{
  bool in_ZR;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  ulong uVar7;
  undefined2 unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  uint uVar8;
  undefined4 unaff_w23;
  int unaff_w25;
  long unaff_x26;
  long unaff_x29;
  
  uVar8 = unaff_w22;
  if (in_ZR) {
    if (unaff_w25 < 0) {
      if (unaff_w22 < 0x42) {
        uVar6 = 0x2d;
FUN_07689fa8:
        uVar8 = unaff_w22 + 1;
        *(undefined2 *)(unaff_x20 + (ulong)unaff_w22 * 2) = uVar6;
        goto LAB_07689fb0;
      }
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_07689fb0;
      if (unaff_w22 < 0x42) {
        uVar6 = 0x20;
        goto FUN_07689fa8;
      }
    }
    else if (unaff_w22 < 0x42) {
      uVar6 = 0x2b;
      goto FUN_07689fa8;
    }
LAB_0768a0a4:
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
  }
  else {
LAB_07689fb0:
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar2 = FUN_0767a564(unaff_w23,uVar8,0);
    lVar3 = thunk_FUN_040b28f8(uVar2,0);
    if (lVar3 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
    else {
      iVar1 = thunk_FUN_04083428(0);
      puVar5 = (undefined2 *)(lVar3 + iVar1);
      iVar1 = *(int *)(lVar3 + 0x10) - uVar8;
      if ((unaff_w21 & 1) == 0) {
        if (0 < (int)uVar8) {
          uVar7 = (ulong)uVar8;
          puVar4 = puVar5;
          do {
            if (0x42 < uVar8) goto LAB_0768a0a4;
            uVar7 = uVar7 - 1;
            puVar5 = puVar4 + 1;
            *puVar4 = *(undefined2 *)(unaff_x20 + (uVar7 & 0xffffffff) * 2);
            puVar4 = puVar5;
          } while (uVar7 != 0);
        }
        if (0 < iVar1) {
          do {
            iVar1 = iVar1 + -1;
            *puVar5 = unaff_w19;
            puVar5 = puVar5 + 1;
          } while (iVar1 != 0);
        }
      }
      else {
        puVar4 = puVar5;
        if (0 < iVar1) {
          do {
            iVar1 = iVar1 + -1;
            puVar5 = puVar4 + 1;
            *puVar4 = unaff_w19;
            puVar4 = puVar5;
          } while (iVar1 != 0);
        }
        if (0 < (int)uVar8) {
          uVar7 = (ulong)uVar8;
          do {
            if (0x42 < uVar8) goto LAB_0768a0a4;
            uVar7 = uVar7 - 1;
            *puVar5 = *(undefined2 *)(unaff_x20 + (uVar7 & 0xffffffff) * 2);
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
        }
      }
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


