/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoEvent$$AddMetadata
ENTRY_POINT: 060a1f08
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


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoEvent__AddMetadata(long param_1)

{
  long lVar1;
  float fVar2;
  
  if (DAT_07ed76b6 == '\0') {
    FUN_03642964(PTR_DAT_079f4dc0);
    DAT_07ed76b6 = '\x01';
  }
  fVar2 = *(float *)(param_1 + 0x6c);
  lVar1 = *(long *)(*(long *)PTR_DAT_079f4dc0 + 0xb8);
  FUN_060a1f6c(*(float *)(lVar1 + 0x18) * fVar2,*(float *)(lVar1 + 0x1c) * fVar2,
               *(float *)(lVar1 + 0x20) * fVar2,param_1);
  return;
}


