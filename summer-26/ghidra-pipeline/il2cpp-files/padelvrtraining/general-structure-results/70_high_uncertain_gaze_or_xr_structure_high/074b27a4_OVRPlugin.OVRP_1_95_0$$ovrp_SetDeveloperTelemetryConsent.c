/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 074b27a4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(undefined8 param_1)

{
  long unaff_x20;
  long unaff_x21;
  long *plVar1;
  
  plVar1 = *(long **)(unaff_x21 + 0xd10);
  if ((*(byte *)(unaff_x20 + 0xa50) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09223d10);
    *(undefined1 *)(unaff_x20 + 0xa50) = 1;
  }
  if (*(int *)(*plVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_074b27ec(param_1);
  FUN_074a3090();
  return;
}


