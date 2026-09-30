/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MissingMemberHandling
ENTRY_POINT: 05933d84
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MissingMemberHandling(void)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  ulong uVar9;
  short sVar10;
  undefined2 unaff_w19;
  undefined2 *unaff_x20;
  uint unaff_w21;
  undefined4 unaff_w22;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint unaff_w24;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  uVar13 = -unaff_x25;
  if (unaff_w24 != 10) {
    uVar13 = unaff_x25;
  }
  uVar14 = unaff_x25;
  if ((long)unaff_x25 < 0) {
    uVar14 = uVar13;
  }
  if ((unaff_w21 >> 6 & 1) == 0) {
    if ((unaff_w21 >> 7 & 1) != 0) {
      uVar14 = uVar14 & 0xffff;
      goto joined_r0x05933db4;
    }
    if ((unaff_w21 & 0x100) != 0) {
      uVar14 = uVar14 & 0xffffffff;
    }
    if (uVar14 == 0) goto LAB_05933e0c;
LAB_05933db8:
    uVar13 = 0;
    uVar9 = (ulong)unaff_w24;
    do {
      if (uVar13 == 0x43) {
        uVar13 = 0;
        break;
      }
      uVar1 = 0;
      if (uVar9 != 0) {
        uVar1 = uVar14 / uVar9;
      }
      iVar3 = (int)uVar14 - (int)uVar1 * unaff_w24;
      sVar10 = 0x30;
      if (9 < iVar3) {
        sVar10 = 0x57;
      }
      bVar2 = uVar9 <= uVar14;
      unaff_x20[uVar13] = sVar10 + (short)iVar3;
      uVar13 = uVar13 + 1;
      uVar14 = uVar1;
    } while (bVar2);
  }
  else {
    uVar14 = uVar14 & 0xff;
joined_r0x05933db4:
    if (uVar14 != 0) goto LAB_05933db8;
LAB_05933e0c:
    *unaff_x20 = 0x30;
    uVar13 = 1;
  }
  uVar14 = uVar13;
  if ((unaff_w24 != 10) && ((unaff_w21 >> 5 & 1) != 0)) {
    uVar11 = (uint)uVar13;
    if (unaff_w24 == 8) {
      if (0x42 < uVar11) goto LAB_05934024;
      uVar14 = (ulong)(uVar11 + 1);
      unaff_x20[uVar13 & 0xffffffff] = 0x30;
    }
    else if (unaff_w24 == 0x10) {
      if ((0x42 < uVar11) || (unaff_x20[uVar13 & 0xffffffff] = 0x78, uVar11 == 0x42))
      goto LAB_05934024;
      unaff_x20[uVar11 + 1] = 0x30;
      uVar14 = (ulong)(uVar11 + 2);
    }
    else if ((unaff_w21 >> 0xe & 1) != 0) {
      if ((0x42 < uVar11) || (unaff_x20[uVar13 & 0xffffffff] = 0x23, uVar11 == 0x42))
      goto LAB_05934024;
      sVar10 = (short)((int)unaff_w24 / 10);
      unaff_x20[uVar11 + 1] = (short)unaff_w24 + sVar10 * -10 + 0x30;
      if (0x40 < uVar11) goto LAB_05934024;
      uVar14 = (ulong)(uVar11 + 3);
      unaff_x20[uVar11 + 2] = sVar10 + 0x30;
    }
  }
  if (unaff_w24 == 10) {
    uVar11 = (uint)uVar14;
    if ((long)unaff_x25 < 0) {
      if (0x42 < uVar11) {
LAB_05934024:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      uVar8 = 0x2d;
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_05933f30;
      if (0x42 < uVar11) goto LAB_05934024;
      uVar8 = 0x20;
    }
    else {
      if (0x42 < uVar11) goto LAB_05934024;
      uVar8 = 0x2b;
    }
    unaff_x20[uVar14 & 0xffffffff] = uVar8;
    uVar14 = (ulong)(uVar11 + 1);
  }
LAB_05933f30:
  if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_059246fc(unaff_w22,uVar14 & 0xffffffff,0);
  lVar5 = thunk_FUN_0329422c(uVar4,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  iVar3 = thunk_FUN_032f8ab8(0);
  puVar7 = (undefined2 *)(lVar5 + iVar3);
  iVar12 = (int)uVar14;
  iVar3 = *(int *)(lVar5 + 0x10) - iVar12;
  if ((unaff_w21 & 1) == 0) {
    if (0 < iVar12) {
      uVar14 = uVar14 & 0xffffffff;
      puVar6 = puVar7;
      do {
        if (0x42 < iVar12 - 1U) goto LAB_05934024;
        uVar14 = uVar14 - 1;
        puVar7 = puVar6 + 1;
        *puVar6 = unaff_x20[uVar14 & 0xffffffff];
        puVar6 = puVar7;
      } while (uVar14 != 0);
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
    if (0 < iVar12) {
      uVar14 = uVar14 & 0xffffffff;
      do {
        if (0x42 < iVar12 - 1U) goto LAB_05934024;
        uVar14 = uVar14 - 1;
        *puVar7 = unaff_x20[uVar14 & 0xffffffff];
        puVar7 = puVar7 + 1;
      } while (uVar14 != 0);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


