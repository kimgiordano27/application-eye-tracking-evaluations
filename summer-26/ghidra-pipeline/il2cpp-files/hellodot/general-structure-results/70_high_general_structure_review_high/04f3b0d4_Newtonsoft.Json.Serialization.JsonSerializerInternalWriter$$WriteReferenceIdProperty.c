/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReferenceIdProperty
ENTRY_POINT: 04f3b0d4
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReferenceIdProperty(void)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar7;
  uint unaff_w24;
  uint uVar8;
  long *unaff_x25;
  int iVar9;
  uint uVar10;
  ulong unaff_x28;
  
  lVar5 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x28);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar10 = *(uint *)(lVar5 + 0x18);
  if (((uint)unaff_x28 < uVar10) && (*(int *)(lVar5 + (unaff_x28 & 0xffffffff) * 4 + 0x20) != 0xff))
  {
    if ((uint)unaff_x28 == 0x30) {
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w21 <= unaff_w24) {
          iVar9 = 0;
          goto LAB_04f3b340;
        }
        uVar2 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
        unaff_x28 = (ulong)uVar2;
      } while (unaff_x28 == 0x30);
      if ((uVar2 < uVar10) && (*(int *)(lVar5 + unaff_x28 * 4 + 0x20) != 0xff)) goto LAB_04f3b1bc;
      iVar9 = 0;
      uVar8 = unaff_w24;
LAB_04f3b13c:
      uVar10 = 0;
LAB_04f3b290:
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (((int)unaff_x28 - 9U < 5) || ((int)unaff_x28 == 0x20)) {
        if ((unaff_w23 >> 1 & 1) == 0) goto LAB_04f3b2ac;
        uVar8 = uVar8 + 1;
        if ((int)uVar8 < (int)unaff_w21) {
          puVar7 = (ushort *)(unaff_x22 + (long)(int)uVar8 * 2);
          do {
            if (unaff_w21 <= uVar8) goto LAB_04f3b3a0;
            uVar2 = *puVar7;
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_04f3b334;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while (unaff_w21 != uVar8);
        }
        else {
LAB_04f3b334:
          if (uVar8 < unaff_w21) goto LAB_04f3b350;
        }
        if (uVar10 == 0) goto LAB_04f3b340;
      }
      else {
LAB_04f3b350:
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar4 = FUN_04f3d628();
        if ((uVar4 & 1) == 0) {
          iVar9 = 0;
        }
        if ((uVar10 & uVar4) == 0) goto LAB_04f3b2b4;
      }
    }
    else {
LAB_04f3b1bc:
      if (uVar10 <= (uint)unaff_x28) {
LAB_04f3b3a0:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      iVar9 = *(int *)(lVar5 + (unaff_x28 & 0xffffffff) * 4 + 0x20);
      uVar4 = unaff_w24 + 1;
      uVar8 = unaff_w24 + 8;
      iVar6 = -7;
      do {
        if (unaff_w21 <= uVar4) goto LAB_04f3b340;
        uVar2 = *(ushort *)(unaff_x22 + (long)(int)(unaff_w24 + iVar6 + 8) * 2);
        unaff_x28 = (ulong)uVar2;
        if ((uVar10 <= uVar2) || (iVar1 = *(int *)(lVar5 + unaff_x28 * 4 + 0x20), iVar1 == 0xff)) {
          uVar10 = 0;
          uVar8 = unaff_w24 + iVar6 + 8;
          goto LAB_04f3b290;
        }
        uVar4 = unaff_w24 + iVar6 + 9;
        bVar3 = iVar6 != -1;
        iVar6 = iVar6 + 1;
        iVar9 = iVar1 + iVar9 * 0x10;
      } while (bVar3);
      if (unaff_w21 <= uVar4) {
LAB_04f3b340:
        uVar4 = 1;
        goto LAB_04f3b2b4;
      }
      uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar8 * 2);
      unaff_x28 = (ulong)uVar2;
      if ((uVar10 <= uVar2) || (*(int *)(lVar5 + unaff_x28 * 4 + 0x20) == 0xff)) goto LAB_04f3b13c;
      uVar8 = unaff_w24 + 9;
      if (uVar8 < unaff_w21) {
        do {
          uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar8 * 2);
          unaff_x28 = (ulong)uVar2;
          if ((uVar10 <= uVar2) || (*(int *)(lVar5 + unaff_x28 * 4 + 0x20) == 0xff)) {
            uVar10 = 1;
            goto LAB_04f3b290;
          }
          uVar8 = uVar8 + 1;
        } while (unaff_w21 != uVar8);
      }
    }
    iVar9 = 0;
    uVar4 = 0;
    *unaff_x20 = 1;
  }
  else {
LAB_04f3b2ac:
    iVar9 = 0;
    uVar4 = 0;
  }
LAB_04f3b2b4:
  *unaff_x19 = iVar9;
  return uVar4 & 1;
}


