/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 0316973c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  thunk_FUN_01ad9084();
  *(undefined1 *)(unaff_x22 + 0x95) = 1;
  thunk_FUN_01afaadc(*unaff_x20);
  FUN_02fd7524();
  FUN_030d15a4();
                    /* try { // try from 03169780 to 03269793 has its CatchHandler @ 03169b20 */
  FUN_030d1618();
  return;
}


