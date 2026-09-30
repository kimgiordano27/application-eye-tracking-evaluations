/*
FUNCTION_NAME: FUN_069fd7fc
ENTRY_POINT: 069fd7fc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_069fd7fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = Method_OVRResult<OVRAnchor_EraseResult>_get_Success__;
  if ((DAT_076e2639 & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRResult<OVRPlugin_Result>_From__);
    thunk_FUN_032e1da0(Method_OVRResult<OVRAnchor_SaveResult>_get_Success__);
    thunk_FUN_032e1da0(Method_OVRResult<OVRPlugin_Result>_FromFailure__);
    thunk_FUN_032e1da0(Method_OVRResult<OVRAnchor_EraseResult>_get_Success__);
    DAT_076e2639 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = Method_OVRResult<OVRPlugin_Result>_From__;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_032a56a0(*(undefined8 *)Method_OVRResult<OVRAnchor_SaveResult>_get_Success__);
    FUN_0501d780(lVar5,uVar6,*(undefined8 *)Method_OVRResult<OVRPlugin_Result>_FromFailure__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar4 = lVar5;
    thunk_FUN_0333a630(plVar4,lVar5);
  }
  FUN_03badc7c(lVar5,*(undefined8 *)puVar2);
  return;
}


