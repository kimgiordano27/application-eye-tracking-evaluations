/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 05db63e8
PROGRAM: BowlingAlley-libil2cpp.so
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
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  FUN_05da72e4();
  uVar1 = FUN_05da66c8();
  uVar2 = thunk_FUN_032a56a0(*unaff_x20);
  FUN_05dca2bc(uVar2,uVar1,0);
  return uVar2;
}


