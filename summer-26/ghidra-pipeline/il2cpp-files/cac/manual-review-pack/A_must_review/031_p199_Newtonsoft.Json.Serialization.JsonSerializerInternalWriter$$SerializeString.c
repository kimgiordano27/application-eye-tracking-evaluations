/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 074c0c20
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString(long param_1)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined1 in_ZR;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  int iVar10;
  undefined1 *unaff_x20;
  ushort *puVar11;
  long unaff_x21;
  uint unaff_w22;
  uint uVar12;
  uint uVar13;
  ulong unaff_x23;
  uint unaff_w24;
  uint uVar14;
  uint uVar15;
  long unaff_x25;
  long *unaff_x26;
  uint *unaff_x27;
  uint uStack000000000000001c;
  
  while (!(bool)in_ZR) {
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar14 = (uint)uVar2;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      param_1 = *unaff_x26;
    }
    uVar12 = (uint)unaff_x23;
    if ((4 < uVar2 - 9) && (uVar2 != 0x20)) {
      uVar9 = unaff_x23 >> 0x20;
      if ((unaff_w22 >> 2 & 1) == 0) {
LAB_074c0bbc:
        uVar15 = 1;
      }
      else {
        if (unaff_x25 == 0) goto LAB_074c10f8;
        lVar6 = *(long *)(unaff_x25 + 0x28);
        lVar1 = *(long *)(unaff_x25 + 0x30);
        uVar5 = thunk_FUN_0732565c(lVar6,*(undefined8 *)PTR_DAT_09116c18,0);
        if (((uVar5 & 1) == 0) ||
           (uVar5 = thunk_FUN_0732565c(lVar1,*(undefined8 *)PTR_DAT_0910fe90,0), (uVar5 & 1) == 0))
        {
          uVar13 = uVar12 - unaff_w24;
          unaff_x23 = (ulong)uVar13;
          if (uVar12 < unaff_w24) {
                    /* WARNING: Subroutine does not return */
            FUN_074d6efc(0);
          }
          if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_0912f578 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f4b260();
          }
          unaff_x21 = unaff_x21 + (long)(int)unaff_w24 * 2;
          uVar9 = FUN_073268dc(lVar6,0);
          if ((uVar9 & 1) != 0) {
LAB_074c0d64:
            uVar9 = FUN_073268dc(lVar1,0);
            if ((uVar9 & 1) == 0) {
              if (DAT_096846f8 == '\0') {
                FUN_03f13384(PTR_DAT_0910b618);
                DAT_096846f8 = '\x01';
              }
              if (lVar1 == 0) {
                uVar7 = 0;
                uVar8 = 0;
              }
              else {
                uVar7 = FUN_07324190(lVar1,0);
                uVar8 = *(undefined4 *)(lVar1 + 0x10);
              }
              uVar9 = FUN_074c465c(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_09133328);
              if ((uVar9 & 1) != 0) {
                if (lVar1 == 0) {
LAB_074c10f8:
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                unaff_w24 = *(uint *)(lVar1 + 0x10);
                uVar15 = 0;
                if (uVar13 <= unaff_w24) goto LAB_074c0fb0;
                goto LAB_074c0dec;
              }
            }
            uVar9 = 0;
            unaff_w24 = 0;
            uVar15 = 1;
            goto LAB_074c0e18;
          }
          if (DAT_096846f8 == '\0') {
            FUN_03f13384(PTR_DAT_0910b618);
            DAT_096846f8 = '\x01';
          }
          if (lVar6 == 0) {
            uVar7 = 0;
            uVar8 = 0;
          }
          else {
            uVar7 = FUN_07324190(lVar6,0);
            uVar8 = *(undefined4 *)(lVar6 + 0x10);
          }
          uVar9 = FUN_074c465c(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_09133328);
          if ((uVar9 & 1) == 0) goto LAB_074c0d64;
          if (lVar6 == 0) goto LAB_074c10f8;
          unaff_w24 = *(uint *)(lVar6 + 0x10);
          if (uVar13 <= unaff_w24) break;
          uVar15 = 1;
LAB_074c0dec:
          uVar9 = 0;
        }
        else if (uVar2 == 0x2d) {
          unaff_w24 = unaff_w24 + 1;
          uVar15 = 0;
          if (uVar12 <= unaff_w24) {
LAB_074c0fb0:
            uVar12 = 0;
            uVar7 = 0;
            goto LAB_074c109c;
          }
        }
        else {
          if (uVar2 != 0x2b) goto LAB_074c0bbc;
          unaff_w24 = unaff_w24 + 1;
          if (uVar12 <= unaff_w24) break;
          uVar15 = 1;
        }
        uVar14 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      }
LAB_074c0e18:
      puVar4 = PTR_DAT_0912f2c0;
      if (*(int *)(*(long *)PTR_DAT_0912f2c0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar12 = uVar14 - 0x30;
      if (uVar12 < 10) {
        uVar13 = (uint)unaff_x23;
        uStack000000000000001c = uVar15;
        if (uVar14 != 0x30) goto LAB_074c0e7c;
        goto LAB_074c0e48;
      }
      break;
    }
    unaff_w24 = unaff_w24 + 1;
    in_ZR = uVar12 == unaff_w24;
  }
  goto LAB_074c1094;
  while( true ) {
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    if (uVar2 != 0x30) break;
LAB_074c0e48:
    unaff_w24 = unaff_w24 + 1;
    if (uVar13 <= unaff_w24) {
      uVar12 = 0;
      goto LAB_074c10d8;
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  uVar12 = uVar2 - 0x30;
  if (uVar12 < 10) {
LAB_074c0e7c:
    uVar14 = unaff_w24 + 9;
    iVar10 = 0;
    do {
      uVar15 = unaff_w24 + 1 + iVar10;
      if (uVar13 <= uVar15) goto LAB_074c10c8;
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
      uVar15 = (uint)uVar2;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      if (9 < uVar2 - 0x30) {
        bVar3 = false;
        uVar14 = unaff_w24 + iVar10 + 1;
        goto LAB_074c0fd0;
      }
      iVar10 = iVar10 + 1;
      uVar12 = ((uint)uVar2 + uVar12 * 10) - 0x30;
    } while (iVar10 != 8);
    if (uVar14 < uVar13) {
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar14 * 2);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      if (9 < uVar2 - 0x30) goto LAB_074c0fcc;
      uVar14 = unaff_w24 + 10;
      if ((0x19999999 < uVar12) || ((bVar3 = false, uVar12 == 0x19999999 && (0x35 < uVar2)))) {
        bVar3 = true;
      }
      uVar12 = ((uint)uVar2 + uVar12 * 10) - 0x30;
      if (uVar13 <= uVar14) goto LAB_074c10c4;
      lVar6 = *(long *)puVar4;
      do {
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar14 * 2);
        uVar15 = (uint)uVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
          lVar6 = *(long *)puVar4;
        }
        if (9 < uVar2 - 0x30) goto LAB_074c0fd0;
        uVar14 = uVar14 + 1;
        bVar3 = true;
      } while (uVar13 != uVar14);
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
  }
  else {
    uVar12 = 0;
    uVar14 = unaff_w24;
LAB_074c0fcc:
    uVar15 = (uint)uVar2;
    bVar3 = false;
LAB_074c0fd0:
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    if ((uVar15 - 9 < 5) || (uVar15 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) != 0) {
        uVar14 = uVar14 + 1;
        if ((int)uVar14 < (int)uVar13) {
          puVar11 = (ushort *)(unaff_x21 + (long)(int)uVar14 * 2);
          do {
            if (uVar13 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_03f13634();
            }
            uVar2 = *puVar11;
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_074c1054;
            uVar14 = uVar14 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar13 != uVar14);
        }
        else {
LAB_074c1054:
          if (uVar14 < uVar13) goto LAB_074c1068;
        }
        goto LAB_074c10c4;
      }
    }
    else {
LAB_074c1068:
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar9 = FUN_074c21c4(unaff_x21,unaff_x23 & 0xffffffff | uVar9 << 0x20,uVar14);
      if ((uVar9 & 1) != 0) {
LAB_074c10c4:
        if (!bVar3) goto LAB_074c10c8;
        goto LAB_074c10e0;
      }
    }
LAB_074c1094:
    uVar12 = 0;
    uVar7 = 0;
  }
LAB_074c109c:
  *unaff_x27 = uVar12;
  return uVar7;
}


