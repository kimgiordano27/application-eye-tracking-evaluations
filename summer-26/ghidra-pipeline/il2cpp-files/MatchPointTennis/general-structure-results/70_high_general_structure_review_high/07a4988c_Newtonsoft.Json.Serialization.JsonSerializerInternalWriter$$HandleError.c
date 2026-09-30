/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 07a4988c
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong *unaff_x19;
  uint uVar9;
  long lVar10;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar11;
  uint uVar12;
  ulong unaff_x23;
  uint unaff_w24;
  uint uVar13;
  int iVar14;
  long unaff_x25;
  ulong uVar15;
  long *unaff_x26;
  ulong uVar16;
  undefined1 *unaff_x27;
  uint unaff_w28;
  ulong uStack0000000000000018;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar13 = (uint)unaff_x23;
    if ((4 < unaff_w28 - 9) && (unaff_w28 != 0x20)) break;
    unaff_w24 = unaff_w24 + 1;
    if (uVar13 == unaff_w24) goto LAB_07a49d38;
    param_1 = *unaff_x26;
    unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
  }
  uStack0000000000000018 = unaff_x23 >> 0x20;
  if ((unaff_w22 >> 2 & 1) == 0) {
LAB_07a49848:
    bVar4 = true;
LAB_07a49a90:
    puVar5 = PTR_DAT_09f40bf0;
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar13 = unaff_w28 - 0x30;
    if (uVar13 < 10) {
      uVar12 = (uint)unaff_x23;
      if (unaff_w28 != 0x30) goto LAB_07a49aec;
      goto LAB_07a49abc;
    }
  }
  else {
    if (unaff_x25 == 0) goto LAB_07a49d9c;
    lVar1 = *(long *)(unaff_x25 + 0x28);
    lVar2 = *(long *)(unaff_x25 + 0x30);
    uVar16 = thunk_FUN_078b3114(lVar1,*(undefined8 *)PTR_DAT_09f3e038,0);
    if (((uVar16 & 1) == 0) ||
       (uVar16 = thunk_FUN_078b3114(lVar2,*(undefined8 *)PTR_DAT_09f40410,0), (uVar16 & 1) == 0)) {
      lVar10 = *(long *)PTR_DAT_09f40e98;
      if (uVar13 < unaff_w24) {
        FUN_07a5ec1c(0);
      }
      if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      uVar13 = uVar13 - unaff_w24;
      unaff_x23 = (ulong)uVar13;
      unaff_x21 = unaff_x21 + (long)(int)unaff_w24 * 2;
      uVar16 = FUN_078b4450(lVar1,0);
      if ((uVar16 & 1) == 0) {
        if (DAT_0a51d028 == '\0') {
          FUN_04447ba8(PTR_DAT_09f28738);
          DAT_0a51d028 = '\x01';
        }
        if (lVar1 == 0) {
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar7 = FUN_078b1c78(lVar1,0);
          uVar8 = *(undefined4 *)(lVar1 + 0x10);
        }
        uVar16 = FUN_07a4ca80(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_09f44d38);
        if ((uVar16 & 1) == 0) goto LAB_07a499f0;
        if (lVar1 == 0) goto LAB_07a49d9c;
        unaff_w24 = *(uint *)(lVar1 + 0x10);
        if (uVar13 <= unaff_w24) goto LAB_07a49d38;
        unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      }
      else {
LAB_07a499f0:
        uVar16 = FUN_078b4450(lVar2,0);
        if ((uVar16 & 1) == 0) {
          if (DAT_0a51d028 == '\0') {
            FUN_04447ba8(PTR_DAT_09f28738);
            DAT_0a51d028 = '\x01';
          }
          if (lVar2 == 0) {
            uVar7 = 0;
            uVar8 = 0;
          }
          else {
            uVar7 = FUN_078b1c78(lVar2,0);
            uVar8 = *(undefined4 *)(lVar2 + 0x10);
          }
          uVar16 = FUN_07a4ca80(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_09f44d38);
          if ((uVar16 & 1) != 0) {
            if (lVar2 == 0) {
LAB_07a49d9c:
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            unaff_w24 = *(uint *)(lVar2 + 0x10);
            if (unaff_w24 < uVar13) {
              unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
              bVar4 = false;
              uStack0000000000000018 = 0;
              goto LAB_07a49a90;
            }
            goto LAB_07a49d38;
          }
        }
        unaff_w24 = 0;
      }
      uStack0000000000000018 = 0;
      bVar4 = true;
      goto LAB_07a49a90;
    }
    if (unaff_w28 == 0x2d) {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w24 < uVar13) {
        unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        bVar4 = false;
        goto LAB_07a49a90;
      }
    }
    else {
      if (unaff_w28 != 0x2b) goto LAB_07a49848;
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w24 < uVar13) {
        unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        goto LAB_07a49848;
      }
    }
  }
