/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 06d9fdd0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_TweakManagerForAddon__get_TelemetryAnnotation(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_08e8fbb8;
  if ((DAT_09419ac9 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e8fbb8);
    DAT_09419ac9 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}


