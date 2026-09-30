/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 053588c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(void)

{
  void *__ptr;
  undefined8 uVar1;
  long *unaff_x20;
  
  __ptr = (void *)FUN_05352050();
  uVar1 = FUN_05358908();
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x20);
  }
  free(__ptr);
  return uVar1;
}


