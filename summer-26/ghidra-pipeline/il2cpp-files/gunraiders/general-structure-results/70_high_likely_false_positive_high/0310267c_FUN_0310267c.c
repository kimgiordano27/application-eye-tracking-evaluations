/*
FUNCTION_NAME: FUN_0310267c
ENTRY_POINT: 0310267c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x03102d34) */
/* WARNING: Removing unreachable block (ram,0x03102b2c) */
/* WARNING: Removing unreachable block (ram,0x03102ef4) */
/* WARNING: Removing unreachable block (ram,0x03102ee8) */

bool FUN_0310267c(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if ((DAT_04531e75 & 1) == 0) {
    FUN_01c5d288(UnityEngine_UIElements_RepeatButton_TypeInfo);
    FUN_01c5d288(System_Net_Cache_RequestCache_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(PTR_DAT_04230960);
    FUN_01c5d288(System_Threading_SemaphoreFullException_TypeInfo);
    FUN_01c5d288(System_Linq_Expressions_Interpreter_RethrowException_TypeInfo);
    FUN_01c5d288(Photon_Voice_SpacingProfile_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_SpatialAnchorPose_t_TypeInfo);
    FUN_01c5d288(I2_Loc_SpecializationManager_TypeInfo);
    FUN_01c5d288(Spectator_TypeInfo);
    FUN_01c5d288(DarkTonic_MasterAudio_SoundGroupVariationUpdater_TypeInfo);
    FUN_01c5d288(CodeStage_AntiCheat_Time_SpeedHackProofTime_TypeInfo);
    DAT_04531e75 = 1;
  }
  puVar5 = CodeStage_AntiCheat_Time_SpeedHackProofTime_TypeInfo;
  puVar4 = I2_Loc_SpecializationManager_TypeInfo;
  puVar1 = OVR_OpenVR_SpatialAnchorPose_t_TypeInfo;
  puVar2 = Photon_Voice_SpacingProfile_TypeInfo;
  puVar3 = UnityEngine_UIElements_RepeatButton_TypeInfo;
  if ((param_2 != 0) && (lVar18 = *(long *)(param_2 + 0x38), lVar18 != 0)) {
    iVar9 = 0;
    lVar20 = 0;
    uVar21 = 0;
    while (plVar10 = *(long **)(lVar18 + 0x20), plVar10 != (long *)0x0) {
      iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
      if (iVar8 <= iVar9) {
        uVar12 = FUN_031529f8(uVar21,*(undefined8 *)
                                      DarkTonic_MasterAudio_SoundGroupVariationUpdater_TypeInfo,0);
        if (lVar20 == 0) {
          return false;
        }
        if ((uVar12 & 1) != 0) {
          return false;
        }
        uVar12 = FUN_030e5b88(lVar20,param_3,0);
        if ((uVar12 & 1) == 0) {
          return false;
        }
        if (param_4 != (long *)0x0) {
          uVar21 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
          if (*(int *)(*(long *)System_Net_Cache_RequestCache_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)System_Net_Cache_RequestCache_TypeInfo);
          }
          uVar21 = FUN_031a2994(uVar21,0);
          plVar10 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar3);
          FUN_030e56b0(plVar10,0x31,0);
          if ((*(long *)(param_2 + 0x38) != 0) &&
             (plVar13 = *(long **)(*(long *)(param_2 + 0x38) + 0x20), plVar13 != (long *)0x0)) {
            plVar13 = (long *)(**(code **)(*plVar13 + 0x388))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x390));
            puVar2 = PTR_DAT_04230960;
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            goto LAB_03102998;
          }
        }
        break;
      }
      if (((*(long *)(param_2 + 0x38) == 0) ||
          (plVar10 = *(long **)(*(long *)(param_2 + 0x38) + 0x20), plVar10 == (long *)0x0)) ||
         (plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                      (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x2f0)),
         plVar10 == (long *)0x0)) break;
      bVar7 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar7) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar10);
      }
      uVar11 = FUN_030e63cc(plVar10,0,0);
      uVar11 = FUN_030e6d64(uVar11,0);
      uVar12 = thunk_FUN_03152714(uVar11,*(undefined8 *)puVar4,0);
      if ((uVar12 & 1) == 0) {
        uVar12 = thunk_FUN_03152714(uVar11,*(undefined8 *)puVar2,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = thunk_FUN_03152714(uVar11,*(undefined8 *)puVar1,0);
          if ((uVar12 & 1) == 0) {
            thunk_FUN_03152714(uVar11,*(undefined8 *)puVar5,0);
          }
        }
        else {
          lVar18 = FUN_030e63cc(plVar10,1,0);
          if (lVar18 == 0) break;
          lVar20 = FUN_030e63cc(lVar18,0,0);
        }
      }
      else {
        lVar18 = FUN_030e63cc(plVar10,1,0);
        if (lVar18 == 0) break;
        uVar21 = FUN_030e63cc(lVar18,0,0);
        uVar21 = FUN_030e6d64(uVar21,0);
      }
      lVar18 = *(long *)(param_2 + 0x38);
      iVar9 = iVar9 + 1;
      if (lVar18 == 0) break;
    }
  }
  goto LAB_031028cc;
