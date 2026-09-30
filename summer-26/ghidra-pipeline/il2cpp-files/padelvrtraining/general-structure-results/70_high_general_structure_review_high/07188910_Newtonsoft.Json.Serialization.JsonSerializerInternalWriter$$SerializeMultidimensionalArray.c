/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 07188910
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_21;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (void)

{
  short sVar1;
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
  uint uVar10;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  uVar9 = unaff_w23;
  if ((unaff_w21 >> 5 & 1) != 0) {
    if (unaff_w24 == 8) {
      if (0x42 < unaff_w23)
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString;
      uVar9 = unaff_w23 + 1;
      *(undefined2 *)(unaff_x20 + (ulong)unaff_w23 * 2) = 0x30;
    }
    else if (unaff_w24 == 0x10) {
      if ((0x42 < unaff_w23) ||
         (*(undefined2 *)(unaff_x20 + (ulong)unaff_w23 * 2) = 0x78, unaff_w23 == 0x42))
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString;
      *(undefined2 *)(unaff_x20 + (ulong)(unaff_w23 + 1) * 2) = 0x30;
      uVar9 = unaff_w23 + 2;
    }
    else if ((unaff_w21 >> 0xe & 1) != 0) {
      if ((0x42 < unaff_w23) ||
         (*(undefined2 *)(unaff_x20 + (ulong)unaff_w23 * 2) = 0x23, unaff_w23 == 0x42))
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString;
      sVar1 = (short)(unaff_w24 / 10);
      *(short *)(unaff_x20 + (ulong)(unaff_w23 + 1) * 2) = (short)unaff_w24 + sVar1 * -10 + 0x30;
      if (0x40 < unaff_w23)
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString;
      uVar9 = unaff_w23 + 3;
      *(short *)(unaff_x20 + (ulong)(unaff_w23 + 2) * 2) = sVar1 + 0x30;
    }
  }
  uVar10 = uVar9;
  if (unaff_w24 == 10) {
    if (unaff_x25 < 0) {
      if (0x42 < uVar9) {
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      uVar7 = 0x2d;
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_07188a20;
      if (0x42 < uVar9)
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString;
      uVar7 = 0x20;
    }
    else {
      if (0x42 < uVar9)
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString;
      uVar7 = 0x2b;
    }
    uVar10 = uVar9 + 1;
    *(undefined2 *)(unaff_x20 + (ulong)uVar9 * 2) = uVar7;
  }
LAB_07188a20:
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar3 = FUN_07179324(unaff_w22,uVar10,0);
  lVar4 = thunk_FUN_03d8fde4(uVar3,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar2 = thunk_FUN_03d2dfa8(0);
  puVar6 = (undefined2 *)(lVar4 + iVar2);
  iVar2 = *(int *)(lVar4 + 0x10) - uVar10;
  if ((unaff_w21 & 1) == 0) {
    if (0 < (int)uVar10) {
      uVar8 = (ulong)uVar10;
      puVar5 = puVar6;
      do {
        if (0x42 < uVar10 - 1)
        goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString;
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
    if (0 < (int)uVar10) {
      uVar8 = (ulong)uVar10;
      do {
        if (0x42 < uVar10 - 1)
        goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString;
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


