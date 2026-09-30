/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.VariantCheckpoint$$get_MemberName
ENTRY_POINT: 076cb4b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076cc650) */
/* WARNING: Removing unreachable block (ram,0x076cc1fc) */
/* WARNING: Removing unreachable block (ram,0x076cbddc) */
/* WARNING: Removing unreachable block (ram,0x076cb9c0) */
/* WARNING: Removing unreachable block (ram,0x076cb7b0) */
/* WARNING: Removing unreachable block (ram,0x076cbbd0) */
/* WARNING: Removing unreachable block (ram,0x076cbfe8) */
/* WARNING: Removing unreachable block (ram,0x076cb5a0) */
/* WARNING: Removing unreachable block (ram,0x076cc864) */
/* WARNING: Removing unreachable block (ram,0x076cc91c) */
/* WARNING: Removing unreachable block (ram,0x076cc43c) */
/* WARNING: Removing unreachable block (ram,0x076cc8cc) */

void Meta_XR_BuildingBlocks_VariantCheckpoint__get_MemberName(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
  while (uVar3 = (*param_1)(), (uVar3 & 1) != 0) {
    lVar6 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cb508;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac();
LAB_076cb508:
    lVar6 = (*(code *)*puVar4)();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_076c65fc();
    lVar6 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cb4ac;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac();
LAB_076cb4ac:
    param_1 = (code *)*puVar4;
  }
  if (unaff_x22 != (long *)0x0) {
    lVar6 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cb588;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac();
LAB_076cb588:
    (*(code *)*puVar4)();
  }
  FUN_076c71ec();
  lVar6 = (**(code **)(*unaff_x19 + 0x178))();
  if (lVar6 != 0) {
    if (unaff_x20 != 0) {
      FUN_076c7144();
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x178))();
      if (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e1e8) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cb64c;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e1e8,0);
LAB_076cb64c:
        plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        puVar2 = PTR_DAT_09f2e278;
        puVar1 = PTR_DAT_09f1f018;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar6 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cb6bc;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cb6bc:
          uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if ((uVar3 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_076cb7a4;
            lVar6 = *plVar5;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 == 0) goto LAB_076cb77c;
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_076cb764;
          }
          lVar6 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cb718;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cb718:
          lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076c5524();
        } while( true );
      }
    }
    goto LAB_076cc90c;
  }
  goto LAB_076cb7c0;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_076cb974:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cb9a8;
    }
  }
LAB_076cb98c:
  puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cb9a8:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_076cb9b4:
  FUN_076c71ec();
  goto LAB_076cb9d0;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_076cbd90:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cbdc4;
    }
  }
LAB_076cbda8:
  puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cbdc4:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_076cbdd0:
  FUN_076c71ec();
  goto LAB_076cbdec;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_076cbf9c:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cbfd0;
    }
  }
LAB_076cbfb4:
  puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cbfd0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_076cbfdc:
  FUN_076c71ec();
  goto LAB_076cbff8;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_076cc1b0:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cc1e4;
    }
  }
LAB_076cc1c8:
  puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc1e4:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_076cc1f0:
  FUN_076c71ec();
  goto LAB_076cc20c;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_076cc3f0:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cc424;
    }
  }
LAB_076cc408:
  puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc424:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_076cc430:
  FUN_076c71ec();
  goto LAB_076cc44c;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_076cc604:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cc638;
    }
  }
LAB_076cc61c:
  puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc638:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_076cc644:
  FUN_076c71ec();
  goto LAB_076cc660;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cc84c;
    }
  }
LAB_076cc830:
  puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc84c:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_076cc858:
  FUN_076c71ec();
  goto LAB_076cc874;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_076cb764:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cb798;
    }
  }
LAB_076cb77c:
  puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cb798:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_076cb7a4:
  FUN_076c71ec();
LAB_076cb7c0:
  lVar6 = (**(code **)(*unaff_x19 + 0x1c8))();
  if (lVar6 != 0) {
    if (unaff_x20 != 0) {
      FUN_076c7144();
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x1c8))();
      if (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e228) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cb85c;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e228,0);
