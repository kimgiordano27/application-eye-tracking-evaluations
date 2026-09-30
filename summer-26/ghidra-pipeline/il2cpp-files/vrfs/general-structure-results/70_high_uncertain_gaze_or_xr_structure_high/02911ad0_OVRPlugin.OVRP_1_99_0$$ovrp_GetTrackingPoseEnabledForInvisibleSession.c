/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_GetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 02911ad0
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_99_0__ovrp_GetTrackingPoseEnabledForInvisibleSession(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(param_1 + 0x138))(&stack0x00000008);
  unaff_x19[6] = in_stack_00000038;
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  unaff_x19[3] = in_stack_00000020;
  unaff_x19[2] = in_stack_00000018;
  unaff_x19[5] = in_stack_00000030;
  unaff_x19[4] = in_stack_00000028;
  return;
}


