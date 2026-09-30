/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopFaceTracking
ENTRY_POINT: 076e92f0
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopFaceTracking(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  
  FUN_08584234(param_1,param_2,0);
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_0854cb58(*(long *)(unaff_x19 + 0x50),1,0);
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      FUN_0854cb58(*(long *)(unaff_x19 + 0x58),1,0);
      if (*(long *)(unaff_x19 + 0x60) != 0) {
        FUN_08584234(*(long *)(unaff_x19 + 0x60),1,0);
        if (*(long *)(unaff_x19 + 0x68) != 0) {
          FUN_08584234(*(long *)(unaff_x19 + 0x68),1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


