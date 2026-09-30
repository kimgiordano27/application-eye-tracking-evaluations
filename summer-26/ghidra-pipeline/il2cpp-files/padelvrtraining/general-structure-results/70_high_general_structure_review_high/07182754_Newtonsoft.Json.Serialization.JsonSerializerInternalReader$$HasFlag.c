/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasFlag
ENTRY_POINT: 07182754
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasFlag
                (undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long *param_5,
                undefined1 *param_6)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  undefined8 *unaff_x26;
  uint uVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  
  uVar8 = FUN_071848d8();
  if ((uVar8 & 1) != 0) {
    return uVar8;
  }
  FUN_037e7a9c(*unaff_x26);
  auVar22 = FUN_0718227c(0,0);
  puVar13 = auVar22._0_8_;
  if ((DAT_09842ffa & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091dad60);
    FUN_03d2d2b0(PTR_DAT_0920eb10);
    FUN_03d2d2b0(PTR_DAT_091dad68);
    FUN_03d2d2b0(PTR_DAT_091dad78);
    FUN_03d2d2b0(PTR_DAT_091a4638);
    FUN_03d2d2b0(PTR_DAT_091a1320);
    DAT_09842ffa = 1;
  }
  puVar6 = PTR_DAT_0920eb10;
  uVar14 = auVar22._8_4_;
  if (uVar14 == 0) goto LAB_07182d20;
  uVar4 = *puVar13;
  if ((param_3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if ((uVar4 - 9 < 5) || (uVar4 == 0x20)) {
      if (1 < uVar14) {
        uVar16 = 1;
        do {
          uVar4 = puVar13[(int)uVar16];
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          if ((4 < uVar4 - 9) && (uVar4 != 0x20)) goto LAB_0718282c;
          uVar16 = uVar16 + 1;
        } while (uVar14 != uVar16);
      }
      goto LAB_07182d20;
    }
  }
  uVar16 = 0;
LAB_0718282c:
  uVar20 = (uint)uVar4;
  uVar8 = auVar22._8_8_ >> 0x20;
  if (((uint)param_3 >> 2 & 1) == 0) goto LAB_07182834;
  if (param_4 == 0) goto LAB_07182d74;
  lVar11 = *(long *)(param_4 + 0x28);
  lVar3 = *(long *)(param_4 + 0x30);
  uVar21 = thunk_FUN_06fd18b4(lVar11,*(undefined8 *)PTR_DAT_091a4638,0);
  if (((uVar21 & 1) == 0) ||
     (uVar21 = thunk_FUN_06fd18b4(lVar3,*(undefined8 *)PTR_DAT_091a1320,0), (uVar21 & 1) == 0)) {
    lVar12 = *(long *)PTR_DAT_091dad68;
    if (uVar14 < uVar16) {
      FUN_0719919c(0);
    }
    if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    uVar14 = uVar14 - uVar16;
    puVar13 = puVar13 + (int)uVar16;
    auVar22._8_4_ = uVar14;
    auVar22._0_8_ = puVar13;
    auVar22._12_4_ = 0;
    auVar5._8_4_ = uVar14;
    auVar5._0_8_ = puVar13;
    auVar5._12_4_ = 0;
    uVar8 = FUN_06fd246c(lVar11,0);
    if ((uVar8 & 1) == 0) {
      if (DAT_09836d82 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a8170);
        DAT_09836d82 = '\x01';
      }
      if (lVar11 == 0) {
        uVar9 = 0;
        uVar10 = 0;
      }
      else {
        uVar9 = FUN_06fd0380(lVar11,0);
        uVar10 = *(undefined4 *)(lVar11 + 0x10);
      }
      uVar8 = FUN_048d31b8(puVar13,uVar14,uVar9,uVar10,*(undefined8 *)PTR_DAT_091dad60);
      if ((uVar8 & 1) == 0) goto LAB_071829e0;
      if (lVar11 == 0) goto LAB_07182d74;
      uVar16 = *(uint *)(lVar11 + 0x10);
      if (uVar14 <= uVar16) goto LAB_07182d20;
      uVar20 = (uint)puVar13[(int)uVar16];
    }
    else {
LAB_071829e0:
      uVar8 = FUN_06fd246c(lVar3,0);
      if ((uVar8 & 1) == 0) {
        if (DAT_09836d82 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a8170);
          DAT_09836d82 = '\x01';
        }
        if (lVar3 == 0) {
          uVar9 = 0;
          uVar10 = 0;
        }
        else {
          uVar9 = FUN_06fd0380(lVar3,0);
          uVar10 = *(undefined4 *)(lVar3 + 0x10);
        }
        uVar8 = FUN_048d31b8(puVar13,uVar14,uVar9,uVar10,*(undefined8 *)PTR_DAT_091dad60);
        if ((uVar8 & 1) != 0) {
          if (lVar3 == 0) {
LAB_07182d74:
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uVar16 = *(uint *)(lVar3 + 0x10);
          if (uVar16 < uVar14) {
            uVar20 = (uint)puVar13[(int)uVar16];
            uVar8 = 0;
            iVar17 = -1;
            goto LAB_07182a80;
          }
          goto LAB_07182d20;
        }
      }
      uVar16 = 0;
    }
    uVar8 = 0;
    iVar17 = 1;
    auVar22 = auVar5;
LAB_07182a80:
    puVar6 = PTR_DAT_0920eb10;
    lVar11 = auVar22._0_8_;
    if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar14 = uVar20 - 0x30;
    if (uVar14 < 10) {
      uVar15 = auVar22._8_4_;
      if (uVar20 != 0x30) {
LAB_07182ae4:
        uVar20 = uVar16 + 1;
        uVar21 = (ulong)uVar14;
        iVar18 = -0x11;
        do {
          if (uVar15 <= uVar20) goto LAB_07182d5c;
          uVar4 = *(ushort *)(lVar11 + (long)(int)(uVar16 + iVar18 + 0x12) * 2);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          if (9 < uVar4 - 0x30) {
            uVar19 = (ulong)(uint)uVar4;
            uVar14 = uVar16 + iVar18 + 0x12;
            goto LAB_07182c28;
          }
          uVar20 = uVar16 + iVar18 + 0x13;
          bVar7 = iVar18 != -1;
          iVar18 = iVar18 + 1;
          uVar21 = ((ulong)uVar4 + uVar21 * 10) - 0x30;
        } while (bVar7);
        if (uVar15 <= uVar20) {
LAB_07182d5c:
          uVar8 = 1;
          lVar11 = uVar21 * (long)iVar17;
          goto LAB_07182d28;
        }
        uVar4 = *(ushort *)(lVar11 + (long)(int)(uVar16 + 0x12) * 2);
        uVar19 = (ulong)uVar4;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar14 = uVar16 + 0x12;
        if (9 < uVar4 - 0x30) {
LAB_07182c28:
          uVar16 = uVar14;
          bVar7 = false;
          uVar20 = (uint)uVar19;
          goto LAB_07182c38;
        }
        bVar2 = 0xccccccccccccccc < (long)uVar21;
        iVar18 = 2 - iVar17;
        if (-1 < 1 - iVar17) {
          iVar18 = 1 - iVar17;
        }
        uVar21 = (uVar19 + uVar21 * 10) - 0x30;
        uVar16 = uVar16 + 0x13;
        bVar1 = (ulong)(uint)(iVar18 >> 1) + 0x7fffffffffffffff < uVar21;
        bVar7 = bVar2 || bVar1;
        if (uVar16 < uVar15) {
          do {
            uVar4 = *(ushort *)(lVar11 + (long)(int)uVar16 * 2);
            uVar20 = (uint)uVar4;
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            if (9 < uVar4 - 0x30) goto LAB_07182c38;
            uVar16 = uVar16 + 1;
            bVar7 = true;
          } while (uVar15 != uVar16);
        }
        else if (!bVar2 && !bVar1) goto LAB_07182d5c;
LAB_07182cf8:
        lVar11 = 0;
        uVar8 = 0;
        *param_6 = 1;
        goto LAB_07182d28;
      }
      do {
        uVar16 = uVar16 + 1;
        if (uVar15 <= uVar16) {
          uVar21 = 0;
          goto LAB_07182d5c;
        }
        uVar4 = *(ushort *)(lVar11 + (long)(int)uVar16 * 2);
        uVar20 = (uint)uVar4;
        uVar14 = uVar4 - 0x30;
      } while (uVar14 == 0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (uVar14 < 10) goto LAB_07182ae4;
      uVar21 = 0;
      bVar7 = false;
LAB_07182c38:
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if ((uVar20 - 9 < 5) || (uVar20 == 0x20)) {
        if (((uint)param_3 >> 1 & 1) != 0) {
          uVar16 = uVar16 + 1;
          if ((int)uVar16 < (int)uVar15) {
            puVar13 = (ushort *)(lVar11 + (long)(int)uVar16 * 2);
            do {
              if (uVar15 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d550();
              }
              uVar4 = *puVar13;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_03db619c();
              }
              if ((4 < uVar4 - 9) && (uVar4 != 0x20)) goto LAB_07182cac;
              uVar16 = uVar16 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar15 != uVar16);
          }
          else {
LAB_07182cac:
            if (uVar16 < uVar15) goto LAB_07182cc0;
          }
          goto LAB_07182cf0;
        }
      }
      else {
LAB_07182cc0:
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar8 = FUN_071848d8(lVar11,auVar22._8_8_ & 0xffffffff | uVar8 << 0x20,uVar16);
        if ((uVar8 & 1) != 0) {
LAB_07182cf0:
          if (!bVar7) goto LAB_07182d5c;
          goto LAB_07182cf8;
        }
      }
    }
  }
  else {
    if (uVar20 != 0x2b) {
      if (uVar20 == 0x2d) {
        uVar16 = uVar16 + 1;
        if (uVar14 <= uVar16) goto LAB_07182d20;
        uVar20 = (uint)puVar13[(int)uVar16];
        iVar17 = -1;
      }
      else {
LAB_07182834:
        iVar17 = 1;
      }
      goto LAB_07182a80;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 < uVar14) {
      uVar20 = (uint)puVar13[(int)uVar16];
      goto LAB_07182834;
    }
  }
LAB_07182d20:
  lVar11 = 0;
  uVar8 = 0;
LAB_07182d28:
  *param_5 = lVar11;
  return uVar8;
}


