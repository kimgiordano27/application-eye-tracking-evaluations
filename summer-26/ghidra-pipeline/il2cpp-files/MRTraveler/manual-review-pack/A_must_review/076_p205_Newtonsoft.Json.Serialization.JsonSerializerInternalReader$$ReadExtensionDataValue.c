/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadExtensionDataValue
ENTRY_POINT: 0710b394
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
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue
          (ulong param_1,ushort *param_2,ulong param_3,uint param_4,long param_5,long *param_6)

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
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long unaff_x24;
  int iVar16;
  int iVar17;
  ulong uVar18;
  undefined1 *unaff_x27;
  uint uVar19;
  ulong uVar20;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08ea5770);
    FUN_03c8f898(PTR_DAT_08ea1b30);
    FUN_03c8f898(PTR_DAT_08ea1de0);
    FUN_03c8f898(PTR_DAT_08e9bbb8);
    FUN_03c8f898(PTR_DAT_08e6a6c0);
    FUN_03c8f898(PTR_DAT_08e6a6c8);
    *(undefined1 *)(unaff_x24 + 0x208) = 1;
  }
  puVar5 = PTR_DAT_08ea1b30;
  uVar13 = (uint)param_3;
  if (uVar13 == 0) goto LAB_0710b900;
  uVar4 = *param_2;
  if ((param_4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if ((uVar4 - 9 < 5) || (uVar4 == 0x20)) {
      if (1 < uVar13) {
        uVar15 = 1;
        do {
          uVar4 = param_2[(int)uVar15];
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if ((4 < uVar4 - 9) && (uVar4 != 0x20)) goto LAB_0710b40c;
          uVar15 = uVar15 + 1;
        } while (uVar13 != uVar15);
      }
      goto LAB_0710b900;
    }
  }
  uVar15 = 0;
LAB_0710b40c:
  uVar19 = (uint)uVar4;
  uVar10 = param_3 >> 0x20;
  if ((param_4 >> 2 & 1) == 0) goto LAB_0710b414;
  if (param_5 == 0) goto LAB_0710b954;
  lVar9 = *(long *)(param_5 + 0x28);
  lVar3 = *(long *)(param_5 + 0x30);
  uVar20 = thunk_FUN_06f73d88(lVar9,*(undefined8 *)PTR_DAT_08e6a6c0,0);
  if (((uVar20 & 1) == 0) ||
     (uVar20 = thunk_FUN_06f73d88(lVar3,*(undefined8 *)PTR_DAT_08e6a6c8,0), (uVar20 & 1) == 0)) {
    lVar11 = *(long *)PTR_DAT_08ea1de0;
    if (uVar13 < uVar15) {
      FUN_07122110(0);
    }
    if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    uVar13 = uVar13 - uVar15;
    param_3 = (ulong)uVar13;
    param_2 = param_2 + (int)uVar15;
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
      uVar10 = FUN_0710f8c0(param_2,param_3,uVar7,uVar8,*(undefined8 *)PTR_DAT_08ea5770);
      if ((uVar10 & 1) == 0)
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize;
      if (lVar9 == 0) goto LAB_0710b954;
      uVar15 = *(uint *)(lVar9 + 0x10);
      if (uVar13 <= uVar15) goto LAB_0710b900;
      uVar19 = (uint)param_2[(int)uVar15];
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
        uVar10 = FUN_0710f8c0(param_2,param_3,uVar7,uVar8,*(undefined8 *)PTR_DAT_08ea5770);
        if ((uVar10 & 1) != 0) {
          if (lVar3 == 0) {
LAB_0710b954:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar15 = *(uint *)(lVar3 + 0x10);
          if (uVar15 < uVar13) {
            uVar19 = (uint)param_2[(int)uVar15];
            uVar10 = 0;
            iVar16 = -1;
            goto LAB_0710b660;
          }
          goto LAB_0710b900;
        }
      }
      uVar15 = 0;
    }
    uVar10 = 0;
    iVar16 = 1;
LAB_0710b660:
    puVar5 = PTR_DAT_08ea1b30;
    if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar13 = uVar19 - 0x30;
    if (uVar13 < 10) {
      uVar14 = (uint)param_3;
      if (uVar19 != 0x30) {
LAB_0710b6c4:
        uVar19 = uVar15 + 1;
        uVar20 = (ulong)uVar13;
        iVar17 = -0x11;
        do {
          if (uVar14 <= uVar19) goto LAB_0710b93c;
          uVar4 = param_2[(int)(uVar15 + iVar17 + 0x12)];
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (9 < uVar4 - 0x30) {
            uVar18 = (ulong)(uint)uVar4;
            uVar13 = uVar15 + iVar17 + 0x12;
            goto LAB_0710b808;
          }
          uVar19 = uVar15 + iVar17 + 0x13;
          bVar6 = iVar17 != -1;
          iVar17 = iVar17 + 1;
          uVar20 = ((ulong)uVar4 + uVar20 * 10) - 0x30;
        } while (bVar6);
        if (uVar14 <= uVar19) {
LAB_0710b93c:
          uVar7 = 1;
          lVar9 = uVar20 * (long)iVar16;
          goto LAB_0710b908;
        }
        uVar4 = param_2[(int)(uVar15 + 0x12)];
        uVar18 = (ulong)uVar4;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar13 = uVar15 + 0x12;
        if (9 < uVar4 - 0x30) {
LAB_0710b808:
          uVar15 = uVar13;
          bVar6 = false;
          uVar19 = (uint)uVar18;
          goto LAB_0710b818;
        }
        bVar2 = 0xccccccccccccccc < (long)uVar20;
        iVar17 = 2 - iVar16;
        if (-1 < 1 - iVar16) {
          iVar17 = 1 - iVar16;
        }
        uVar20 = (uVar18 + uVar20 * 10) - 0x30;
        uVar15 = uVar15 + 0x13;
        bVar1 = (ulong)(uint)(iVar17 >> 1) + 0x7fffffffffffffff < uVar20;
        bVar6 = bVar2 || bVar1;
        if (uVar15 < uVar14) {
          do {
            uVar4 = param_2[(int)uVar15];
            uVar19 = (uint)uVar4;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            if (9 < uVar4 - 0x30) goto LAB_0710b818;
            uVar15 = uVar15 + 1;
            bVar6 = true;
          } while (uVar14 != uVar15);
        }
        else if (!bVar2 && !bVar1) goto LAB_0710b93c;
LAB_0710b8d8:
        lVar9 = 0;
        uVar7 = 0;
        *unaff_x27 = 1;
        goto LAB_0710b908;
      }
      do {
        uVar15 = uVar15 + 1;
        if (uVar14 <= uVar15) {
          uVar20 = 0;
          goto LAB_0710b93c;
        }
        uVar19 = (uint)param_2[(int)uVar15];
        uVar13 = param_2[(int)uVar15] - 0x30;
      } while (uVar13 == 0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (uVar13 < 10) goto LAB_0710b6c4;
      uVar20 = 0;
      bVar6 = false;
LAB_0710b818:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((uVar19 - 9 < 5) || (uVar19 == 0x20)) {
        if ((param_4 >> 1 & 1) != 0) {
          uVar15 = uVar15 + 1;
          if ((int)uVar15 < (int)uVar14) {
            puVar12 = param_2 + (int)uVar15;
            do {
              if (uVar14 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              uVar4 = *puVar12;
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              if ((4 < uVar4 - 9) && (uVar4 != 0x20)) goto LAB_0710b88c;
              uVar15 = uVar15 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar14 != uVar15);
          }
          else {
LAB_0710b88c:
            if (uVar15 < uVar14) goto LAB_0710b8a0;
          }
          goto LAB_0710b8d0;
        }
      }
      else {
LAB_0710b8a0:
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar10 = FUN_0710d4b8(param_2,param_3 & 0xffffffff | uVar10 << 0x20,uVar15);
        if ((uVar10 & 1) != 0) {
LAB_0710b8d0:
          if (!bVar6) goto LAB_0710b93c;
          goto LAB_0710b8d8;
        }
      }
    }
  }
  else {
    if (uVar19 != 0x2b) {
      if (uVar19 == 0x2d) {
        uVar15 = uVar15 + 1;
        if (uVar13 <= uVar15) goto LAB_0710b900;
        uVar19 = (uint)param_2[(int)uVar15];
        iVar16 = -1;
      }
      else {
LAB_0710b414:
        iVar16 = 1;
      }
      goto LAB_0710b660;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 < uVar13) {
      uVar19 = (uint)param_2[(int)uVar15];
      goto LAB_0710b414;
    }
  }
LAB_0710b900:
  lVar9 = 0;
  uVar7 = 0;
LAB_0710b908:
  *param_6 = lVar9;
  return uVar7;
}


