/*
FUNCTION_NAME: OVRTelemetry.TelemetryClient$$MarkerAnnotation
ENTRY_POINT: 057b0a44
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void OVRTelemetry_TelemetryClient__MarkerAnnotation(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  thunk_FUN_02f411dc();
  uVar2 = FUN_05785ac4();
                    /* try { // try from 057b0a68 to 058b0a77 has its CatchHandler @ 057b0b8c */
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  thunk_FUN_02f411dc();
  uVar2 = OVRPlugin_OVRP_1_79_0__ovrp_DestroySpaceUser();
                    /* try { // try from 057b0a80 to 058b0a87 has its CatchHandler @ 057b0b84 */
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  thunk_FUN_02f411dc();
                    /* try { // try from 057b0a90 to 058b0a9b has its CatchHandler @ 057b0b88 */
  uVar1 = FUN_05785c6c();
  *(undefined4 *)(unaff_x19 + 0x28) = uVar1;
  uVar2 = FUN_05785ce8();
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x30),uVar2);
  return;
}


