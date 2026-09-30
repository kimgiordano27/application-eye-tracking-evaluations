/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 06045974
PROGRAM: vandalizer-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(void)

{
  void *__ptr;
  undefined8 uVar1;
  int in_w8;
  long *unaff_x20;
  
  if (in_w8 == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  __ptr = (void *)FUN_0603eab0();
  uVar1 = FUN_060459c0();
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x20);
  }
  free(__ptr);
  return uVar1;
}


