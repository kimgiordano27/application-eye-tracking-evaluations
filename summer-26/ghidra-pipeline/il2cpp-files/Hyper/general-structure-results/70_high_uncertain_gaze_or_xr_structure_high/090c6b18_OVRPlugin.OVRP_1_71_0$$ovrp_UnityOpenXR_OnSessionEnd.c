/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 090c6b18
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(void)

{
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined8 uStack000000000000001c;
  
  *(undefined8 *)(unaff_x19 + 0xbc) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0xb4) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 200) = uStack000000000000001c;
  *(ulong *)(unaff_x19 + 0xc0) = CONCAT44(uStack0000000000000018,in_stack_00000010._4_4_);
  return;
}


