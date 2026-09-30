/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 088b95bc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x088b9dbc) */
/* WARNING: Removing unreachable block (ram,0x088b9a18) */
/* WARNING: Removing unreachable block (ram,0x088b9c40) */

void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong in_x9;
  ulong uVar8;
  long lVar9;
  undefined **in_x10;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  do {
    if (in_x9 != 0) {
      piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)in_x10[200]) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_088b9604;
        }
        in_x9 = in_x9 - 1;
        piVar10 = piVar10 + 4;
      } while (in_x9 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370();
LAB_088b9604:
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_088b9668;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370(plVar3,*unaff_x28,8);
LAB_088b9668:
    uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar8 & 1) != 0) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar7 = *plVar3;
      lVar11 = *(long *)(unaff_x19 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_088b96d0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(plVar3,*unaff_x28,2);
LAB_088b96d0:
      uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if (*(int *)(*(long *)PTR_DAT_09292658 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar5 = FUN_0583d4ec(*(undefined8 *)PTR_DAT_09292650);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_06b6dddc(lVar11,uVar4,uVar5,*(undefined8 *)PTR_DAT_092925f8);
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 7) * 0x10 + 0x138);
            goto LAB_088b9778;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(plVar3,*unaff_x28,7);
LAB_088b9778:
      plVar6 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09292620) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_088b97e0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_09292620,0);
LAB_088b97e0:
      plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
LAB_088b97f4:
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_088b9840;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*unaff_x25,0);
LAB_088b9840:
      uVar8 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      if ((uVar8 & 1) != 0) {
        lVar7 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x26) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_088b989c;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*unaff_x26,0);
LAB_088b989c:
        uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        lVar7 = *plVar3;
        lVar11 = *(long *)(unaff_x19 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x28) {
              puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_088b9900;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370(plVar3,*unaff_x28,2);
LAB_088b9900:
        uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548(uVar5,uVar5);
        }
        lVar7 = FUN_06b6dd5c(lVar11,uVar5,*unaff_x29);
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        FUN_088bd40c(&stack0x00000008,uVar4);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar11 = *(long *)(lVar7 + 0x10);
        lVar9 = *unaff_x27;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          puVar2 = (undefined8 *)(lVar11 + 0x20);
          *puVar2 = in_stack_00000008;
          *(undefined8 *)(lVar11 + 0x28) = in_stack_00000010;
          thunk_FUN_03d1023c(puVar2,0);
        }
        else {
          FUN_05c8533c(lVar7,in_stack_00000008,in_stack_00000010,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_088b97f4;
      }
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091a14e0) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_088b99fc;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_091a14e0,0);
LAB_088b99fc:
        (*(code *)*puVar2)(plVar6,puVar2[1]);
      }
    }
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_088b95a0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370();
LAB_088b95a0:
    uVar8 = (*(code *)*puVar2)();
    if ((uVar8 & 1) == 0) break;
    param_1 = *unaff_x20;
    in_x10 = &PTR_DAT_09292000;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  if (unaff_x20 != (long *)0x0) {
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_088b9ae8;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370();
LAB_088b9ae8:
    (*(code *)*puVar2)();
  }
  return;
}


