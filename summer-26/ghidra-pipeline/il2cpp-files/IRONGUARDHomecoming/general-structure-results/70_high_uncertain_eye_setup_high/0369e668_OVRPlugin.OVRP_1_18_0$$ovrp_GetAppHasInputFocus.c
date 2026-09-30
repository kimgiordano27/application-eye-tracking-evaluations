/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetAppHasInputFocus
ENTRY_POINT: 0369e668
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus(long param_1)

{
  bool bVar1;
  int in_w8;
  uint unaff_w19;
  
  if (in_w8 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)(param_1 + 0x14) & unaff_w19) != 0;
  }
  return bVar1;
}


