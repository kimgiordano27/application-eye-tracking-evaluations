/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 0710b450
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ushort uVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long *unaff_x19;
  ulong uVar10;
  long lVar11;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  ulong unaff_x23;
  uint unaff_w24;
  int iVar15;
  int iVar16;
  long unaff_x25;
  ulong uVar17;
  long *unaff_x26;
  undefined1 *unaff_x27;
  uint uVar18;
  ulong uVar19;
  
  while( true ) {
    uVar4 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar18 = (uint)uVar4;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar13 = (uint)unaff_x23;
    if ((4 < uVar4 - 9) && (uVar4 != 0x20)) break;
    unaff_w24 = unaff_w24 + 1;
    if (uVar13 == unaff_w24) goto LAB_0710b900;
    param_1 = *unaff_x26;
  }
  uVar10 = unaff_x23 >> 0x20;
  if ((unaff_w22 >> 2 & 1) == 0) goto LAB_0710b414;
  if (unaff_x25 == 0) goto LAB_0710b954;
  lVar9 = *(long *)(unaff_x25 + 0x28);
  lVar3 = *(long *)(unaff_x25 + 0x30);
  uVar19 = thunk_FUN_06f73d88(lVar9,*(undefined8 *)PTR_DAT_08e6a6c0,0);
  if (((uVar19 & 1) == 0) ||
     (uVar19 = thunk_FUN_06f73d88(lVar3,*(undefined8 *)PTR_DAT_08e6a6c8,0), (uVar19 & 1) == 0)) {
    lVar11 = *(long *)PTR_DAT_08ea1de0;
    if (uVar13 < unaff_w24) {
      FUN_07122110(0);
    }
    if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    uVar13 = uVar13 - unaff_w24;
    unaff_x23 = (ulong)uVar13;
    unaff_x21 = unaff_x21 + (long)(int)unaff_w24 * 2;
    uVar10 = FUN_06f74e14(lVar9,0);
    if ((uVar10 & 1) == 0) {
      if (DAT_0941218d == '\0') {
        FUN_03c8f898(PTR_DAT_08e83798);
        DAT_0941218d = '\x01';
      }
      if (lVar9 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = System_Convert__ToInt16(lVar9,0);
        uVar8 = *(undefined4 *)(lVar9 + 0x10);
      }
      uVar10 = FUN_0710f8c0(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_08ea5770);
      if ((uVar10 & 1) == 0)
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize;
      if (lVar9 == 0) goto LAB_0710b954;
      unaff_w24 = *(uint *)(lVar9 + 0x10);
      if (uVar13 <= unaff_w24) goto LAB_0710b900;
      uVar18 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    }
    else {
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize:
      uVar10 = FUN_06f74e14(lVar3,0);
      if ((uVar10 & 1) == 0) {
        if (DAT_0941218d == '\0') {
          FUN_03c8f898(PTR_DAT_08e83798);
          DAT_0941218d = '\x01';
        }
        if (lVar3 == 0) {
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar7 = System_Convert__ToInt16(lVar3,0);
          uVar8 = *(undefined4 *)(lVar3 + 0x10);
        }
        uVar10 = FUN_0710f8c0(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_08ea5770);
        if ((uVar10 & 1) != 0) {
          if (lVar3 == 0) {
LAB_0710b954:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          unaff_w24 = *(uint *)(lVar3 + 0x10);
          if (unaff_w24 < uVar13) {
            uVar18 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
            uVar10 = 0;
            iVar15 = -1;
            goto LAB_0710b660;
          }
          goto LAB_0710b900;
        }
      }
      unaff_w24 = 0;
    }
    uVar10 = 0;
    iVar15 = 1;
LAB_0710b660:
    puVar5 = PTR_DAT_08ea1b30;
    if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar13 = uVar18 - 0x30;
    if (uVar13 < 10) {
      uVar14 = (uint)unaff_x23;
      if (uVar18 != 0x30) goto LAB_0710b6c4;
      goto LAB_0710b694;
    }
  }
  else if (uVar4 == 0x2b) {
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 < uVar13) {
      uVar18 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      goto LAB_0710b414;
    }
  }
  else {
    if (uVar4 != 0x2d) {
LAB_0710b414:
      iVar15 = 1;
      goto LAB_0710b660;
    }
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 < uVar13) {
      uVar18 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      iVar15 = -1;
      goto LAB_0710b660;
    }
  }
  goto LAB_0710b900;
  while( true ) {
    uVar4 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar18 = (uint)uVar4;
    uVar13 = uVar4 - 0x30;
    if (uVar13 != 0) break;
LAB_0710b694:
    unaff_w24 = unaff_w24 + 1;
    if (uVar14 <= unaff_w24) {
      uVar19 = 0;
      goto LAB_0710b93c;
    }
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (uVar13 < 10) {
LAB_0710b6c4:
    uVar18 = unaff_w24 + 1;
    uVar19 = (ulong)uVar13;
    iVar16 = -0x11;
    do {
      if (uVar14 <= uVar18) goto LAB_0710b93c;
      uVar4 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar16 + 0x12) * 2);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (9 < uVar4 - 0x30) {
        uVar17 = (ulong)(uint)uVar4;
        uVar18 = unaff_w24 + iVar16 + 0x12;
        goto LAB_0710b808;
      }
      uVar18 = unaff_w24 + iVar16 + 0x13;
      bVar6 = iVar16 != -1;
      iVar16 = iVar16 + 1;
      uVar19 = ((ulong)uVar4 + uVar19 * 10) - 0x30;
    } while (bVar6);
    if (uVar14 <= uVar18) {
LAB_0710b93c:
      uVar7 = 1;
      lVar9 = uVar19 * (long)iVar15;
      goto LAB_0710b908;
    }
    uVar4 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + 0x12) * 2);
    uVar17 = (ulong)uVar4;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar18 = unaff_w24 + 0x12;
    if (9 < uVar4 - 0x30) {
LAB_0710b808:
      unaff_w24 = uVar18;
      bVar6 = false;
      uVar18 = (uint)uVar17;
      goto LAB_0710b818;
    }
    bVar2 = 0xccccccccccccccc < (long)uVar19;
    iVar16 = 2 - iVar15;
    if (-1 < 1 - iVar15) {
      iVar16 = 1 - iVar15;
    }
    uVar19 = (uVar17 + uVar19 * 10) - 0x30;
    unaff_w24 = unaff_w24 + 0x13;
    bVar1 = (ulong)(uint)(iVar16 >> 1) + 0x7fffffffffffffff < uVar19;
    bVar6 = bVar2 || bVar1;
    if (unaff_w24 < uVar14) {
      do {
        uVar4 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar18 = (uint)uVar4;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (9 < uVar4 - 0x30) goto LAB_0710b818;
        unaff_w24 = unaff_w24 + 1;
        bVar6 = true;
      } while (uVar14 != unaff_w24);
    }
    else if (!bVar2 && !bVar1) goto LAB_0710b93c;