LAB_076cb85c:
        plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        puVar2 = PTR_DAT_09f2e270;
        puVar1 = PTR_DAT_09f1f018;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar6 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cb8cc;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cb8cc:
          uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if ((uVar3 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_076cb9b4;
            lVar6 = *plVar5;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 == 0) goto LAB_076cb98c;
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_076cb974;
          }
          lVar6 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cb928;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cb928:
          lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076c6ac0();
        } while( true );
      }
    }
    goto LAB_076cc90c;
  }
LAB_076cb9d0:
  lVar6 = (**(code **)(*unaff_x19 + 0x1d8))();
  if (lVar6 != 0) {
    if (unaff_x20 == 0) goto LAB_076cc90c;
    FUN_076c7144();
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x1d8))();
    if (plVar5 == (long *)0x0) goto LAB_076cc90c;
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e230) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cba6c;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e230,0);
LAB_076cba6c:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    puVar2 = PTR_DAT_09f2e268;
    puVar1 = PTR_DAT_09f1f018;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
LAB_076cba90:
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cbadc;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cbadc:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar3 & 1) != 0) {
      lVar6 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076cbb38;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cbb38:
      lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (lVar6 != 0) {
        FUN_076c6f7c();
      }
      goto LAB_076cba90;
    }
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076cbbb8;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cbbb8:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
    }
    FUN_076c71ec();
  }
  lVar6 = (**(code **)(*unaff_x19 + 0x1e8))();
  if (lVar6 == 0) {
LAB_076cbdec:
    lVar6 = (**(code **)(*unaff_x19 + 0x1f8))();
    if (lVar6 == 0) {
LAB_076cbff8:
      lVar6 = (**(code **)(*unaff_x19 + 0x218))();
      if (lVar6 == 0) {
LAB_076cc20c:
        if (-1 < (int)unaff_x19[4]) {
          if (unaff_x20 == 0) goto LAB_076cc90c;
          FUN_04df3e04();
        }
        lVar6 = (**(code **)(*unaff_x19 + 0x228))();
        if (lVar6 == 0) {
LAB_076cc44c:
          lVar6 = (**(code **)(*unaff_x19 + 0x238))();
          if (lVar6 == 0) {
LAB_076cc660:
            lVar6 = (**(code **)(*unaff_x19 + 0x248))();
            if (lVar6 == 0) {
LAB_076cc874:
              lVar6 = (**(code **)(*unaff_x19 + 600))();
              if (lVar6 == 0) {
                if (unaff_x20 != 0) {
LAB_076cc8e0:
                  FUN_076c5f44();
                  return;
                }
              }
              else if (unaff_x20 != 0) {
                FUN_076c5d54();
                lVar6 = (**(code **)(*unaff_x19 + 600))();
                if (lVar6 != 0) {
                  FUN_076cd658();
                  goto LAB_076cc8e0;
                }
              }
            }
            else if (unaff_x20 != 0) {
              FUN_076c7144();
              plVar5 = (long *)(**(code **)(*unaff_x19 + 0x248))();
              if (plVar5 != (long *)0x0) {
                lVar6 = *plVar5;
                uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar3 != 0) {
                  piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2d898) {
                      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_076cc704;
                    }
                    uVar3 = uVar3 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar3 != 0);
                }
                puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2d898,0);
LAB_076cc704:
                plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
                puVar2 = PTR_DAT_09f2d8a0;
                puVar1 = PTR_DAT_09f1f018;
                if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                do {
                  lVar6 = *plVar5;
                  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar3 != 0) {
                    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                        puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                        goto LAB_076cc774;
                      }
                      uVar3 = uVar3 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar3 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cc774:
                  uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
                  if ((uVar3 & 1) == 0) {
                    if (plVar5 == (long *)0x0) goto LAB_076cc858;
                    lVar6 = *plVar5;
                    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar3 == 0) goto LAB_076cc830;
                    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose;
                  }
                  lVar6 = *plVar5;
                  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar3 != 0) {
                    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                        puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                        goto LAB_076cc7d0;
                      }
                      uVar3 = uVar3 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar3 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cc7d0:
                  lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
                  if (lVar6 == 0) {
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
            plVar5 = (long *)(**(code **)(*unaff_x19 + 0x238))();
            if (plVar5 != (long *)0x0) {
              lVar6 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar3 != 0) {
                piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2d640) {
                    puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_076cc4f0;
                  }
                  uVar3 = uVar3 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2d640,0);
LAB_076cc4f0:
              plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
              puVar2 = PTR_DAT_09f2d668;
              puVar1 = PTR_DAT_09f1f018;
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              do {
                lVar6 = *plVar5;
                uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar3 != 0) {
                  piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_076cc560;
                    }
                    uVar3 = uVar3 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar3 != 0);
                }
                puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cc560:
                uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
                if ((uVar3 & 1) == 0) {
                  if (plVar5 == (long *)0x0) goto LAB_076cc644;
                  lVar6 = *plVar5;
                  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar3 == 0) goto LAB_076cc61c;
                  piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  goto LAB_076cc604;
                }
                lVar6 = *plVar5;
                uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar3 != 0) {
                  piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_076cc5bc;
                    }
                    uVar3 = uVar3 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar3 != 0);
                }
                puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cc5bc:
                lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
                if (lVar6 == 0) {
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
          plVar5 = (long *)(**(code **)(*unaff_x19 + 0x228))();
          if (plVar5 != (long *)0x0) {
            lVar6 = *plVar5;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e200) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076cc2dc;
                }
                uVar3 = uVar3 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e200,0);
