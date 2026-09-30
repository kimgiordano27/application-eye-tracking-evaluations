/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_SetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 0697b18c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_99_0__ovrp_SetTrackingPoseEnabledForInvisibleSession
               (float param_1,float param_2,long param_3)

{
                    /* try { // try from 0697b18c to 06a7b30b has its CatchHandler @ 0697b18c
                       catch() { ... } // from try @ 0697b18c with catch @ 0697b18c
                       catch() { ... } // from try @ 0697b3bc with catch @ 0697b18c
                       catch() { ... } // from try @ 0697b44c with catch @ 0697b18c
                       catch() { ... } // from try @ 0697b580 with catch @ 0697b18c */
  if (param_2 < param_1) {
    param_1 = 1.0;
  }
  if (param_3 != 0) {
    *(float *)(param_3 + 0x3e0) = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


