/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 07a49904
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer(void)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  bool in_ZR;
  bool bVar4;
  undefined8 uVar5;
  ulong *unaff_x19;
  uint uVar6;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar7;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *unaff_x27;
  uint unaff_w28;
  
  puVar3 = PTR_DAT_09f40bf0;
  if (in_ZR) {
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 < unaff_w23) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      bVar2 = false;
      goto LAB_07a49a90;
    }
  }
  else {
    if (unaff_w28 == 0x2b) {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w23 <= unaff_w24) goto LAB_07a49d38;
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    }
    bVar2 = true;
LAB_07a49a90:
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar8 = unaff_w28 - 0x30;
    if (uVar8 < 10) {
      if (unaff_w28 != 0x30) {
LAB_07a49aec:
        uVar6 = unaff_w24 + 1;
        uVar11 = (ulong)uVar8;
        uVar8 = unaff_w24 + 0x13;
        iVar9 = -0x12;
        do {
          if (unaff_w23 <= uVar6) goto LAB_07a49d6c;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar9 + 0x13) * 2);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar6 = (uint)uVar1;
          if (9 < uVar6 - 0x30) {
            bVar4 = false;
            uVar8 = unaff_w24 + iVar9 + 0x13;
            goto FUN_07a49c70;
          }
          uVar6 = unaff_w24 + iVar9 + 0x14;
          bVar4 = iVar9 != -1;
          iVar9 = iVar9 + 1;
          uVar11 = ((ulong)uVar1 + uVar11 * 10) - 0x30;
        } while (bVar4);
        if (uVar6 < unaff_w23) {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
          uVar10 = (ulong)uVar1;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if (9 < uVar1 - 0x30) goto LAB_07a49c6c;
          uVar8 = unaff_w24 + 0x14;
          if ((0x1999999999999999 < uVar11) ||
             ((bVar4 = false, uVar11 == 0x1999999999999999 && (0x35 < uVar1)))) {
            bVar4 = true;
          }
          uVar11 = (uVar10 + uVar11 * 10) - 0x30;
          if (unaff_w23 <= uVar8) goto LAB_07a49d68;
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
            uVar6 = (uint)uVar1;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            if (9 < uVar1 - 0x30) goto FUN_07a49c70;
            uVar8 = uVar8 + 1;
            bVar4 = true;
          } while (unaff_w23 != uVar8);
        }
        else {
LAB_07a49d6c:
          if (bVar2 || uVar11 == 0) {
LAB_07a49d7c:
            uVar5 = 1;
            goto LAB_07a49d40;
          }
        }
LAB_07a49d84:
        uVar11 = 0;
        uVar5 = 0;
        *unaff_x27 = 1;
        goto LAB_07a49d40;
      }
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w23 <= unaff_w24) {
          uVar11 = 0;
          goto LAB_07a49d7c;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar10 = (ulong)uVar1;
        uVar8 = uVar1 - 0x30;
      } while (uVar8 == 0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (uVar8 < 10) goto LAB_07a49aec;
      uVar11 = 0;
      uVar8 = unaff_w24;
LAB_07a49c6c:
      uVar6 = (uint)uVar10;
      bVar4 = false;
FUN_07a49c70:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((uVar6 - 9 < 5) || (uVar6 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar8 = uVar8 + 1;
          if ((int)uVar8 < (int)unaff_w23) {
            puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
            do {
              if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar1 = *puVar7;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_07a49cec;
              uVar8 = uVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (unaff_w23 != uVar8);
          }
          else {
LAB_07a49cec:
            if (uVar8 < unaff_w23) goto LAB_07a49d00;
          }
          goto LAB_07a49d68;
        }
      }
      else {
LAB_07a49d00:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar10 = FUN_07a4a680();
        if ((uVar10 & 1) != 0) {
LAB_07a49d68:
          if (!bVar4) goto LAB_07a49d6c;
          goto LAB_07a49d84;
        }
      }
    }
  }
LAB_07a49d38:
  uVar11 = 0;
  uVar5 = 0;
LAB_07a49d40:
  *unaff_x19 = uVar11;
  return uVar5;
}


