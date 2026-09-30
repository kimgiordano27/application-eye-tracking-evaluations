/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddInstallationRoutineInfo
ENTRY_POINT: 076cafd8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 155
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076cc864) */
/* WARNING: Removing unreachable block (ram,0x076cbddc) */
/* WARNING: Removing unreachable block (ram,0x076cb5a0) */
/* WARNING: Removing unreachable block (ram,0x076cb7b0) */
/* WARNING: Removing unreachable block (ram,0x076cb9c0) */
/* WARNING: Removing unreachable block (ram,0x076cc1fc) */
/* WARNING: Removing unreachable block (ram,0x076cb190) */
/* WARNING: Removing unreachable block (ram,0x076cc43c) */
/* WARNING: Removing unreachable block (ram,0x076cbfe8) */
/* WARNING: Removing unreachable block (ram,0x076cbbd0) */
/* WARNING: Removing unreachable block (ram,0x076cc650) */
/* WARNING: Removing unreachable block (ram,0x076cc8cc) */
/* WARNING: Removing unreachable block (ram,0x076cc91c) */

void Meta_XR_BuildingBlocks_Telemetry__AddInstallationRoutineInfo(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  
  lVar5 = *param_1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == **(long **)(in_x10 + 0x220)) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_076cb02c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac(param_1,**(long **)(in_x10 + 0x220),0);
LAB_076cb02c:
  plVar4 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
  puVar2 = PTR_DAT_09f2e238;
  puVar1 = PTR_DAT_09f1f018;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cb09c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_076cb09c:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_076cb184;
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_076cb15c;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cb0f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_076cb0f8:
    lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_076c67bc();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cb178;
    }
  }
LAB_076cb15c:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_076cb178:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_076cb184:
  FUN_076c71ec();
  lVar5 = (**(code **)(*unaff_x19 + 0x1a8))();
  if (lVar5 != 0) {
    if (unaff_x20 != 0) {
      FUN_076c7144();
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x1a8))();
      if (plVar4 != (long *)0x0) {
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e210) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cb23c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f2e210,0);
LAB_076cb23c:
        plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
        puVar2 = PTR_DAT_09f2e280;
        puVar1 = PTR_DAT_09f1f018;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar5 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cb2ac;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_076cb2ac:
          uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((uVar6 & 1) == 0) {
            if (plVar4 == (long *)0x0) goto LAB_076cb390;
            lVar5 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 == 0) goto LAB_076cb368;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_076cb350;
          }
          lVar5 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cb308;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_076cb308:
          lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076c64b8();
        } while( true );
      }
    }
    goto LAB_076cc90c;
  }
  goto LAB_076cb3a0;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076cb554:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cb588;
    }
  }
LAB_076cb56c:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_076cb588:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_076cb594:
  FUN_076c71ec();
  goto LAB_076cb5b0;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076cb764:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cb798;
    }
  }
LAB_076cb77c:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_076cb798:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_076cb7a4:
  FUN_076c71ec();
  goto LAB_076cb7c0;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076cb974:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cb9a8;
    }
  }
LAB_076cb98c:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_076cb9a8:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_076cb9b4:
  FUN_076c71ec();
  goto LAB_076cb9d0;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076cbd90:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cbdc4;
    }
  }
LAB_076cbda8:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_076cbdc4:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_076cbdd0:
  FUN_076c71ec();
  goto LAB_076cbdec;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076cbf9c:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cbfd0;
    }
  }
LAB_076cbfb4:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_076cbfd0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_076cbfdc:
  FUN_076c71ec();
  goto LAB_076cbff8;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076cc1b0:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cc1e4;
    }
  }
LAB_076cc1c8:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc1e4:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_076cc1f0:
  FUN_076c71ec();
  goto LAB_076cc20c;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076cc3f0:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cc424;
    }
  }
LAB_076cc408:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc424:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_076cc430:
  FUN_076c71ec();
  goto LAB_076cc44c;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076cc604:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cc638;
    }
  }
LAB_076cc61c:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc638:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_076cc644:
  FUN_076c71ec();
  goto LAB_076cc660;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cc84c;
    }
  }
LAB_076cc830:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc84c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_076cc858:
  FUN_076c71ec();
  goto LAB_076cc874;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076cb350:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cb384;
    }
  }
