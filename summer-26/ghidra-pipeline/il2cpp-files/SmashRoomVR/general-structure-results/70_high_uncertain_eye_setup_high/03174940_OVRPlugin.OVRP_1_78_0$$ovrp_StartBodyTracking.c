/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartBodyTracking
ENTRY_POINT: 03174940
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking(long param_1)

{
  uint unaff_w20;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (unaff_w20 < *(uint *)(param_1 + 0x18)) {
    FUN_031371a0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


