/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
ENTRY_POINT: 074c0330
PROGRAM: cac-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList(void)

{
  bool bVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  int unaff_w19;
  ushort *puVar7;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long unaff_x26;
  long *plVar11;
  int unaff_w28;
  ulong uVar12;
  long *unaff_x29;
  undefined1 *in_stack_00000018;
  
  plVar11 = *(long **)(unaff_x26 + 0x2c0);
  if (*(int *)(*plVar11 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  uVar5 = unaff_w28 - 0x30;
  if (9 < uVar5) {
    lVar3 = 0;
    uVar4 = 0;
    goto LAB_074c0498;
  }
  if (unaff_w28 == 0x30) {
    do {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w23 <= unaff_w24) {
        uVar12 = 0;
        goto LAB_074c05cc;
      }
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      uVar10 = (ulong)uVar2;
    } while (uVar2 == 0x30);
    if (*(int *)(*plVar11 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar5 = uVar2 - 0x30;
    if (uVar5 < 10) goto LAB_074c0390;
    uVar6 = 0;
    uVar8 = unaff_w24;
LAB_074c04e0:
    uVar5 = (uint)uVar10;
    bVar1 = false;
LAB_074c04e4:
    if (*(int *)(*plVar11 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    if ((uVar5 - 9 < 5) || (uVar5 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) != 0) {
        uVar8 = uVar8 + 1;
        if ((int)uVar8 < (int)unaff_w23) {
          puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
          do {
            if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_03f13634();
            }
            uVar2 = *puVar7;
            if (*(int *)(*plVar11 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_074c0560;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while (unaff_w23 != uVar8);
        }
        else {
LAB_074c0560:
          if (uVar8 < unaff_w23) goto LAB_074c0574;
        }
        goto LAB_074c05b0;
      }
    }
    else {
LAB_074c0574:
      if (*(int *)(*plVar11 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar12 = FUN_074c21c4();
      if ((uVar12 & 1) != 0) {
LAB_074c05b0:
        uVar12 = uVar6;
        if (!bVar1) goto LAB_074c05cc;
        goto LAB_074c05b4;
      }
    }
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
LAB_074c0390:
    uVar8 = unaff_w24 + 0x12;
    iVar9 = 1;
    uVar6 = (ulong)uVar5;
    do {
      uVar12 = uVar6;
      if (unaff_w23 <= unaff_w24 + iVar9) goto LAB_074c05cc;
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar9) * 2);
      if (*(int *)(*plVar11 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      if (9 < uVar2 - 0x30) {
        uVar10 = (ulong)(uint)uVar2;
        uVar8 = unaff_w24 + iVar9;
        goto LAB_074c04e0;
      }
      iVar9 = iVar9 + 1;
      uVar12 = ((ulong)uVar2 + uVar6 * 10) - 0x30;
      uVar6 = uVar12;
    } while (iVar9 != 0x12);
    if (unaff_w23 <= uVar8) {
LAB_074c05cc:
      uVar4 = 1;
      lVar3 = uVar12 * (long)unaff_w19;
      goto LAB_074c0498;
    }
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
    uVar10 = (ulong)uVar2;
    if (*(int *)(*plVar11 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    if (9 < uVar2 - 0x30) goto LAB_074c04e0;
    uVar8 = unaff_w24 + 0x13;
    uVar6 = (uVar10 + uVar12 * 10) - 0x30;
    bVar1 = (ulong)(1U - unaff_w19 >> 1) + 0x7fffffffffffffff < uVar6 ||
            0xccccccccccccccc < (long)uVar12;
    if (unaff_w23 <= uVar8) goto LAB_074c05b0;
    lVar3 = *plVar11;
    do {
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
      uVar5 = (uint)uVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar3 = *plVar11;
      }
      if (9 < uVar2 - 0x30) goto LAB_074c04e4;
      uVar8 = uVar8 + 1;
      bVar1 = true;
    } while (unaff_w23 != uVar8);
LAB_074c05b4:
    lVar3 = 0;
    uVar4 = 0;
    *in_stack_00000018 = 1;
  }
LAB_074c0498:
  *unaff_x29 = lVar3;
  return uVar4;
}


