/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_SetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 02c597e4
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_99_0__ovrp_SetTrackingPoseEnabledForInvisibleSession(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  uVar1 = thunk_FUN_01862198();
  uVar2 = (**(code **)(unaff_x21 + 0x1d8))();
  thunk_FUN_0186218c(uVar1);
  return uVar2;
}


