/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 0750820c
PROGRAM: Hyper-libil2cpp.so
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
System_Span<OVRPlugin_SpaceQueryResult>__op_Implicit
          (long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34(lVar3);
  }
  lVar3 = thunk_FUN_04983e64(param_3,lVar3);
  if (lVar3 != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34(lVar3);
    }
    if (param_3 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = thunk_FUN_04983e64(param_3,lVar3);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(param_3,lVar3);
      }
    }
    uVar2 = FUN_07507a78(param_2,lVar1,
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x108));
    return uVar2;
  }
  return 0xffffffff;
}


