/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_NullValueHandling
ENTRY_POINT: 05933df0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_NullValueHandling(void)

{
  short sVar1;
  undefined1 in_CY;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  ulong in_x9;
  short in_w10;
  short in_w11;
  ulong in_x12;
  undefined2 unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  undefined4 unaff_w22;
  uint uVar8;
  int iVar9;
  ulong unaff_x23;
  ulong uVar10;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  while ((bool)in_CY) {
    if (unaff_x23 == 0x43) {
      unaff_x23 = 0;
      break;
    }
    uVar10 = 0;
    if (in_x9 != 0) {
      uVar10 = in_x12 / in_x9;
    }
    iVar2 = (int)in_x12 - (int)uVar10 * (int)in_x9;
    sVar1 = in_w11;
    if (9 < iVar2) {
      sVar1 = in_w10;
    }
    in_CY = in_x9 <= in_x12;
    *(short *)(unaff_x20 + unaff_x23 * 2) = sVar1 + (short)iVar2;
    unaff_x23 = unaff_x23 + 1;
    in_x12 = uVar10;
  }
  uVar10 = unaff_x23;
  if ((unaff_w24 != 10) && ((unaff_w21 >> 5 & 1) != 0)) {
    uVar8 = (uint)unaff_x23;
    if (unaff_w24 == 8) {
      if (0x42 < uVar8) goto LAB_05934024;
      uVar10 = (ulong)(uVar8 + 1);
      *(undefined2 *)(unaff_x20 + (unaff_x23 & 0xffffffff) * 2) = 0x30;
    }
    else if (unaff_w24 == 0x10) {
      if ((0x42 < uVar8) ||
         (*(undefined2 *)(unaff_x20 + (unaff_x23 & 0xffffffff) * 2) = 0x78, uVar8 == 0x42))
      goto LAB_05934024;
      *(undefined2 *)(unaff_x20 + (ulong)(uVar8 + 1) * 2) = 0x30;
      uVar10 = (ulong)(uVar8 + 2);
    }
    else if ((unaff_w21 >> 0xe & 1) != 0) {
      if ((0x42 < uVar8) ||
         (*(undefined2 *)(unaff_x20 + (unaff_x23 & 0xffffffff) * 2) = 0x23, uVar8 == 0x42))
      goto LAB_05934024;
      sVar1 = (short)(unaff_w24 / 10);
      *(short *)(unaff_x20 + (ulong)(uVar8 + 1) * 2) = (short)unaff_w24 + sVar1 * -10 + 0x30;
      if (0x40 < uVar8) goto LAB_05934024;
      uVar10 = (ulong)(uVar8 + 3);
      *(short *)(unaff_x20 + (ulong)(uVar8 + 2) * 2) = sVar1 + 0x30;
    }
  }
  if (unaff_w24 == 10) {
    uVar8 = (uint)uVar10;
    if (unaff_x25 < 0) {
      if (0x42 < uVar8) {
LAB_05934024:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      uVar7 = 0x2d;
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_05933f30;
      if (0x42 < uVar8) goto LAB_05934024;
      uVar7 = 0x20;
    }
    else {
      if (0x42 < uVar8) goto LAB_05934024;
      uVar7 = 0x2b;
    }
    *(undefined2 *)(unaff_x20 + (uVar10 & 0xffffffff) * 2) = uVar7;
    uVar10 = (ulong)(uVar8 + 1);
  }
LAB_05933f30:
  if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar3 = FUN_059246fc(unaff_w22,uVar10 & 0xffffffff,0);
  lVar4 = thunk_FUN_0329422c(uVar3,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  iVar2 = thunk_FUN_032f8ab8(0);
  puVar6 = (undefined2 *)(lVar4 + iVar2);
  iVar9 = (int)uVar10;
  iVar2 = *(int *)(lVar4 + 0x10) - iVar9;
  if ((unaff_w21 & 1) == 0) {
    if (0 < iVar9) {
      uVar10 = uVar10 & 0xffffffff;
      puVar5 = puVar6;
      do {
        if (0x42 < iVar9 - 1U) goto LAB_05934024;
        uVar10 = uVar10 - 1;
        puVar6 = puVar5 + 1;
        *puVar5 = *(undefined2 *)(unaff_x20 + (uVar10 & 0xffffffff) * 2);
        puVar5 = puVar6;
      } while (uVar10 != 0);
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
    if (0 < iVar9) {
      uVar10 = uVar10 & 0xffffffff;
      do {
        if (0x42 < iVar9 - 1U) goto LAB_05934024;
        uVar10 = uVar10 - 1;
        *puVar6 = *(undefined2 *)(unaff_x20 + (uVar10 & 0xffffffff) * 2);
        puVar6 = puVar6 + 1;
      } while (uVar10 != 0);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}


