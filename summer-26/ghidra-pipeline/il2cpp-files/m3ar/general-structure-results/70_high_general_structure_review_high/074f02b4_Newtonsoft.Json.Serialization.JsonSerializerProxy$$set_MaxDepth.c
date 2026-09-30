/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MaxDepth
ENTRY_POINT: 074f02b4
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MaxDepth(void)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *unaff_x20;
  ushort *puVar8;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long unaff_x26;
  uint *unaff_x27;
  uint uVar12;
  uint uStack000000000000001c;
  
  puVar3 = PTR_DAT_08f9f500;
  uVar9 = *(uint *)(unaff_x26 + 0x10);
  if (uVar9 < unaff_w23) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar12 = (uint)uVar1;
    uVar10 = uVar12 - 0x30;
    if (uVar10 < 10) {
      uStack000000000000001c = 1;
      if (uVar12 != 0x30) {
LAB_074f03e4:
        uVar12 = uVar9 + 9;
        iVar7 = 0;
        do {
          uVar11 = uVar9 + 1 + iVar7;
          if (unaff_w23 <= uVar11) goto LAB_074f0630;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
          uVar11 = (uint)uVar1;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (9 < uVar1 - 0x30) {
            bVar2 = false;
            uVar12 = uVar9 + iVar7 + 1;
            goto LAB_074f0538;
          }
          iVar7 = iVar7 + 1;
          uVar10 = ((uint)uVar1 + uVar10 * 10) - 0x30;
        } while (iVar7 != 8);
        if (uVar12 < unaff_w23) {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (9 < uVar1 - 0x30) goto LAB_074f0534;
          uVar12 = uVar9 + 10;
          if ((0x19999999 < uVar10) || ((bVar2 = false, uVar10 == 0x19999999 && (0x35 < uVar1)))) {
            bVar2 = true;
          }
          uVar10 = ((uint)uVar1 + uVar10 * 10) - 0x30;
          if (unaff_w23 <= uVar12) goto LAB_074f062c;
          lVar4 = *(long *)puVar3;
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
            uVar11 = (uint)uVar1;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0408f364();
              lVar4 = *(long *)puVar3;
            }
            if (9 < uVar1 - 0x30) goto LAB_074f0538;
            uVar12 = uVar12 + 1;
            bVar2 = true;
          } while (unaff_w23 != uVar12);
        }
        else {
LAB_074f0630:
          if (uVar10 == 0) {
            uStack000000000000001c = 1;
          }
          if ((uStack000000000000001c & 1) != 0) {
LAB_074f0640:
            uVar6 = 1;
            goto LAB_074f0604;
          }
        }
LAB_074f0648:
        uVar10 = 0;
        uVar6 = 0;
        *unaff_x20 = 1;
        goto LAB_074f0604;
      }
      do {
        uVar9 = uVar9 + 1;
        if (unaff_w23 <= uVar9) {
          uVar10 = 0;
          goto LAB_074f0640;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      } while (uVar1 == 0x30);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar10 = uVar1 - 0x30;
      if (uVar10 < 10) goto LAB_074f03e4;
      uVar10 = 0;
      uVar12 = uVar9;
LAB_074f0534:
      uVar11 = (uint)uVar1;
      bVar2 = false;
LAB_074f0538:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if ((uVar11 - 9 < 5) || (uVar11 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar12 = uVar12 + 1;
          if ((int)uVar12 < (int)unaff_w23) {
            puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
            do {
              if (unaff_w23 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              uVar1 = *puVar8;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074f05bc;
              uVar12 = uVar12 + 1;
              puVar8 = puVar8 + 1;
            } while (unaff_w23 != uVar12);
          }
          else {
LAB_074f05bc:
            if (uVar12 < unaff_w23) goto LAB_074f05d0;
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
  uVar10 = 0;
  uVar6 = 0;
LAB_074f0604:
  *unaff_x27 = uVar10;
  return uVar6;
}


