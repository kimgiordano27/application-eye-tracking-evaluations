/*
FUNCTION_NAME: FUN_075c3bec
ENTRY_POINT: 075c3bec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_075c3bec(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
  if ((DAT_0826e844 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_53_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_50_0_TypeInfo);
    DAT_0826e844 = 1;
  }
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
    FUN_075a105c(lVar2,0);
  }
  return lVar2;
}


