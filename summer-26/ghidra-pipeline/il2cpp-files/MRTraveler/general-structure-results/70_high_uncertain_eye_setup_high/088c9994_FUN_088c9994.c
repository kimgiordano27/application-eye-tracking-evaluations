/*
FUNCTION_NAME: FUN_088c9994
ENTRY_POINT: 088c9994
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_088c9994(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_0943e1f4 & 1) == 0) {
    FUN_03c8f898(OVRTask<OVRPlugin_Result>_TypeInfo);
    DAT_0943e1f4 = 1;
  }
  puVar1 = OVRTask<OVRPlugin_Result>_TypeInfo;
  lVar2 = *(long *)(param_1 + 0x48);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) < 1)) {
    lVar2 = *(long *)OVRTask<OVRPlugin_Result>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
  }
  return lVar2;
}


