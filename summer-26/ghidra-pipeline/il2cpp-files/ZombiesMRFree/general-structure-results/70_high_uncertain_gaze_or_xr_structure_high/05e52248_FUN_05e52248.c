/*
FUNCTION_NAME: FUN_05e52248
ENTRY_POINT: 05e52248
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_05e52248(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 05e52250 to 05f52257 has its CatchHandler @ 05e5226c */
                    /* try { // try from 05e52258 to 05f52263 has its CatchHandler @ 05e51fc0 */
  if (DAT_0739c190 == (code *)0x0) {
                    /* try { // try from 05e52264 to 05f5226b has its CatchHandler @ 05e5226c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05e52250 with catch @ 05e5226c
                       catch(type#2 @ 00000000) { ... } // from try @ 05e52264 with catch @ 05e5226c
                        */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_GetTrackingPoseEnabledForInvisibleSession";
    uStack_38 = 0x2e;
    local_28 = 8;
    local_30 = DAT_0136ac58;
    local_24 = 0;
    DAT_0739c190 = (code *)thunk_FUN_03010ac8(&local_50);
  }
  (*DAT_0739c190)(param_1);
                    /* try { // try from 05e522b4 to 05f52443 has its CatchHandler @ 05e522b4
                       catch() { ... } // from try @ 05e522b4 with catch @ 05e522b4
                       catch() { ... } // from try @ 05e52734 with catch @ 05e522b4
                       catch() { ... } // from try @ 05e527fc with catch @ 05e522b4
                       catch() { ... } // from try @ 05e52868 with catch @ 05e522b4
                       catch() { ... } // from try @ 05e528a8 with catch @ 05e522b4 */
  return;
}


