/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$EndInvoke
ENTRY_POINT: 0565dedc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__EndInvoke(void)

{
  long unaff_x19;
  float fVar1;
  float unaff_s8;
  float unaff_s9;
  
  fVar1 = *(float *)(unaff_x19 + 0xc4) - unaff_s8;
  if (fVar1 <= unaff_s9) {
    fVar1 = unaff_s9;
  }
  *(float *)(unaff_x19 + 0xc4) = fVar1;
  return;
}


