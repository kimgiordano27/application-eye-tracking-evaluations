/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ObjectCreationHandling
ENTRY_POINT: 05933e38
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ObjectCreationHandling(void)

{
  uint uVar1;
  bool in_CY;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  ulong uVar8;
  undefined2 unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  undefined4 unaff_w22;
  uint unaff_w23;
  uint uVar9;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  if ((!in_CY) && (*(undefined2 *)(unaff_x20 + (ulong)unaff_w23 * 2) = 0x78, unaff_w23 != 0x42)) {
    uVar1 = unaff_w23 + 2;
    *(undefined2 *)(unaff_x20 + (ulong)(unaff_w23 + 1) * 2) = 0x30;
    uVar9 = uVar1;
    if (unaff_w24 == 10) {
      if (unaff_x25 < 0) {
        if (0x42 < uVar1) goto LAB_05934024;
        uVar7 = 0x2d;
      }
      else if ((unaff_w21 >> 4 & 1) == 0) {
        if ((unaff_w21 >> 3 & 1) == 0) goto LAB_05933f30;
        if (0x42 < uVar1) goto LAB_05934024;
        uVar7 = 0x20;
      }
      else {
        if (0x42 < uVar1) goto LAB_05934024;
        uVar7 = 0x2b;
      }
      uVar9 = unaff_w23 + 3;
      *(undefined2 *)(unaff_x20 + (ulong)uVar1 * 2) = uVar7;
    }
LAB_05933f30:
    if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_059246fc(unaff_w22,uVar9,0);
    lVar4 = thunk_FUN_0329422c(uVar3,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    iVar2 = thunk_FUN_032f8ab8(0);
    puVar6 = (undefined2 *)(lVar4 + iVar2);
    iVar2 = *(int *)(lVar4 + 0x10) - uVar9;
    if ((unaff_w21 & 1) == 0) {
      if (0 < (int)uVar9) {
        uVar8 = (ulong)uVar9;
        puVar5 = puVar6;
        do {
          if (0x42 < uVar9 - 1) goto LAB_05934024;
          uVar8 = uVar8 - 1;
          puVar6 = puVar5 + 1;
          *puVar5 = *(undefined2 *)(unaff_x20 + (uVar8 & 0xffffffff) * 2);
          puVar5 = puVar6;
        } while (uVar8 != 0);
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
      if (0 < (int)uVar9) {
        uVar8 = (ulong)uVar9;
        do {
          if (0x42 < uVar9 - 1) goto LAB_05934024;
          uVar8 = uVar8 - 1;
          *puVar6 = *(undefined2 *)(unaff_x20 + (uVar8 & 0xffffffff) * 2);
          puVar6 = puVar6 + 1;
        } while (uVar8 != 0);
      }
    }
    if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return lVar4;
  }
LAB_05934024:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


