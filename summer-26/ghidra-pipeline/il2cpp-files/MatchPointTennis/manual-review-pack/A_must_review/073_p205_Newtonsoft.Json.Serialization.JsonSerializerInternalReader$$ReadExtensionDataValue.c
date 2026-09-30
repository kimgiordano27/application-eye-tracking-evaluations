/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadExtensionDataValue
ENTRY_POINT: 07a48440
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue(void)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  long unaff_x19;
  long lVar14;
  long *unaff_x21;
  long unaff_x22;
  ushort *puVar15;
  uint uVar16;
  uint uVar17;
  ulong unaff_x23;
  uint unaff_w24;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  long *unaff_x26;
  long unaff_x27;
  uint uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  long in_stack_00000008;
  
  FUN_04447ba8(PTR_DAT_09f3aff0);
  *(undefined1 *)(unaff_x27 + 0x1a0) = 1;
  in_stack_00000008 = 0;
  lVar8 = FUN_04e13ec8();
  in_stack_00000008 = lVar8;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*unaff_x26);
  }
  puVar13 = (undefined1 *)(ulong)(unaff_w24 & 1);
  uVar11 = unaff_x23 & 0xffffffff;
  uVar9 = FUN_07a49da0(&stack0x00000008,lVar8 + ((unaff_x19 << 0x20) >> 0x1f));
  if ((uVar9 & 1) != 0) {
    lVar8 = in_stack_00000008 - lVar8;
    if (lVar8 < 0) {
      lVar8 = lVar8 + 1;
    }
    if ((unaff_x19 << 0x20) >> 0x20 <= lVar8 >> 1) {
      return uVar9;
    }
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar11 = lVar8 >> 1 & 0xffffffff;
    uVar9 = FUN_07a4a680();
    if ((uVar9 & 1) != 0) {
      return uVar9;
    }
  }
  FUN_03db7f50(*unaff_x26);
  auVar24 = FUN_07a48004(0,0);
  puVar15 = auVar24._0_8_;
  if ((DAT_0a525191 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f44d38);
    FUN_04447ba8(PTR_DAT_09f40bf0);
    FUN_04447ba8(PTR_DAT_09f40e98);
    FUN_04447ba8(PTR_DAT_09f3aff0);
    FUN_04447ba8(PTR_DAT_09f3e038);
    FUN_04447ba8(PTR_DAT_09f40410);
    DAT_0a525191 = 1;
  }
  puVar6 = PTR_DAT_09f40bf0;
  uVar16 = auVar24._8_4_;
  if (uVar16 == 0) goto LAB_07a48aac;
  uVar4 = *puVar15;
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((uVar4 - 9 < 5) || (uVar4 == 0x20)) {
      if (1 < uVar16) {
        uVar18 = 1;
        do {
          uVar4 = puVar15[(int)uVar18];
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((4 < uVar4 - 9) && (uVar4 != 0x20)) goto LAB_07a485b8;
          uVar18 = uVar18 + 1;
        } while (uVar16 != uVar18);
      }
      goto LAB_07a48aac;
    }
  }
  uVar18 = 0;
