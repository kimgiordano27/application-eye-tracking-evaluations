/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 074c0ca4
PROGRAM: cac-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(long *param_1)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  undefined *puVar4;
  bool in_CY;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 *unaff_x20;
  ushort *puVar9;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long unaff_x25;
  uint uVar13;
  long unaff_x26;
  uint *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  if (!in_CY) {
                    /* WARNING: Subroutine does not return */
    FUN_074d6efc(0);
  }
  if ((*(ushort *)(*(long *)(*param_1 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f4b260();
  }
  lVar1 = unaff_x21 + (long)unaff_w24 * 2;
  uVar5 = FUN_073268dc();
  if ((uVar5 & 1) == 0) {
    if (DAT_096846f8 == '\0') {
      FUN_03f13384(PTR_DAT_0910b618);
      DAT_096846f8 = '\x01';
    }
    if (unaff_x26 != 0) {
      FUN_07324190();
    }
    uVar5 = FUN_074c465c(lVar1);
    if ((uVar5 & 1) == 0) goto LAB_074c0d64;
    if (unaff_x26 == 0) goto LAB_074c10f8;
    uVar10 = *(uint *)(unaff_x26 + 0x10);
    if (uVar10 < unaff_w23) {
      uVar12 = 1;
      goto LAB_074c0dec;
    }
  }
  else {
LAB_074c0d64:
    uVar5 = FUN_073268dc();
    if ((uVar5 & 1) == 0) {
      if (DAT_096846f8 == '\0') {
        FUN_03f13384(PTR_DAT_0910b618);
        DAT_096846f8 = '\x01';
      }
      if (unaff_x25 != 0) {
        FUN_07324190();
      }
      uVar5 = FUN_074c465c(lVar1);
      if ((uVar5 & 1) == 0) goto LAB_074c0df0;
      if (unaff_x25 == 0) {
LAB_074c10f8:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      uVar10 = *(uint *)(unaff_x25 + 0x10);
      uVar12 = 0;
      if (unaff_w23 <= uVar10) {
        uVar7 = 0;
        goto LAB_074c109c;
      }
LAB_074c0dec:
      unaff_w28 = (uint)*(ushort *)(lVar1 + (long)(int)uVar10 * 2);
    }
    else {
LAB_074c0df0:
      uVar10 = 0;
      uVar12 = 1;
    }
    puVar4 = PTR_DAT_0912f2c0;
    if (*(int *)(*(long *)PTR_DAT_0912f2c0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    if (unaff_w28 - 0x30 < 10) {
      uVar11 = unaff_w28 - 0x30;
      uStack000000000000001c = uVar12;
      if (unaff_w28 != 0x30) {
LAB_074c0e7c:
        uVar12 = uVar11;
        uVar11 = uVar10 + 9;
        iVar8 = 0;
        do {
          uVar13 = uVar10 + 1 + iVar8;
          if (unaff_w23 <= uVar13) goto LAB_074c10c8;
          uVar2 = *(ushort *)(lVar1 + (long)(int)uVar13 * 2);
          uVar13 = (uint)uVar2;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          if (9 < uVar2 - 0x30) {
            bVar3 = false;
            uVar11 = uVar10 + iVar8 + 1;
            goto LAB_074c0fd0;
          }
          iVar8 = iVar8 + 1;
          uVar12 = ((uint)uVar2 + uVar12 * 10) - 0x30;
        } while (iVar8 != 8);
        if (uVar11 < unaff_w23) {
          uVar2 = *(ushort *)(lVar1 + (long)(int)uVar11 * 2);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          if (9 < uVar2 - 0x30) goto LAB_074c0fcc;
          uVar11 = uVar10 + 10;
          if ((0x19999999 < uVar12) || ((bVar3 = false, uVar12 == 0x19999999 && (0x35 < uVar2)))) {
            bVar3 = true;
          }
          uVar12 = ((uint)uVar2 + uVar12 * 10) - 0x30;
          if (unaff_w23 <= uVar11) goto LAB_074c10c4;
          lVar6 = *(long *)puVar4;
          do {
            uVar2 = *(ushort *)(lVar1 + (long)(int)uVar11 * 2);
            uVar13 = (uint)uVar2;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
              lVar6 = *(long *)puVar4;
            }
            if (9 < uVar2 - 0x30) goto LAB_074c0fd0;
            uVar11 = uVar11 + 1;
            bVar3 = true;
          } while (unaff_w23 != uVar11);
        }
        else {
LAB_074c10c8:
          if (uVar12 == 0) {
            uStack000000000000001c = 1;
          }
          if ((uStack000000000000001c & 1) != 0) {
LAB_074c10d8:
            uVar7 = 1;
            goto LAB_074c109c;
          }
        }
LAB_074c10e0:
        uVar12 = 0;
        uVar7 = 0;
        *unaff_x20 = 1;
        goto LAB_074c109c;
      }
      do {
        uVar10 = uVar10 + 1;
        if (unaff_w23 <= uVar10) {
          uVar12 = 0;
          goto LAB_074c10d8;
        }
        uVar2 = *(ushort *)(lVar1 + (long)(int)uVar10 * 2);
      } while (uVar2 == 0x30);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = uVar2 - 0x30;
      if (uVar11 < 10) goto LAB_074c0e7c;
      uVar12 = 0;
      uVar11 = uVar10;
LAB_074c0fcc:
      uVar13 = (uint)uVar2;
      bVar3 = false;
LAB_074c0fd0:
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar11 = uVar11 + 1;
          if ((int)uVar11 < (int)unaff_w23) {
            puVar9 = (ushort *)(lVar1 + (long)(int)uVar11 * 2);
            do {
              if (unaff_w23 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_03f13634();
              }
              uVar2 = *puVar9;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_074c1054;
              uVar11 = uVar11 + 1;
              puVar9 = puVar9 + 1;
            } while (unaff_w23 != uVar11);
          }
          else {
LAB_074c1054:
            if (uVar11 < unaff_w23) goto LAB_074c1068;
          }
          goto LAB_074c10c4;
        }
      }
      else {
LAB_074c1068:
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar5 = FUN_074c21c4(lVar1,unaff_w23,uVar11);
        if ((uVar5 & 1) != 0) {
LAB_074c10c4:
          if (!bVar3) goto LAB_074c10c8;
          goto LAB_074c10e0;
        }
      }
    }
  }
  uVar12 = 0;
  uVar7 = 0;
LAB_074c109c:
  *unaff_x27 = uVar12;
  return uVar7;
}


