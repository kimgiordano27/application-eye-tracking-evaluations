/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 074ef63c
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray(void)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ushort *puVar8;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  int unaff_w28;
  ulong uVar12;
  ulong *unaff_x29;
  undefined1 *in_stack_00000018;
  
  puVar3 = PTR_DAT_08f9f500;
  if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar6 = unaff_w28 - 0x30;
  if (9 < uVar6) {
    uVar12 = 0;
    uVar5 = 0;
    goto LAB_074efa00;
  }
  if (unaff_w28 == 0x30) {
    do {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w23 <= unaff_w24) {
        uVar12 = 0;
        goto LAB_074efb34;
      }
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      uVar11 = (ulong)uVar2;
    } while (uVar2 == 0x30);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar6 = uVar2 - 0x30;
    if (uVar6 < 10) goto LAB_074ef8f8;
    uVar7 = 0;
    uVar9 = unaff_w24;
LAB_074efa48:
    uVar6 = (uint)uVar11;
    bVar1 = false;
LAB_074efa4c:
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if ((uVar6 - 9 < 5) || (uVar6 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) != 0) {
        uVar9 = uVar9 + 1;
        if ((int)uVar9 < (int)unaff_w23) {
          puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
          do {
            if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_04031894();
            }
            uVar2 = *puVar8;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_074efac8;
            uVar9 = uVar9 + 1;
            puVar8 = puVar8 + 1;
          } while (unaff_w23 != uVar9);
        }
        else {
LAB_074efac8:
          if (uVar9 < unaff_w23)
          goto 
          Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty;
        }
        goto LAB_074efb18;
      }
    }
    else {
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar12 = FUN_074f172c();
      if ((uVar12 & 1) != 0) {
LAB_074efb18:
        uVar12 = uVar7;
        if (!bVar1) goto LAB_074efb34;
        goto LAB_074efb1c;
      }
    }
    uVar12 = 0;
    uVar5 = 0;
  }
  else {
LAB_074ef8f8:
    uVar9 = unaff_w24 + 0x12;
    iVar10 = 1;
    uVar7 = (ulong)uVar6;
    do {
      uVar12 = uVar7;
      if (unaff_w23 <= unaff_w24 + iVar10) goto LAB_074efb34;
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar10) * 2);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (9 < uVar2 - 0x30) {
        uVar11 = (ulong)(uint)uVar2;
        uVar9 = unaff_w24 + iVar10;
        goto LAB_074efa48;
      }
      iVar10 = iVar10 + 1;
      uVar12 = ((ulong)uVar2 + uVar7 * 10) - 0x30;
      uVar7 = uVar12;
    } while (iVar10 != 0x12);
    if (unaff_w23 <= uVar9) {
LAB_074efb34:
      uVar5 = 1;
      goto LAB_074efa00;
    }
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
    uVar11 = (ulong)uVar2;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (9 < uVar2 - 0x30) goto LAB_074efa48;
    uVar9 = unaff_w24 + 0x13;
    uVar7 = (uVar11 + uVar12 * 10) - 0x30;
    bVar1 = 0x7fffffffffffffff < uVar7 || 0xccccccccccccccc < (long)uVar12;
    if (unaff_w23 <= uVar9) goto LAB_074efb18;
    lVar4 = *(long *)puVar3;
    do {
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      uVar6 = (uint)uVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar4 = *(long *)puVar3;
      }
      if (9 < uVar2 - 0x30) goto LAB_074efa4c;
      uVar9 = uVar9 + 1;
      bVar1 = true;
    } while (unaff_w23 != uVar9);
LAB_074efb1c:
    uVar12 = 0;
    uVar5 = 0;
    *in_stack_00000018 = 1;
  }
LAB_074efa00:
  *unaff_x29 = uVar12;
  return uVar5;
}


