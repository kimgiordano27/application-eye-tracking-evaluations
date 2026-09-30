/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$UpdateTextureCopyRequest
ENTRY_POINT: 04dc3450
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__UpdateTextureCopyRequest(undefined8 param_1)

{
  undefined4 uVar1;
  uint in_w9;
  undefined8 *in_x10;
  code *pcVar2;
  
  pcVar2 = (code *)*in_x10;
  if ((in_w9 & 1) == 0) {
    FUN_02f41e9c(param_1);
  }
  uVar1 = (*pcVar2)();
  FUN_050d2bd4(&stack0x0000000c,uVar1,0);
  return;
}


