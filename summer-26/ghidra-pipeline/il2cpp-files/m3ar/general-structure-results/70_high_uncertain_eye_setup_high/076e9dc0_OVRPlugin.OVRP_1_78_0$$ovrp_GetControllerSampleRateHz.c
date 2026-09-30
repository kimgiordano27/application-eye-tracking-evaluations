/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetControllerSampleRateHz
ENTRY_POINT: 076e9dc0
PROGRAM: m3ar-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetControllerSampleRateHz(long param_1)

{
  long unaff_x19;
  long *unaff_x21;
  
  if (param_1 != 0) {
    thunk_FUN_0854a9bc(*(undefined4 *)(unaff_x19 + 0xcc),*(undefined4 *)(unaff_x19 + 0xd0),
                       *(undefined4 *)(unaff_x19 + 0xd4),*(undefined4 *)(unaff_x19 + 0xd8),param_1,
                       *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10),0);
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      FUN_076a16c0(*(long *)(unaff_x19 + 0x80),0);
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        FUN_076a16c0(*(long *)(unaff_x19 + 0x88),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