LAB_0710b8d8:
    lVar9 = 0;
    uVar7 = 0;
    *unaff_x27 = 1;
  }
  else {
    uVar19 = 0;
    bVar6 = false;
LAB_0710b818:
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if ((uVar18 - 9 < 5) || (uVar18 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) != 0) {
        unaff_w24 = unaff_w24 + 1;
        if ((int)unaff_w24 < (int)uVar14) {
          puVar12 = (ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
          do {
            if (uVar14 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            uVar4 = *puVar12;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            if ((4 < uVar4 - 9) && (uVar4 != 0x20)) goto LAB_0710b88c;
            unaff_w24 = unaff_w24 + 1;
            puVar12 = puVar12 + 1;
          } while (uVar14 != unaff_w24);
        }
        else {
LAB_0710b88c:
          if (unaff_w24 < uVar14) goto LAB_0710b8a0;
        }
        goto LAB_0710b8d0;
      }
    }
    else {
LAB_0710b8a0:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar10 = FUN_0710d4b8(unaff_x21,unaff_x23 & 0xffffffff | uVar10 << 0x20,unaff_w24);
      if ((uVar10 & 1) != 0) {
LAB_0710b8d0:
        if (!bVar6) goto LAB_0710b93c;
        goto LAB_0710b8d8;
      }
    }
LAB_0710b900:
    lVar9 = 0;
    uVar7 = 0;
  }
LAB_0710b908:
  *unaff_x19 = lVar9;
  return uVar7;
}


