/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_RequestBodyTrackingFidelity
ENTRY_POINT: 06b02eb4
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_92_0__ovrp_RequestBodyTrackingFidelity(void)

{
  void *__ptr;
  undefined8 uVar1;
  
  FUN_033b9870();
  __ptr = (void *)FUN_06afc048();
  uVar1 = FUN_06b02efc();
  if (*(int *)(DAT_083ce7b0 + 0xe0) == 0) {
    FUN_033b9870(DAT_083ce7b0);
  }
  free(__ptr);
  return uVar1;
}


