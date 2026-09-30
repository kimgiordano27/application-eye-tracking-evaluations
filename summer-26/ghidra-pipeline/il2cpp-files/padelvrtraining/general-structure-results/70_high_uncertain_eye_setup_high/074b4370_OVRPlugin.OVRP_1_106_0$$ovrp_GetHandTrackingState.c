/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetHandTrackingState
ENTRY_POINT: 074b4370
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetHandTrackingState(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_09223d10;
  if ((DAT_09846c50 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09223d10);
    DAT_09846c50 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_074b43c0(param_1);
  FUN_074a3090();
  return;
}


