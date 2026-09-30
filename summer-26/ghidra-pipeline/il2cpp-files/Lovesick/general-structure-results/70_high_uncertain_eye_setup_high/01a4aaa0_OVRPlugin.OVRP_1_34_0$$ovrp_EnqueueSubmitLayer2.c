/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 01a4aaa0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2(code *param_1)

{
  undefined8 uVar1;
  undefined8 in_x9;
  undefined4 unaff_w19;
  long unaff_x20;
  
  uVar1 = 0;
  if (unaff_x20 != 0) {
    uVar1 = in_x9;
  }
  (*param_1)(uVar1,unaff_w19);
  return;
}


