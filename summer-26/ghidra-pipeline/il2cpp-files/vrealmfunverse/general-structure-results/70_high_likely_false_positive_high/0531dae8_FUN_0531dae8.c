/*
FUNCTION_NAME: FUN_0531dae8
ENTRY_POINT: 0531dae8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0531e3f8) */
/* WARNING: Removing unreachable block (ram,0x0531e294) */
/* WARNING: Removing unreachable block (ram,0x0531e3ec) */
/* WARNING: Removing unreachable block (ram,0x0531df80) */
/* WARNING: Removing unreachable block (ram,0x0531e534) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0531dae8(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  
  if ((DAT_066d039d & 1) == 0) {
    FUN_02b3c81c(TMPro_ColorTween_var);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo);
    FUN_02b3c81c(UnityEngine_Color_var);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(UnityEngine_UIElements_Foldout_var);
    FUN_02b3c81c(GameStartCountDown_<InitializeGameMode>d__9_TypeInfo);
    FUN_02b3c81c(EmeraldAI_GeneralProjectile_<InitializeInternal>d__23_TypeInfo);
    DAT_066d039d = 1;
  }
  puVar3 = GameStartCountDown_<InitializeGameMode>d__9_TypeInfo;
  if ((param_3 != 0) && (plVar9 = *(long **)(param_3 + 0x28), plVar9 != (long *)0x0)) {
    uVar8 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_0531fa8c(uVar10,uVar8);
    *(undefined8 *)(param_1 + 0x10) = uVar10;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x10),uVar10);
    if (param_2 != (long *)0x0) {
      lVar11 = (**(code **)(*param_2 + 0x188))
                         (param_2,*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(*param_2 + 400));
      if (lVar11 == 0) {
        lVar11 = (**(code **)(*param_2 + 0x1a8))
                           (param_2,*(undefined8 *)(param_3 + 0x50),
                            *(undefined8 *)(*param_2 + 0x1b0));
      }
      *(long *)(param_3 + 0x50) = lVar11;
      thunk_FUN_02bb0e9c(param_3 + 0x50);
      plVar9 = *(long **)(param_3 + 0x28);
      if (plVar9 != (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        puVar7 = EmeraldAI_GeneralProjectile_<InitializeInternal>d__23_TypeInfo;
        puVar6 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo;
        puVar5 = UnityEngine_UIElements_Foldout_var;
        puVar4 = TMPro_ColorTween_var;
        puVar3 = PTR_DAT_06312f90;
        do {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar11 = *plVar9;
          uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_0531dcc0;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar3,0);
LAB_0531dcc0:
          uVar19 = (*(code *)*puVar12)(plVar9,puVar12[1]);
          puVar2 = PTR_DAT_06312f78;
          if ((uVar19 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_02b79548(plVar9,*(undefined8 *)PTR_DAT_06312f78);
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar11 = *plVar9;
            uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar19 == 0) goto LAB_0531e4e4;
            piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto 
            System_Runtime_Serialization_Diagnostics_Application_TD__DCDeserializeWithSurrogateStopIsEnabled
            ;
          }
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar11 = *plVar9;
          uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar11 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_0531dd28;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar3,1);
LAB_0531dd28:
          plVar13 = (long *)(*(code *)*puVar12)(plVar9,puVar12[1]);
          if (plVar13 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)UnityEngine_Color_var + 0x130);
            if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)UnityEngine_Color_var)) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3ce44(plVar13);
            }
          }
          lVar11 = FUN_0531f4b4(param_1,param_2,plVar13);
          if (lVar11 != 0) {
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            plVar14 = (long *)plVar13[8];
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            plVar14 = (long *)(**(code **)(*plVar14 + 0x1e8))
                                        (plVar14,*(undefined8 *)(*plVar14 + 0x1f0));
joined_r0x0531ddb8:
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar18 = *plVar14;
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0531de08;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar12 = (undefined8 *)FUN_02b7654c(plVar14,*(long *)puVar3,0);
LAB_0531de08:
            uVar19 = (*(code *)*puVar12)(plVar14,puVar12[1]);
            if ((uVar19 & 1) != 0) {
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar18 = *plVar14;
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                    puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_0531de70;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar12 = (undefined8 *)FUN_02b7654c(plVar14,*(long *)puVar3,1);
LAB_0531de70:
              plVar15 = (long *)(*(code *)*puVar12)(plVar14,puVar12[1]);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar18 = *plVar15;
              bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
              if ((*(byte *)(lVar18 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(plVar15);
              }
              uVar10 = (**(code **)(lVar18 + 0x1d8))(plVar15,*(undefined8 *)(lVar18 + 0x1e0));
              if ((int)uVar10 != 4) {
                FUN_0531f8c8(uVar10,param_2,plVar15,*(undefined8 *)(lVar11 + 0x18));
              }
              goto joined_r0x0531ddb8;
            }
            plVar14 = (long *)thunk_FUN_02b79548(plVar14,*(undefined8 *)PTR_DAT_06312f78);
            if (plVar14 != (long *)0x0) {
              lVar18 = *plVar14;
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06312f78) {
                    puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_0531df68;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar12 = (undefined8 *)FUN_02b7654c(plVar14,*(long *)PTR_DAT_06312f78,0);
LAB_0531df68:
              (*(code *)*puVar12)(plVar14,puVar12[1]);
            }
            plVar13 = (long *)FUN_0529cd7c(plVar13,0);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x1f0));
joined_r0x0531dfb8:
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar18 = *plVar13;
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0531e008;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar12 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)puVar3,0);
LAB_0531e008:
            uVar19 = (*(code *)*puVar12)(plVar13,puVar12[1]);
            if ((uVar19 & 1) != 0) {
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar18 = *plVar13;
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                    puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_0531e070;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar12 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)puVar3,1);
LAB_0531e070:
              plVar14 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar18 = *plVar14;
              bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
              if ((*(byte *)(lVar18 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(plVar14);
              }
              uVar19 = (**(code **)(lVar18 + 0x1d8))(plVar14,*(undefined8 *)(lVar18 + 0x1e0));
              if ((uVar19 & 1) != 0) {
                lVar18 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uVar10 = *(undefined8 *)(lVar18 + 0x90);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44(*(long *)puVar5);
                }
                uVar10 = FUN_0557ee10(uVar10,0);
                lVar18 = (**(code **)(*param_2 + 0x188))
                                   (param_2,uVar10,*(undefined8 *)(*param_2 + 400));
                if (lVar18 == 0) {
                  lVar18 = (**(code **)(*param_2 + 0x1a8))
                                     (param_2,uVar10,*(undefined8 *)(*param_2 + 0x1b0));
                }
                lVar16 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uVar10 = FUN_05297094(lVar16,0);
                lVar16 = (**(code **)(*param_2 + 0x188))
                                   (param_2,uVar10,*(undefined8 *)(*param_2 + 400));
                if (lVar16 == 0) {
                  lVar16 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  uVar10 = FUN_05297094(lVar16,0);
                  lVar16 = (**(code **)(*param_2 + 0x1a8))
                                     (param_2,uVar10,*(undefined8 *)(*param_2 + 0x1b0));
                }
                uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                FUN_0531f470(uVar10,lVar18,lVar16);
                plVar15 = *(long **)(lVar11 + 0x18);
                uVar17 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                (**(code **)(*plVar15 + 0x318))
                          (plVar15,uVar10,uVar17,*(undefined8 *)(*plVar15 + 800));
              }
              goto joined_r0x0531dfb8;
            }
            plVar13 = (long *)thunk_FUN_02b79548(plVar13,*(undefined8 *)PTR_DAT_06312f78);
            if (plVar13 != (long *)0x0) {
              lVar11 = *plVar13;
              uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06312f78) {
                    puVar12 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_0531e27c;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar12 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)PTR_DAT_06312f78,0);
LAB_0531e27c:
              (*(code *)*puVar12)(plVar13,puVar12[1]);
            }
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
System_Runtime_Serialization_Diagnostics_Application_TD__DCDeserializeWithSurrogateStopIsEnabled:
    if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
      puVar12 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_0531e500;
    }
  }
LAB_0531e4e4:
  puVar12 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0);
LAB_0531e500:
  (*(code *)*puVar12)(plVar9,puVar12[1]);
  return;
}


