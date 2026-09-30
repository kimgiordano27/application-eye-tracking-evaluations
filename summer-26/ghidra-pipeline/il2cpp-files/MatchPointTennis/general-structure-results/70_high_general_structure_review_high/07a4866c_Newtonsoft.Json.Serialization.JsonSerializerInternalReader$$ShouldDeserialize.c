/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldDeserialize
ENTRY_POINT: 07a4866c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize(void)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar10;
  uint unaff_w23;
  uint unaff_w24;
  int iVar11;
  int iVar12;
  uint uVar13;
  long unaff_x25;
  ulong uVar14;
  long unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  uint uVar15;
  
  uVar6 = thunk_FUN_078b3114();
  if ((uVar6 & 1) == 0) {
    lVar9 = *(long *)PTR_DAT_09f40e98;
    if (unaff_w23 < unaff_w24) {
      FUN_07a5ec1c(0);
    }
    if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    unaff_w23 = unaff_w23 - unaff_w24;
    unaff_x21 = unaff_x21 + (long)(int)unaff_w24 * 2;
    uVar6 = FUN_078b4450();
    if ((uVar6 & 1) == 0) {
      if (DAT_0a51d028 == '\0') {
        FUN_04447ba8(PTR_DAT_09f28738);
        DAT_0a51d028 = '\x01';
      }
      if (unaff_x26 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = FUN_078b1c78();
        uVar8 = *(undefined4 *)(unaff_x26 + 0x10);
      }
      uVar6 = FUN_07a4ca80(unaff_x21,unaff_w23,uVar7,uVar8,*(undefined8 *)PTR_DAT_09f44d38);
      if ((uVar6 & 1) == 0) goto LAB_07a4876c;
      if (unaff_x26 == 0) goto LAB_07a48b00;
      unaff_w24 = *(uint *)(unaff_x26 + 0x10);
      if (unaff_w23 <= unaff_w24) goto LAB_07a48aac;
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    }
    else {
LAB_07a4876c:
      uVar6 = FUN_078b4450();
      if ((uVar6 & 1) == 0) {
        if (DAT_0a51d028 == '\0') {
          FUN_04447ba8(PTR_DAT_09f28738);
          DAT_0a51d028 = '\x01';
        }
        if (unaff_x25 == 0) {
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar7 = FUN_078b1c78();
          uVar8 = *(undefined4 *)(unaff_x25 + 0x10);
        }
        uVar6 = FUN_07a4ca80(unaff_x21,unaff_w23,uVar7,uVar8,*(undefined8 *)PTR_DAT_09f44d38);
        if ((uVar6 & 1) != 0) {
          if (unaff_x25 == 0) {
LAB_07a48b00:
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          unaff_w24 = *(uint *)(unaff_x25 + 0x10);
          if (unaff_w23 <= unaff_w24) goto LAB_07a48aac;
          unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
          unaff_x20 = 0;
          iVar11 = -1;
          goto LAB_07a4880c;
        }
      }
      unaff_w24 = 0;
    }
    unaff_x20 = 0;
    iVar11 = 1;
LAB_07a4880c:
    puVar4 = PTR_DAT_09f40bf0;
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar15 = unaff_w28 - 0x30;
    if (uVar15 < 10) {
      if (unaff_w28 != 0x30) {
LAB_07a48870:
        uVar13 = unaff_w24 + 1;
        uVar6 = (ulong)uVar15;
        iVar12 = -0x11;
        do {
          if (unaff_w23 <= uVar13) goto LAB_07a48ae8;
          uVar3 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar12 + 0x12) * 2);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if (9 < uVar3 - 0x30) {
            uVar14 = (ulong)(uint)uVar3;
            uVar15 = unaff_w24 + iVar12 + 0x12;
            goto LAB_07a489b4;
          }
          uVar13 = unaff_w24 + iVar12 + 0x13;
          bVar5 = iVar12 != -1;
          iVar12 = iVar12 + 1;
          uVar6 = ((ulong)uVar3 + uVar6 * 10) - 0x30;
        } while (bVar5);
        if (unaff_w23 <= uVar13) {
LAB_07a48ae8:
          uVar7 = 1;
          lVar9 = uVar6 * (long)iVar11;
          goto LAB_07a48ab4;
        }
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + 0x12) * 2);
        uVar14 = (ulong)uVar3;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar15 = unaff_w24 + 0x12;
        if (9 < uVar3 - 0x30) {
LAB_07a489b4:
          unaff_w24 = uVar15;
          bVar5 = false;
          uVar13 = (uint)uVar14;
          goto LAB_07a489c4;
        }
        bVar2 = 0xccccccccccccccc < (long)uVar6;
        iVar12 = 2 - iVar11;
        if (-1 < 1 - iVar11) {
          iVar12 = 1 - iVar11;
        }
        uVar6 = (uVar14 + uVar6 * 10) - 0x30;
        unaff_w24 = unaff_w24 + 0x13;
        bVar1 = (ulong)(uint)(iVar12 >> 1) + 0x7fffffffffffffff < uVar6;
        bVar5 = bVar2 || bVar1;
        if (unaff_w24 < unaff_w23) {
          do {
            uVar3 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
            uVar13 = (uint)uVar3;
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            if (9 < uVar3 - 0x30) goto LAB_07a489c4;
            unaff_w24 = unaff_w24 + 1;
            bVar5 = true;
          } while (unaff_w23 != unaff_w24);
        }
        else if (!bVar2 && !bVar1) goto LAB_07a48ae8;
LAB_07a48a84:
        lVar9 = 0;
        uVar7 = 0;
        *unaff_x27 = 1;
        goto LAB_07a48ab4;
      }
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w23 <= unaff_w24) {
          uVar6 = 0;
          goto LAB_07a48ae8;
        }
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar13 = (uint)uVar3;
        uVar15 = uVar3 - 0x30;
      } while (uVar15 == 0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (uVar15 < 10) goto LAB_07a48870;
      uVar6 = 0;
      bVar5 = false;
LAB_07a489c4:
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          unaff_w24 = unaff_w24 + 1;
          if ((int)unaff_w24 < (int)unaff_w23) {
            puVar10 = (ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
            do {
              if (unaff_w23 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar3 = *puVar10;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_07a48a38;
              unaff_w24 = unaff_w24 + 1;
              puVar10 = puVar10 + 1;
            } while (unaff_w23 != unaff_w24);
          }
          else {
LAB_07a48a38:
            if (unaff_w24 < unaff_w23) goto LAB_07a48a4c;
          }
          goto LAB_07a48a7c;
        }
      }
      else {
LAB_07a48a4c:
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar14 = FUN_07a4a680(unaff_x21,(ulong)unaff_w23 | unaff_x20 << 0x20,unaff_w24);
        if ((uVar14 & 1) != 0) {
LAB_07a48a7c:
          if (!bVar5) goto LAB_07a48ae8;
          goto LAB_07a48a84;
        }
      }
    }
  }
  else {
    if (unaff_w28 != 0x2b) {
      if (unaff_w28 != 0x2d) goto LAB_07a485c0;
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w23 <= unaff_w24) goto LAB_07a48aac;
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      iVar11 = -1;
      goto LAB_07a4880c;
    }
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 < unaff_w23) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
LAB_07a485c0:
      iVar11 = 1;
      goto LAB_07a4880c;
    }
  }
LAB_07a48aac:
  lVar9 = 0;
  uVar7 = 0;
LAB_07a48ab4:
  *unaff_x19 = lVar9;
  return uVar7;
}


