/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_GetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 05d52248
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_99_0__ovrp_GetTrackingPoseEnabledForInvisibleSession(long param_1)

{
  long unaff_x21;
  
  FUN_055dba78(&stack0x00000050,**(undefined8 **)(param_1 + 0x478));
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_030b6e08();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fc8594();
}


