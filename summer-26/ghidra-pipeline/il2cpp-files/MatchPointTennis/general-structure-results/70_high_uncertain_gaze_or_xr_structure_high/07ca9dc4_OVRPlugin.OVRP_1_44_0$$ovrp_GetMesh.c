/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetMesh
ENTRY_POINT: 07ca9dc4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetMesh(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  thunk_FUN_044bb4b4();
  uVar1 = thunk_FUN_0448520c(*unaff_x20);
  OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification();
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0xa8),uVar1);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07c996bc();
  return;
}


