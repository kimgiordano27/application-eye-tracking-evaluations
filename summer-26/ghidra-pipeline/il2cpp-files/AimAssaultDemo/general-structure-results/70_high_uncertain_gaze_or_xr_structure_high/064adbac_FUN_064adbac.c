/*
FUNCTION_NAME: FUN_064adbac
ENTRY_POINT: 064adbac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_064adbac(undefined4 param_1,undefined4 param_2)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* catch() { ... } // from try @ 064adb90 with catch @ 064adbac */
                    /* catch() { ... } // from try @ 064ad868 with catch @ 064adbb0 */
                    /* catch() { ... } // from try @ 064ad848 with catch @ 064adbb4
                       catch() { ... } // from try @ 064ad8e8 with catch @ 064adbb4 */
                    /* catch() { ... } // from try @ 064ad8c4 with catch @ 064adbb8
                       catch() { ... } // from try @ 064ad910 with catch @ 064adbb8 */
                    /* catch() { ... } // from try @ 064adb8c with catch @ 064adbbc */
                    /* catch() { ... } // from try @ 064ad7f8 with catch @ 064adbc0 */
                    /* catch() { ... } // from try @ 064ad808 with catch @ 064adbc4 */
                    /* catch() { ... } // from try @ 064ad7e8 with catch @ 064adbc8 */
  if (DAT_0825f920 == (code *)0x0) {
                    /* catch() { ... } // from try @ 064ad7c8 with catch @ 064adbcc */
                    /* catch() { ... } // from try @ 064ad95c with catch @ 064adbd0 */
                    /* try { // try from 064adbf0 to 065adbf3 has its CatchHandler @ 064adc1c */
                    /* try { // try from 064adbf4 to 065adc2b has its CatchHandler @ 064ad608 */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_UnityOpenXR_OnSessionStateChange";
    uStack_38 = 0x25;
    local_28 = 8;
    local_30 = DAT_0158abc0;
    local_24 = 0;
    DAT_0825f920 = (code *)thunk_FUN_03778b88(&local_50);
  }
                    /* catch() { ... } // from try @ 064adbf0 with catch @ 064adc1c */
  (*DAT_0825f920)(param_1,param_2);
                    /* try { // try from 064adc2c to 065adc33 has its CatchHandler @ 064adc48 */
  return;
}


