/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameHandling
ENTRY_POINT: 07689f6c
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint in_w8;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 in_w9;
  ulong uVar6;
  undefined2 unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined4 unaff_w23;
  long unaff_x26;
  long unaff_x29;
  
  *(undefined2 *)(unaff_x20 + (unaff_x22 & 0xffffffff) * 2) = in_w9;
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_0767a564(unaff_w23,in_w8,0);
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
    iVar1 = *(int *)(lVar3 + 0x10) - in_w8;
    if ((unaff_x21 & 1) == 0) {
      if (0 < (int)in_w8) {
        uVar6 = (ulong)in_w8;
        puVar4 = puVar5;
        do {
          if (0x42 < in_w8) goto LAB_0768a0a4;
          uVar6 = uVar6 - 1;
          puVar5 = puVar4 + 1;
          *puVar4 = *(undefined2 *)(unaff_x20 + (uVar6 & 0xffffffff) * 2);
          puVar4 = puVar5;
        } while (uVar6 != 0);
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
      if (0 < (int)in_w8) {
        uVar6 = (ulong)in_w8;
        do {
          if (0x42 < in_w8) goto LAB_0768a0a4;
          uVar6 = uVar6 - 1;
          *puVar5 = *(undefined2 *)(unaff_x20 + (uVar6 & 0xffffffff) * 2);
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
    }
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return lVar3;
    }
  }
LAB_0768a138:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0768a0a4:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  goto LAB_0768a138;
}


