/*
FUNCTION_NAME: FUN_05255290
ENTRY_POINT: 05255290
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x052559b8) */
/* WARNING: Removing unreachable block (ram,0x05255b60) */
/* WARNING: Removing unreachable block (ram,0x05255a9c) */
/* WARNING: Removing unreachable block (ram,0x05255b74) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_05255290(long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 *puVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = param_1;
  if ((DAT_066cfd8c & 1) == 0) {
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_SelectExitEvent_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631eec8);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_SelectExitEventArgs_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(UnityEngine_UI_Selectable_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631f8f8);
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(System_Xml_Schema_SelectorActiveAxis_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_StyleSheets_SelectorMatchRecord_TypeInfo);
    FUN_02b3c81c(System_Threading_SemaphoreFullException_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631f900);
    FUN_02b3c81c(PTR_DAT_0631f908);
    FUN_02b3c81c(System_Threading_SemaphoreSlim_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06320908);
    FUN_02b3c81c(UnityEditor_Analytics_SendGameBuildAnalytic_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Models_SendInvitesResult_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06321778);
    auVar20 = FUN_02b3c81c(Pico_Platform_Models_SendInvitesResult_TypeInfo);
    DAT_066cfd8c = 1;
  }
  puVar5 = Oculus_Platform_Models_SendInvitesResult_TypeInfo;
  if (param_2 == (long *)0x0) goto LAB_05255b68;
  if (*param_2 != *(long *)System_Threading_SemaphoreSlim_TypeInfo) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(param_2);
  }
  lVar17 = param_2[3];
  lVar9 = *(long *)Oculus_Platform_Models_SendInvitesResult_TypeInfo;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar9 = *(long *)puVar5;
  }
  puVar4 = UnityEngine_XR_Interaction_Toolkit_SelectExitEvent_TypeInfo;
  puVar14 = *(undefined8 **)(lVar9 + 0xb8);
  lVar18 = puVar14[2];
  if (lVar18 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar14 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar19 = *puVar14;
    lVar18 = thunk_FUN_02b79644(*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_SelectExitEventArgs_TypeInfo);
    FUN_049c0700(lVar18,uVar19,*(undefined8 *)UnityEditor_Analytics_SendGameBuildAnalytic_TypeInfo,0
                );
    plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
    *plVar10 = lVar18;
    thunk_FUN_02bb0e9c(plVar10,lVar18);
  }
  auVar20 = FUN_031a796c(lVar17,lVar18,*(undefined8 *)puVar4);
  uVar11 = auVar20._8_8_;
  if ((auVar20._0_8_ & 1) != 0) {
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar11;
    auVar20 = auVar21 << 0x40;
    if (param_2[3] == 0) goto LAB_05255b68;
    auVar20 = FUN_03d437c0(param_2[3],*(undefined8 *)PTR_DAT_0631f908);
    plVar10 = (long *)param_2[2];
    if (auVar20._0_4_ == 0) {
      FUN_05250a24(param_1,plVar10);
      if (param_2[4] == 0) {
        return;
      }
      FUN_0524f9f4(param_1);
      return;
    }
    if (plVar10 == (long *)0x0) goto LAB_05255b68;
    uVar19 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
    if (*(int *)(*(long *)PTR_DAT_06320908 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06320908);
    }
    uVar8 = FUN_0527afd8(uVar19,0);
    auVar20 = FUN_04cb7c3c(param_2[5],0,0);
    uVar11 = auVar20._8_8_;
    if ((auVar20._0_8_ & 1) != 0) {
      if (0x12 < uVar8) goto LAB_052555e4;
      if ((1 << (ulong)(uVar8 & 0x1f) & 0x1de0U) != 0) {
        FUN_0320d5a8(param_1,param_2,
                     *(undefined8 *)UnityEngine_UIElements_StyleSheets_SelectorMatchRecord_TypeInfo)
        ;
        return;
      }
      if (uVar8 == 9) {
        FUN_0320cfd4(param_1,param_2,*(undefined8 *)System_Xml_Schema_SelectorActiveAxis_TypeInfo);
        return;
      }
    }
    if (uVar8 == 0x12) {
      lVar9 = FUN_0520a06c(0);
      auVar20 = FUN_04cb9ca0(lVar9,0,0);
      if ((auVar20._0_8_ & 1) != 0) {
        if (lVar9 == 0) goto LAB_05255b68;
        uVar11 = FUN_04cb7e90(lVar9,0);
        if ((uVar11 & 1) == 0) {
          lVar9 = 0;
        }
      }
      auVar20 = FUN_04dcb2c4(param_2[5],lVar9,0);
      uVar11 = auVar20._8_8_;
      if ((auVar20._0_8_ & 1) != 0) {
        FUN_05255bf0(param_1,param_2);
        return;
      }
    }
  }
LAB_052555e4:
  puVar5 = PTR_DAT_0631eec8;
  plVar10 = (long *)param_2[2];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar11;
  auVar20 = auVar1 << 0x40;
  if (plVar10 != (long *)0x0) {
    lVar9 = *(long *)(param_1 + 0x18);
    uVar19 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar5);
    }
    auVar20 = FUN_0521fa50(uVar19,0);
    uVar19 = auVar20._0_8_;
    if (*(long *)(param_1 + 0x10) != 0) {
      auVar20 = FUN_052456c4(*(long *)(param_1 + 0x10));
      if (lVar9 != 0) {
        auVar21 = FUN_05262064(lVar9,uVar19,auVar20._0_8_ & 0xffffffff,0);
        uVar11 = auVar21._0_8_;
        FUN_0524f9f4(param_1,param_2[2]);
        puVar4 = Pico_Platform_Models_SendInvitesResult_TypeInfo;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = extraout_x1;
        auVar20 = auVar2 << 0x40;
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_05246cec(*(long *)(param_1 + 0x10),uVar11 & 0xffffffff);
          uVar19 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          auVar20 = FUN_0521bdd4(uVar19,*(undefined8 *)puVar4,0);
          if (param_2[3] != 0) {
            plVar10 = (long *)System_ReadOnlySpan<float4x4>__get_IsEmpty
                                        (param_2[3],
                                         *(undefined8 *)
                                          System_Threading_SemaphoreFullException_TypeInfo);
            puVar7 = PTR_DAT_06321778;
            puVar6 = PTR_DAT_0631f8f8;
            puVar4 = PTR_DAT_06312f90;
joined_r0x052556d0:
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar17 = *plVar10;
            lVar9 = *(long *)puVar4;
            uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar9) {
                  puVar14 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0525573c;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar14 = (undefined8 *)FUN_02b7654c(plVar10,lVar9,0);
LAB_0525573c:
            uVar15 = (*(code *)*puVar14)(plVar10,puVar14[1]);
            if ((uVar15 & 1) != 0) {
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar9 = *plVar10;
              uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)UnityEngine_UI_Selectable_TypeInfo) {
                    puVar14 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_052557a8;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar14 = (undefined8 *)
                        FUN_02b7654c(plVar10,*(long *)UnityEngine_UI_Selectable_TypeInfo,0);
LAB_052557a8:
              lVar9 = (*(code *)*puVar14)(plVar10,puVar14[1]);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              plVar12 = (long *)System_ReadOnlySpan<float4x4>__get_IsEmpty
                                          (*(long *)(lVar9 + 0x10),*(undefined8 *)PTR_DAT_0631f900);
              do {
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                lVar18 = *plVar12;
                lVar17 = *(long *)puVar4;
                uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar17) {
                      puVar14 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_05255834;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar14 = (undefined8 *)FUN_02b7654c(plVar12,lVar17,0);
LAB_05255834:
                uVar15 = (*(code *)*puVar14)(plVar12,puVar14[1]);
                if ((uVar15 & 1) == 0) goto LAB_05255938;
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                lVar17 = *plVar12;
                uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                      puVar14 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_05255898;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar14 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)puVar6,0);
LAB_05255898:
                uVar19 = (*(code *)*puVar14)(plVar12,puVar14[1]);
                lVar17 = param_2[5];
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                uVar19 = FUN_05212dc8(auVar21._8_8_,uVar19,0,lVar17,0);
                uVar13 = FUN_05219148(auVar20._0_8_,*(undefined8 *)(lVar9 + 0x18),0);
                lVar17 = *(long *)puVar7;
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar17 = *(long *)puVar7;
                }
                uVar19 = FUN_0520da58(uVar19,uVar13,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0xd0)
                                      ,0);
                System_Data_Common_BooleanStorage__Compare(param_1,uVar19,1);
              } while( true );
            }
            if (plVar10 == (long *)0x0) goto LAB_05255a8c;
            lVar9 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar15 == 0) goto LAB_05255a64;
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_05255a4c;
          }
        }
      }
    }
  }
LAB_05255b68:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4(auVar20._0_8_,auVar20._8_8_);
LAB_05255938:
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar14 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_052559a0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar14 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)PTR_DAT_06312f78,0);
LAB_052559a0:
    (*(code *)*puVar14)(plVar12,puVar14[1]);
  }
  goto joined_r0x052556d0;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_05255a4c:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar14 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_05255a80;
    }
  }
LAB_05255a64:
  puVar14 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)PTR_DAT_06312f78,0);
LAB_05255a80:
  (*(code *)*puVar14)(plVar10,puVar14[1]);
LAB_05255a8c:
  lVar9 = param_2[4];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar19 = FUN_0521bc7c(auVar20._0_8_,lVar9,0);
  FUN_05256218(param_1,uVar19);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = extraout_x1_00;
  auVar20 = auVar3 << 0x40;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar9 = *(long *)(param_1 + 0x18);
    uVar15 = FUN_052456c4();
    auVar20._8_8_ = uVar11;
    auVar20._0_8_ = uVar15;
    if (lVar9 != 0) {
      FUN_0525cae0(lVar9,uVar11,auVar21._8_8_,uVar15 & 0xffffffff,0);
      return;
    }
  }
  goto LAB_05255b68;
}


