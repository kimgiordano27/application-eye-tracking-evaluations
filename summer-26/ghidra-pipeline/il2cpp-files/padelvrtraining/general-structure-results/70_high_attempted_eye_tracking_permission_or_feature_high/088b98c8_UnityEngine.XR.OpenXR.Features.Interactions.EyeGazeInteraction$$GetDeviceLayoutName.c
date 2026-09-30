/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetDeviceLayoutName
ENTRY_POINT: 088b98c8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x088b9dbc) */
/* WARNING: Removing unreachable block (ram,0x088b9a18) */
/* WARNING: Removing unreachable block (ram,0x088b9c40) */

void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetDeviceLayoutName
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong in_x9;
  long lVar9;
  int *piVar10;
  int *in_x10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
code_r0x088b98c8:
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
      goto LAB_088b9900;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
LAB_088b98e0:
  puVar4 = (undefined8 *)FUN_03d8f370(unaff_x21,param_3,2);
LAB_088b9900:
  uVar5 = (*(code *)*puVar4)(unaff_x21,puVar4[1]);
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548(uVar5,uVar5);
  }
  lVar6 = FUN_06b6dd5c(unaff_x24,uVar5,*unaff_x29);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_088bd40c(&stack0x00000008,unaff_x22);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar7 = *(long *)(lVar6 + 0x10);
  lVar9 = *unaff_x27;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = *(uint *)(lVar6 + 0x18);
  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
    lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
    puVar4 = (undefined8 *)(lVar7 + 0x20);
    *puVar4 = in_stack_00000008;
    *(undefined8 *)(lVar7 + 0x28) = in_stack_00000010;
    thunk_FUN_03d1023c(puVar4,0);
  }
  else {
    FUN_05c8533c(lVar6,in_stack_00000008,in_stack_00000010,
                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
  }
  do {
    lVar6 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_088b9840;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(unaff_x23,*unaff_x25,0);
LAB_088b9840:
    uVar8 = (*(code *)*puVar4)(unaff_x23,puVar4[1]);
    if ((uVar8 & 1) != 0) break;
    if (unaff_x23 != (long *)0x0) {
      lVar6 = *unaff_x23;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091a14e0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_088b99fc;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03d8f370(unaff_x23,*(long *)PTR_DAT_091a14e0,0);
LAB_088b99fc:
      (*(code *)*puVar4)(unaff_x23,puVar4[1]);
    }
    do {
      lVar6 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_088b95a0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03d8f370();
LAB_088b95a0:
      uVar8 = (*(code *)*puVar4)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) {
          return;
        }
        lVar6 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_088b9ac4;
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_088b9aac;
      }
      lVar6 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09292640) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_088b9604;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03d8f370();
LAB_088b9604:
      unaff_x21 = (long *)(*(code *)*puVar4)();
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar6 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 8) * 0x10 + 0x138);
            goto LAB_088b9668;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03d8f370(unaff_x21,*unaff_x28,8);
LAB_088b9668:
      uVar8 = (*(code *)*puVar4)(unaff_x21,puVar4[1]);
    } while ((uVar8 & 1) == 0);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar6 = *unaff_x21;
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_088b96d0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(unaff_x21,*unaff_x28,2);
LAB_088b96d0:
    uVar5 = (*(code *)*puVar4)(unaff_x21,puVar4[1]);
    if (*(int *)(*(long *)PTR_DAT_09292658 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar2 = FUN_0583d4ec(*(undefined8 *)PTR_DAT_09292650);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6dddc(lVar7,uVar5,uVar2,*(undefined8 *)PTR_DAT_092925f8);
    lVar6 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 7) * 0x10 + 0x138);
          goto LAB_088b9778;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(unaff_x21,*unaff_x28,7);
LAB_088b9778:
    plVar3 = (long *)(*(code *)*puVar4)(unaff_x21,puVar4[1]);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09292620) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_088b97e0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(plVar3,*(long *)PTR_DAT_09292620,0);
LAB_088b97e0:
    unaff_x23 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  } while( true );
  lVar6 = *unaff_x23;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_088b989c;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03d8f370(unaff_x23,*unaff_x26,0);
LAB_088b989c:
  unaff_x22 = (*(code *)*puVar4)(unaff_x23,puVar4[1]);
  param_1 = *unaff_x21;
  unaff_x24 = *(long *)(unaff_x19 + 0x20);
  param_3 = *unaff_x28;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 != 0) goto code_r0x088b98c0;
  goto LAB_088b98e0;
code_r0x088b98c0:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  goto code_r0x088b98c8;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
LAB_088b9aac:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_088b9ae8;
    }
  }
LAB_088b9ac4:
  puVar4 = (undefined8 *)FUN_03d8f370();
LAB_088b9ae8:
  (*(code *)*puVar4)();
  return;
}