LAB_03102998:
  lVar20 = *plVar13;
  lVar18 = *(long *)puVar2;
  uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar12 != 0) {
    piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == lVar18) {
        puVar14 = (undefined8 *)(lVar20 + (long)*piVar19 * 0x10 + 0x138);
        goto System_Runtime_CompilerServices_AsyncMethodBuilderCore__CreateContinuationWrapper;
      }
      uVar12 = uVar12 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar12 != 0);
  }
  puVar14 = (undefined8 *)FUN_01c72498(plVar13,lVar18,0);
System_Runtime_CompilerServices_AsyncMethodBuilderCore__CreateContinuationWrapper:
  uVar12 = (*(code *)*puVar14)(plVar13,puVar14[1]);
  puVar1 = PTR_DAT_0422fce8;
  if ((uVar12 & 1) == 0) {
    plVar13 = (long *)thunk_FUN_01c495e4(plVar13,*(undefined8 *)PTR_DAT_0422fce8);
    if (plVar13 == (long *)0x0) goto LAB_03102b20;
    lVar18 = *plVar13;
    uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar12 == 0) goto LAB_03102af8;
    piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    goto LAB_03102ae0;
  }
  lVar20 = *plVar13;
  lVar18 = *(long *)puVar2;
  uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar12 != 0) {
    piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == lVar18) {
        puVar14 = (undefined8 *)(lVar20 + (long)(*piVar19 + 1) * 0x10 + 0x138);
        goto LAB_03102a44;
      }
      uVar12 = uVar12 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar12 != 0);
  }
  puVar14 = (undefined8 *)FUN_01c72498(plVar13,lVar18,1);
LAB_03102a44:
  plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
  if (plVar15 != (long *)0x0) {
    bVar7 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar7) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar15);
    }
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  FUN_030e5b98(plVar10,plVar15,0);
  goto LAB_03102998;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar19 = piVar19 + 4;
    if (uVar12 == 0) break;
LAB_03102ae0:
    if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
      puVar14 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_03102b14;
    }
  }
LAB_03102af8:
  puVar14 = (undefined8 *)FUN_01c72498(plVar13,*(long *)puVar1,0);
