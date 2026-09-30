/*
FUNCTION_NAME: OVRManager$$set_enableDynamicResolution
ENTRY_POINT: 073c3684
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__set_enableDynamicResolution(long param_1)

{
  float *unaff_x19;
  uint unaff_w22;
  long unaff_x23;
  float fVar1;
  float unaff_s11;
  
  if (unaff_w22 < *(uint *)(param_1 + 0x18)) {
    fVar1 = (float)FUN_0863da0c(param_1 + unaff_x23,0);
    fVar1 = unaff_s11 - fVar1;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *unaff_x19 = fVar1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


