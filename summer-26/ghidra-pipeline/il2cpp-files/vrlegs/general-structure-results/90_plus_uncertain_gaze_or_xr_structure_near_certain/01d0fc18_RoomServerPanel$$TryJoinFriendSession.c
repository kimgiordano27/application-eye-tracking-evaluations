/*
FUNCTION_NAME: RoomServerPanel$$TryJoinFriendSession
ENTRY_POINT: 01d0fc18
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void RoomServerPanel__TryJoinFriendSession(undefined8 param_1)

{
  long unaff_x19;
  
  OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


