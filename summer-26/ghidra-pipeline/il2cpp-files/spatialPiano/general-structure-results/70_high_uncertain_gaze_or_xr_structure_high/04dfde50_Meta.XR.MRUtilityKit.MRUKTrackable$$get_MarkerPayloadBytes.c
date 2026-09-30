/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKTrackable$$get_MarkerPayloadBytes
ENTRY_POINT: 04dfde50
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKTrackable__get_MarkerPayloadBytes(void)

{
  bool in_ZR;
  long unaff_x19;
  
  if (in_ZR) {
    *(code **)(unaff_x19 + 0x18) = FUN_02b9630c;
  }
  else {
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
  }
  *(code **)(unaff_x19 + 0x38) = FUN_02b962ac;
  return;
}


