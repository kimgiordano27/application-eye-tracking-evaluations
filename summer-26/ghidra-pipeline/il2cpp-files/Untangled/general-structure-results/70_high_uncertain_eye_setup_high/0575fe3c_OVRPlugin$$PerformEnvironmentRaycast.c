/*
FUNCTION_NAME: OVRPlugin$$PerformEnvironmentRaycast
ENTRY_POINT: 0575fe3c
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__PerformEnvironmentRaycast(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = thunk_FUN_02ef1808(param_1);
  FUN_05645a04(lVar1,0);
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  thunk_FUN_02f411dc((undefined8 *)(lVar1 + 0x10),param_2);
  return lVar1;
}


