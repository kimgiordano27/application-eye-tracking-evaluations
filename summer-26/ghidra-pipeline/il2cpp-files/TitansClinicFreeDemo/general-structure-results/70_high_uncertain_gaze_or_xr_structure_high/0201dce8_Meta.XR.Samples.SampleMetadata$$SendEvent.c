/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 0201dce8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent(void)

{
  long unaff_x20;
  long *unaff_x21;
  
  thunk_FUN_01279b34();
  *(undefined1 *)(unaff_x20 + 0xa8) = 1;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_0201dd18();
  FUN_02011b44();
  return;
}


