/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartFaceTracking
ENTRY_POINT: 076e928c
PROGRAM: m3ar-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartFaceTracking(void)

{
  long unaff_x19;
  
  FUN_0854cb58();
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    FUN_0854cb58(*(long *)(unaff_x19 + 0x58),0,0);
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      FUN_08584234(*(long *)(unaff_x19 + 0x60),0,0);
      if (*(long *)(unaff_x19 + 0x68) != 0) {
        FUN_08584234(*(long *)(unaff_x19 + 0x68),0,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


