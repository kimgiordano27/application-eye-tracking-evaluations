/*
FUNCTION_NAME: FUN_0567b470
ENTRY_POINT: 0567b470
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 133
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0567bb84) */

undefined4 FUN_0567b470(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long local_168;
  long *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_100;
  long *plStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0;
  long *plStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  uint local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_06dbc6f0 & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_List<IContext>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<SerializationErrorCallback>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IDataNode>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<SerializedCommand>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<SetItemBody>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IResettable>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<SeverityEntry>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<ShopItemPane>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<QDOODOQQDQODD>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<SideObject>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<SideObjectLog>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<SidewalkPresetClass>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<SimulatedHandExpression>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<float>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<SortColumnDescription>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fb980);
    FUN_02d965b8(System_Collections_Generic_List<SortOption>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<SpriteCharacter>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<SpriteGlyph>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<StackFrame>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<string>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<StylePropertyId>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<StylePropertyName>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<StylePropertyValue>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a155b0);
    FUN_02d965b8(System_Collections_Generic_List<StyleSelector>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0e8c0);
    FUN_02d965b8(System_Collections_Generic_List<StyleSelectorPart>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<StyleSheet>_TypeInfo);
    DAT_06dbc6f0 = 1;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  plVar20 = *(long **)(param_1 + 0x18);
  local_84 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  plStack_a8 = (long *)0x0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_e0 = 0;
  plStack_f8 = (long *)0x0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar20 == (long *)0x0) goto LAB_0567be34;
      *(undefined4 *)((long)plVar20 + 0x20c) = *(undefined4 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x50) = plVar20[0x1e];
      LeanTween__value();
      *(long *)(param_1 + 0x58) = plVar20[0x1f];
      LeanTween__value();
      puVar17 = (undefined4 *)(param_1 + 0x28);
      uVar8 = *(undefined8 *)System_Collections_Generic_List<StyleSelectorPart>_TypeInfo;
      *(undefined4 *)(param_1 + 0x60) = *puVar17;
      lVar11 = FUN_02d966a4(uVar8);
      plVar18 = (long *)(param_1 + 0x68);
      *plVar18 = lVar11;
      LeanTween__value(plVar18,lVar11);
      uVar5 = *(undefined4 *)(param_1 + 0x60);
      lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Collections_Generic_List<QDOODOQQDQODD>_TypeInfo);
      FUN_04e01ef0(lVar11,uVar5,
                   *(undefined8 *)System_Collections_Generic_List<SeverityEntry>_TypeInfo);
      plVar19 = (long *)(param_1 + 0x70);
      *plVar19 = lVar11;
      LeanTween__value(plVar19,lVar11);
      *(bool *)(param_1 + 0x78) = plVar20[0x33] == 0;
      if (*(int *)(param_1 + 0x60) != 0) {
        uVar10 = 0;
        lVar11 = 0x20;
        do {
          iVar6 = FUN_05658144(puVar17,uVar10 & 0xffffffff,0);
          if (iVar6 != 0) {
            if (*plVar19 == 0) goto LAB_0567be34;
            lVar13 = *(long *)System_Collections_Generic_List<StyleSheet>_TypeInfo;
            FUN_04e02c60(*plVar19,iVar6,uVar10 & 0xffffffff,
                         *(undefined8 *)
                          System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo);
            uVar5 = FUN_05657f8c(puVar17,uVar10 & 0xffffffff,0);
            lVar16 = *(long *)(param_1 + 0x58);
            if (lVar16 == 0) goto LAB_0567be34;
            uVar9 = FUN_04e045cc(lVar16,iVar6,&local_84,
                                 *(undefined8 *)
                                  System_Collections_Generic_List<IResettable>_TypeInfo);
            if ((uVar9 & 1) == 0) {
              if (*(char *)(param_1 + 0x78) == '\0') {
                plVar14 = (long *)0x0;
              }
              else {
                lVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fb980);
                FUN_0634fa84(lVar16,lVar13,0);
                if (lVar16 == 0) goto LAB_0567be34;
                plVar14 = (long *)FUN_0634ee08(lVar16,0);
              }
            }
            else {
              lVar16 = *(long *)(param_1 + 0x50);
              if (lVar16 == 0) goto LAB_0567be34;
              if (*(uint *)(lVar16 + 0x18) <= local_84) goto LAB_0567be40;
              lVar16 = lVar16 + (ulong)local_84 * 0x18;
              plVar14 = *(long **)(lVar16 + 0x28);
              iVar6 = *(int *)(lVar16 + 0x34);
            }
            lVar16 = *plVar18;
            plStack_160 = (long *)0x0;
            local_158 = 0;
            local_168 = lVar13;
            LeanTween__value(&local_168,lVar13);
            plStack_160 = plVar14;
            LeanTween__value(&plStack_160,plVar14);
            local_158 = CONCAT44(iVar6,uVar5);
            if (lVar16 == 0) goto LAB_0567be34;
            if (*(uint *)(lVar16 + 0x18) <= uVar10) {
LAB_0567be40:
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            plVar14 = (long *)(lVar16 + lVar11);
            plVar14[2] = local_158;
            plVar14[1] = (long)plStack_160;
            *plVar14 = local_168;
            LeanTween__value(plVar14,0);
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0x18;
        } while (uVar10 < *(uint *)(param_1 + 0x60));
      }
      if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar10 = FUN_0563c9e8(0);
      if ((uVar10 & 1) != 0) {
        uVar8 = 0x100000001;
        goto LAB_0567bd20;
      }
    }
    else {
      if (iVar6 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    if (*(char *)(param_1 + 0x78) != '\0') {
      if (plVar20 == (long *)0x0) goto LAB_0567be34;
      uVar15 = *(undefined8 *)(param_1 + 0x68);
      uVar8 = (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400));
      if (*(int *)(*(long *)PTR_DAT_06a155b0 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_06a155b0);
      }
      FUN_05675ff0(uVar15,uVar8,param_1 + 0x28,0);
    }
    if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar10 = FUN_0563c9e8(0);
    uVar8 = DAT_010fc988;
    if ((uVar10 & 1) != 0) goto LAB_0567bd20;
OVRPlugin__GetFaceState:
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_0567be34;
    FUN_04e03038(&local_168,*(long *)(param_1 + 0x58),
                 *(undefined8 *)System_Collections_Generic_List<SetItemBody>_TypeInfo);
    puVar4 = System_Collections_Generic_List<SpriteGlyph>_TypeInfo;
    puVar3 = System_Collections_Generic_List<SidewalkPresetClass>_TypeInfo;
    puVar2 = System_Collections_Generic_List<ShopItemPane>_TypeInfo;
    puVar1 = System_Collections_Generic_List<SerializedCommand>_TypeInfo;
    plStack_a8 = plStack_160;
    local_b0 = local_168;
    uStack_98 = uStack_150;
    local_a0 = local_158;
    plStack_160 = &local_b0;
    lVar11 = 0;
    local_168 = 0;
    while (uVar9 = FUN_0521b27c(&local_b0,*(undefined8 *)puVar3), uVar10 = local_a0,
          lVar16 = local_168, (uVar9 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar9 = FUN_04e02e4c(*(long *)(param_1 + 0x70),local_a0 & 0xffffffff,*(undefined8 *)puVar1);
      if ((uVar9 & 1) == 0) {
        lVar16 = *(long *)(param_1 + 0x50);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar12 = (uint)(uVar10 >> 0x20);
        if (*(uint *)(lVar16 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar16 = lVar16 + (ulong)uVar12 * 0x18;
        uStack_c8 = *(undefined8 *)(lVar16 + 0x28);
        local_d0 = *(undefined8 *)(lVar16 + 0x20);
        local_c0 = *(undefined8 *)(lVar16 + 0x30);
        if (lVar11 == 0) {
          if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar6 = FUN_04e028fc(*(long *)(param_1 + 0x58),*(undefined8 *)puVar2);
          if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar7 = FUN_04e028fc(*(long *)(param_1 + 0x70),*(undefined8 *)puVar2);
          lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                       System_Collections_Generic_List<StylePropertyValue>_TypeInfo)
          ;
          iVar6 = iVar6 - iVar7;
          if (iVar6 < 5) {
            iVar6 = 4;
          }
          FUN_04152420(lVar11,iVar6,
                       *(undefined8 *)System_Collections_Generic_List<StylePropertyName>_TypeInfo);
          local_130 = local_c0;
          uStack_138 = uStack_c8;
          local_140 = local_d0;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        else {
          uStack_138 = *(undefined8 *)(lVar16 + 0x28);
          local_140 = *(undefined8 *)(lVar16 + 0x20);
          local_130 = *(undefined8 *)(lVar16 + 0x30);
        }
        lVar16 = *(long *)(lVar11 + 0x10);
        lVar13 = *(long *)puVar4;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar12 = *(uint *)(lVar11 + 0x18);
        if (uVar12 < *(uint *)(lVar16 + 0x18)) {
          lVar16 = lVar16 + (long)(int)uVar12 * 0x18;
          *(uint *)(lVar11 + 0x18) = uVar12 + 1;
          *(undefined8 *)(lVar16 + 0x28) = uStack_138;
          *(undefined8 *)(lVar16 + 0x20) = local_140;
          *(undefined8 *)(lVar16 + 0x30) = local_130;
          LeanTween__value(lVar16 + 0x20,0);
        }
        else {
          uStack_78 = uStack_138;
          local_80 = local_140;
          local_70 = local_130;
          FUN_04152ccc(lVar11,&local_80,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    FUN_0521b384(plStack_160,*(undefined8 *)System_Collections_Generic_List<SideObject>_TypeInfo);
    if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar16);
    }
    if (lVar11 != 0) {
      FUN_041548b8(lVar11,*(undefined8 *)System_Collections_Generic_List<StylePropertyId>_TypeInfo);
      FUN_0415398c(&local_168,lVar11,*(undefined8 *)System_Collections_Generic_List<string>_TypeInfo
                  );
      puVar1 = System_Collections_Generic_List<SimulatedHandExpression>_TypeInfo;
      plStack_f8 = plStack_160;
      local_100 = local_168;
      uStack_e8 = uStack_150;
      local_f0 = local_158;
      local_e0 = local_148;
      local_168 = 0;
      plStack_160 = &local_100;
      while (uVar10 = FUN_0519611c(&local_100,*(undefined8 *)puVar1), (uVar10 & 1) != 0) {
        uStack_118 = uStack_e8;
        local_120 = local_f0;
        local_110 = local_e0;
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        OVRPlugin__set_HandSkeletonVersion(plVar20,&local_120,0);
      }
      FUN_05196118(&local_100,*(undefined8 *)System_Collections_Generic_List<SideObjectLog>_TypeInfo
                  );
      iVar6 = *(int *)(lVar11 + 0x18);
      *(undefined4 *)(lVar11 + 0x18) = 0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (0 < iVar6) {
        FUN_0550afb4(*(undefined8 *)(lVar11 + 0x10),0,iVar6,0);
      }
    }
    if (plVar20 == (long *)0x0) goto LAB_0567be34;
    plVar20[0x1e] = *(long *)(param_1 + 0x68);
    LeanTween__value(plVar20 + 0x1e);
    FUN_037708e8(plVar20[0x1f],*(undefined8 *)(param_1 + 0x70),
                 *(undefined8 *)System_Collections_Generic_List<StyleSelector>_TypeInfo);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_0567be34;
    FUN_04e02de0(*(long *)(param_1 + 0x70),
                 *(undefined8 *)
                  System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo);
    if (plVar20[0x20] == 0) goto LAB_0567be34;
    FUN_04df51a0(plVar20[0x20],*(undefined8 *)System_Collections_Generic_List<IDataNode>_TypeInfo);
    if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar10 = FUN_0563c9e8(0);
    uVar8 = DAT_010fc420;
    if ((uVar10 & 1) != 0) goto LAB_0567bd20;
LAB_0567bcdc:
    if (*(int *)(param_1 + 0x60) != 0) {
      if (plVar20 == (long *)0x0) goto LAB_0567be34;
      FUN_05673c14(plVar20,0);
    }
    if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar10 = FUN_0563c9e8(0);
    uVar8 = DAT_010fc4d0;
    if ((uVar10 & 1) != 0) {
LAB_0567bd20:
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      return 1;
    }
  }
  else {
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto OVRPlugin__GetFaceState;
    }
    if (iVar6 == 3) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_0567bcdc;
    }
    if (iVar6 != 4) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (plVar20 == (long *)0x0) {
LAB_0567be34:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (plVar20[0x33] == 0) {
    if (*(int *)(param_1 + 0x60) != 0) {
      lVar11 = FUN_05674288(plVar20,0);
      FUN_035040c4(lVar11,*(undefined8 *)
                           System_Collections_Generic_List<SerializationErrorCallback>_TypeInfo);
      plVar20[0x17] = lVar11;
      goto LAB_0567bdf4;
    }
  }
  else {
    FUN_05674018(plVar20,0);
    OVRPlugin__get_tiledMultiResLevel(plVar20,param_1 + 0x28,0);
  }
  lVar16 = *(long *)System_Collections_Generic_List<IContext>_TypeInfo;
  lVar11 = *(long *)(lVar16 + 0x38);
  if (lVar11 == 0) {
    FUN_02dcfd74(lVar16);
    lVar11 = *(long *)(lVar16 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02dcfd18();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar11 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02dcfd18();
  }
  lVar11 = **(long **)(lVar11 + 0xb8);
  plVar20[0x17] = lVar11;
LAB_0567bdf4:
  LeanTween__value(plVar20 + 0x17,lVar11);
  FUN_05677158(plVar20,0);
  *(undefined4 *)(plVar20 + 0x40) = *(undefined4 *)(param_1 + 0x20);
  return 0;
}


