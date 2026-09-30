/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_0
ENTRY_POINT: 07a48a98
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0(void)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar6;
  uint unaff_w23;
  uint uVar7;
  int unaff_w24;
  int iVar8;
  ulong uVar9;
  undefined1 *unaff_x27;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  puVar3 = PTR_DAT_09f40bf0;
  uVar7 = unaff_w24 + 1;
  if (uVar7 < unaff_w23) {
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar10 = (uint)uVar2;
    uVar12 = uVar10 - 0x30;
    if (uVar12 < 10) {
      if (uVar10 != 0x30) {
LAB_07a48870:
        uVar10 = uVar7 + 1;
        uVar11 = (ulong)uVar12;
        iVar8 = -0x11;
        do {
          if (unaff_w23 <= uVar10) goto LAB_07a48ae8;
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)(uVar7 + iVar8 + 0x12) * 2);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if (9 < uVar2 - 0x30) {
            uVar9 = (ulong)(uint)uVar2;
            uVar12 = uVar7 + iVar8 + 0x12;
            goto LAB_07a489b4;
          }
          uVar10 = uVar7 + iVar8 + 0x13;
          bVar4 = iVar8 != -1;
          iVar8 = iVar8 + 1;
          uVar11 = ((ulong)uVar2 + uVar11 * 10) - 0x30;
        } while (bVar4);
        if (unaff_w23 <= uVar10) {
LAB_07a48ae8:
          uVar5 = 1;
          goto LAB_07a48ab4;
        }
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)(uVar7 + 0x12) * 2);
        uVar9 = (ulong)uVar2;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar12 = uVar7 + 0x12;
        if (9 < uVar2 - 0x30) {
LAB_07a489b4:
          uVar7 = uVar12;
          bVar4 = false;
          uVar10 = (uint)uVar9;
          goto LAB_07a489c4;
        }
        bVar1 = 0xccccccccccccccc < (long)uVar11;
        uVar11 = (uVar9 + uVar11 * 10) - 0x30;
        uVar7 = uVar7 + 0x13;
        bVar4 = bVar1 || 0x7fffffffffffffff < uVar11;
        if (uVar7 < unaff_w23) {
          do {
            uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
            uVar10 = (uint)uVar2;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            if (9 < uVar2 - 0x30) goto LAB_07a489c4;
            uVar7 = uVar7 + 1;
            bVar4 = true;
          } while (unaff_w23 != uVar7);
        }
        else if (!bVar1 && 0x7fffffffffffffff >= uVar11) goto LAB_07a48ae8;
LAB_07a48a84:
        uVar11 = 0;
        uVar5 = 0;
        *unaff_x27 = 1;
        goto LAB_07a48ab4;
      }
      do {
        uVar7 = uVar7 + 1;
        if (unaff_w23 <= uVar7) {
          uVar11 = 0;
          goto LAB_07a48ae8;
        }
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
        uVar10 = (uint)uVar2;
        uVar12 = uVar2 - 0x30;
      } while (uVar12 == 0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (uVar12 < 10) goto LAB_07a48870;
      uVar11 = 0;
      bVar4 = false;
LAB_07a489c4:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((uVar10 - 9 < 5) || (uVar10 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar7 = uVar7 + 1;
          if ((int)uVar7 < (int)unaff_w23) {
            puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
            do {
              if (unaff_w23 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar2 = *puVar6;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_07a48a38;
              uVar7 = uVar7 + 1;
              puVar6 = puVar6 + 1;
            } while (unaff_w23 != uVar7);
          }
          else {
LAB_07a48a38:
            if (uVar7 < unaff_w23) goto LAB_07a48a4c;
          }
          goto LAB_07a48a7c;
        }
      }
      else {
LAB_07a48a4c:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar9 = FUN_07a4a680();
        if ((uVar9 & 1) != 0) {
LAB_07a48a7c:
          if (!bVar4) goto LAB_07a48ae8;
          goto LAB_07a48a84;
        }
      }
    }
  }
  uVar11 = 0;
  uVar5 = 0;
LAB_07a48ab4:
  *unaff_x19 = uVar11;
  return uVar5;
}


