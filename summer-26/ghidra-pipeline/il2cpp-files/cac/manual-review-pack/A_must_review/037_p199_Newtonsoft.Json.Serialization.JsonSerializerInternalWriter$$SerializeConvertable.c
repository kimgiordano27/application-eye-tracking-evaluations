/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeConvertable
ENTRY_POINT: 074bf6d0
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
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeConvertable(long param_1)

{
  bool bVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 *unaff_x20;
  ushort *puVar11;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long unaff_x25;
  long unaff_x26;
  int *unaff_x27;
  uint unaff_w28;
  uint uVar15;
  int iStack000000000000001c;
  
  uVar4 = unaff_w23 - unaff_w24;
  if (unaff_w23 < unaff_w24) {
                    /* WARNING: Subroutine does not return */
    FUN_074d6efc(0);
  }
  if ((*(ushort *)(*(long *)(**(long **)(param_1 + 0x578) + 0x20) + 0x135) & 1) == 0) {
    FUN_03f4b260();
  }
  lVar2 = unaff_x21 + (long)(int)unaff_w24 * 2;
  uVar6 = FUN_073268dc();
  if ((uVar6 & 1) == 0) {
    if (DAT_096846f8 == '\0') {
      FUN_03f13384(PTR_DAT_0910b618);
      DAT_096846f8 = '\x01';
    }
    if (unaff_x26 == 0) {
      uVar7 = 0;
      uVar9 = 0;
    }
    else {
      uVar7 = FUN_07324190();
      uVar9 = *(undefined4 *)(unaff_x26 + 0x10);
    }
    uVar6 = FUN_074c465c(lVar2,uVar4,uVar7,uVar9,*(undefined8 *)PTR_DAT_09133328);
    if ((uVar6 & 1) == 0) goto LAB_074bf798;
    if (unaff_x26 == 0) goto LAB_074bfb20;
    uVar12 = *(uint *)(unaff_x26 + 0x10);
    if (uVar4 <= uVar12) goto LAB_074bfabc;
    iStack000000000000001c = 1;
LAB_074bf820:
    unaff_w28 = (uint)*(ushort *)(lVar2 + (long)(int)uVar12 * 2);
LAB_074bf854:
    puVar5 = PTR_DAT_0912f2c0;
    if (*(int *)(*(long *)PTR_DAT_0912f2c0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = unaff_w28 - 0x30;
    if (uVar15 < 10) {
      if (unaff_w28 != 0x30) {
LAB_074bf8b4:
        uVar13 = uVar12 + 9;
        iVar10 = 0;
        do {
          uVar14 = uVar12 + 1 + iVar10;
          if (uVar4 <= uVar14) goto LAB_074bfb0c;
          uVar3 = *(ushort *)(lVar2 + (long)(int)uVar14 * 2);
          uVar14 = (uint)uVar3;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          if (9 < uVar3 - 0x30) {
            bVar1 = false;
            uVar13 = uVar12 + iVar10 + 1;
            goto LAB_074bf9f8;
          }
          iVar10 = iVar10 + 1;
          uVar15 = ((uint)uVar3 + uVar15 * 10) - 0x30;
        } while (iVar10 != 8);
        if (uVar4 <= uVar13) {
LAB_074bfb0c:
          uVar7 = 1;
          iStack000000000000001c = uVar15 * iStack000000000000001c;
          goto LAB_074bfac4;
        }
        uVar3 = *(ushort *)(lVar2 + (long)(int)uVar13 * 2);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        if (9 < uVar3 - 0x30) goto LAB_074bf9f4;
        uVar13 = uVar12 + 10;
        uVar12 = ((uint)uVar3 + uVar15 * 10) - 0x30;
        bVar1 = (1U - iStack000000000000001c >> 1) + 0x7fffffff < uVar12 || 0xccccccc < (int)uVar15;
        uVar15 = uVar12;
        if (uVar4 <= uVar13) goto LAB_074bfaf4;
        lVar8 = *(long *)puVar5;
        do {
          uVar3 = *(ushort *)(lVar2 + (long)(int)uVar13 * 2);
          uVar14 = (uint)uVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
            lVar8 = *(long *)puVar5;
          }
          if (9 < uVar3 - 0x30) goto LAB_074bf9f8;
          uVar13 = uVar13 + 1;
          bVar1 = true;
        } while (uVar4 != uVar13);
LAB_074bfaf8:
        iStack000000000000001c = 0;
        uVar7 = 0;
        *unaff_x20 = 1;
        goto LAB_074bfac4;
      }
      do {
        uVar12 = uVar12 + 1;
        if (uVar4 <= uVar12) {
          uVar15 = 0;
          goto LAB_074bfb0c;
        }
        uVar3 = *(ushort *)(lVar2 + (long)(int)uVar12 * 2);
      } while (uVar3 == 0x30);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar15 = uVar3 - 0x30;
      if (uVar15 < 10) goto LAB_074bf8b4;
      uVar15 = 0;
      uVar13 = uVar12;
LAB_074bf9f4:
      uVar14 = (uint)uVar3;
      bVar1 = false;
LAB_074bf9f8:
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      if ((uVar14 - 9 < 5) || (uVar14 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar13 = uVar13 + 1;
          if ((int)uVar13 < (int)uVar4) {
            puVar11 = (ushort *)(lVar2 + (long)(int)uVar13 * 2);
            do {
              if (uVar4 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_03f13634();
              }
              uVar3 = *puVar11;
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_074bfa7c;
              uVar13 = uVar13 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar4 != uVar13);
          }
          else {
LAB_074bfa7c:
            if (uVar13 < uVar4) goto LAB_074bfa90;
          }
          goto LAB_074bfaf4;
        }
      }
      else {
LAB_074bfa90:
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar6 = FUN_074c21c4(lVar2,uVar4,uVar13);
        if ((uVar6 & 1) != 0) {
LAB_074bfaf4:
          if (!bVar1) goto LAB_074bfb0c;
          goto LAB_074bfaf8;
        }
      }
    }
  }
  else {
LAB_074bf798:
    uVar6 = FUN_073268dc();
    if ((uVar6 & 1) != 0) {
LAB_074bf828:
      uVar12 = 0;
      iStack000000000000001c = 1;
      goto LAB_074bf854;
    }
    if (DAT_096846f8 == '\0') {
      FUN_03f13384(PTR_DAT_0910b618);
      DAT_096846f8 = '\x01';
    }
    if (unaff_x25 == 0) {
      uVar7 = 0;
      uVar9 = 0;
    }
    else {
      uVar7 = FUN_07324190();
      uVar9 = *(undefined4 *)(unaff_x25 + 0x10);
    }
    uVar6 = FUN_074c465c(lVar2,uVar4,uVar7,uVar9,*(undefined8 *)PTR_DAT_09133328);
    if ((uVar6 & 1) == 0) goto LAB_074bf828;
    if (unaff_x25 == 0) {
LAB_074bfb20:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar12 = *(uint *)(unaff_x25 + 0x10);
    if (uVar12 < uVar4) {
      iStack000000000000001c = -1;
      goto LAB_074bf820;
    }
  }
LAB_074bfabc:
  iStack000000000000001c = 0;
  uVar7 = 0;
LAB_074bfac4:
  *unaff_x27 = iStack000000000000001c;
  return uVar7;
}


