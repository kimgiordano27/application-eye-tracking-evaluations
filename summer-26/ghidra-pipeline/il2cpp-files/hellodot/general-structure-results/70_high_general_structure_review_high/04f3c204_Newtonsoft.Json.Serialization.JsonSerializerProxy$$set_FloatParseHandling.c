/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_FloatParseHandling
ENTRY_POINT: 04f3c204
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_FloatParseHandling(void)

{
  ushort uVar1;
  undefined *puVar2;
  bool in_CY;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint *unaff_x19;
  int iVar6;
  ushort *puVar7;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar8;
  uint uVar9;
  undefined1 *unaff_x27;
  uint uVar10;
  uint uStack000000000000001c;
  
  puVar2 = PTR_DAT_065f73a8;
  if (!in_CY) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar10 = (uint)uVar1;
    uVar9 = uVar10 - 0x30;
    if (uVar9 < 10) {
      uStack000000000000001c = 1;
      if (uVar10 != 0x30) {
LAB_04f3c318:
        uVar10 = unaff_w24 + 1;
        uVar8 = unaff_w24 + 9;
        iVar6 = -8;
        do {
          if (unaff_w23 <= uVar10) goto FUN_04f3c538;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar6 + 9) * 2);
          uVar10 = (uint)uVar1;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if (9 < uVar1 - 0x30) {
            bVar3 = false;
            uVar8 = unaff_w24 + iVar6 + 9;
            goto LAB_04f3c474;
          }
          uVar10 = unaff_w24 + iVar6 + 10;
          bVar3 = iVar6 != -1;
          iVar6 = iVar6 + 1;
          uVar9 = ((uint)uVar1 + uVar9 * 10) - 0x30;
        } while (bVar3);
        if (uVar10 < unaff_w23) {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar10 = uVar1 - 0x30;
          if (9 < uVar10) goto LAB_04f3c470;
          uVar8 = unaff_w24 + 10;
          if ((0x19999999 < uVar9) || ((bVar3 = false, uVar9 == 0x19999999 && (0x35 < uVar1)))) {
            bVar3 = true;
          }
          uVar9 = uVar10 + uVar9 * 10;
          if (unaff_w23 <= uVar8) goto LAB_04f3c534;
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
            uVar10 = (uint)uVar1;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if (9 < uVar1 - 0x30) goto LAB_04f3c474;
            uVar8 = uVar8 + 1;
            bVar3 = true;
          } while (unaff_w23 != uVar8);
        }
        else {
FUN_04f3c538:
          if ((uStack000000000000001c & 1) != 0 || uVar9 == 0) {
LAB_04f3c54c:
            uVar5 = 1;
            goto LAB_04f3c55c;
          }
        }
LAB_04f3c580:
        uVar9 = 0;
        uVar5 = 0;
        *unaff_x27 = 1;
        goto LAB_04f3c55c;
      }
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w23 <= unaff_w24) {
          uVar9 = 0;
          goto LAB_04f3c54c;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar9 = uVar1 - 0x30;
      } while (uVar9 == 0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (uVar9 < 10) goto LAB_04f3c318;
      uVar9 = 0;
      uVar8 = unaff_w24;
LAB_04f3c470:
      uVar10 = (uint)uVar1;
      bVar3 = false;
LAB_04f3c474:
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if ((uVar10 - 9 < 5) || (uVar10 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar8 = uVar8 + 1;
          if ((int)uVar8 < (int)unaff_w23) {
            puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
            do {
              if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              uVar1 = *puVar7;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_04f3c4f0;
              uVar8 = uVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (unaff_w23 != uVar8);
          }
          else {
LAB_04f3c4f0:
            if (uVar8 < unaff_w23) goto LAB_04f3c504;
          }
          goto LAB_04f3c534;
        }
      }
      else {
LAB_04f3c504:
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar4 = FUN_04f3d628();
        if ((uVar4 & 1) != 0) {
LAB_04f3c534:
          if (!bVar3) goto FUN_04f3c538;
          goto LAB_04f3c580;
        }
      }
    }
  }
  uVar9 = 0;
  uVar5 = 0;
LAB_04f3c55c:
  *unaff_x19 = uVar9;
  return uVar5;
}


