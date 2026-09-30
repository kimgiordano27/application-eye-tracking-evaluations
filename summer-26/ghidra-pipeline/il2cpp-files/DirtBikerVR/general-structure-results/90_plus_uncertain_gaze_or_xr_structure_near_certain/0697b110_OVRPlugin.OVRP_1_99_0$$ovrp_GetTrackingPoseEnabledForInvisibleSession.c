/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_GetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 0697b110
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_99_0__ovrp_GetTrackingPoseEnabledForInvisibleSession
               (float param_1,long param_2)

{
  float fVar1;
  
  if (param_2 != 0) {
    fVar1 = 0.0;
    if (0.0 <= param_1) {
      fVar1 = param_1;
    }
    *(float *)(param_2 + 0x88) = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


