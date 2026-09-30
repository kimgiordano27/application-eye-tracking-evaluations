/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 0414fc3c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_ArraySegment<OVRPlugin_SpaceQueryResult>__GetEnumerator
          (long *param_1,long param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  if ((param_2 != 0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_0322bef4(lVar2);
    }
    lVar2 = thunk_FUN_0322f04c();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4(lVar2);
      }
      lVar2 = thunk_FUN_0322f04c(param_3,lVar2);
      if (lVar2 != 0) {
        lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4(lVar2);
        }
        if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
          puVar1 = (undefined8 *)thunk_FUN_0322f29c();
          uVar3 = *puVar1;
          lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0322bef4(lVar2);
          }
          if (*(long *)(*param_3 + 0x40) == *(long *)(lVar2 + 0x40)) {
            puVar1 = (undefined8 *)thunk_FUN_0322f29c(param_3);
                    /* WARNING: Could not recover jumptable at 0x0414fd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (**(code **)(*param_1 + 0x1b8))
                              (param_1,uVar3,*puVar1,*(undefined8 *)(*param_1 + 0x1c0));
            return uVar3;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_031f2730();
      }
    }
    FUN_05e223a8(2,0);
  }
  return 0;
}


