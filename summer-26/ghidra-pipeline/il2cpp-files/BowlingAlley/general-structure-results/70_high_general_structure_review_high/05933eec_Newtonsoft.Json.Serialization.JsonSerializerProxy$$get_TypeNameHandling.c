/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameHandling
ENTRY_POINT: 05933eec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameHandling(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ulong uVar6;
  undefined2 unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  undefined4 unaff_w22;
  uint unaff_w23;
  uint uVar7;
  long unaff_x26;
  long unaff_x29;
  
  uVar7 = unaff_w23;
  if ((unaff_w21 >> 3 & 1) != 0) {
    if (0x42 < unaff_w23) {
LAB_05934024:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar7 = unaff_w23 + 1;
    *(undefined2 *)(unaff_x20 + (ulong)unaff_w23 * 2) = 0x20;
  }
  if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_059246fc(unaff_w22,uVar7,0);
  lVar3 = thunk_FUN_0329422c(uVar2,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  iVar1 = thunk_FUN_032f8ab8(0);
  puVar5 = (undefined2 *)(lVar3 + iVar1);
  iVar1 = *(int *)(lVar3 + 0x10) - uVar7;
  if ((unaff_w21 & 1) == 0) {
    if (0 < (int)uVar7) {
      uVar6 = (ulong)uVar7;
      puVar4 = puVar5;
      do {
        if (0x42 < uVar7 - 1) goto LAB_05934024;
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
    if (0 < (int)uVar7) {
      uVar6 = (ulong)uVar7;
      do {
        if (0x42 < uVar7 - 1) goto LAB_05934024;
        uVar6 = uVar6 - 1;
        *puVar5 = *(undefined2 *)(unaff_x20 + (uVar6 & 0xffffffff) * 2);
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}


