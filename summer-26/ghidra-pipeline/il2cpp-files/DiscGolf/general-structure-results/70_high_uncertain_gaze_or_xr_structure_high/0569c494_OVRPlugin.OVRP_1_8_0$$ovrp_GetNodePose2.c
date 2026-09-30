/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodePose2
ENTRY_POINT: 0569c494
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetNodePose2(ulong param_1,long param_2)

{
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(Oculus_Platform_Request<LaunchFriendRequestFlowResult>_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0x87f) = 1;
  }
  FUN_03776318(param_2,*(undefined8 *)(param_2 + 0x18));
  return;
}


