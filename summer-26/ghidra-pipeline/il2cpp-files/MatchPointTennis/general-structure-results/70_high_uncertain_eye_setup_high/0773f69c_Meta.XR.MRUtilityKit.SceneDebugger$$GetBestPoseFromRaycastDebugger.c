/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetBestPoseFromRaycastDebugger
ENTRY_POINT: 0773f69c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_SceneDebugger__GetBestPoseFromRaycastDebugger
               (long param_1,uint param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 unaff_x19;
  long *unaff_x24;
  long *unaff_x25;
  long *in_stack_00000078;
  
  uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar6 = (undefined8 *)(param_1 + (long)(*piVar9 + 6) * 0x10 + 0x138);
        goto LAB_0773f6e8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773f6e8:
  uVar2 = (*(code *)*puVar6)();
  lVar7 = *unaff_x24;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
        goto LAB_0773f748;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773f748:
  uVar3 = (*(code *)*puVar6)();
  uVar4 = FUN_0775dc68(&stack0x00000078,0);
  plVar1 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    lVar7 = *in_stack_00000078;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x25) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 10) * 0x10 + 0x138);
          goto LAB_0773f7c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_044822ac(in_stack_00000078,*unaff_x25,10);
LAB_0773f7c0:
    uVar5 = (*(code *)*puVar6)(plVar1,puVar6[1]);
    plVar1 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      lVar7 = *in_stack_00000078;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x25) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
            goto LAB_0773f828;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_044822ac(in_stack_00000078,*unaff_x25,0xc);
LAB_0773f828:
      (*(code *)*puVar6)(plVar1,puVar6[1]);
      plVar1 = in_stack_00000078;
      if (in_stack_00000078 != (long *)0x0) {
        lVar7 = *in_stack_00000078;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x25) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_0773f890;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_044822ac(in_stack_00000078,*unaff_x25,0xe);
LAB_0773f890:
        (*(code *)*puVar6)(plVar1,puVar6[1]);
        plVar1 = in_stack_00000078;
        if (in_stack_00000078 != (long *)0x0) {
          lVar7 = *in_stack_00000078;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x25) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x10) * 0x10 + 0x138);
                goto LAB_0773f8f8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac(in_stack_00000078,*unaff_x25,0x10);
LAB_0773f8f8:
          (*(code *)*puVar6)(plVar1,puVar6[1]);
          plVar1 = in_stack_00000078;
          if (in_stack_00000078 != (long *)0x0) {
            lVar7 = *in_stack_00000078;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x25) {
                  puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x12) * 0x10 + 0x138);
                  goto LAB_0773f960;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_044822ac(in_stack_00000078,*unaff_x25,0x12);
LAB_0773f960:
            (*(code *)*puVar6)(plVar1,puVar6[1]);
            plVar1 = in_stack_00000078;
            if (in_stack_00000078 != (long *)0x0) {
              lVar7 = *in_stack_00000078;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x25) {
                    puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
                    goto LAB_0773f9e8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)FUN_044822ac(in_stack_00000078,*unaff_x25,0x14);
LAB_0773f9e8:
              (*(code *)*puVar6)(plVar1,puVar6[1]);
              plVar1 = in_stack_00000078;
              if (in_stack_00000078 != (long *)0x0) {
                lVar7 = *in_stack_00000078;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *unaff_x25) {
                      puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                      goto LAB_0773fa68;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar6 = (undefined8 *)FUN_044822ac(in_stack_00000078,*unaff_x25,2);
LAB_0773fa68:
                (*(code *)*puVar6)(plVar1,puVar6[1]);
                plVar1 = in_stack_00000078;
                if (in_stack_00000078 != (long *)0x0) {
                  lVar7 = *in_stack_00000078;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *unaff_x25) {
                        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_0773facc;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_044822ac(in_stack_00000078,*unaff_x25,0);
LAB_0773facc:
                  (*(code *)*puVar6)(plVar1,puVar6[1]);
                  uVar2 = FUN_0773fb7c(unaff_x19,1,1,param_2 & 1,uVar2 & 1,uVar3 & 1,uVar4 & 1,
                                       uVar5 & 1);
                  return uVar2 & 1;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


