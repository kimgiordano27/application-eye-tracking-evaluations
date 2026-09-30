/*
FUNCTION_NAME: FUN_01ec047c
ENTRY_POINT: 01ec047c
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


void FUN_01ec047c(undefined4 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0247f378 == (code *)0x0) {
                    /* try { // try from 01ec049c to 01fc04cb has its CatchHandler @ 01ec049c
                       catch() { ... } // from try @ 01ec049c with catch @ 01ec049c
                       catch() { ... } // from try @ 01ec04dc with catch @ 01ec049c
                       catch() { ... } // from try @ 01ec0520 with catch @ 01ec049c
                       catch() { ... } // from try @ 01ec056c with catch @ 01ec049c */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_ShouldShowTelemetryConsentWindow";
    uStack_38 = 0x25;
    local_28 = 4;
                    /* try { // try from 01ec04cc to 01fc04db has its CatchHandler @ 01ec0520 */
    local_30 = DAT_00657688;
    local_24 = 0;
    DAT_0247f378 = (code *)thunk_FUN_01040398(&local_50);
  }
  (*DAT_0247f378)(param_1);
  return;
}


