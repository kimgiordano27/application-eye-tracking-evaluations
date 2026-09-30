/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 0177c0e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription(void)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 uVar5;
  int in_w8;
  long lVar6;
  long *unaff_x19;
  uint uVar7;
  ulong uVar8;
  ushort *puVar9;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  undefined1 *unaff_x27;
  long *unaff_x28;
  int unaff_w29;
  
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = unaff_w29 - 0x30;
  if (9 < uVar10) goto LAB_0177c384;
  if (unaff_w29 == 0x30) {
    do {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w21 <= unaff_w24) {
        uVar11 = 0;
        goto LAB_0177c270;
      }
      uVar3 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
      uVar7 = (uint)uVar3;
      uVar10 = uVar3 - 0x30;
    } while (uVar10 == 0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (uVar10 < 10) goto LAB_0177c130;
    uVar11 = 0;
    bVar4 = false;
LAB_0177c29c:
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((uVar7 - 9 < 5) || (uVar7 == 0x20)) {
      if ((unaff_w23 >> 1 & 1) == 0) goto LAB_0177c384;
      uVar10 = unaff_w24 + 1;
      if ((int)uVar10 < (int)unaff_w21) {
        puVar9 = (ushort *)(unaff_x22 + (long)(int)uVar10 * 2);
        do {
          if (unaff_w21 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar3 = *puVar9;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0177c310;
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (unaff_w21 != uVar10);
      }
      else {
LAB_0177c310:
        if (uVar10 < unaff_w21) goto LAB_0177c324;
      }
    }
    else {
LAB_0177c324:
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_0177dfe4();
      if ((uVar8 & 1) == 0) {
LAB_0177c384:
        lVar6 = 0;
        uVar5 = 0;
        goto LAB_0177c38c;
      }
    }
    if (!bVar4) {
LAB_0177c270:
      lVar6 = uVar11 * (long)unaff_w25;
      uVar5 = 1;
      goto LAB_0177c38c;
    }
  }
  else {
LAB_0177c130:
    uVar7 = unaff_w24 + 1;
    uVar11 = (ulong)(int)uVar10;
    iVar12 = -0x11;
    do {
      if (unaff_w21 <= uVar7) goto LAB_0177c270;
      uVar3 = *(ushort *)(unaff_x22 + (long)(int)(unaff_w24 + iVar12 + 0x12) * 2);
      uVar8 = (ulong)uVar3;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (9 < uVar3 - 0x30) {
        uVar10 = unaff_w24 + iVar12 + 0x12;
        goto LAB_0177c28c;
      }
      uVar7 = unaff_w24 + iVar12 + 0x13;
      bVar4 = iVar12 != -1;
      iVar12 = iVar12 + 1;
      uVar11 = (uVar8 + uVar11 * 10) - 0x30;
    } while (bVar4);
    if (unaff_w21 <= uVar7) goto LAB_0177c270;
    uVar3 = *(ushort *)(unaff_x22 + (long)(int)(unaff_w24 + 0x12) * 2);
    uVar8 = (ulong)uVar3;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = unaff_w24 + 0x12;
    if (9 < uVar3 - 0x30) {
LAB_0177c28c:
      unaff_w24 = uVar10;
      bVar4 = false;
      uVar7 = (uint)uVar8;
      goto LAB_0177c29c;
    }
    bVar2 = 0xccccccccccccccc < (long)uVar11;
    iVar12 = 2 - unaff_w25;
    if (-1 < 1 - unaff_w25) {
      iVar12 = 1 - unaff_w25;
    }
    unaff_w24 = unaff_w24 + 0x13;
    uVar11 = (uVar8 + uVar11 * 10) - 0x30;
    bVar1 = (long)(iVar12 >> 1) + 0x7fffffffffffffffU < uVar11;
    bVar4 = bVar2 || bVar1;
    if (unaff_w24 < unaff_w21) {
      do {
        uVar3 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
        uVar7 = (uint)uVar3;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (9 < uVar3 - 0x30) goto LAB_0177c29c;
        unaff_w24 = unaff_w24 + 1;
        bVar4 = true;
      } while (unaff_w21 != unaff_w24);
    }
    else if (!bVar2 && !bVar1) goto LAB_0177c270;
  }
  lVar6 = 0;
  uVar5 = 0;
  *unaff_x27 = 1;
LAB_0177c38c:
  *unaff_x19 = lVar6;
  return uVar5;
}


