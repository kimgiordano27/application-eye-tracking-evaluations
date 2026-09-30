/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$UnregisterDeviceLayout
ENTRY_POINT: 088b97a4
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

void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__UnregisterDeviceLayout
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong in_x9;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar10;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  do {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_088b97e0;
      }
      in_x9 = in_x9 - 1;
      piVar9 = piVar9 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_03d8f370(unaff_x22,param_3,0);
LAB_088b97e0:
      plVar3 = (long *)(*(code *)*puVar2)(unaff_x22,puVar2[1]);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
LAB_088b97f4:
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_088b9840;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(plVar3,*unaff_x25,0);
LAB_088b9840:
      uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if ((uVar7 & 1) != 0) {
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_088b989c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370(plVar3,*unaff_x26,0);
LAB_088b989c:
        uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        lVar6 = *unaff_x21;
        lVar10 = *(long *)(unaff_x19 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x28) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_088b9900;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370(unaff_x21,*unaff_x28,2);
LAB_088b9900:
        uVar5 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548(uVar5,uVar5);
        }
        lVar6 = FUN_06b6dd5c(lVar10,uVar5,*unaff_x29);
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        FUN_088bd40c(&stack0x00000008,uVar4);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar10 = *(long *)(lVar6 + 0x10);
        lVar8 = *unaff_x27;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar2 = (undefined8 *)(lVar10 + 0x20);
          *puVar2 = in_stack_00000008;
          *(undefined8 *)(lVar10 + 0x28) = in_stack_00000010;
          thunk_FUN_03d1023c(puVar2,0);
        }
        else {
          FUN_05c8533c(lVar6,in_stack_00000008,in_stack_00000010,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_088b97f4;
      }
      if (plVar3 != (long *)0x0) {
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091a14e0) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_088b99fc;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370(plVar3,*(long *)PTR_DAT_091a14e0,0);
LAB_088b99fc:
        (*(code *)*puVar2)(plVar3,puVar2[1]);
      }
      do {
        lVar6 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_088b95a0;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370();
LAB_088b95a0:
        uVar7 = (*(code *)*puVar2)();
        if ((uVar7 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) {
            return;
          }
          lVar6 = *unaff_x20;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_088b9ac4;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_088b9aac;
        }
        lVar6 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09292640) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_088b9604;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370();
LAB_088b9604:
        unaff_x21 = (long *)(*(code *)*puVar2)();
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar6 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x28) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 8) * 0x10 + 0x138);
              goto LAB_088b9668;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370(unaff_x21,*unaff_x28,8);
LAB_088b9668:
        uVar7 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
      } while ((uVar7 & 1) == 0);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar6 = *unaff_x21;
      lVar10 = *(long *)(unaff_x19 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_088b96d0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(unaff_x21,*unaff_x28,2);
LAB_088b96d0:
      uVar4 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
      if (*(int *)(*(long *)PTR_DAT_09292658 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar5 = FUN_0583d4ec(*(undefined8 *)PTR_DAT_09292650);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_06b6dddc(lVar10,uVar4,uVar5,*(undefined8 *)PTR_DAT_092925f8);
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
            goto LAB_088b9778;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(unaff_x21,*unaff_x28,7);
LAB_088b9778:
      unaff_x22 = (long *)(*(code *)*puVar2)(unaff_x21,puVar2[1]);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      param_1 = *unaff_x22;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)PTR_DAT_09292620;
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_088b9aac:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_088b9ae8;
    }
  }
LAB_088b9ac4:
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_088b9ae8:
  (*(code *)*puVar2)();
  return;
}


