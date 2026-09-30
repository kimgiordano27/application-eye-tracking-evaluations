/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 031f1afc
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


undefined8 Meta_XR_MetaXRFeature__OnSessionBegin(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_030821ec(*puVar2,0,0);
  if ((uVar1 & 1) != 0) {
    FUN_031f1b2c(puVar2,6);
  }
  return *puVar2;
}