LAB_07a49d38:
  uVar16 = 0;
  uVar7 = 0;
LAB_07a49d40:
  *unaff_x19 = uVar16;
  return uVar7;
  while( true ) {
    uVar3 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar15 = (ulong)uVar3;
    uVar13 = uVar3 - 0x30;
    if (uVar13 != 0) break;
LAB_07a49abc:
    unaff_w24 = unaff_w24 + 1;
    if (uVar12 <= unaff_w24) {
      uVar16 = 0;
      goto LAB_07a49d7c;
    }
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (uVar13 < 10) {
LAB_07a49aec:
    uVar9 = unaff_w24 + 1;
    uVar16 = (ulong)uVar13;
    uVar13 = unaff_w24 + 0x13;
    iVar14 = -0x12;
    do {
      if (uVar12 <= uVar9) goto LAB_07a49d6c;
      uVar3 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar14 + 0x13) * 2);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar9 = (uint)uVar3;
      if (9 < uVar9 - 0x30) {
        bVar6 = false;
        uVar13 = unaff_w24 + iVar14 + 0x13;
        goto FUN_07a49c70;
      }
      uVar9 = unaff_w24 + iVar14 + 0x14;
      bVar6 = iVar14 != -1;
      iVar14 = iVar14 + 1;
      uVar16 = ((ulong)uVar3 + uVar16 * 10) - 0x30;
    } while (bVar6);
    if (uVar12 <= uVar9) goto LAB_07a49d6c;
    uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar13 * 2);
    uVar15 = (ulong)uVar3;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (9 < uVar3 - 0x30) goto LAB_07a49c6c;
    uVar13 = unaff_w24 + 0x14;
    if ((0x1999999999999999 < uVar16) ||
       ((bVar6 = false, uVar16 == 0x1999999999999999 && (0x35 < uVar3)))) {
      bVar6 = true;
    }
    uVar16 = (uVar15 + uVar16 * 10) - 0x30;
    if (uVar12 <= uVar13) goto LAB_07a49d68;
    do {
      uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar13 * 2);
      uVar9 = (uint)uVar3;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (9 < uVar3 - 0x30) goto FUN_07a49c70;
      uVar13 = uVar13 + 1;
      bVar6 = true;
    } while (uVar12 != uVar13);
  }
  else {
    uVar16 = 0;
    uVar13 = unaff_w24;
LAB_07a49c6c:
    uVar9 = (uint)uVar15;
    bVar6 = false;
FUN_07a49c70:
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((uVar9 - 9 < 5) || (uVar9 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_07a49d38;
      uVar13 = uVar13 + 1;
      if ((int)uVar13 < (int)uVar12) {
        puVar11 = (ushort *)(unaff_x21 + (long)(int)uVar13 * 2);
        do {
          if (uVar12 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          uVar3 = *puVar11;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_07a49cec;
          uVar13 = uVar13 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar12 != uVar13);
      }
      else {
LAB_07a49cec:
        if (uVar13 < uVar12) goto LAB_07a49d00;
      }
    }
    else {
LAB_07a49d00:
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar15 = FUN_07a4a680(unaff_x21,unaff_x23 & 0xffffffff | uStack0000000000000018 << 0x20,uVar13
                           );
      if ((uVar15 & 1) == 0) goto LAB_07a49d38;
    }
LAB_07a49d68:
    if (!bVar6) {
LAB_07a49d6c:
      if (bVar4 || uVar16 == 0) {
LAB_07a49d7c:
        uVar7 = 1;
        goto LAB_07a49d40;
      }
    }
  }
  uVar16 = 0;
  uVar7 = 0;
  *unaff_x27 = 1;
  goto LAB_07a49d40;
}


