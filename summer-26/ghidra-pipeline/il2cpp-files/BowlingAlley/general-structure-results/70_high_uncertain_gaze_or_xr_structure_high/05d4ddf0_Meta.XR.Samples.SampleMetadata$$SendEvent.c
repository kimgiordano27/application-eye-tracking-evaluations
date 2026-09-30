/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 05d4ddf0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long unaff_x21;
  
  *(undefined4 *)(unaff_x21 + 0x3c) = param_1;
  *(undefined4 *)(unaff_x21 + 0x40) = param_2;
  *(undefined4 *)(unaff_x21 + 0x44) = param_3;
  return;
}


