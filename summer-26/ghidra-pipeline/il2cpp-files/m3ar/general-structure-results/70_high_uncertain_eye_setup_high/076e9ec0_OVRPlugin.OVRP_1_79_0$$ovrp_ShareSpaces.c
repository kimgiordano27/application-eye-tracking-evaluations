/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_ShareSpaces
ENTRY_POINT: 076e9ec0
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *in_x9;
  long in_x12;
  long unaff_x19;
  
  thunk_FUN_0854a9bc(*param_1,*in_x9,param_2,*(undefined4 *)(*(long *)(in_x12 + 0xb8) + 0x10),0);
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    FUN_076a16c0(*(long *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_076a16c0(*(long *)(unaff_x19 + 0x88),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


