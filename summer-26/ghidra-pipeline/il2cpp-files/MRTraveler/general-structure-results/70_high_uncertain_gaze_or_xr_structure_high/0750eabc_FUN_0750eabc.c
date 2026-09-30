/*
FUNCTION_NAME: FUN_0750eabc
ENTRY_POINT: 0750eabc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_0750eabc(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 0750eac0 to 0760eb07 has its CatchHandler @ 0750eb10 */
  if (DAT_09421798 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
                    /* catch() { ... } // from try @ 0750e96c with catch @ 0750eb08
                       try { // try from 0750eb08 to 0760eb6f has its CatchHandler @ 0750e5c0 */
    local_40 = "ovrp_SendEvent";
    uStack_38 = 0xe;
                    /* catch() { ... } // from try @ 0750e884 with catch @ 0750eb0c */
    local_28 = 0x10;
                    /* catch() { ... } // from try @ 0750eac0 with catch @ 0750eb10 */
    local_30 = DAT_018ae560;
                    /* catch() { ... } // from try @ 0750e970 with catch @ 0750eb14 */
    local_24 = 0;
                    /* catch() { ... } // from try @ 0750e944 with catch @ 0750eb18 */
    DAT_09421798 = (code *)thunk_FUN_03cf54f0(&local_50);
                    /* catch() { ... } // from try @ 0750e980 with catch @ 0750eb1c */
  }
                    /* catch() { ... } // from try @ 0750e788 with catch @ 0750eb20 */
                    /* catch() { ... } // from try @ 0750e898 with catch @ 0750eb24 */
  uVar2 = thunk_FUN_03cf5810(param_1);
                    /* catch() { ... } // from try @ 0750e888 with catch @ 0750eb28 */
                    /* catch() { ... } // from try @ 0750e85c with catch @ 0750eb2c */
                    /* catch() { ... } // from try @ 0750eaa8 with catch @ 0750eb30
                       catch() { ... } // from try @ 0750eab8 with catch @ 0750eb30 */
  uVar3 = thunk_FUN_03cf5810(param_2);
                    /* catch() { ... } // from try @ 0750e8d0 with catch @ 0750eb34 */
                    /* catch() { ... } // from try @ 0750eaa0 with catch @ 0750eb38
                       catch() { ... } // from try @ 0750eab0 with catch @ 0750eb38 */
                    /* catch() { ... } // from try @ 0750e768 with catch @ 0750eb3c */
                    /* catch() { ... } // from try @ 0750ea8c with catch @ 0750eb40 */
                    /* catch() { ... } // from try @ 0750e9bc with catch @ 0750eb44 */
  uVar1 = (*DAT_09421798)(uVar2,uVar3);
                    /* catch() { ... } // from try @ 0750e79c with catch @ 0750eb48 */
                    /* catch() { ... } // from try @ 0750e78c with catch @ 0750eb4c */
                    /* catch() { ... } // from try @ 0750e750 with catch @ 0750eb50 */
  thunk_FUN_03cf5804(uVar2);
                    /* catch() { ... } // from try @ 0750ea90 with catch @ 0750eb54 */
                    /* catch() { ... } // from try @ 0750e7d8 with catch @ 0750eb58 */
  thunk_FUN_03cf5804(uVar3);
  return uVar1;
}


