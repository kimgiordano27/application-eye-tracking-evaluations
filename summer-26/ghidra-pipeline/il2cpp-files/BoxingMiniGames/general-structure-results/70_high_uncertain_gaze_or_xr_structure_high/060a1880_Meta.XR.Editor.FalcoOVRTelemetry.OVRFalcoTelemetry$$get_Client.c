/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoTelemetry$$get_Client
ENTRY_POINT: 060a1880
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoTelemetry__get_Client
               (float param_1,float param_2,float param_3)

{
  long unaff_x19;
  float fVar1;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  fVar1 = *(float *)(unaff_x19 + 0x70);
  *(float *)(unaff_x19 + 0xcc) = unaff_s11 + unaff_s8 * param_1 * fVar1;
  *(float *)(unaff_x19 + 0xd0) = unaff_s9 + unaff_s8 * param_2 * fVar1;
  *(float *)(unaff_x19 + 0xd4) = unaff_s10 + unaff_s8 * param_3 * fVar1;
  return;
}


