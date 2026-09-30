/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 07a49978
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(long param_1)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *unaff_x19;
  uint uVar7;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar8;
  uint unaff_w23;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long unaff_x25;
  ulong uVar12;
  long unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x738));
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  if (unaff_x26 != 0) {
    FUN_078b1c78();
  }
  uVar5 = FUN_07a4ca80();
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_078b4450();
    if ((uVar5 & 1) == 0) {
      if (DAT_0a51d028 == '\0') {
        FUN_04447ba8(PTR_DAT_09f28738);
        DAT_0a51d028 = '\x01';
      }
      if (unaff_x25 != 0) {
        FUN_078b1c78();
      }
      uVar5 = FUN_07a4ca80();
      if ((uVar5 & 1) == 0) goto LAB_07a49a84;
      if (unaff_x25 == 0) goto LAB_07a49d9c;
      uVar9 = *(uint *)(unaff_x25 + 0x10);
      if (unaff_w23 <= uVar9) goto LAB_07a49d38;
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      bVar2 = false;
    }
    else {
LAB_07a49a84:
      uVar9 = 0;
LAB_07a49a88:
      bVar2 = true;
    }
    puVar3 = PTR_DAT_09f40bf0;
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar10 = unaff_w28 - 0x30;
    if (uVar10 < 10) {
      if (unaff_w28 != 0x30) {
LAB_07a49aec:
        uVar7 = uVar9 + 1;
        uVar5 = (ulong)uVar10;
        uVar10 = uVar9 + 0x13;
        iVar11 = -0x12;
        do {
          if (unaff_w23 <= uVar7) goto LAB_07a49d6c;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)(uVar9 + iVar11 + 0x13) * 2);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar7 = (uint)uVar1;
          if (9 < uVar7 - 0x30) {
            bVar4 = false;
            uVar10 = uVar9 + iVar11 + 0x13;
            goto FUN_07a49c70;
          }
          uVar7 = uVar9 + iVar11 + 0x14;
          bVar4 = iVar11 != -1;
          iVar11 = iVar11 + 1;
          uVar5 = ((ulong)uVar1 + uVar5 * 10) - 0x30;
        } while (bVar4);
        if (uVar7 < unaff_w23) {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
          uVar12 = (ulong)uVar1;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if (9 < uVar1 - 0x30) goto LAB_07a49c6c;
          uVar10 = uVar9 + 0x14;
          if ((0x1999999999999999 < uVar5) ||
             ((bVar4 = false, uVar5 == 0x1999999999999999 && (0x35 < uVar1)))) {
            bVar4 = true;
          }
          uVar5 = (uVar12 + uVar5 * 10) - 0x30;
          if (unaff_w23 <= uVar10) goto LAB_07a49d68;
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            uVar7 = (uint)uVar1;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            if (9 < uVar1 - 0x30) goto FUN_07a49c70;
            uVar10 = uVar10 + 1;
            bVar4 = true;
          } while (unaff_w23 != uVar10);
        }
        else {
LAB_07a49d6c:
          if (bVar2 || uVar5 == 0) {
LAB_07a49d7c:
            uVar6 = 1;
            goto LAB_07a49d40;
          }
        }
LAB_07a49d84:
        uVar5 = 0;
        uVar6 = 0;
        *unaff_x27 = 1;
        goto LAB_07a49d40;
      }
      do {
        uVar9 = uVar9 + 1;
        if (unaff_w23 <= uVar9) {
          uVar5 = 0;
          goto LAB_07a49d7c;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
        uVar12 = (ulong)uVar1;
        uVar10 = uVar1 - 0x30;
      } while (uVar10 == 0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (uVar10 < 10) goto LAB_07a49aec;
      uVar5 = 0;
      uVar10 = uVar9;
LAB_07a49c6c:
      uVar7 = (uint)uVar12;
      bVar4 = false;
FUN_07a49c70:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((uVar7 - 9 < 5) || (uVar7 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar10 = uVar10 + 1;
          if ((int)uVar10 < (int)unaff_w23) {
            puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            do {
              if (unaff_w23 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar1 = *puVar8;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_07a49cec;
              uVar10 = uVar10 + 1;
              puVar8 = puVar8 + 1;
            } while (unaff_w23 != uVar10);
          }
          else {
LAB_07a49cec:
            if (uVar10 < unaff_w23) goto LAB_07a49d00;
          }
          goto LAB_07a49d68;
        }
      }
      else {
LAB_07a49d00:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar12 = FUN_07a4a680();
        if ((uVar12 & 1) != 0) {
LAB_07a49d68:
          if (!bVar4) goto LAB_07a49d6c;
          goto LAB_07a49d84;
        }
      }
    }
  }
  else {
    if (unaff_x26 == 0) {
LAB_07a49d9c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar9 = *(uint *)(unaff_x26 + 0x10);
    if (uVar9 < unaff_w23) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      goto LAB_07a49a88;
    }
  }
LAB_07a49d38:
  uVar5 = 0;
  uVar6 = 0;
LAB_07a49d40:
  *unaff_x19 = uVar5;
  return uVar6;
}


