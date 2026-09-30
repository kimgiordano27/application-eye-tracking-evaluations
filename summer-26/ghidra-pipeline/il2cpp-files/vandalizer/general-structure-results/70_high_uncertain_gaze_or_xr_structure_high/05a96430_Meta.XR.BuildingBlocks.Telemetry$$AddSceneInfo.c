/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 05a96430
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo(void)

{
  uint in_w9;
  uint in_w10;
  long in_x13;
  long unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(in_x13 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(in_x13 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  return in_w10 < in_w9;
}


