/*
FUNCTION_NAME: FUN_05796808
ENTRY_POINT: 05796808
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_05796808(undefined4 param_1,undefined4 param_2)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 05796808 to 05896817 has its CatchHandler @ 057968c8 */
                    /* try { // try from 0579681c to 05896827 has its CatchHandler @ 057968c4 */
  if (DAT_06dbfb40 == (code *)0x0) {
                    /* try { // try from 0579682c to 05896833 has its CatchHandler @ 057968c0 */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_UnityOpenXR_OnSessionStateChange";
    uStack_38 = 0x25;
                    /* try { // try from 05796850 to 05896853 has its CatchHandler @ 057968bc */
                    /* try { // try from 05796854 to 05896877 has its CatchHandler @ 057968d0 */
    local_30 = DAT_010fc3f0;
    local_28 = 8;
    local_24 = 0;
    DAT_06dbfb40 = (code *)thunk_FUN_02dd33e4(&local_50);
  }
                    /* try { // try from 05796878 to 058968eb has its CatchHandler @ 0579675c */
  (*DAT_06dbfb40)(param_1,param_2);
  return;
}


