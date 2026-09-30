/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_1
ENTRY_POINT: 07a48aa0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_1(void)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  bool in_CY;
  bool bVar4;
  undefined8 uVar5;
  ulong *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar6;
  uint unaff_w23;
  uint unaff_w24;
  int iVar7;
  ulong uVar8;
  undefined1 *unaff_x27;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_09f40bf0;
  if (!in_CY) {
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar9 = (uint)uVar2;
    uVar11 = uVar9 - 0x30;
    if (uVar11 < 10) {
      if (uVar9 != 0x30) {
LAB_07a48870:
        uVar9 = unaff_w24 + 1;
        uVar10 = (ulong)uVar11;
        iVar7 = -0x11;
        do {
          if (unaff_w23 <= uVar9) goto LAB_07a48ae8;
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar7 + 0x12) * 2);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if (9 < uVar2 - 0x30) {
            uVar8 = (ulong)(uint)uVar2;
            uVar11 = unaff_w24 + iVar7 + 0x12;
            goto LAB_07a489b4;
          }
          uVar9 = unaff_w24 + iVar7 + 0x13;
          bVar4 = iVar7 != -1;
          iVar7 = iVar7 + 1;
          uVar10 = ((ulong)uVar2 + uVar10 * 10) - 0x30;
        } while (bVar4);
        if (unaff_w23 <= uVar9) {
LAB_07a48ae8:
          uVar5 = 1;
          goto LAB_07a48ab4;
        }
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + 0x12) * 2);
        uVar8 = (ulong)uVar2;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar11 = unaff_w24 + 0x12;
        if (9 < uVar2 - 0x30) {
LAB_07a489b4:
          unaff_w24 = uVar11;
          bVar4 = false;
          uVar9 = (uint)uVar8;
          goto LAB_07a489c4;
        }
        bVar1 = 0xccccccccccccccc < (long)uVar10;
        uVar10 = (uVar8 + uVar10 * 10) - 0x30;
        unaff_w24 = unaff_w24 + 0x13;
        bVar4 = bVar1 || 0x7fffffffffffffff < uVar10;
        if (unaff_w24 < unaff_w23) {
          do {
            uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
            uVar9 = (uint)uVar2;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            if (9 < uVar2 - 0x30) goto LAB_07a489c4;
            unaff_w24 = unaff_w24 + 1;
            bVar4 = true;
          } while (unaff_w23 != unaff_w24);
        }
        else if (!bVar1 && 0x7fffffffffffffff >= uVar10) goto LAB_07a48ae8;
LAB_07a48a84:
        uVar10 = 0;
        uVar5 = 0;
        *unaff_x27 = 1;
        goto LAB_07a48ab4;
      }
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w23 <= unaff_w24) {
          uVar10 = 0;
          goto LAB_07a48ae8;
        }
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar9 = (uint)uVar2;
        uVar11 = uVar2 - 0x30;
      } while (uVar11 == 0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (uVar11 < 10) goto LAB_07a48870;
      uVar10 = 0;
      bVar4 = false;
LAB_07a489c4:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((uVar9 - 9 < 5) || (uVar9 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar11 = unaff_w24 + 1;
          if ((int)uVar11 < (int)unaff_w23) {
            puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
            do {
              if (unaff_w23 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar2 = *puVar6;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_07a48a38;
              uVar11 = uVar11 + 1;
              puVar6 = puVar6 + 1;
            } while (unaff_w23 != uVar11);
          }
          else {
LAB_07a48a38:
            if (uVar11 < unaff_w23) goto LAB_07a48a4c;
          }
          goto LAB_07a48a7c;
        }
      }
      else {
LAB_07a48a4c:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar8 = FUN_07a4a680();
        if ((uVar8 & 1) != 0) {
LAB_07a48a7c:
          if (!bVar4) goto LAB_07a48ae8;
          goto LAB_07a48a84;
        }
      }
    }
  }
  uVar10 = 0;
  uVar5 = 0;
LAB_07a48ab4:
  *unaff_x19 = uVar10;
  return uVar5;
}


