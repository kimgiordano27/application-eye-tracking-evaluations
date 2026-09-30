/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_StringEscapeHandling
ENTRY_POINT: 074f01f4
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_StringEscapeHandling(void)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  bool in_CY;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *unaff_x20;
  ushort *puVar8;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar9;
  uint uVar10;
  uint *unaff_x27;
  uint uVar11;
  uint uStack000000000000001c;
  
  puVar3 = PTR_DAT_08f9f500;
  if (!in_CY) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar11 = (uint)uVar1;
    uVar9 = uVar11 - 0x30;
    if (uVar9 < 10) {
      uStack000000000000001c = 1;
      if (uVar11 != 0x30) {
LAB_074f03e4:
        uVar11 = unaff_w24 + 9;
        iVar7 = 0;
        do {
          uVar10 = unaff_w24 + 1 + iVar7;
          if (unaff_w23 <= uVar10) goto LAB_074f0630;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
          uVar10 = (uint)uVar1;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (9 < uVar1 - 0x30) {
            bVar2 = false;
            uVar11 = unaff_w24 + iVar7 + 1;
            goto LAB_074f0538;
          }
          iVar7 = iVar7 + 1;
          uVar9 = ((uint)uVar1 + uVar9 * 10) - 0x30;
        } while (iVar7 != 8);
        if (uVar11 < unaff_w23) {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (9 < uVar1 - 0x30) goto LAB_074f0534;
          uVar11 = unaff_w24 + 10;
          if ((0x19999999 < uVar9) || ((bVar2 = false, uVar9 == 0x19999999 && (0x35 < uVar1)))) {
            bVar2 = true;
          }
          uVar9 = ((uint)uVar1 + uVar9 * 10) - 0x30;
          if (unaff_w23 <= uVar11) goto LAB_074f062c;
          lVar4 = *(long *)puVar3;
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
            uVar10 = (uint)uVar1;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0408f364();
              lVar4 = *(long *)puVar3;
            }
            if (9 < uVar1 - 0x30) goto LAB_074f0538;
            uVar11 = uVar11 + 1;
            bVar2 = true;
          } while (unaff_w23 != uVar11);
        }
        else {
LAB_074f0630:
          if (uVar9 == 0) {
            uStack000000000000001c = 1;
          }
          if ((uStack000000000000001c & 1) != 0) {
LAB_074f0640:
            uVar6 = 1;
            goto LAB_074f0604;
          }
        }
LAB_074f0648:
        uVar9 = 0;
        uVar6 = 0;
        *unaff_x20 = 1;
        goto LAB_074f0604;
      }
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w23 <= unaff_w24) {
          uVar9 = 0;
          goto LAB_074f0640;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      } while (uVar1 == 0x30);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar9 = uVar1 - 0x30;
      if (uVar9 < 10) goto LAB_074f03e4;
      uVar9 = 0;
      uVar11 = unaff_w24;
LAB_074f0534:
      uVar10 = (uint)uVar1;
      bVar2 = false;
LAB_074f0538:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if ((uVar10 - 9 < 5) || (uVar10 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar11 = uVar11 + 1;
          if ((int)uVar11 < (int)unaff_w23) {
            puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
            do {
              if (unaff_w23 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              uVar1 = *puVar8;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074f05bc;
              uVar11 = uVar11 + 1;
              puVar8 = puVar8 + 1;
            } while (unaff_w23 != uVar11);
          }
          else {
LAB_074f05bc:
            if (uVar11 < unaff_w23) goto LAB_074f05d0;
          }
          goto LAB_074f062c;
        }
      }
      else {
LAB_074f05d0:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar5 = FUN_074f172c();
        if ((uVar5 & 1) != 0) {
LAB_074f062c:
          if (!bVar2) goto LAB_074f0630;
          goto LAB_074f0648;
        }
      }
    }
  }
  uVar9 = 0;
  uVar6 = 0;
LAB_074f0604:
  *unaff_x27 = uVar9;
  return uVar6;
}


