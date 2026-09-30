/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$ResetDepthTextureIfAvailable
ENTRY_POINT: 076cc510
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076cc864) */
/* WARNING: Removing unreachable block (ram,0x076cc91c) */
/* WARNING: Removing unreachable block (ram,0x076cc650) */
/* WARNING: Removing unreachable block (ram,0x076cc8cc) */

void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__ResetDepthTextureIfAvailable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *plVar7;
  
  plVar7 = *(long **)(unaff_x23 + 0x668);
  do {
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076cc560;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_076cc560:
    uVar5 = (*(code *)*puVar3)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_076cc644;
      lVar4 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_076cc61c;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar7) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076cc5bc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_076cc5bc:
    lVar4 = (*(code *)*puVar3)();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_076cd48c();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
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
      plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f2d898) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_076cc704;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f2d898,0);
LAB_076cc704:
        plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
        puVar2 = PTR_DAT_09f2d8a0;
        puVar1 = PTR_DAT_09f1f018;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_076cc774;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar7,*(long *)puVar1,0);
LAB_076cc774:
          uVar5 = (*(code *)*puVar3)(plVar7,puVar3[1]);
          if ((uVar5 & 1) == 0) {
            if (plVar7 == (long *)0x0) goto LAB_076cc858;
            lVar4 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 == 0) goto LAB_076cc830;
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose;
          }
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_076cc7d0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar7,*(long *)puVar2,0);
LAB_076cc7d0:
          lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
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
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_076cc84c;
    }
  }
LAB_076cc830:
  puVar3 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc84c:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
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


