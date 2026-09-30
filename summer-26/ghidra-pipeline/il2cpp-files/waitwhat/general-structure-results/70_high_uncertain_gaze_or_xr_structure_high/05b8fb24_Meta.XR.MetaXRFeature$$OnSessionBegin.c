/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 05b8fb24
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionBegin(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_07115a48;
  if ((DAT_0754e91d & 1) == 0) {
    FUN_03188a78(PTR_DAT_07112a08);
                    /* try { // try from 05b8fb58 to 05c8fb5b has its CatchHandler @ 05b8fc20 */
    FUN_03188a78(PTR_DAT_07115a50);
                    /* try { // try from 05b8fb5c to 05c8fbab has its CatchHandler @ 05b8f778 */
    FUN_03188a78(PTR_DAT_07115a58);
    FUN_03188a78(PTR_DAT_07115a48);
    DAT_0754e91d = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar4 = puVar3[1];
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
                    /* try { // try from 05b8fbac to 05c8fbaf has its CatchHandler @ 05b8fc28 */
      puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
                    /* try { // try from 05b8fbb0 to 05c8fbb3 has its CatchHandler @ 05b8fc1c */
                    /* try { // try from 05b8fbb4 to 05c8fbb7 has its CatchHandler @ 05b8fc14 */
                    /* try { // try from 05b8fbb8 to 05c8fbbb has its CatchHandler @ 05b8fc04 */
    uVar5 = *puVar3;
                    /* try { // try from 05b8fbbc to 05c8fbbf has its CatchHandler @ 05b8fc00 */
                    /* try { // try from 05b8fbc0 to 05c8fbc3 has its CatchHandler @ 05b8fbfc */
    lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07112a08);
                    /* try { // try from 05b8fbc4 to 05c8fbc7 has its CatchHandler @ 05b8fbf8 */
                    /* try { // try from 05b8fbc8 to 05c8fbcb has its CatchHandler @ 05b8fbf4 */
                    /* try { // try from 05b8fbcc to 05c8fc4f has its CatchHandler @ 05b8f778 */
                    /* catch() { ... } // from try @ 05b8fa9c with catch @ 05b8fbd8 */
    FUN_0570f240(lVar4,uVar5,*(undefined8 *)PTR_DAT_07115a58,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar4;
  }
  puVar1 = PTR_DAT_07115a50;
  if (param_1 != 0) {
    *(long *)(param_1 + 0x58) = lVar4;
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05b8e478(uVar5,0);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    thunk_FUN_069d3450(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


