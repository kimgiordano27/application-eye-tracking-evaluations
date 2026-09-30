/*
FUNCTION_NAME: FUN_01eb4b4c
ENTRY_POINT: 01eb4b4c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_01eb4b4c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 01eb4b58 to 01fb4b5b has its CatchHandler @ 01eb4bc8 */
                    /* try { // try from 01eb4b64 to 01fb4b6b has its CatchHandler @ 01eb4bc4 */
  if (DAT_0247e910 == (code *)0x0) {
                    /* try { // try from 01eb4b6c to 01fb4b77 has its CatchHandler @ 01eb479c */
                    /* try { // try from 01eb4b78 to 01fb4b7f has its CatchHandler @ 01eb4cc0 */
                    /* try { // try from 01eb4b80 to 01fb4b8f has its CatchHandler @ 01eb479c */
                    /* try { // try from 01eb4b90 to 01fb4b9f has its CatchHandler @ 01eb4c54 */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_SendEvent";
    uStack_38 = 0xe;
    local_28 = 0x10;
                    /* try { // try from 01eb4ba0 to 01fb4bb3 has its CatchHandler @ 01eb479c */
    local_30 = DAT_00657688;
    local_24 = 0;
    DAT_0247e910 = (code *)thunk_FUN_01040398(&local_50);
  }
                    /* try { // try from 01eb4bb4 to 01fb4bc3 has its CatchHandler @ 01eb4bd8 */
  uVar2 = thunk_FUN_010406b8(param_1);
  uVar3 = thunk_FUN_010406b8(param_2);
                    /* catch() { ... } // from try @ 01eb4b64 with catch @ 01eb4bc4 */
                    /* catch() { ... } // from try @ 01eb4b58 with catch @ 01eb4bc8 */
                    /* catch() { ... } // from try @ 01eb4a78 with catch @ 01eb4bd4 */
  uVar1 = (*DAT_0247e910)(uVar2,uVar3);
                    /* catch() { ... } // from try @ 01eb4b38 with catch @ 01eb4bd8
                       catch() { ... } // from try @ 01eb4bb4 with catch @ 01eb4bd8 */
                    /* try { // try from 01eb4be0 to 01fb4be3 has its CatchHandler @ 01eb4cbc */
  thunk_FUN_010406ac(uVar2);
                    /* try { // try from 01eb4be4 to 01fb4bff has its CatchHandler @ 01eb479c */
  thunk_FUN_010406ac(uVar3);
  return uVar1;
}


