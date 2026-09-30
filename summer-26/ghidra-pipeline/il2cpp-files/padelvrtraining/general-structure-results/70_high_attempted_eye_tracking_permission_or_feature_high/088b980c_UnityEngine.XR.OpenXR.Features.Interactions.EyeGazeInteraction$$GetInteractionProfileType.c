/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetInteractionProfileType
ENTRY_POINT: 088b980c
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

void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong in_x9;
  long lVar8;
  int *piVar9;
  int *in_x10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long lVar10;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_088b9840;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_03d8f370(unaff_x23,param_3,0);
LAB_088b9840:
      uVar4 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      if ((uVar4 & 1) == 0) {
        if (unaff_x23 != (long *)0x0) {
          lVar7 = *unaff_x23;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091a14e0) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_088b99fc;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_03d8f370(unaff_x23,*(long *)PTR_DAT_091a14e0,0);
LAB_088b99fc:
          (*(code *)*puVar3)(unaff_x23,puVar3[1]);
        }
        do {
          lVar7 = *unaff_x20;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x25) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_088b95a0;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_03d8f370();
LAB_088b95a0:
          uVar4 = (*(code *)*puVar3)();
          if ((uVar4 & 1) == 0) {
            if (unaff_x20 == (long *)0x0) {
              return;
            }
            lVar7 = *unaff_x20;
            uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar4 == 0) goto LAB_088b9ac4;
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_088b9aac;
          }
          lVar7 = *unaff_x20;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09292640) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_088b9604;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_03d8f370();
LAB_088b9604:
          unaff_x21 = (long *)(*(code *)*puVar3)();
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          lVar7 = *unaff_x21;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x28) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
                goto LAB_088b9668;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_03d8f370(unaff_x21,*unaff_x28,8);
LAB_088b9668:
          uVar4 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        } while ((uVar4 & 1) == 0);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar7 = *unaff_x21;
        lVar10 = *(long *)(unaff_x19 + 0x20);
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x28) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_088b96d0;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(unaff_x21,*unaff_x28,2);
LAB_088b96d0:
        uVar5 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        if (*(int *)(*(long *)PTR_DAT_09292658 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar6 = FUN_0583d4ec(*(undefined8 *)PTR_DAT_09292650);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_06b6dddc(lVar10,uVar5,uVar6,*(undefined8 *)PTR_DAT_092925f8);
        lVar7 = *unaff_x21;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x28) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_088b9778;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(unaff_x21,*unaff_x28,7);
LAB_088b9778:
        plVar2 = (long *)(*(code *)*puVar3)(unaff_x21,puVar3[1]);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar7 = *plVar2;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09292620) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_088b97e0;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(plVar2,*(long *)PTR_DAT_09292620,0);
LAB_088b97e0:
        unaff_x23 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
      }
      else {
        lVar7 = *unaff_x23;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_088b989c;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(unaff_x23,*unaff_x26,0);
LAB_088b989c:
        uVar5 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
        lVar7 = *unaff_x21;
        lVar10 = *(long *)(unaff_x19 + 0x20);
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x28) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_088b9900;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(unaff_x21,*unaff_x28,2);
LAB_088b9900:
        uVar6 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548(uVar6,uVar6);
        }
        lVar7 = FUN_06b6dd5c(lVar10,uVar6,*unaff_x29);
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        FUN_088bd40c(&stack0x00000008,uVar5);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar8 = *unaff_x27;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          puVar3 = (undefined8 *)(lVar10 + 0x20);
          *puVar3 = in_stack_00000008;
          *(undefined8 *)(lVar10 + 0x28) = in_stack_00000010;
          thunk_FUN_03d1023c(puVar3,0);
        }
        else {
          FUN_05c8533c(lVar7,in_stack_00000008,in_stack_00000010,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      param_1 = *unaff_x23;
      param_3 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_088b9aac:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_088b9ae8;
    }
  }
LAB_088b9ac4:
  puVar3 = (undefined8 *)FUN_03d8f370();
LAB_088b9ae8:
  (*(code *)*puVar3)();
  return;
}


