/*
FUNCTION_NAME: OVRManager$$set_enableDynamicResolution
ENTRY_POINT: 063678c4
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


void OVRManager__set_enableDynamicResolution(long param_1)

{
  int *in_x10;
  long unaff_x21;
  
  (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0381d6e4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7ac();
}


