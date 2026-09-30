/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Culture
ENTRY_POINT: 0768a35c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Culture(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  undefined2 unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  uint unaff_w22;
  undefined4 unaff_w23;
  long unaff_x26;
  long unaff_x29;
  
  uVar1 = unaff_w22 + 1;
  *(undefined2 *)(unaff_x20 + (ulong)unaff_w22 * 2) = 0x2b;
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar3 = FUN_0767a564(unaff_w23,uVar1,0);
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
    iVar2 = *(int *)(lVar4 + 0x10) - uVar1;
    if ((unaff_x21 & 1) == 0) {
      if (0 < (int)uVar1) {
        uVar7 = (ulong)uVar1;
        puVar5 = puVar6;
        do {
          if (0x43 < uVar1) goto LAB_0768a460;
          uVar7 = uVar7 - 1;
          puVar6 = puVar5 + 1;
          *puVar5 = *(undefined2 *)(unaff_x20 + (uVar7 & 0xffffffff) * 2);
          puVar5 = puVar6;
        } while (uVar7 != 0);
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
      if (0 < (int)uVar1) {
        uVar7 = (ulong)uVar1;
        do {
          if (0x43 < uVar1) goto LAB_0768a460;
          uVar7 = uVar7 - 1;
          *puVar6 = *(undefined2 *)(unaff_x20 + (uVar7 & 0xffffffff) * 2);
          puVar6 = puVar6 + 1;
        } while (uVar7 != 0);
      }
    }
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return lVar4;
    }
  }
LAB_0768a4f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0768a460:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  goto LAB_0768a4f4;
}


