/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 051bb324
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SendEvent(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  FUN_05167e58(param_1,param_2,0);
  *(undefined8 *)((long)unaff_x20 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x20 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  unaff_x20[1] = in_stack_00000008;
  *unaff_x20 = in_stack_00000000;
  return;
}


