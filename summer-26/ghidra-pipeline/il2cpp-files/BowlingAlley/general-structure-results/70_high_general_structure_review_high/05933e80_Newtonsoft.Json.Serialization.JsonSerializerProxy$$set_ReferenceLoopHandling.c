/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ReferenceLoopHandling
ENTRY_POINT: 05933e80
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ReferenceLoopHandling(void)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  ulong uVar9;
  undefined2 unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  undefined4 unaff_w22;
  uint unaff_w23;
  uint uVar10;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  if ((unaff_w23 < 0x43) &&
     (*(undefined2 *)(unaff_x20 + (ulong)unaff_w23 * 2) = 0x23, unaff_w23 != 0x42)) {
    sVar2 = (short)(unaff_w24 / 10);
    *(short *)(unaff_x20 + (ulong)(unaff_w23 + 1) * 2) = (short)unaff_w24 + sVar2 * -10 + 0x30;
    if (unaff_w23 < 0x41) {
      uVar1 = unaff_w23 + 3;
      *(short *)(unaff_x20 + (ulong)(unaff_w23 + 2) * 2) = sVar2 + 0x30;
      uVar10 = uVar1;
      if (unaff_w24 == 10) {
        if (unaff_x25 < 0) {
          if (0x42 < uVar1) goto LAB_05934024;
          uVar8 = 0x2d;
        }
        else if ((unaff_w21 >> 4 & 1) == 0) {
          if ((unaff_w21 >> 3 & 1) == 0) goto LAB_05933f30;
          if (0x42 < uVar1) goto LAB_05934024;
          uVar8 = 0x20;
        }
        else {
          if (0x42 < uVar1) goto LAB_05934024;
          uVar8 = 0x2b;
        }
        uVar10 = unaff_w23 + 4;
        *(undefined2 *)(unaff_x20 + (ulong)uVar1 * 2) = uVar8;
      }
LAB_05933f30:
      if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar4 = FUN_059246fc(unaff_w22,uVar10,0);
      lVar5 = thunk_FUN_0329422c(uVar4,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      iVar3 = thunk_FUN_032f8ab8(0);
      puVar7 = (undefined2 *)(lVar5 + iVar3);
      iVar3 = *(int *)(lVar5 + 0x10) - uVar10;
      if ((unaff_w21 & 1) == 0) {
        if (0 < (int)uVar10) {
          uVar9 = (ulong)uVar10;
          puVar6 = puVar7;
          do {
            if (0x42 < uVar10 - 1) goto LAB_05934024;
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
            if (0x42 < uVar10 - 1) goto LAB_05934024;
            uVar9 = uVar9 - 1;
            *puVar7 = *(undefined2 *)(unaff_x20 + (uVar9 & 0xffffffff) * 2);
            puVar7 = puVar7 + 1;
          } while (uVar9 != 0);
        }
      }
      if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return lVar5;
    }
  }
LAB_05934024:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


