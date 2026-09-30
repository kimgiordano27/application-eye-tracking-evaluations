/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MetadataPropertyHandling
ENTRY_POINT: 05933f58
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MetadataPropertyHandling
               (undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ulong uVar5;
  undefined2 unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  uint unaff_w23;
  long unaff_x26;
  long unaff_x29;
  
  lVar2 = thunk_FUN_0329422c(param_1,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  iVar1 = thunk_FUN_032f8ab8(0);
  puVar4 = (undefined2 *)(lVar2 + iVar1);
  iVar1 = *(int *)(lVar2 + 0x10) - unaff_w23;
  if ((unaff_x21 & 1) == 0) {
    if (0 < (int)unaff_w23) {
      uVar5 = (ulong)unaff_w23;
      puVar3 = puVar4;
      do {
        if (0x42 < unaff_w23 - 1) {
LAB_05934024:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        uVar5 = uVar5 - 1;
        puVar4 = puVar3 + 1;
        *puVar3 = *(undefined2 *)(unaff_x20 + (uVar5 & 0xffffffff) * 2);
        puVar3 = puVar4;
      } while (uVar5 != 0);
    }
    if (0 < iVar1) {
      do {
        iVar1 = iVar1 + -1;
        *puVar4 = unaff_w19;
        puVar4 = puVar4 + 1;
      } while (iVar1 != 0);
    }
  }
  else {
    puVar3 = puVar4;
    if (0 < iVar1) {
      do {
        iVar1 = iVar1 + -1;
        puVar4 = puVar3 + 1;
        *puVar3 = unaff_w19;
        puVar3 = puVar4;
      } while (iVar1 != 0);
    }
    if (0 < (int)unaff_w23) {
      uVar5 = (ulong)unaff_w23;
      do {
        if (0x42 < unaff_w23 - 1) goto LAB_05934024;
        uVar5 = uVar5 - 1;
        *puVar4 = *(undefined2 *)(unaff_x20 + (uVar5 & 0xffffffff) * 2);
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}


