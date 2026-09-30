/*
FUNCTION_NAME: FUN_0542bfc0
ENTRY_POINT: 0542bfc0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0542c93c) */
/* WARNING: Removing unreachable block (ram,0x0542c828) */

void FUN_0542bfc0(long *param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  
  if ((DAT_06a536b9 & 1) == 0) {
    FUN_02d4dc40(PlayFab_AddonModels_CreateOrUpdatePSNRequest_var);
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(PTR_DAT_066479b0);
    FUN_02d4dc40(UnityEngine_Rendering_RenderQueueRange_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_RenderStateBlock_TypeInfo);
    FUN_02d4dc40(Unity_XR_CoreUtils_ScriptableSettingsBase_TypeInfo);
    FUN_02d4dc40(UnityEngine_UI_ScrollRect_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_RenderTargetBlendState_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_ScrollView_TypeInfo);
    FUN_02d4dc40(UnityEngine_ScriptableObject_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0665d8a8);
    FUN_02d4dc40(UnityEngine_UIElements_Scroller_TypeInfo);
    FUN_02d4dc40(Oculus_Platform_Models_SdkAccount_TypeInfo);
    FUN_02d4dc40(PlayFab_Public_ScreenTimeTracker_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_ScriptableCullingParameters_TypeInfo);
    FUN_02d4dc40(Oculus_Platform_Models_SdkAccountList_TypeInfo);
    DAT_06a536b9 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_0542c938;
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
  lVar19 = param_1[4];
  if (*(char *)((long)param_1 + 0x16f) == '\0') {
    if (lVar19 == 0) {
      bVar6 = *(char *)((long)param_1 + 0x16e) != '\0';
      goto LAB_0542c11c;
    }
    bVar6 = *(char *)(lVar19 + 0x58) != '\0';
  }
  else {
    bVar6 = false;
    if (lVar19 == 0) {
LAB_0542c11c:
      if (*(char *)((long)param_1 + 0x16e) != '\0') {
        *(undefined1 *)((long)param_1 + 0x16e) = 0;
      }
    }
  }
  plVar10 = (long *)param_1[7];
  if (plVar10 == (long *)0x0) goto LAB_0542c938;
  iVar8 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
  plVar10 = param_1;
  if (iVar8 != 0) {
    plVar10 = (long *)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
    if (plVar10 == (long *)0x0) goto LAB_0542c938;
    if ((plVar10[4] == 0) && (*(char *)((long)plVar10 + 0x16e) != '\0')) {
      *(undefined1 *)((long)plVar10 + 0x16e) = 0;
    }
  }
  if (plVar10[7] == 0) goto LAB_0542c938;
  *(undefined4 *)(plVar10[7] + 0x20) = 0;
  puVar3 = UnityEngine_Rendering_ScriptableCullingParameters_TypeInfo;
  (**(code **)(*param_2 + 1000))(param_2,*(undefined8 *)(*param_2 + 0x3f0));
  uVar11 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
  uVar12 = FUN_04e7eb78(uVar11,*(undefined8 *)puVar3,0);
  if ((uVar12 & 1) != 0) {
    uVar11 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
    uVar12 = FUN_04e7eb78(uVar11,*(undefined8 *)PlayFab_Public_ScreenTimeTracker_TypeInfo,0);
    if ((uVar12 & 1) != 0) {
      return;
    }
  }
  (**(code **)(*param_2 + 0x328))(param_2,*(undefined8 *)(*param_2 + 0x330));
  iVar9 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
  if (iVar9 == 0xd) {
    uVar11 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
    FUN_0542dd6c(uVar11,param_2,(int)uVar11 + -1);
  }
  *(undefined1 *)((long)plVar10 + 0x172) = 1;
  iVar9 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
  if (iVar7 < iVar9) {
    uVar11 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
    puVar3 = PlayFab_Public_ScreenTimeTracker_TypeInfo;
    uVar12 = FUN_04e7eb78(uVar11,*(undefined8 *)PlayFab_Public_ScreenTimeTracker_TypeInfo,0);
    if ((uVar12 & 1) != 0) {
      uVar11 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      uVar12 = FUN_04e7eb78(uVar11,*(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo,0);
      if ((uVar12 & 1) != 0) {
        plVar13 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d8a8);
        FUN_05638ccc(plVar13,0);
        uVar11 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
        uVar14 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        uVar15 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
        if (plVar13 == (long *)0x0) goto LAB_0542c938;
        uVar11 = (**(code **)(*plVar13 + 0x5a8))
                           (plVar13,uVar11,uVar14,uVar15,*(undefined8 *)(*plVar13 + 0x5b0));
        (**(code **)(*param_2 + 0x328))(param_2,*(undefined8 *)(*param_2 + 0x330));
        uVar14 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
        if (iVar7 < (int)uVar14 + -1) {
          lVar19 = thunk_FUN_02d8a638(*(undefined8 *)UnityEngine_ScriptableObject_TypeInfo);
          FUN_054a032c(lVar19,plVar10,0,uVar11,0,0);
          if (lVar19 == 0) goto LAB_0542c938;
          *(undefined1 *)(lVar19 + 0x39) = 1;
          uVar14 = FUN_054a27d4(lVar19,param_2,0);
        }
        FUN_0542c98c(uVar14,param_2);
      }
    }
    uVar11 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    uVar12 = thunk_FUN_04e7e884(uVar11,*(undefined8 *)Oculus_Platform_Models_SdkAccountList_TypeInfo
                                ,0);
    if ((uVar12 & 1) == 0) {
LAB_0542c3f0:
      uVar11 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      uVar12 = thunk_FUN_04e7e884(uVar11,*(undefined8 *)Oculus_Platform_Models_SdkAccount_TypeInfo,0
                                 );
      if ((uVar12 & 1) != 0) {
        uVar11 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
        uVar12 = thunk_FUN_04e7e884(uVar11,*(undefined8 *)puVar3,0);
        if ((uVar12 & 1) != 0) goto LAB_0542c438;
      }
    }
    else {
      uVar11 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      uVar12 = thunk_FUN_04e7e884(uVar11,*(undefined8 *)puVar3,0);
      if ((uVar12 & 1) == 0) goto LAB_0542c3f0;
LAB_0542c438:
      lVar19 = thunk_FUN_02d8a638(*(undefined8 *)UnityEngine_UIElements_ScrollView_TypeInfo);
      FUN_0548fbd8(lVar19,0);
      if (lVar19 == 0) goto LAB_0542c938;
      FUN_0548e1f8(lVar19,plVar10,param_2,0);
    }
    while (uVar11 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200)),
          iVar7 < (int)uVar11) {
      (**(code **)(*param_2 + 0x328))(param_2,*(undefined8 *)(*param_2 + 0x330));
    }
    FUN_0542c98c(uVar11,param_2);
  }
  puVar4 = UnityEngine_Rendering_RenderTargetBlendState_TypeInfo;
  puVar3 = UnityEngine_Rendering_RenderStateBlock_TypeInfo;
  if (plVar10[7] != 0) {
    if (0 < *(int *)(plVar10[7] + 0x20)) {
      FUN_0291d7ec(plVar10);
      uVar11 = FUN_0543a338(plVar10[0x12],0);
      uVar14 = thunk_FUN_02db45e8(PlayFab_EconomyModels_SearchItemsRequest_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar11,uVar14);
    }
    *(undefined1 *)((long)plVar10 + 0x172) = 0;
    lVar19 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
    FUN_036a55a0(lVar19,*(undefined8 *)puVar3);
    if (lVar19 != 0) {
      lVar20 = *(long *)(lVar19 + 0x10);
      lVar23 = *(long *)UnityEngine_Rendering_RenderQueueRange_TypeInfo;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      if (lVar20 != 0) {
        uVar2 = *(uint *)(lVar19 + 0x18);
        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar19 + 0x18) = uVar2 + 1;
          plVar13 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
          *plVar13 = (long)param_1;
          thunk_FUN_02dc1ef0(plVar13,param_1);
        }
        else {
          FUN_036a5e08(lVar19,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        FUN_0542a7d0(param_1,param_1,lVar19);
        puVar5 = UnityEngine_UI_ScrollRect_TypeInfo;
        puVar4 = PlayFab_AddonModels_CreateOrUpdatePSNRequest_var;
        puVar3 = PTR_DAT_066479b0;
        if (0 < *(int *)(lVar19 + 0x18)) {
          iVar7 = 0;
          do {
            lVar20 = FUN_036a5b38(lVar19,iVar7,*(undefined8 *)puVar5);
            if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x188), lVar20 == 0))
            goto LAB_0542c938;
            if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
              uVar12 = 0;
              uVar21 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
              do {
                if (uVar21 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4def0();
                }
                plVar13 = *(long **)(lVar20 + uVar12 * 8 + 0x20);
                if (plVar13 != (long *)0x0) {
                  lVar23 = (**(code **)(*plVar13 + 0x1b8))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                  lVar16 = FUN_036a5b38(lVar19,iVar7,*(undefined8 *)puVar5);
                  if (lVar23 == lVar16) {
                    lVar23 = FUN_036a5b38(lVar19,iVar7,*(undefined8 *)puVar5);
                    if ((lVar23 == 0) ||
                       (plVar13 = *(long **)(lVar23 + 0x38), plVar13 == (long *)0x0))
                    goto LAB_0542c938;
                    plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))
                                                (plVar13,*(undefined8 *)(*plVar13 + 0x1f0));
joined_r0x0542c638:
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d4dee8();
                    }
                    lVar16 = *plVar13;
                    lVar23 = *(long *)puVar3;
                    uVar21 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    if (uVar21 != 0) {
                      piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar24 + -2) == lVar23) {
                          puVar17 = (undefined8 *)(lVar16 + (long)*piVar24 * 0x10 + 0x138);
                          goto LAB_0542c688;
                        }
                        uVar21 = uVar21 - 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar21 != 0);
                    }
                    puVar17 = (undefined8 *)FUN_02d87540(plVar13,lVar23,0);
