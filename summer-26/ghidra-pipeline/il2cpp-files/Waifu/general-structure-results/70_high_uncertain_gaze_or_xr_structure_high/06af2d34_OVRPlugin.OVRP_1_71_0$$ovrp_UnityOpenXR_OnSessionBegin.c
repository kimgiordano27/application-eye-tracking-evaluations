/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 06af2d34
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong in_x9;
  ulong in_x10;
  
  while( true ) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = in_x10 | in_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') break;
    in_x10 = *param_1;
  }
  return;
}


