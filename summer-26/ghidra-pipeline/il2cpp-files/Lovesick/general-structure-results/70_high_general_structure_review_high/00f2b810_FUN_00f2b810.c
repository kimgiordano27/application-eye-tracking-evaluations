/*
FUNCTION_NAME: FUN_00f2b810
ENTRY_POINT: 00f2b810
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void FUN_00f2b810(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  puVar1 = PTR_DAT_033ea8a0;
  if ((DAT_037755c0 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_Core_DOTweenComponent_<WaitForPosition>d__21_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_Meta_WitAi_Requests_VRequest_Request<bool>__);
    thunk_FUN_00d48444(StringLiteral_2756);
    DAT_037755c0 = 1;
  }
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,6);
  lVar4 = 0;
  if (param_2 != (long *)0x0) {
    lVar4 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_00f2ba2c:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  puVar1 = 
  Method_DG_Tweening_Core_DOTweenComponent_<WaitForPosition>d__21_System_Collections_IEnumerator_Reset__
  ;
  uVar7 = *(uint *)(plVar3 + 3);
  if (uVar7 != 0) {
    plVar3[4] = lVar4;
    lVar4 = *(long *)puVar1;
    if (lVar4 != 0) {
      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) goto LAB_00f2ba2c;
      uVar7 = *(uint *)(plVar3 + 3);
    }
    if (1 < uVar7) {
      plVar3[5] = *(long *)puVar1;
      lVar4 = 0;
      if (param_3 != (long *)0x0) {
        lVar4 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_00f2ba2c;
      }
      puVar1 = StringLiteral_2756;
      uVar7 = *(uint *)(plVar3 + 3);
      if (2 < uVar7) {
        plVar3[6] = lVar4;
        lVar4 = *(long *)puVar1;
        if (lVar4 != 0) {
          lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar4 == 0) goto LAB_00f2ba2c;
          uVar7 = *(uint *)(plVar3 + 3);
        }
        if (3 < uVar7) {
          plVar3[7] = *(long *)puVar1;
          if (param_4 != 0) {
            lVar4 = thunk_FUN_00d6225c(param_4,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar4 == 0) goto LAB_00f2ba2c;
            uVar7 = *(uint *)(plVar3 + 3);
          }
          puVar1 = Method_Meta_WitAi_Requests_VRequest_Request<bool>__;
          if (4 < uVar7) {
            plVar3[8] = param_4;
            lVar4 = *(long *)puVar1;
            if (lVar4 != 0) {
              lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
              if (lVar4 == 0) goto LAB_00f2ba2c;
              uVar7 = *(uint *)(plVar3 + 3);
            }
            puVar2 = 
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
            ;
            if (5 < uVar7) {
              plVar3[9] = *(long *)puVar1;
              uVar6 = FUN_01600844(plVar3,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar2);
              }
              FUN_017a9608(param_1,uVar6,0);
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


