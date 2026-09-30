/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterActionMapsWithRuntime
ENTRY_POINT: 088b9908
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

void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterActionMapsWithRuntime
               (code *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
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
  
code_r0x088b9908:
  uVar4 = (*param_1)(param_2,param_3);
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548(uVar4,uVar4);
  }
  lVar5 = FUN_06b6dd5c(unaff_x24,uVar4,*unaff_x29);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_088bd40c(&stack0x00000008,unaff_x22);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar7 = *(long *)(lVar5 + 0x10);
  lVar9 = *unaff_x27;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  param_2 = unaff_x21;
  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
    lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
    puVar6 = (undefined8 *)(lVar7 + 0x20);
    *puVar6 = in_stack_00000008;
    *(undefined8 *)(lVar7 + 0x28) = in_stack_00000010;
    thunk_FUN_03d1023c(puVar6,0);
  }
  else {
    FUN_05c8533c(lVar5,in_stack_00000008,in_stack_00000010,
                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
  }
  do {
    lVar5 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_088b9840;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(unaff_x23,*unaff_x25,0);
LAB_088b9840:
    uVar8 = (*(code *)*puVar6)(unaff_x23,puVar6[1]);
    if ((uVar8 & 1) != 0) break;
    if (unaff_x23 != (long *)0x0) {
      lVar5 = *unaff_x23;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091a14e0) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_088b99fc;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370(unaff_x23,*(long *)PTR_DAT_091a14e0,0);
LAB_088b99fc:
      (*(code *)*puVar6)(unaff_x23,puVar6[1]);
    }
    do {
      lVar5 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_088b95a0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370();
LAB_088b95a0:
      uVar8 = (*(code *)*puVar6)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) {
          return;
        }
        lVar5 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 == 0) goto LAB_088b9ac4;
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_088b9aac;
      }
      lVar5 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09292640) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_088b9604;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370();
LAB_088b9604:
      param_2 = (long *)(*(code *)*puVar6)();
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar5 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 8) * 0x10 + 0x138);
            goto LAB_088b9668;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370(param_2,*unaff_x28,8);
LAB_088b9668:
      uVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
    } while ((uVar8 & 1) == 0);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = *param_2;
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_088b96d0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(param_2,*unaff_x28,2);
LAB_088b96d0:
    uVar4 = (*(code *)*puVar6)(param_2,puVar6[1]);
    if (*(int *)(*(long *)PTR_DAT_09292658 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar2 = FUN_0583d4ec(*(undefined8 *)PTR_DAT_09292650);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6dddc(lVar7,uVar4,uVar2,*(undefined8 *)PTR_DAT_092925f8);
    lVar5 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 7) * 0x10 + 0x138);
          goto LAB_088b9778;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(param_2,*unaff_x28,7);
LAB_088b9778:
    plVar3 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09292620) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_088b97e0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar3,*(long *)PTR_DAT_09292620,0);
LAB_088b97e0:
    unaff_x23 = (long *)(*(code *)*puVar6)(plVar3,puVar6[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  } while( true );
  lVar5 = *unaff_x23;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x26) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_088b989c;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_03d8f370(unaff_x23,*unaff_x26,0);
LAB_088b989c:
  unaff_x22 = (*(code *)*puVar6)(unaff_x23,puVar6[1]);
  lVar5 = *param_2;
  unaff_x24 = *(long *)(unaff_x19 + 0x20);
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x28) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_088b9900;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_03d8f370(param_2,*unaff_x28,2);
LAB_088b9900:
  param_1 = (code *)*puVar6;
  param_3 = puVar6[1];
  unaff_x21 = param_2;
  goto code_r0x088b9908;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
LAB_088b9aac:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_088b9ae8;
    }
  }
LAB_088b9ac4:
  puVar6 = (undefined8 *)FUN_03d8f370();
LAB_088b9ae8:
  (*(code *)*puVar6)();
  return;
}


