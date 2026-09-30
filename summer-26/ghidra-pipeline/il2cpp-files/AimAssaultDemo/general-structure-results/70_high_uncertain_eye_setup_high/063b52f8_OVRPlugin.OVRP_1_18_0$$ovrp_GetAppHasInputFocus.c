/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetAppHasInputFocus
ENTRY_POINT: 063b52f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus(undefined4 param_1)

{
  long unaff_x19;
  
                    /* try { // try from 063b52fc to 064b52ff has its CatchHandler @ 063b54d8 */
  *(undefined4 *)(unaff_x19 + 0x28) = param_1;
  if (*(long *)(unaff_x19 + 0x90) != 0) {
                    /* try { // try from 063b5308 to 064b5313 has its CatchHandler @ 063b54d4 */
    FUN_07547334(*(long *)(unaff_x19 + 0x90),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


