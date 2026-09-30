/*
FUNCTION_NAME: FUN_034d3ae4
ENTRY_POINT: 034d3ae4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


uint FUN_034d3ae4(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_04832d43 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Threading_ExecutionContext_GetObjectData__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    DAT_04832d43 = 1;
  }
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
LAB_034d3b94:
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = FUN_034d1098(param_1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (0 < *(int *)(lVar3 + 0x10)) {
      uVar1 = FUN_03409f80(lVar3,*(int *)(lVar3 + 0x10) + -1,0);
      if (*(int *)(*(long *)Method_System_Threading_ExecutionContext_GetObjectData__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = System_Decimal__op_Equality(uVar1,0);
      if ((uVar4 & 1) != 0) goto LAB_034d3b94;
    }
    if (DAT_048317e1 == '\0') {
      thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
      DAT_048317e1 = '\x01';
    }
    uVar5 = FUN_0340ce04(lVar3,0);
    uVar2 = FUN_034d3ca4(uVar5,*(undefined4 *)(lVar3 + 0x10));
  }
  return uVar2 & 1;
}