LAB_0542c688:
                    uVar21 = (*(code *)*puVar17)(plVar13,puVar17[1]);
                    if ((uVar21 & 1) != 0) {
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d4dee8();
                      }
                      lVar16 = *plVar13;
                      lVar23 = *(long *)puVar3;
                      uVar21 = (ulong)*(ushort *)(lVar16 + 0x12e);
                      if (uVar21 != 0) {
                        piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) == lVar23) {
                            puVar17 = (undefined8 *)(lVar16 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                            goto LAB_0542c6f0;
                          }
                          uVar21 = uVar21 - 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar21 != 0);
                      }
                      puVar17 = (undefined8 *)FUN_02d87540(plVar13,lVar23,1);
LAB_0542c6f0:
                      plVar18 = (long *)(*(code *)*puVar17)(plVar13,puVar17[1]);
                      if (plVar18 != (long *)0x0) {
                        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
                        if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
                           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
                            *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d4e268(plVar18);
                        }
                      }
                      if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
                        uVar21 = 0;
                        uVar22 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
                        do {
                          if (uVar22 <= uVar21) {
                    /* WARNING: Subroutine does not return */
                            FUN_02d4def0();
                          }
                          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02d4dee8();
                          }
                          FUN_0545a1f8(plVar18,*(undefined8 *)(lVar20 + 0x20 + uVar21 * 8),0);
                          uVar22 = (ulong)*(uint *)(lVar20 + 0x18);
                          uVar21 = uVar21 + 1;
                        } while ((long)uVar21 < (long)(int)*(uint *)(lVar20 + 0x18));
                      }
                      goto joined_r0x0542c638;
                    }
                    plVar13 = (long *)thunk_FUN_02d8a53c(plVar13,*(undefined8 *)PTR_DAT_066479a8);
                    if (plVar13 != (long *)0x0) {
                      lVar23 = *plVar13;
                      uVar21 = (ulong)*(ushort *)(lVar23 + 0x12e);
                      if (uVar21 != 0) {
                        piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_066479a8) {
                            puVar17 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
                            goto LAB_0542c810;
                          }
                          uVar21 = uVar21 - 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar21 != 0);
                      }
                      puVar17 = (undefined8 *)FUN_02d87540(plVar13,*(long *)PTR_DAT_066479a8,0);
LAB_0542c810:
                      (*(code *)*puVar17)(plVar13,puVar17[1]);
                    }
                  }
                }
                uVar21 = (ulong)*(uint *)(lVar20 + 0x18);
                uVar12 = uVar12 + 1;
              } while ((long)uVar12 < (long)(int)*(uint *)(lVar20 + 0x18));
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar19 + 0x18));
        }
        if (iVar8 != 0) {
          FUN_0542a0dc(param_1,plVar10,0,1);
        }
        if ((param_1[4] == 0) && ((bool)*(char *)((long)param_1 + 0x16e) != bVar6)) {
          if (bVar6 != false) {
            FUN_0541ef2c(param_1);
          }
          *(bool *)((long)param_1 + 0x16e) = bVar6;
        }
        return;
      }
    }
  }
LAB_0542c938:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


