/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 02901634
PROGRAM: vrfs-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy
               (long param_1,undefined8 param_2,long param_3)

{
  long in_x9;
  long in_x10;
  long in_x11;
  uint in_w12;
  
  if (in_w12 < 0x100) {
    return (int)*(char *)(param_3 + in_x10) << 0xc | (int)*(char *)(param_3 + param_1) << 0x12 |
           (int)*(char *)(param_3 + in_x11) | (int)*(char *)(param_3 + in_x9) << 6;
  }
  return 0xffffffff;
}


