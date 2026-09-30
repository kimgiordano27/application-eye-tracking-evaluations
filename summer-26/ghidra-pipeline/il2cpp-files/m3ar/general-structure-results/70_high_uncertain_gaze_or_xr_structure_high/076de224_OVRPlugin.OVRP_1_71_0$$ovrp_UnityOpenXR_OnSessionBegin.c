/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 076de224
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = param_1;
  uVar2 = FUN_076de3d0(param_2,&stack0x00000020);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_076de5c8();
  }
                    /* catch() { ... } // from try @ 076de20c with catch @ 076de26c */
                    /* catch() { ... } // from try @ 076de05c with catch @ 076de270 */
                    /* try { // try from 076de274 to 077de277 has its CatchHandler @ 076de280 */
                    /* try { // try from 076de278 to 077de283 has its CatchHandler @ 076ddd2c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 076de274 with catch @ 076de280
                        */
                    /* try { // try from 076de284 to 077de533 has its CatchHandler @ 076de284
                       catch() { ... } // from try @ 076de284 with catch @ 076de284
                       catch() { ... } // from try @ 076de86c with catch @ 076de284
                       catch() { ... } // from try @ 076de8d8 with catch @ 076de284
                       catch() { ... } // from try @ 076dea18 with catch @ 076de284
                       catch() { ... } // from try @ 076dea64 with catch @ 076de284
                       catch() { ... } // from try @ 076deaac with catch @ 076de284
                       catch() { ... } // from try @ 076dec6c with catch @ 076de284
                       catch() { ... } // from try @ 076dec90 with catch @ 076de284 */
  return uVar1 & 1;
}


