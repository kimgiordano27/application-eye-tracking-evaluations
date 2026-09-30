/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$add_Error
ENTRY_POINT: 05933bc4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__add_Error(long param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ulong uVar4;
  undefined2 unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  uint unaff_w23;
  long unaff_x26;
  long unaff_x29;
  
  iVar1 = thunk_FUN_032f8ab8(0);
  puVar3 = (undefined2 *)(param_1 + iVar1);
  iVar1 = *(int *)(param_1 + 0x10) - unaff_w23;
  if ((unaff_x21 & 1) == 0) {
    if (0 < (int)unaff_w23) {
      uVar4 = (ulong)unaff_w23;
      puVar2 = puVar3;
      do {
        if (0x41 < unaff_w23 - 1) {
LAB_05933c84:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
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
    if (0 < (int)unaff_w23) {
      uVar4 = (ulong)unaff_w23;
      do {
        if (0x41 < unaff_w23 - 1) goto LAB_05933c84;
        uVar4 = uVar4 - 1;
        *puVar3 = *(undefined2 *)(unaff_x20 + (uVar4 & 0xffffffff) * 2);
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


