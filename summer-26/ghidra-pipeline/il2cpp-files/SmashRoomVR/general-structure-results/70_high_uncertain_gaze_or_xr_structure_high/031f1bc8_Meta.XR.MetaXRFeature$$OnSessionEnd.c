/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionEnd
ENTRY_POINT: 031f1bc8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionEnd(code *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)thunk_FUN_01afad98();
    *(code **)(unaff_x20 + 0x378) = param_1;
  }
  (*param_1)(param_2,param_3);
  return;
}


