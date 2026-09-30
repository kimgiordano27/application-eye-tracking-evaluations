/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameAssemblyFormat
ENTRY_POINT: 07689fec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameAssemblyFormat(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ulong uVar4;
  undefined2 unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x26;
  long unaff_x29;
  
  iVar1 = thunk_FUN_04083428();
  puVar3 = (undefined2 *)(unaff_x23 + iVar1);
  iVar1 = *(int *)(unaff_x23 + 0x10) - unaff_w22;
  if ((unaff_x21 & 1) == 0) {
    if (0 < (int)unaff_w22) {
      uVar4 = (ulong)unaff_w22;
      puVar2 = puVar3;
      do {
        if (0x42 < unaff_w22) goto LAB_0768a0a4;
        uVar4 = uVar4 - 1;
        puVar3 = puVar2 + 1;
        *puVar2 = *(undefined2 *)(unaff_x20 + (uVar4 & 0xffffffff) * 2);
        puVar2 = puVar3;
      } while (uVar4 != 0);
    }
    if (0 < iVar1) {
      do {
        iVar1 = iVar1 + -1;
        *puVar3 = unaff_w19;
        puVar3 = puVar3 + 1;
      } while (iVar1 != 0);
    }
  }
  else {
    puVar2 = puVar3;
    if (0 < iVar1) {
      do {
        iVar1 = iVar1 + -1;
        puVar3 = puVar2 + 1;
        *puVar2 = unaff_w19;
        puVar2 = puVar3;
      } while (iVar1 != 0);
    }
    if (0 < (int)unaff_w22) {
      uVar4 = (ulong)unaff_w22;
      do {
        if (0x42 < unaff_w22) goto LAB_0768a0a4;
        uVar4 = uVar4 - 1;
        *puVar3 = *(undefined2 *)(unaff_x20 + (uVar4 & 0xffffffff) * 2);
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
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


