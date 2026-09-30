/*
FUNCTION_NAME: MetaXRAcousticMaterialProperties$$Meta.XR.Acoustics.IMaterialDataProvider.get_name
ENTRY_POINT: 089d5e54
PROGRAM: Hyper-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void MetaXRAcousticMaterialProperties__Meta_XR_Acoustics_IMaterialDataProvider_get_name(void)

{
  long unaff_x20;
  
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    FUN_088ef30c();
    FUN_088eebec();
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    HdyRpc_RequestHspSetup__set_StreamId();
    return;
  }
  return;
}


