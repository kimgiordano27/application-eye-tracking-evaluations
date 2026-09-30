/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 05ff7008
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateDynamicResolutionVersion(void)

{
  bool in_NG;
  long unaff_x19;
  int unaff_w21;
  float unaff_s10;
  ulong unaff_d11;
  
  if (in_NG) {
    if (unaff_w21 != 0) {
      unaff_d11 = (ulong)(uint)(unaff_s10 + *(float *)(unaff_x19 + 0x68));
    }
  }
  else {
    unaff_d11 = (ulong)*(uint *)(unaff_x19 + 0x68);
  }
  FUN_05ff7460(unaff_d11);
  FUN_05ff74b4();
  return;
}


