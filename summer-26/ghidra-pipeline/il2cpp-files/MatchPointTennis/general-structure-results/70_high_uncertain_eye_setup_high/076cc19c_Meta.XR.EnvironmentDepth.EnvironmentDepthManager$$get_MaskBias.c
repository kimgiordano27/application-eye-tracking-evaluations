/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$get_MaskBias
ENTRY_POINT: 076cc19c
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
/* WARNING: Removing unreachable block (ram,0x076cc650) */
/* WARNING: Removing unreachable block (ram,0x076cc43c) */

void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskBias(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *in_x10;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_076cc1e4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_076cc1e4:
  (*(code *)*puVar3)();
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e3c(unaff_x23);
  }
  if ((unaff_w21 != 0x2d) && (unaff_w21 != 0)) {
    return;
  }
  FUN_076c71ec();
  if (-1 < (int)unaff_x19[4]) {
    if (unaff_x20 == 0) goto LAB_076cc90c;
    FUN_04df3e04();
  }
  lVar4 = (**(code **)(*unaff_x19 + 0x228))();
  if (lVar4 != 0) {
    if (unaff_x20 != 0) {
      FUN_076c7144();
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x228))();
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2e200) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cc2dc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e200,0);
LAB_076cc2dc:
        plVar5 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
        puVar2 = PTR_DAT_09f2e260;
        puVar1 = PTR_DAT_09f1f018;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar4 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cc34c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cc34c:
          uVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
          if ((uVar6 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_076cc430;
            lVar4 = *plVar5;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 == 0) goto LAB_076cc408;
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_076cc3f0;
          }
          lVar4 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cc3a8;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cc3a8:
          lVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076cd3f0();
        } while( true );
      }
    }
    goto LAB_076cc90c;
  }
  goto LAB_076cc44c;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076cc604:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cc638;
    }
  }
LAB_076cc61c:
  puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc638:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
LAB_076cc644:
  FUN_076c71ec();
  goto LAB_076cc660;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cc84c;
    }
  }
LAB_076cc830:
  puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc84c:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
LAB_076cc858:
  FUN_076c71ec();
  goto LAB_076cc874;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076cc3f0:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cc424;
    }
  }
LAB_076cc408:
  puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc424:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
LAB_076cc430:
  FUN_076c71ec();
LAB_076cc44c:
  lVar4 = (**(code **)(*unaff_x19 + 0x238))();
  if (lVar4 == 0) {
LAB_076cc660:
    lVar4 = (**(code **)(*unaff_x19 + 0x248))();
    if (lVar4 == 0) {
LAB_076cc874:
      lVar4 = (**(code **)(*unaff_x19 + 600))();
      if (lVar4 == 0) {
        if (unaff_x20 != 0) {
LAB_076cc8e0:
          FUN_076c5f44();
          return;
        }
      }
      else if (unaff_x20 != 0) {
        FUN_076c5d54();
        lVar4 = (**(code **)(*unaff_x19 + 600))();
        if (lVar4 != 0) {
          FUN_076cd658();
          goto LAB_076cc8e0;
        }
      }
    }
    else if (unaff_x20 != 0) {
      FUN_076c7144();
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2d898) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cc704;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2d898,0);
LAB_076cc704:
        plVar5 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
        puVar2 = PTR_DAT_09f2d8a0;
        puVar1 = PTR_DAT_09f1f018;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar4 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cc774;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cc774:
          uVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
          if ((uVar6 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_076cc858;
            lVar4 = *plVar5;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 == 0) goto LAB_076cc830;
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose;
          }
          lVar4 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cc7d0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cc7d0:
          lVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
          if (lVar4 == 0) {
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
      lVar4 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2d640) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076cc4f0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2d640,0);
LAB_076cc4f0:
      plVar5 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
      puVar2 = PTR_DAT_09f2d668;
      puVar1 = PTR_DAT_09f1f018;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      do {
        lVar4 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cc560;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cc560:
        uVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        if ((uVar6 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_076cc644;
          lVar4 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 == 0) goto LAB_076cc61c;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_076cc604;
        }
        lVar4 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cc5bc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cc5bc:
        lVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_076cd48c();
      } while( true );
    }
  }
LAB_076cc90c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


