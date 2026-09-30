/*
FUNCTION_NAME: FUN_069cef68
ENTRY_POINT: 069cef68
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_069cef68(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__;
  if ((DAT_0755c5f0 & 1) == 0) {
    FUN_03188a78(Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
    DAT_0755c5f0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (DAT_0755d048 == '\0') {
    FUN_03188a78(Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
    DAT_0755d048 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *(long *)puVar1;
  }
  plVar4 = *(long **)(lVar2 + 0xb8);
  lVar3 = plVar4[1];
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      plVar4 = *(long **)(*(long *)puVar1 + 0xb8);
    }
    lVar3 = *plVar4;
  }
  return lVar3;
}


