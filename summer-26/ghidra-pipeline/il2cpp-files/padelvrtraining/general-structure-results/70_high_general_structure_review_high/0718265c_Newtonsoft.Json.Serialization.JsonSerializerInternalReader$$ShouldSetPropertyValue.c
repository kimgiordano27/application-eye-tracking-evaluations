/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldSetPropertyValue
ENTRY_POINT: 0718265c
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


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue
                (undefined8 param_1,long param_2,ulong param_3,long param_4,long *param_5,
                uint param_6)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  long lVar14;
  ushort *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  long in_stack_00000008;
  
  puVar7 = PTR_DAT_0920eb10;
  puVar6 = PTR_DAT_09208b68;
  param_3 = param_3 & 0xffffffff;
  if ((DAT_09843009 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09208b68);
    FUN_03d2d2b0(PTR_DAT_0920eb10);
    FUN_03d2d2b0(PTR_DAT_091dad78);
    DAT_09843009 = 1;
  }
  lVar9 = FUN_0502844c(param_1,param_2,*(undefined8 *)puVar6);
  in_stack_00000008 = lVar9;
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_03db619c(*(long *)puVar7);
  }
  puVar13 = (undefined1 *)(ulong)(param_6 & 1);
  uVar10 = FUN_07183ffc(&stack0x00000008,lVar9 + ((param_2 << 0x20) >> 0x1f));
  if ((uVar10 & 1) != 0) {
    lVar9 = in_stack_00000008 - lVar9;
    if (lVar9 < 0) {
      lVar9 = lVar9 + 1;
    }
    if ((param_2 << 0x20) >> 0x20 <= lVar9 >> 1) {
      return uVar10;
    }
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    param_3 = lVar9 >> 1 & 0xffffffff;
    uVar10 = FUN_071848d8(param_1,param_2);
    if ((uVar10 & 1) != 0) {
      return uVar10;
    }
  }
  FUN_037e7a9c(*(undefined8 *)puVar7);
  auVar24 = FUN_0718227c(0,0);
  puVar15 = auVar24._0_8_;
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
  uVar16 = auVar24._8_4_;
  if (uVar16 == 0) goto LAB_07182d20;
  uVar4 = *puVar15;
  if ((param_3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if ((uVar4 - 9 < 5) || (uVar4 == 0x20)) {
      if (1 < uVar16) {
        uVar18 = 1;
        do {
          uVar4 = puVar15[(int)uVar18];
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          if ((4 < uVar4 - 9) && (uVar4 != 0x20)) goto LAB_0718282c;
          uVar18 = uVar18 + 1;
        } while (uVar16 != uVar18);
      }
      goto LAB_07182d20;
    }
  }
  uVar18 = 0;
LAB_0718282c:
  uVar22 = (uint)uVar4;
  uVar10 = auVar24._8_8_ >> 0x20;
  if (((uint)param_3 >> 2 & 1) == 0) goto LAB_07182834;
  if (param_4 == 0) goto LAB_07182d74;
  lVar9 = *(long *)(param_4 + 0x28);
  lVar3 = *(long *)(param_4 + 0x30);
  uVar23 = thunk_FUN_06fd18b4(lVar9,*(undefined8 *)PTR_DAT_091a4638,0);
  if (((uVar23 & 1) == 0) ||
     (uVar23 = thunk_FUN_06fd18b4(lVar3,*(undefined8 *)PTR_DAT_091a1320,0), (uVar23 & 1) == 0)) {
    lVar14 = *(long *)PTR_DAT_091dad68;
    if (uVar16 < uVar18) {
      FUN_0719919c(0);
    }
    if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    uVar16 = uVar16 - uVar18;
    puVar15 = puVar15 + (int)uVar18;
    auVar24._8_4_ = uVar16;
    auVar24._0_8_ = puVar15;
    auVar24._12_4_ = 0;
    auVar5._8_4_ = uVar16;
    auVar5._0_8_ = puVar15;
    auVar5._12_4_ = 0;
    uVar10 = FUN_06fd246c(lVar9,0);
    if ((uVar10 & 1) == 0) {
      if (DAT_09836d82 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a8170);
        DAT_09836d82 = '\x01';
      }
      if (lVar9 == 0) {
        uVar11 = 0;
        uVar12 = 0;
      }
      else {
        uVar11 = FUN_06fd0380(lVar9,0);
        uVar12 = *(undefined4 *)(lVar9 + 0x10);
      }
      uVar10 = FUN_048d31b8(puVar15,uVar16,uVar11,uVar12,*(undefined8 *)PTR_DAT_091dad60);
      if ((uVar10 & 1) == 0) goto LAB_071829e0;
      if (lVar9 == 0) goto LAB_07182d74;
      uVar18 = *(uint *)(lVar9 + 0x10);
      if (uVar16 <= uVar18) goto LAB_07182d20;
      uVar22 = (uint)puVar15[(int)uVar18];
    }
    else {
LAB_071829e0:
      uVar10 = FUN_06fd246c(lVar3,0);
      if ((uVar10 & 1) == 0) {
        if (DAT_09836d82 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a8170);
          DAT_09836d82 = '\x01';
        }
        if (lVar3 == 0) {
          uVar11 = 0;
          uVar12 = 0;
        }
        else {
          uVar11 = FUN_06fd0380(lVar3,0);
          uVar12 = *(undefined4 *)(lVar3 + 0x10);
        }
        uVar10 = FUN_048d31b8(puVar15,uVar16,uVar11,uVar12,*(undefined8 *)PTR_DAT_091dad60);
        if ((uVar10 & 1) != 0) {
          if (lVar3 == 0) {
LAB_07182d74:
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uVar18 = *(uint *)(lVar3 + 0x10);
          if (uVar16 <= uVar18) goto LAB_07182d20;
          uVar22 = (uint)puVar15[(int)uVar18];
          uVar10 = 0;
          iVar19 = -1;
          goto LAB_07182a80;
        }
      }
      uVar18 = 0;
    }
    uVar10 = 0;
    iVar19 = 1;
    auVar24 = auVar5;
LAB_07182a80:
    puVar6 = PTR_DAT_0920eb10;
    lVar9 = auVar24._0_8_;
    if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar16 = uVar22 - 0x30;
    if (uVar16 < 10) {
      uVar17 = auVar24._8_4_;
      if (uVar22 != 0x30) {
LAB_07182ae4:
        uVar22 = uVar18 + 1;
        uVar23 = (ulong)uVar16;
        iVar20 = -0x11;
        do {
          if (uVar17 <= uVar22) goto LAB_07182d5c;
          uVar4 = *(ushort *)(lVar9 + (long)(int)(uVar18 + iVar20 + 0x12) * 2);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          if (9 < uVar4 - 0x30) {
            uVar21 = (ulong)(uint)uVar4;
            uVar16 = uVar18 + iVar20 + 0x12;
            goto LAB_07182c28;
          }
          uVar22 = uVar18 + iVar20 + 0x13;
          bVar8 = iVar20 != -1;
          iVar20 = iVar20 + 1;
          uVar23 = ((ulong)uVar4 + uVar23 * 10) - 0x30;
        } while (bVar8);
        if (uVar17 <= uVar22) {
LAB_07182d5c:
          uVar10 = 1;
          lVar9 = uVar23 * (long)iVar19;
          goto LAB_07182d28;
        }
        uVar4 = *(ushort *)(lVar9 + (long)(int)(uVar18 + 0x12) * 2);
        uVar21 = (ulong)uVar4;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar16 = uVar18 + 0x12;
        if (9 < uVar4 - 0x30) {
LAB_07182c28:
          uVar18 = uVar16;
          bVar8 = false;
          uVar22 = (uint)uVar21;
          goto LAB_07182c38;
        }
        bVar2 = 0xccccccccccccccc < (long)uVar23;
        iVar20 = 2 - iVar19;
        if (-1 < 1 - iVar19) {
          iVar20 = 1 - iVar19;
        }
        uVar23 = (uVar21 + uVar23 * 10) - 0x30;
        uVar18 = uVar18 + 0x13;
        bVar1 = (ulong)(uint)(iVar20 >> 1) + 0x7fffffffffffffff < uVar23;
        bVar8 = bVar2 || bVar1;
        if (uVar18 < uVar17) {
          do {
            uVar4 = *(ushort *)(lVar9 + (long)(int)uVar18 * 2);
            uVar22 = (uint)uVar4;
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            if (9 < uVar4 - 0x30) goto LAB_07182c38;
            uVar18 = uVar18 + 1;
            bVar8 = true;
          } while (uVar17 != uVar18);
        }
        else if (!bVar2 && !bVar1) goto LAB_07182d5c;
LAB_07182cf8:
        lVar9 = 0;
        uVar10 = 0;
        *puVar13 = 1;
        goto LAB_07182d28;
      }
      do {
        uVar18 = uVar18 + 1;
        if (uVar17 <= uVar18) {
          uVar23 = 0;
          goto LAB_07182d5c;
        }
        uVar4 = *(ushort *)(lVar9 + (long)(int)uVar18 * 2);
        uVar22 = (uint)uVar4;
        uVar16 = uVar4 - 0x30;
      } while (uVar16 == 0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (uVar16 < 10) goto LAB_07182ae4;
      uVar23 = 0;
      bVar8 = false;
LAB_07182c38:
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if ((uVar22 - 9 < 5) || (uVar22 == 0x20)) {
        if (((uint)param_3 >> 1 & 1) != 0) {
          uVar18 = uVar18 + 1;
          if ((int)uVar18 < (int)uVar17) {
            puVar15 = (ushort *)(lVar9 + (long)(int)uVar18 * 2);
            do {
              if (uVar17 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d550();
              }
              uVar4 = *puVar15;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_03db619c();
              }
              if ((4 < uVar4 - 9) && (uVar4 != 0x20)) goto LAB_07182cac;
              uVar18 = uVar18 + 1;
              puVar15 = puVar15 + 1;
            } while (uVar17 != uVar18);
          }
          else {
LAB_07182cac:
            if (uVar18 < uVar17) goto LAB_07182cc0;
          }
          goto LAB_07182cf0;
        }
      }
      else {
LAB_07182cc0:
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar10 = FUN_071848d8(lVar9,auVar24._8_8_ & 0xffffffff | uVar10 << 0x20,uVar18);
        if ((uVar10 & 1) != 0) {
LAB_07182cf0:
          if (!bVar8) goto LAB_07182d5c;
          goto LAB_07182cf8;
        }
      }
    }
  }
  else {
    if (uVar22 != 0x2b) {
      if (uVar22 != 0x2d) goto LAB_07182834;
      uVar18 = uVar18 + 1;
      if (uVar16 <= uVar18) goto LAB_07182d20;
      uVar22 = (uint)puVar15[(int)uVar18];
      iVar19 = -1;
      goto LAB_07182a80;
    }
    uVar18 = uVar18 + 1;
    if (uVar18 < uVar16) {
      uVar22 = (uint)puVar15[(int)uVar18];
LAB_07182834:
      iVar19 = 1;
      goto LAB_07182a80;
    }
  }
LAB_07182d20:
  lVar9 = 0;
  uVar10 = 0;
LAB_07182d28:
  *param_5 = lVar9;
  return uVar10;
}


