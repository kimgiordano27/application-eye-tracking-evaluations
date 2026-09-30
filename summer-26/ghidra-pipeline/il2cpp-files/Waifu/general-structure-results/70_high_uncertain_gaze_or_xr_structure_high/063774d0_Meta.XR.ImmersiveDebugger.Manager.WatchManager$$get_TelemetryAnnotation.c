/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$get_TelemetryAnnotation
ENTRY_POINT: 063774d0
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManager__get_TelemetryAnnotation(long param_1)

{
  undefined4 in_w9;
  undefined4 unaff_w19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(undefined4 *)(param_1 + 4) = in_w9;
  *(undefined4 *)(param_1 + 8) = unaff_w19;
  *(undefined4 *)(param_1 + 0xc) = unaff_s10;
  *(undefined4 *)(param_1 + 0x10) = unaff_s9;
  *(undefined4 *)(param_1 + 0x14) = unaff_s8;
  *(undefined8 *)(param_1 + 0x20) = in_stack_00000038;
  *(undefined8 *)(param_1 + 0x18) = in_stack_00000030;
  return;
}


