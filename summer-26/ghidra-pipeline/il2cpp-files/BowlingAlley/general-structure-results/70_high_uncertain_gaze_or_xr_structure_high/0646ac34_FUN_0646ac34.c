/*
FUNCTION_NAME: FUN_0646ac34
ENTRY_POINT: 0646ac34
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_0646ac34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0646ac38 to 0656ac4f has its CatchHandler @ 0646ae4c */
  thunk_FUN_032e1da0(PTR_DAT_07282510);
  uVar1 = thunk_FUN_032a56a0();
  FUN_05925db0(uVar1,0);
                    /* try { // try from 0646ac5c to 0656ac5f has its CatchHandler @ 0646ad74 */
  uVar2 = thunk_FUN_032e1da0(OVRTelemetryConstants_OVRManager_TypeInfo);
                    /* try { // try from 0646ac60 to 0656ac77 has its CatchHandler @ 0646ad64 */
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar1,uVar2);
}


