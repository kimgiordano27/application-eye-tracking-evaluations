/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$SetOcclusionShaderKeywords
ENTRY_POINT: 076cbef8
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


/* WARNING: Removing unreachable block (ram,0x076cc864) */
/* WARNING: Removing unreachable block (ram,0x076cc43c) */
/* WARNING: Removing unreachable block (ram,0x076cc1fc) */
/* WARNING: Removing unreachable block (ram,0x076cc650) */
/* WARNING: Removing unreachable block (ram,0x076cc91c) */
/* WARNING: Removing unreachable block (ram,0x076cbfe8) */
/* WARNING: Removing unreachable block (ram,0x076cc8cc) */

void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__SetOcclusionShaderKeywords
               (undefined8 *param_1)

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
  
code_r0x076cbef8:
  uVar3 = (*(code *)*param_1)();
  if ((uVar3 & 1) != 0) {
    lVar6 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cbf54;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac();
LAB_076cbf54:
    lVar6 = (*(code *)*puVar4)();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_076c8d94();
    lVar6 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          param_1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto code_r0x076cbef8;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    param_1 = (undefined8 *)FUN_044822ac();
    goto code_r0x076cbef8;
  }
  if (unaff_x22 != (long *)0x0) {
    lVar6 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cbfd0;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac();
LAB_076cbfd0:
    (*(code *)*puVar4)();
  }
  FUN_076c71ec();
  lVar6 = (**(code **)(*unaff_x19 + 0x218))();
  if (lVar6 != 0) {
    if (unaff_x20 != 0) {
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
    goto LAB_076cc90c;
  }
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
LAB_076cc90c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