LAB_076cc2dc:
            plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
            puVar2 = PTR_DAT_09f2e260;
            puVar1 = PTR_DAT_09f1f018;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            do {
              lVar6 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar3 != 0) {
                piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_076cc34c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cc34c:
              uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
              if ((uVar3 & 1) == 0) {
                if (plVar5 == (long *)0x0) goto LAB_076cc430;
                lVar6 = *plVar5;
                uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar3 == 0) goto LAB_076cc408;
                piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                goto LAB_076cc3f0;
              }
              lVar6 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar3 != 0) {
                piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                    puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_076cc3a8;
                  }
                  uVar3 = uVar3 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cc3a8:
              lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
              if (lVar6 == 0) {
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
        plVar5 = (long *)(**(code **)(*unaff_x19 + 0x218))();
        if (plVar5 != (long *)0x0) {
          lVar6 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e1f8) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cc09c;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e1f8,0);
LAB_076cc09c:
          plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
          puVar2 = PTR_DAT_09f2e240;
          puVar1 = PTR_DAT_09f1f018;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          do {
            lVar6 = *plVar5;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076cc10c;
                }
                uVar3 = uVar3 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cc10c:
            uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
            if ((uVar3 & 1) == 0) {
              if (plVar5 == (long *)0x0) goto LAB_076cc1f0;
              lVar6 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar3 == 0) goto LAB_076cc1c8;
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto LAB_076cc1b0;
            }
            lVar6 = *plVar5;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076cc168;
                }
                uVar3 = uVar3 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cc168:
            lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
            if (lVar6 == 0) {
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
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x1f8))();
      if (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e1f0) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cbe88;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e1f0,0);
LAB_076cbe88:
        plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        puVar2 = PTR_DAT_09f2e250;
        puVar1 = PTR_DAT_09f1f018;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar6 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager__SetOcclusionShaderKeywords;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
Meta_XR_EnvironmentDepth_EnvironmentDepthManager__SetOcclusionShaderKeywords:
          uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if ((uVar3 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_076cbfdc;
            lVar6 = *plVar5;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 == 0) goto LAB_076cbfb4;
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_076cbf9c;
          }
          lVar6 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cbf54;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cbf54:
          lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if (lVar6 == 0) {
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
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x1e8))();
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e208) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076cbc7c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e208,0);
LAB_076cbc7c:
      plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      puVar2 = PTR_DAT_09f2e248;
      puVar1 = PTR_DAT_09f1f018;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      do {
        lVar6 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cbcec;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cbcec:
        uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        if ((uVar3 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_076cbdd0;
          lVar6 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 == 0) goto LAB_076cbda8;
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_076cbd90;
        }
        lVar6 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cbd48;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cbd48:
        lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_076c7f18();
      } while( true );
    }
  }
LAB_076cc90c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