LAB_076cb368:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_076cb384:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_076cb390:
  FUN_076c71ec();
LAB_076cb3a0:
  lVar5 = (**(code **)(*unaff_x19 + 0x1b8))();
  if (lVar5 == 0) {
LAB_076cb5b0:
    lVar5 = (**(code **)(*unaff_x19 + 0x178))();
    if (lVar5 == 0) {
LAB_076cb7c0:
      lVar5 = (**(code **)(*unaff_x19 + 0x1c8))();
      if (lVar5 == 0) {
LAB_076cb9d0:
        lVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
        if (lVar5 != 0) {
          if (unaff_x20 == 0) goto LAB_076cc90c;
          FUN_076c7144();
          plVar4 = (long *)(**(code **)(*unaff_x19 + 0x1d8))();
          if (plVar4 == (long *)0x0) goto LAB_076cc90c;
          lVar5 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e230) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cba6c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f2e230,0);
LAB_076cba6c:
          plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
          puVar2 = PTR_DAT_09f2e268;
          puVar1 = PTR_DAT_09f1f018;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
LAB_076cba90:
          lVar5 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cbadc;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_076cbadc:
          uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((uVar6 & 1) != 0) {
            lVar5 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076cbb38;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_076cbb38:
            lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
            if (lVar5 != 0) {
              FUN_076c6f7c();
            }
            goto LAB_076cba90;
          }
          if (plVar4 != (long *)0x0) {
            lVar5 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076cbbb8;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_076cbbb8:
            (*(code *)*puVar3)(plVar4,puVar3[1]);
          }
          FUN_076c71ec();
        }
        lVar5 = (**(code **)(*unaff_x19 + 0x1e8))();
        if (lVar5 == 0) {
LAB_076cbdec:
          lVar5 = (**(code **)(*unaff_x19 + 0x1f8))();
          if (lVar5 == 0) {
LAB_076cbff8:
            lVar5 = (**(code **)(*unaff_x19 + 0x218))();
            if (lVar5 == 0) {
LAB_076cc20c:
              if (-1 < (int)unaff_x19[4]) {
                if (unaff_x20 == 0) goto LAB_076cc90c;
                FUN_04df3e04();
              }
              lVar5 = (**(code **)(*unaff_x19 + 0x228))();
              if (lVar5 == 0) {
LAB_076cc44c:
                lVar5 = (**(code **)(*unaff_x19 + 0x238))();
                if (lVar5 == 0) {
LAB_076cc660:
                  lVar5 = (**(code **)(*unaff_x19 + 0x248))();
                  if (lVar5 == 0) {
LAB_076cc874:
                    lVar5 = (**(code **)(*unaff_x19 + 600))();
                    if (lVar5 == 0) {
                      if (unaff_x20 != 0) {
LAB_076cc8e0:
                        FUN_076c5f44();
                        return;
                      }
                    }
                    else if (unaff_x20 != 0) {
                      FUN_076c5d54();
                      lVar5 = (**(code **)(*unaff_x19 + 600))();
                      if (lVar5 != 0) {
                        FUN_076cd658();
                        goto LAB_076cc8e0;
                      }
                    }
                  }
                  else if (unaff_x20 != 0) {
                    FUN_076c7144();
                    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
                    if (plVar4 != (long *)0x0) {
                      lVar5 = *plVar4;
                      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar6 != 0) {
                        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2d898) {
                            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                            goto LAB_076cc704;
                          }
                          uVar6 = uVar6 - 1;
                          piVar7 = piVar7 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f2d898,0);
LAB_076cc704:
                      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
                      puVar2 = PTR_DAT_09f2d8a0;
                      puVar1 = PTR_DAT_09f1f018;
                      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_04447e44();
                      }
                      do {
                        lVar5 = *plVar4;
                        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                        if (uVar6 != 0) {
                          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                              goto LAB_076cc774;
                            }
                            uVar6 = uVar6 - 1;
                            piVar7 = piVar7 + 4;
                          } while (uVar6 != 0);
                        }
                        puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_076cc774:
                        uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                        if ((uVar6 & 1) == 0) {
                          if (plVar4 == (long *)0x0) goto LAB_076cc858;
                          lVar5 = *plVar4;
                          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                          if (uVar6 == 0) goto LAB_076cc830;
                          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose;
                        }
                        lVar5 = *plVar4;
                        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                        if (uVar6 != 0) {
                          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                              goto LAB_076cc7d0;
                            }
                            uVar6 = uVar6 - 1;
                            piVar7 = piVar7 + 4;
                          } while (uVar6 != 0);
                        }
                        puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_076cc7d0:
                        lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_04447e44();
                        }
                        FUN_076cd534();
                      } while( true );
                    }
                  }
                }
                else if (unaff_x20 != 0) {
                  FUN_076c7144();
                  plVar4 = (long *)(**(code **)(*unaff_x19 + 0x238))();
                  if (plVar4 != (long *)0x0) {
                    lVar5 = *plVar4;
                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2d640) {
                          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                          goto LAB_076cc4f0;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f2d640,0);
LAB_076cc4f0:
                    plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
                    puVar2 = PTR_DAT_09f2d668;
                    puVar1 = PTR_DAT_09f1f018;
                    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04447e44();
                    }
                    do {
                      lVar5 = *plVar4;
                      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar6 != 0) {
                        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                            goto LAB_076cc560;
                          }
                          uVar6 = uVar6 - 1;
                          piVar7 = piVar7 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_076cc560:
                      uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                      if ((uVar6 & 1) == 0) {
                        if (plVar4 == (long *)0x0) goto LAB_076cc644;
                        lVar5 = *plVar4;
                        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                        if (uVar6 == 0) goto LAB_076cc61c;
                        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        goto LAB_076cc604;
                      }
                      lVar5 = *plVar4;
                      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar6 != 0) {
                        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                            goto LAB_076cc5bc;
                          }
                          uVar6 = uVar6 - 1;
                          piVar7 = piVar7 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_076cc5bc:
                      lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_04447e44();
                      }
                      FUN_076cd48c();
                    } while( true );
                  }
                }
              }
              else if (unaff_x20 != 0) {
                FUN_076c7144();
                plVar4 = (long *)(**(code **)(*unaff_x19 + 0x228))();
                if (plVar4 != (long *)0x0) {
                  lVar5 = *plVar4;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e200) {
                        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                        goto LAB_076cc2dc;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f2e200,0);
LAB_076cc2dc:
                  plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
                  puVar2 = PTR_DAT_09f2e260;
                  puVar1 = PTR_DAT_09f1f018;
                  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  do {
                    lVar5 = *plVar4;
                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                          goto LAB_076cc34c;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_076cc34c:
                    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                    if ((uVar6 & 1) == 0) {
                      if (plVar4 == (long *)0x0) goto LAB_076cc430;
                      lVar5 = *plVar4;
                      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar6 == 0) goto LAB_076cc408;
                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      goto LAB_076cc3f0;
                    }
                    lVar5 = *plVar4;
                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                          goto LAB_076cc3a8;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_076cc3a8:
                    lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04447e44();
                    }
                    FUN_076cd3f0();
                  } while( true );
                }
              }
            }
            else if (unaff_x20 != 0) {
              FUN_076c7144();
              plVar4 = (long *)(**(code **)(*unaff_x19 + 0x218))();
              if (plVar4 != (long *)0x0) {
                lVar5 = *plVar4;
                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e1f8) {
                      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_076cc09c;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f2e1f8,0);
LAB_076cc09c:
                plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
                puVar2 = PTR_DAT_09f2e240;
                puVar1 = PTR_DAT_09f1f018;
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                do {
                  lVar5 = *plVar4;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                        goto LAB_076cc10c;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_076cc10c:
                  uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                  if ((uVar6 & 1) == 0) {
                    if (plVar4 == (long *)0x0) goto LAB_076cc1f0;
                    lVar5 = *plVar4;
                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar6 == 0) goto LAB_076cc1c8;
                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    goto LAB_076cc1b0;
                  }
                  lVar5 = *plVar4;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                        goto LAB_076cc168;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_076cc168:
                  lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  FUN_076cd28c();
                } while( true );
              }
            }
          }
          else if (unaff_x20 != 0) {
            FUN_076c7144();
            plVar4 = (long *)(**(code **)(*unaff_x19 + 0x1f8))();
            if (plVar4 != (long *)0x0) {
              lVar5 = *plVar4;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e1f0) {
                    puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_076cbe88;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f2e1f0,0);
LAB_076cbe88:
              plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
              puVar2 = PTR_DAT_09f2e250;
              puVar1 = PTR_DAT_09f1f018;
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              do {
                lVar5 = *plVar4;
                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                      goto 
                      Meta_XR_EnvironmentDepth_EnvironmentDepthManager__SetOcclusionShaderKeywords;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
Meta_XR_EnvironmentDepth_EnvironmentDepthManager__SetOcclusionShaderKeywords:
                uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                if ((uVar6 & 1) == 0) {
                  if (plVar4 == (long *)0x0) goto LAB_076cbfdc;
                  lVar5 = *plVar4;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar6 == 0) goto LAB_076cbfb4;
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  goto LAB_076cbf9c;
                }
                lVar5 = *plVar4;
                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_076cbf54;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_076cbf54:
                lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076c8d94();
              } while( true );
            }
          }
        }
        else if (unaff_x20 != 0) {
          FUN_076c7144();
          plVar4 = (long *)(**(code **)(*unaff_x19 + 0x1e8))();
          if (plVar4 != (long *)0x0) {
            lVar5 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e208) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076cbc7c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f2e208,0);
