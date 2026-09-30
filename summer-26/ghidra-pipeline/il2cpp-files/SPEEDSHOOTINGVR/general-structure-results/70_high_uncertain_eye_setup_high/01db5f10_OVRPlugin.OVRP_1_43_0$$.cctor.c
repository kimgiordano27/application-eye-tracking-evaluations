/*
FUNCTION_NAME: OVRPlugin.OVRP_1_43_0$$.cctor
ENTRY_POINT: 01db5f10
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_43_0___cctor(void)

{
  long unaff_x19;
  
  FUN_017d3030();
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0x18) + 0x18) != 1) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_01da75f8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


