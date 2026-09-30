/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 05d49640
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = thunk_FUN_0301080c(*unaff_x20);
  FUN_05b32c00(uVar1,0);
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar1;
  thunk_FUN_03048534(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  return;
}


