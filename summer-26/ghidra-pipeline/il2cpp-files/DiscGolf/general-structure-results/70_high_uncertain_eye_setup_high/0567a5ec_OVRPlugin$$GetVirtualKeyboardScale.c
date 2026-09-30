/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardScale
ENTRY_POINT: 0567a5ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin__GetVirtualKeyboardScale(long param_1)

{
  long unaff_x20;
  uint unaff_w22;
  uint unaff_w23;
  
  if (param_1 != 0) {
    FUN_0567008c(param_1,unaff_w22 & 1,unaff_w23 & 1);
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      OVRPlugin__get_tiledMultiResLevel();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


