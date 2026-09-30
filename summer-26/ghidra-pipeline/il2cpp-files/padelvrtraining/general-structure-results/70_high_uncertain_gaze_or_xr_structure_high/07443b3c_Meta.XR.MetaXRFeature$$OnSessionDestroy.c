/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionDestroy
ENTRY_POINT: 07443b3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MetaXRFeature__OnSessionDestroy
               (float param_1,float param_2,float param_3,float param_4)

{
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  
  FUN_08a5d494(unaff_s8 + param_1 * param_4,unaff_s9 + param_2 * param_4,
               unaff_s10 + param_3 * param_4);
  FUN_074437b0();
  return unaff_s11 < unaff_s13;
}


