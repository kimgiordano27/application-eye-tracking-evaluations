/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$OnDisable
ENTRY_POINT: 076cc5ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076cc864) */
/* WARNING: Removing unreachable block (ram,0x076cc91c) */
/* WARNING: Removing unreachable block (ram,0x076cc650) */
/* WARNING: Removing unreachable block (ram,0x076cc8cc) */

void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__OnDisable(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
LAB_076cc5bc:
  do {
    lVar4 = (*(code *)*param_1)();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_076cd48c();
    lVar4 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cc560;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_076cc560:
    uVar6 = (*(code *)*puVar3)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_076cc644;
      lVar4 = *unaff_x22;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_076cc61c;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          param_1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cc5bc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    param_1 = (undefined8 *)FUN_044822ac();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076cc638;
    }
  }
LAB_076cc61c:
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_076cc638:
  (*(code *)*puVar3)();
LAB_076cc644:
  FUN_076c71ec();
  lVar4 = (**(code **)(*unaff_x19 + 0x248))();
  if (lVar4 != 0) {
    if (unaff_x20 != 0) {
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
    goto LAB_076cc90c;
  }
  goto LAB_076cc874;
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
LAB_076cc90c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