LAB_03102b14:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_03102b20:
  (**(code **)(*param_4 + 0x278))(param_4,*(undefined8 *)(*param_4 + 0x280));
  if (plVar10 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    uVar11 = FUN_03182d6c(param_4,uVar11,0);
    if (*(long *)(param_2 + 0x38) != 0) {
      lVar18 = FUN_030e8d30(*(long *)(param_2 + 0x38),0);
      lVar20 = *(long *)(param_2 + 0x38);
      if (lVar20 != 0) {
        uVar22 = *(undefined8 *)(lVar20 + 0x38);
        uVar16 = FUN_030e8ca4(lVar20,0);
        if (*(long *)(param_1 + 0x58) != 0) {
          lVar20 = FUN_030ebb44(*(long *)(param_1 + 0x58),0);
          puVar2 = System_Threading_SemaphoreFullException_TypeInfo;
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          do {
            do {
              do {
                uVar12 = FUN_030ebf24(lVar20,0);
                if ((uVar12 & 1) == 0) goto LAB_03102cbc;
                plVar10 = (long *)FUN_030ebb9c(lVar20,0);
                uVar12 = FUN_031030b0(plVar10,uVar22,uVar16,plVar10);
              } while ((uVar12 & 1) == 0);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar17 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
            } while (*(int *)(lVar17 + 0x18) <= *(int *)(lVar18 + 0x18) >> 3);
            *(long **)(param_1 + 0x70) = plVar10;
            plVar13 = (long *)(**(code **)(*plVar10 + 0x1d8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            if (*plVar13 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748();
            }
            uVar12 = FUN_03198558(plVar13,uVar11,uVar21,lVar18,0);
          } while ((uVar12 & 1) == 0);
          if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          FUN_030f46dc(*(long *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x58),0);
          if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          bVar7 = FUN_030f46f4(*(long *)(param_1 + 0x88),plVar10,0);
          *(byte *)(param_1 + 0x7c) = bVar7 & 1;
LAB_03102cbc:
          plVar10 = (long *)thunk_FUN_01c495e4(lVar20,*(undefined8 *)puVar1);
          if (plVar10 != (long *)0x0) {
            lVar20 = *plVar10;
            uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar12 != 0) {
              piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
                  puVar14 = (undefined8 *)(lVar20 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_03102d1c;
                }
                uVar12 = uVar12 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar12 != 0);
            }
            puVar14 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar1,0);
LAB_03102d1c:
            (*(code *)*puVar14)(plVar10,puVar14[1]);
          }
          if ((*(long *)(param_2 + 0x38) != 0) &&
             (plVar10 = *(long **)(*(long *)(param_2 + 0x38) + 0x28), plVar10 != (long *)0x0)) {
            iVar9 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
            puVar1 = Spectator_TypeInfo;
            puVar2 = System_Linq_Expressions_Interpreter_RethrowException_TypeInfo;
            if (iVar9 == 0) {
              *(undefined1 *)(param_1 + 0x7d) = 1;
LAB_03102e7c:
              bVar6 = false;
              if (*(char *)(param_1 + 0x7c) != '\0') {
                bVar6 = *(char *)(param_1 + 0x7d) != '\0';
              }
              return bVar6;
            }
            lVar20 = *(long *)(param_2 + 0x38);
            if (lVar20 != 0) {
              iVar9 = 0;
              while (plVar10 = *(long **)(lVar20 + 0x28), plVar10 != (long *)0x0) {
                iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
                if (iVar8 <= iVar9) goto LAB_03102e7c;
                if (((*(long *)(param_2 + 0x38) == 0) ||
                    (plVar10 = *(long **)(*(long *)(param_2 + 0x38) + 0x28), plVar10 == (long *)0x0)
                    ) || (plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                                      (plVar10,iVar9,
                                                       *(undefined8 *)(*plVar10 + 0x2f0)),
                         plVar10 == (long *)0x0)) break;
                bVar7 = *(byte *)(*(long *)puVar3 + 0x130);
                if ((*(byte *)(*plVar10 + 0x130) < bVar7) ||
                   (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar3)
                   ) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(plVar10);
                }
                uVar21 = FUN_030e63cc(plVar10,0,0);
                uVar21 = FUN_030e6d64(uVar21,0);
                uVar12 = thunk_FUN_03152714(uVar21,*(undefined8 *)puVar1,0);
                if ((uVar12 & 1) != 0) {
                  uVar21 = FUN_030e63cc(plVar10,1,0);
                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                  FUN_030e8580(uVar11,uVar21,0);
                  bVar7 = System_Runtime_CompilerServices_DependencyAttribute___ctor
                                    (param_1,uVar11,lVar18);
                  *(byte *)(param_1 + 0x7d) = bVar7 & 1;
                }
                lVar20 = *(long *)(param_2 + 0x38);
                iVar9 = iVar9 + 1;
                if (lVar20 == 0) break;
              }
            }
          }
        }
      }
    }
  }
LAB_031028cc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


