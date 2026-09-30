/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 03395e0c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int in_w8;
  
  if (in_w8 == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar1 = FUN_032e935c();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_03395e54();
  return uVar2;
}


