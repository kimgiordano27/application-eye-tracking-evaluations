/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_GetSystemHmd3DofModeEnabled
ENTRY_POINT: 051e8618
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_45_0__ovrp_GetSystemHmd3DofModeEnabled(void)

{
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_051e8714(unaff_x19);
    unaff_x19 = FUN_051e8640();
    if (unaff_x19 == 0) break;
    in_w8 = *(int *)(*unaff_x20 + 0xe0);
  }
  return;
}


