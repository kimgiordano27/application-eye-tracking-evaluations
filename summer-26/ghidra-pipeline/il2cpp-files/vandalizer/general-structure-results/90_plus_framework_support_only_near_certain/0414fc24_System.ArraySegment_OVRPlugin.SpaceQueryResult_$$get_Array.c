/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$get_Array
ENTRY_POINT: 0414fc24
PROGRAM: vandalizer-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_ArraySegment<OVRPlugin_SpaceQueryResult>__get_Array
          (long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == param_3) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4(lVar3);
      }
      lVar3 = thunk_FUN_0322f04c(param_2,lVar3);
      if (lVar3 != 0) {
        lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0322bef4(lVar3);
        }
        lVar3 = thunk_FUN_0322f04c(param_3,lVar3);
        if (lVar3 != 0) {
          lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0322bef4(lVar3);
          }
          if (*(long *)(*param_2 + 0x40) == *(long *)(lVar3 + 0x40)) {
            puVar2 = (undefined8 *)thunk_FUN_0322f29c(param_2);
            uVar1 = *puVar2;
            lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0322bef4(lVar3);
            }
            param_2 = param_3;
            if (*(long *)(*param_3 + 0x40) == *(long *)(lVar3 + 0x40)) {
              puVar2 = (undefined8 *)thunk_FUN_0322f29c();
                    /* WARNING: Could not recover jumptable at 0x0414fd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar1 = (**(code **)(*param_1 + 0x1b8))
                                (param_1,uVar1,*puVar2,*(undefined8 *)(*param_1 + 0x1c0));
              return uVar1;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_031f2730(param_2);
        }
      }
      FUN_05e223a8(2,0);
      uVar1 = 0;
    }
  }
  return uVar1;
}


