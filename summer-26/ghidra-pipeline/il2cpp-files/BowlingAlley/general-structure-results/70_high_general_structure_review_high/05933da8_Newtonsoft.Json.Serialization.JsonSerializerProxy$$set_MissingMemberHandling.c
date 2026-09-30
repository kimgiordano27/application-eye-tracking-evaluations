/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MissingMemberHandling
ENTRY_POINT: 05933da8
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling(ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  short sVar9;
  undefined2 unaff_w19;
  undefined2 *unaff_x20;
  uint unaff_w21;
  undefined4 unaff_w22;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  if (param_1 == 0) {
    *unaff_x20 = 0x30;
    uVar12 = 1;
  }
  else {
    uVar12 = 0;
    uVar13 = (ulong)unaff_w24;
    do {
      if (uVar12 == 0x43) {
        uVar12 = 0;
        break;
      }
      uVar1 = 0;
      if (uVar13 != 0) {
        uVar1 = param_1 / uVar13;
      }
      iVar3 = (int)param_1 - (int)uVar1 * unaff_w24;
      sVar9 = 0x30;
      if (9 < iVar3) {
        sVar9 = 0x57;
      }
      bVar2 = uVar13 <= param_1;
      unaff_x20[uVar12] = sVar9 + (short)iVar3;
      uVar12 = uVar12 + 1;
      param_1 = uVar1;
    } while (bVar2);
  }
  uVar13 = uVar12;
  if ((unaff_w24 != 10) && ((unaff_w21 >> 5 & 1) != 0)) {
    uVar10 = (uint)uVar12;
    if (unaff_w24 == 8) {
      if (0x42 < uVar10) goto LAB_05934024;
      uVar13 = (ulong)(uVar10 + 1);
      unaff_x20[uVar12 & 0xffffffff] = 0x30;
    }
    else if (unaff_w24 == 0x10) {
      if ((0x42 < uVar10) || (unaff_x20[uVar12 & 0xffffffff] = 0x78, uVar10 == 0x42))
      goto LAB_05934024;
      unaff_x20[uVar10 + 1] = 0x30;
      uVar13 = (ulong)(uVar10 + 2);
    }
    else if ((unaff_w21 >> 0xe & 1) != 0) {
      if ((0x42 < uVar10) || (unaff_x20[uVar12 & 0xffffffff] = 0x23, uVar10 == 0x42))
      goto LAB_05934024;
      sVar9 = (short)((int)unaff_w24 / 10);
      unaff_x20[uVar10 + 1] = (short)unaff_w24 + sVar9 * -10 + 0x30;
      if (0x40 < uVar10) goto LAB_05934024;
      uVar13 = (ulong)(uVar10 + 3);
      unaff_x20[uVar10 + 2] = sVar9 + 0x30;
    }
  }
  if (unaff_w24 == 10) {
    uVar10 = (uint)uVar13;
    if (unaff_x25 < 0) {
      if (0x42 < uVar10) {
LAB_05934024:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      uVar8 = 0x2d;
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_05933f30;
      if (0x42 < uVar10) goto LAB_05934024;
      uVar8 = 0x20;
    }
    else {
      if (0x42 < uVar10) goto LAB_05934024;
      uVar8 = 0x2b;
    }
    unaff_x20[uVar13 & 0xffffffff] = uVar8;
    uVar13 = (ulong)(uVar10 + 1);
  }
LAB_05933f30:
  if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_059246fc(unaff_w22,uVar13 & 0xffffffff,0);
  lVar5 = thunk_FUN_0329422c(uVar4,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  iVar3 = thunk_FUN_032f8ab8(0);
  puVar7 = (undefined2 *)(lVar5 + iVar3);
  iVar11 = (int)uVar13;
  iVar3 = *(int *)(lVar5 + 0x10) - iVar11;
  if ((unaff_w21 & 1) == 0) {
    if (0 < iVar11) {
      uVar13 = uVar13 & 0xffffffff;
      puVar6 = puVar7;
      do {
        if (0x42 < iVar11 - 1U) goto LAB_05934024;
        uVar13 = uVar13 - 1;
        puVar7 = puVar6 + 1;
        *puVar6 = unaff_x20[uVar13 & 0xffffffff];
        puVar6 = puVar7;
      } while (uVar13 != 0);
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
    if (0 < iVar11) {
      uVar13 = uVar13 & 0xffffffff;
      do {
        if (0x42 < iVar11 - 1U) goto LAB_05934024;
        uVar13 = uVar13 - 1;
        *puVar7 = unaff_x20[uVar13 & 0xffffffff];
        puVar7 = puVar7 + 1;
      } while (uVar13 != 0);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}