LAB_07a485b8:
  uVar22 = (uint)uVar4;
  uVar9 = auVar24._8_8_ >> 0x20;
  if (((uint)uVar11 >> 2 & 1) == 0) goto LAB_07a485c0;
  if (unaff_x22 == 0) goto LAB_07a48b00;
  lVar8 = *(long *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  uVar23 = thunk_FUN_078b3114(lVar8,*(undefined8 *)PTR_DAT_09f3e038,0);
  if (((uVar23 & 1) == 0) ||
     (uVar23 = thunk_FUN_078b3114(lVar3,*(undefined8 *)PTR_DAT_09f40410,0), (uVar23 & 1) == 0)) {
    lVar14 = *(long *)PTR_DAT_09f40e98;
    if (uVar16 < uVar18) {
      FUN_07a5ec1c(0);
    }
    if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar16 = uVar16 - uVar18;
    puVar15 = puVar15 + (int)uVar18;
    auVar24._8_4_ = uVar16;
    auVar24._0_8_ = puVar15;
    auVar24._12_4_ = 0;
    auVar5._8_4_ = uVar16;
    auVar5._0_8_ = puVar15;
    auVar5._12_4_ = 0;
    uVar9 = FUN_078b4450(lVar8,0);
    if ((uVar9 & 1) == 0) {
      if (DAT_0a51d028 == '\0') {
        FUN_04447ba8(PTR_DAT_09f28738);
        DAT_0a51d028 = '\x01';
      }
      if (lVar8 == 0) {
        uVar10 = 0;
        uVar12 = 0;
      }
      else {
        uVar10 = FUN_078b1c78(lVar8,0);
        uVar12 = *(undefined4 *)(lVar8 + 0x10);
      }
      uVar9 = FUN_07a4ca80(puVar15,uVar16,uVar10,uVar12,*(undefined8 *)PTR_DAT_09f44d38);
      if ((uVar9 & 1) == 0) goto LAB_07a4876c;
      if (lVar8 == 0) goto LAB_07a48b00;
      uVar18 = *(uint *)(lVar8 + 0x10);
      if (uVar16 <= uVar18) goto LAB_07a48aac;
      uVar22 = (uint)puVar15[(int)uVar18];
    }
    else {
LAB_07a4876c:
      uVar9 = FUN_078b4450(lVar3,0);
      if ((uVar9 & 1) == 0) {
        if (DAT_0a51d028 == '\0') {
          FUN_04447ba8(PTR_DAT_09f28738);
          DAT_0a51d028 = '\x01';
        }
        if (lVar3 == 0) {
          uVar10 = 0;
          uVar12 = 0;
        }
        else {
          uVar10 = FUN_078b1c78(lVar3,0);
          uVar12 = *(undefined4 *)(lVar3 + 0x10);
        }
        uVar9 = FUN_07a4ca80(puVar15,uVar16,uVar10,uVar12,*(undefined8 *)PTR_DAT_09f44d38);
        if ((uVar9 & 1) != 0) {
          if (lVar3 == 0) {
LAB_07a48b00:
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar18 = *(uint *)(lVar3 + 0x10);
          if (uVar16 <= uVar18) goto LAB_07a48aac;
          uVar22 = (uint)puVar15[(int)uVar18];
          uVar9 = 0;
          iVar19 = -1;
          goto LAB_07a4880c;
        }
      }
      uVar18 = 0;
    }
    uVar9 = 0;
    iVar19 = 1;
    auVar24 = auVar5;
LAB_07a4880c:
    puVar6 = PTR_DAT_09f40bf0;
    lVar8 = auVar24._0_8_;
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar16 = uVar22 - 0x30;
    if (uVar16 < 10) {
      uVar17 = auVar24._8_4_;
      if (uVar22 != 0x30) {
LAB_07a48870:
        uVar22 = uVar18 + 1;
        uVar23 = (ulong)uVar16;
        iVar20 = -0x11;
        do {
          if (uVar17 <= uVar22) goto LAB_07a48ae8;
          uVar4 = *(ushort *)(lVar8 + (long)(int)(uVar18 + iVar20 + 0x12) * 2);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if (9 < uVar4 - 0x30) {
            uVar21 = (ulong)(uint)uVar4;
            uVar16 = uVar18 + iVar20 + 0x12;
            goto LAB_07a489b4;
          }
          uVar22 = uVar18 + iVar20 + 0x13;
          bVar7 = iVar20 != -1;
          iVar20 = iVar20 + 1;
          uVar23 = ((ulong)uVar4 + uVar23 * 10) - 0x30;
        } while (bVar7);
        if (uVar17 <= uVar22) {
LAB_07a48ae8:
          uVar9 = 1;
          lVar8 = uVar23 * (long)iVar19;
          goto LAB_07a48ab4;
        }
        uVar4 = *(ushort *)(lVar8 + (long)(int)(uVar18 + 0x12) * 2);
        uVar21 = (ulong)uVar4;
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar16 = uVar18 + 0x12;
        if (9 < uVar4 - 0x30) {
LAB_07a489b4:
          uVar18 = uVar16;
          bVar7 = false;
          uVar22 = (uint)uVar21;
          goto LAB_07a489c4;
        }
        bVar2 = 0xccccccccccccccc < (long)uVar23;
        iVar20 = 2 - iVar19;
        if (-1 < 1 - iVar19) {
          iVar20 = 1 - iVar19;
        }
        uVar23 = (uVar21 + uVar23 * 10) - 0x30;
        uVar18 = uVar18 + 0x13;
        bVar1 = (ulong)(uint)(iVar20 >> 1) + 0x7fffffffffffffff < uVar23;
        bVar7 = bVar2 || bVar1;
        if (uVar18 < uVar17) {
          do {
            uVar4 = *(ushort *)(lVar8 + (long)(int)uVar18 * 2);
            uVar22 = (uint)uVar4;
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            if (9 < uVar4 - 0x30) goto LAB_07a489c4;
            uVar18 = uVar18 + 1;
            bVar7 = true;
          } while (uVar17 != uVar18);
        }
        else if (!bVar2 && !bVar1) goto LAB_07a48ae8;
LAB_07a48a84:
        lVar8 = 0;
        uVar9 = 0;
        *puVar13 = 1;
        goto LAB_07a48ab4;
      }
      do {
        uVar18 = uVar18 + 1;
        if (uVar17 <= uVar18) {
          uVar23 = 0;
          goto LAB_07a48ae8;
        }
        uVar4 = *(ushort *)(lVar8 + (long)(int)uVar18 * 2);
        uVar22 = (uint)uVar4;
        uVar16 = uVar4 - 0x30;
      } while (uVar16 == 0);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (uVar16 < 10) goto LAB_07a48870;
      uVar23 = 0;
      bVar7 = false;
LAB_07a489c4:
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((uVar22 - 9 < 5) || (uVar22 == 0x20)) {
        if (((uint)uVar11 >> 1 & 1) != 0) {
          uVar18 = uVar18 + 1;
          if ((int)uVar18 < (int)uVar17) {
            puVar15 = (ushort *)(lVar8 + (long)(int)uVar18 * 2);
            do {
              if (uVar17 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar4 = *puVar15;
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if ((4 < uVar4 - 9) && (uVar4 != 0x20)) goto LAB_07a48a38;
              uVar18 = uVar18 + 1;
              puVar15 = puVar15 + 1;
            } while (uVar17 != uVar18);
          }
          else {
LAB_07a48a38:
            if (uVar18 < uVar17) goto LAB_07a48a4c;
          }
          goto LAB_07a48a7c;
        }
      }
      else {
LAB_07a48a4c:
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar9 = FUN_07a4a680(lVar8,auVar24._8_8_ & 0xffffffff | uVar9 << 0x20,uVar18);
        if ((uVar9 & 1) != 0) {
LAB_07a48a7c:
          if (!bVar7) goto LAB_07a48ae8;
          goto LAB_07a48a84;
        }
      }
    }
  }
  else {
    if (uVar22 != 0x2b) {
      if (uVar22 != 0x2d) goto LAB_07a485c0;
      uVar18 = uVar18 + 1;
      if (uVar16 <= uVar18) goto LAB_07a48aac;
      uVar22 = (uint)puVar15[(int)uVar18];
      iVar19 = -1;
      goto LAB_07a4880c;
    }
    uVar18 = uVar18 + 1;
    if (uVar18 < uVar16) {
      uVar22 = (uint)puVar15[(int)uVar18];
LAB_07a485c0:
      iVar19 = 1;
      goto LAB_07a4880c;
    }
  }
LAB_07a48aac:
  lVar8 = 0;
  uVar9 = 0;
LAB_07a48ab4:
  *unaff_x21 = lVar8;
  return uVar9;
}