LAB_076cbc7c:
            plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
            puVar2 = PTR_DAT_09f2e248;
            puVar1 = PTR_DAT_09f1f018;
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            do {
              lVar5 = *plVar4;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_076cbcec;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_076cbcec:
              uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              if ((uVar6 & 1) == 0) {
                if (plVar4 == (long *)0x0) goto LAB_076cbdd0;
                lVar5 = *plVar4;
                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar6 == 0) goto LAB_076cbda8;
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                goto LAB_076cbd90;
              }
              lVar5 = *plVar4;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                    puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_076cbd48;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_076cbd48:
              lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076c7f18();
            } while( true );
          }
        }
      }
      else if (unaff_x20 != 0) {
        FUN_076c7144();
        plVar4 = (long *)(**(code **)(*unaff_x19 + 0x1c8))();
        if (plVar4 != (long *)0x0) {
          lVar5 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e228) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cb85c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f2e228,0);
LAB_076cb85c:
          plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
          puVar2 = PTR_DAT_09f2e270;
          puVar1 = PTR_DAT_09f1f018;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          do {
            lVar5 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076cb8cc;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_076cb8cc:
            uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
            if ((uVar6 & 1) == 0) {
              if (plVar4 == (long *)0x0) goto LAB_076cb9b4;
              lVar5 = *plVar4;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 == 0) goto LAB_076cb98c;
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              goto LAB_076cb974;
            }
            lVar5 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076cb928;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_076cb928:
            lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_076c6ac0();
          } while( true );
        }
      }
    }
    else if (unaff_x20 != 0) {
      FUN_076c7144();
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x178))();
      if (plVar4 != (long *)0x0) {
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e1e8) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cb64c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f2e1e8,0);
LAB_076cb64c:
        plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
        puVar2 = PTR_DAT_09f2e278;
        puVar1 = PTR_DAT_09f1f018;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar5 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cb6bc;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_076cb6bc:
          uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((uVar6 & 1) == 0) {
            if (plVar4 == (long *)0x0) goto LAB_076cb7a4;
            lVar5 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 == 0) goto LAB_076cb77c;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_076cb764;
          }
          lVar5 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cb718;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_076cb718:
          lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076c5524();
        } while( true );
      }
    }
  }
  else if (unaff_x20 != 0) {
    FUN_076c7144();
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x1b8))();
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e218) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076cb43c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f2e218,0);
LAB_076cb43c:
      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      puVar2 = PTR_DAT_09f2e258;
      puVar1 = PTR_DAT_09f1f018;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      do {
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cb4ac;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_076cb4ac:
        uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar6 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_076cb594;
          lVar5 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_076cb56c;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_076cb554;
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cb508;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_076cb508:
        lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_076c65fc();
      } while( true );
    }
  }
LAB_076cc90c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


