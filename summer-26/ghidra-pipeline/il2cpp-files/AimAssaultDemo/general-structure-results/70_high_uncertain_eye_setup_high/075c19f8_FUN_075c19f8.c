/*
FUNCTION_NAME: FUN_075c19f8
ENTRY_POINT: 075c19f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_075c19f8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = OVRPlugin_OVRP_1_43_0_TypeInfo;
  if ((DAT_0826e7a8 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_43_0_TypeInfo);
    DAT_0826e7a8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_0826f0c8 == '\0') {
    FUN_0373b518(OVRPlugin_OVRP_1_43_0_TypeInfo);
    DAT_0826f0c8 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *(long *)puVar1;
    }
    lVar3 = **(long **)(lVar2 + 0xb8);
  }
  return lVar3;
}


