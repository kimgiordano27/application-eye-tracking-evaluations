/*
FUNCTION_NAME: FUN_0359e254
ENTRY_POINT: 0359e254
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_0359e254(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_03cbdf88;
  if ((DAT_0412e0e0 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412e0e0 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xf0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_036cee6c(uVar4,0,0);
  puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0xf0);
    if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar3 != 0) {
      uVar4 = FUN_036996d8(lVar3,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  return 0;
}


