/*
FUNCTION_NAME: OVRPlugin.OVRP_1_76_0$$ovrp_GetNodePoseStateAtTime
ENTRY_POINT: 076e8f8c
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_76_0__ovrp_GetNodePoseStateAtTime(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  FUN_076502cc();
  uVar1 = FUN_076e9358(*(undefined4 *)(unaff_x19 + 0x98),*(undefined4 *)(unaff_x19 + 0xa0));
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    FUN_076502cc(*(long *)(unaff_x19 + 0x60),uVar1,1,0);
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      FUN_076502cc(*(long *)(unaff_x19 + 0x68),uVar1,1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


