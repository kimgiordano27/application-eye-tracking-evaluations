/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoEvent$$AddMetadata
ENTRY_POINT: 060a2028
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoEvent__AddMetadata
               (undefined4 param_1,float param_2,float param_3)

{
  long unaff_x19;
  undefined2 unaff_w21;
  float unaff_s8;
  float unaff_s10;
  
  *(undefined4 *)(unaff_x19 + 0xec) = 0;
  *(undefined2 *)(unaff_x19 + 0x110) = unaff_w21;
  *(float *)(unaff_x19 + 0xcc) = unaff_s10 + param_2;
  *(undefined4 *)(unaff_x19 + 0xd0) = param_1;
  *(float *)(unaff_x19 + 0xd4) = unaff_s8 + param_3;
  return;
}


