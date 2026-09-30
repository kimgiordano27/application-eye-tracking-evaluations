/*
FUNCTION_NAME: FUN_06fb35e0
ENTRY_POINT: 06fb35e0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06fb35e0(long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  int local_15c;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined1 *puStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined1 local_6c [4];
  undefined8 local_68;
  
  puVar6 = 
  Oculus_Interaction_PoseDetection_Debug_HandShapeSkeletalDebugVisual_<AllFeatureStates>d__9_TypeInfo
  ;
  local_68 = param_2;
  if ((DAT_07eebaa5 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(Unity_Hierarchy_HierarchySearchQueryDescriptor_<>c_TypeInfo);
    FUN_03642964(System_Collections_Hashtable_SyncHashtable_TypeInfo);
    FUN_03642964(DuckOrDie_Player_HeadCollisionHandler_<HideHitFeedbackAfterDelay>d__16_TypeInfo);
    FUN_03642964(PTR_DAT_079f4df0);
    FUN_03642964(PTR_DAT_07a04638);
    FUN_03642964(Oculus_Interaction_HoverInteractorsGate_<>c_TypeInfo);
    FUN_03642964(System_Net_HttpWebRequest_NtlmAuthState_TypeInfo);
    FUN_03642964(PTR_DAT_07a04628);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(
                Oculus_Interaction_PoseDetection_Debug_HandShapeSkeletalDebugVisual_<AllFeatureStates>d__9_TypeInfo
                );
    FUN_03642964(PTR_DAT_079f79a0);
    FUN_03642964(Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo);
    FUN_03642964(PTR_DAT_07a006b0);
    FUN_03642964(UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo);
    FUN_03642964(UnityEngine_Rendering_ICameraHistoryReadAccess_HistoryRequestDelegate_TypeInfo);
    DAT_07eebaa5 = 1;
  }
  lVar12 = *(long *)puVar6;
  local_6c[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar12 = *(long *)puVar6;
  }
  FUN_06eaa264(local_6c,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),0);
  local_a0 = 0;
  puStack_98 = local_6c;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar3 = *(uint *)((long)param_3 + 0x54);
  if (*(uint *)(lVar12 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar12 = lVar12 + (long)(int)uVar3 * 0x10;
  uVar20 = *(undefined8 *)(lVar12 + 0x20);
  uVar17 = *(undefined8 *)(lVar12 + 0x28);
  lVar12 = FUN_055c9c74(*(long *)(param_1 + 0x18),uVar20,uVar17,
                        *(undefined8 *)System_Collections_Hashtable_SyncHashtable_TypeInfo);
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar8 = FUN_055c6910(*(long *)(param_1 + 0x30),uVar20,uVar17,
                       *(undefined8 *)Unity_Hierarchy_HierarchySearchQueryDescriptor_<>c_TypeInfo);
  lVar13 = FUN_06faf7d8(param_3);
  puVar6 = PTR_DAT_079f4e28;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar20 = *(undefined8 *)(lVar13 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)PTR_DAT_079f4e28);
  }
  uVar14 = FUN_071c0684(uVar20,0,0);
  if ((uVar14 & 1) == 0) {
LAB_06fb3800:
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar20 = *(undefined8 *)(param_4 + 0xf0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar14 = FUN_071c0684(uVar20,0,0);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(param_4 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      iVar9 = FUN_071a33a0(*(long *)(param_4 + 0xf0),0);
      if (iVar9 == 0) goto LAB_06fb38d4;
    }
    if ((char)param_3[10] != '\0') {
      lVar13 = param_3[0x13];
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uStack_c8 = *(undefined8 *)(lVar13 + 0x30);
      local_d0 = *(undefined8 *)(lVar13 + 0x28);
      uStack_b8 = *(undefined8 *)(lVar13 + 0x40);
      uStack_c0 = *(undefined8 *)(lVar13 + 0x38);
      local_b0 = *(undefined8 *)(lVar13 + 0x48);
      if (*(int *)(*(long *)PTR_DAT_079f79a0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_071e0978(&local_f8,2,0);
      uStack_148 = uStack_f0;
      local_150 = local_f8;
      uStack_138 = uStack_e0;
      uStack_140 = local_e8;
      local_130 = local_d8;
      uStack_118 = uStack_c8;
      local_120 = local_d0;
      uStack_108 = uStack_b8;
      uStack_110 = uStack_c0;
      local_100 = local_b0;
      uVar14 = FUN_071e0ef8(&local_120,&local_150,0);
      if ((uVar14 & 1) == 0) {
        bVar4 = true;
        bVar5 = true;
        goto LAB_06fb38e8;
      }
    }
    bVar4 = false;
    iVar9 = uVar8 + 1;
    bVar5 = true;
  }
  else {
    lVar13 = FUN_06faf7d8(param_3);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    iVar9 = FUN_071a33a0(*(long *)(lVar13 + 0x18),0);
    if (iVar9 != 0) goto LAB_06fb3800;
LAB_06fb38d4:
    bVar4 = false;
    bVar5 = false;
LAB_06fb38e8:
    iVar9 = 1;
  }
  FUN_04823fe8(&local_80,iVar9,2,1,*(undefined8 *)System_Net_HttpWebRequest_NtlmAuthState_TypeInfo);
  lVar13 = local_80;
  if (0 < (int)uVar8) {
    uVar14 = 0;
    lVar19 = 0x20;
    do {
      lVar18 = *(long *)(param_1 + 0x40);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      memmove((void *)(lVar13 + lVar19 + -0x20),(void *)(lVar18 + lVar19),0x78);
      uVar14 = uVar14 + 1;
      lVar19 = lVar19 + 0x78;
    } while (uVar8 != uVar14);
  }
  if (!bVar4 && !(bool)(bVar5 ^ 1)) {
    memmove((void *)(local_80 + (long)(int)uVar8 * 0x78),(void *)(param_1 + 0x48),0x78);
  }
  auVar21 = FUN_06fb13f0(param_1,param_4,param_3);
  puVar6 = UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo;
  if (*(int *)(*(long *)UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (lVar12 == 0) {
    local_15c = 0;
  }
  else {
    iVar9 = (int)*(ulong *)(lVar12 + 0x18);
    local_15c = iVar9 + -1;
    if (0 < iVar9) {
      uVar14 = 0;
      do {
        if (*(int *)(lVar12 + 0x20 + uVar14 * 4) == -1) {
          local_15c = (int)uVar14;
          break;
        }
        uVar14 = uVar14 + 1;
      } while ((*(ulong *)(lVar12 + 0x18) & 0xffffffff) != uVar14);
    }
  }
  uVar10 = FUN_06fb412c(param_3);
  uVar1 = uVar10;
  if (!bVar5) {
    uVar1 = 0;
  }
  FUN_04852298(&local_90,uVar1,2,1,*(undefined8 *)PTR_DAT_07a04628);
  if ((bVar5) && (uVar10 != 0)) {
    lVar19 = param_3[0xb];
    lVar13 = 0;
    iVar9 = 1;
    do {
      *(undefined4 *)(local_90 + lVar13 * 4) = *(undefined4 *)(lVar19 + lVar13 * 4);
      lVar13 = (long)iVar9;
      iVar9 = iVar9 + 1;
    } while (lVar13 < (long)(ulong)uVar10);
  }
  puVar7 = DuckOrDie_Player_HeadCollisionHandler_<HideHitFeedbackAfterDelay>d__16_TypeInfo;
  if (local_15c == 1) {
LAB_06fb3a84:
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar14 = FUN_06fb24ec(param_3);
    if ((uVar14 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07176120(*(undefined8 *)
                    UnityEngine_Rendering_ICameraHistoryReadAccess_HistoryRequestDelegate_TypeInfo,0
                  );
    }
    if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar11 = FUN_05e18a84(auVar21._8_8_ & 0xffffffff,1,0);
    uVar20 = uStack_78;
    lVar13 = local_80;
    if (!bVar5) {
      uVar8 = 0;
    }
    if (bVar4) {
      uVar8 = 0xffffffff;
    }
    if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_071fee48(&local_68,auVar21._0_8_ & 0xffffffff,auVar21._0_8_ >> 0x20,uVar11,lVar13,uVar20,
                 uVar8,0);
    FUN_04824314(&local_80,*(undefined8 *)Oculus_Interaction_HoverInteractorsGate_<>c_TypeInfo);
    FUN_071ff068(&local_68,local_90,uStack_88,0,0);
LAB_06fb3b74:
    *(uint *)(param_1 + 0x10) = uVar3;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (*(uint *)(lVar12 + 0x20) == uVar3) goto LAB_06fb3a84;
    if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar20 = FUN_0459ed6c(*(long *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10),
                          *(undefined8 *)
                           DuckOrDie_Player_HeadCollisionHandler_<HideHitFeedbackAfterDelay>d__16_TypeInfo
                         );
    if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar17 = FUN_0459ed6c(*(long *)(param_1 + 0x108),uVar3,*(undefined8 *)puVar7);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar14 = FUN_06fb42a0(uVar20,uVar17);
    if ((uVar14 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_071ff148(&local_68,0);
      if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar20 = FUN_0459ed6c(*(long *)(param_1 + 0x108),uVar3,*(undefined8 *)puVar7);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar14 = FUN_06fb24ec(uVar20);
      uVar20 = uStack_88;
      lVar13 = local_90;
      if ((uVar14 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_071ff068(&local_68,lVar13,uVar20,0,0);
      }
      else {
        if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar19 = FUN_0459ed6c(*(long *)(param_1 + 0x108),uVar3,*(undefined8 *)puVar7);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar17 = *(undefined8 *)(lVar19 + 0x68);
        uVar2 = *(undefined8 *)(lVar19 + 0x70);
        if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)PTR_DAT_07a006b0);
        }
        FUN_071fef5c(&local_68,lVar13,uVar20,uVar17,uVar2,0,0);
      }
      goto LAB_06fb3b74;
    }
    if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar20 = FUN_0459ed6c(*(long *)(param_1 + 0x108),uVar3,*(undefined8 *)puVar7);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar14 = FUN_06fb24ec(uVar20);
    if ((uVar14 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_071ff148(&local_68,0);
      uVar20 = uStack_88;
      lVar13 = local_90;
      if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar19 = FUN_0459ed6c(*(long *)(param_1 + 0x108),uVar3,*(undefined8 *)puVar7);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_071fef5c(&local_68,lVar13,uVar20,*(undefined8 *)(lVar19 + 0x68),
                   *(undefined8 *)(lVar19 + 0x70),0,0);
      goto LAB_06fb3b74;
    }
  }
  FUN_04852580(&local_90,*(undefined8 *)PTR_DAT_07a04638);
  (**(code **)(*param_3 + 0x1d8))(param_3,local_68,param_5,*(undefined8 *)(*param_3 + 0x1e0));
  puVar15 = (undefined8 *)FUN_07037e30(param_5,0);
  uVar20 = *puVar15;
  if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_071ff388(&local_68,uVar20,0);
  plVar16 = (long *)FUN_07037e30(param_5,0);
  if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_071e8b78(*plVar16,0);
  uVar8 = local_15c - 1;
  if (uVar8 != 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (*(uint *)(lVar12 + (long)(int)uVar8 * 4 + 0x20) != uVar3) goto LAB_06fb3c64;
  }
  if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_071ff148(&local_68,0);
  FUN_071ff1c0(&local_68,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
LAB_06fb3c64:
  puVar6 = Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo;
  lVar12 = *(long *)(param_1 + 0x40);
  if (lVar12 != 0) {
    uVar14 = 0;
    lVar13 = 0x20;
    do {
      if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar14) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if (DAT_07eebae2 == '\0') {
          FUN_03642964(Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo);
          DAT_07eebae2 = '\x01';
        }
        lVar12 = *(long *)puVar6;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar12 = *(long *)puVar6;
        }
        memmove((void *)(param_1 + 0x48),(void *)(*(long *)(lVar12 + 0xb8) + 8),0x78);
        FUN_06eaa270(local_6c,0);
        return;
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (DAT_07eebae2 == '\0') {
        FUN_03642964(puVar6);
        DAT_07eebae2 = '\x01';
      }
      lVar19 = *(long *)puVar6;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar19 = *(long *)puVar6;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      memmove((void *)(lVar12 + lVar13),(void *)(*(long *)(lVar19 + 0xb8) + 8),0x78);
      lVar19 = *(long *)(param_1 + 0xc0);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar19 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar12 = *(long *)(param_1 + 0x40);
      lVar19 = lVar19 + uVar14;
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x78;
      *(undefined1 *)(lVar19 + 0x20) = 0;
    } while (lVar12 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


