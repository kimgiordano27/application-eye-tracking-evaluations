/*
FUNCTION_NAME: MedleyBossPhase3.<DestroyProjectilesCoroutine>d__39$$.ctor
ENTRY_POINT: 00f2b894
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3
*/


void MedleyBossPhase3_<DestroyProjectilesCoroutine>d__39___ctor(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  
  lVar3 = 0;
  if (unaff_x23 != (long *)0x0) {
    lVar3 = (**(code **)(*unaff_x23 + 0x168))();
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*param_1 + 0x40)), lVar4 == 0)) {
LAB_00f2ba2c:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  puVar2 = 
  Method_DG_Tweening_Core_DOTweenComponent_<WaitForPosition>d__21_System_Collections_IEnumerator_Reset__
  ;
  uVar6 = *(uint *)(param_1 + 3);
  if (uVar6 != 0) {
    param_1[4] = lVar3;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*param_1 + 0x40));
      if (lVar3 == 0) goto LAB_00f2ba2c;
      uVar6 = *(uint *)(param_1 + 3);
    }
    if (1 < uVar6) {
      param_1[5] = *(long *)puVar2;
      lVar3 = 0;
      if (unaff_x22 != (long *)0x0) {
        lVar3 = (**(code **)(*unaff_x22 + 0x168))();
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*param_1 + 0x40)), lVar4 == 0))
        goto LAB_00f2ba2c;
      }
      puVar2 = StringLiteral_2756;
      uVar6 = *(uint *)(param_1 + 3);
      if (2 < uVar6) {
        param_1[6] = lVar3;
        lVar3 = *(long *)puVar2;
        if (lVar3 != 0) {
          lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*param_1 + 0x40));
          if (lVar3 == 0) goto LAB_00f2ba2c;
          uVar6 = *(uint *)(param_1 + 3);
        }
        if (3 < uVar6) {
          param_1[7] = *(long *)puVar2;
          if (unaff_x20 != 0) {
            lVar3 = thunk_FUN_00d6225c();
            if (lVar3 == 0) goto LAB_00f2ba2c;
            uVar6 = *(uint *)(param_1 + 3);
          }
          puVar2 = Method_Meta_WitAi_Requests_VRequest_Request<bool>__;
          if (4 < uVar6) {
            param_1[8] = unaff_x20;
            lVar3 = *(long *)puVar2;
            if (lVar3 != 0) {
              lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*param_1 + 0x40));
              if (lVar3 == 0) goto LAB_00f2ba2c;
              uVar6 = *(uint *)(param_1 + 3);
            }
            puVar1 = 
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
            ;
            if (5 < uVar6) {
              param_1[9] = *(long *)puVar2;
              FUN_01600844(param_1,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar1);
              }
              FUN_017a9608();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


