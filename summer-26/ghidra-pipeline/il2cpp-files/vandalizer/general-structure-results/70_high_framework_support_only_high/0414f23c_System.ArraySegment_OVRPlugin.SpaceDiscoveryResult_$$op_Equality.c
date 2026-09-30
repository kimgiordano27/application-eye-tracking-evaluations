/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$op_Equality
ENTRY_POINT: 0414f23c
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
System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__op_Equality
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  if (param_3 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_0322bef4(lVar2);
    }
    lVar2 = thunk_FUN_0322f04c();
    if (lVar2 != 0) {
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
        if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
          thunk_FUN_0322f29c();
          lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0322bef4(lVar2);
          }
          if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
            thunk_FUN_0322f29c();
                    /* WARNING: Could not recover jumptable at 0x0414f338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
            return uVar1;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_031f2730();
      }
    }
    FUN_05e223a8(2,0);
    param_1 = 0;
  }
  return param_1;
}


