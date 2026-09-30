/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionEnd
ENTRY_POINT: 05b8fbdc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionEnd(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x22;
  
                    /* catch() { ... } // from try @ 05b8faa0 with catch @ 05b8fbdc */
  FUN_0570f240();
                    /* catch() { ... } // from try @ 05b8fa78 with catch @ 05b8fbe0 */
                    /* catch() { ... } // from try @ 05b8f960 with catch @ 05b8fbe4 */
                    /* catch() { ... } // from try @ 05b8f8e0 with catch @ 05b8fbe8 */
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x20;
  puVar1 = PTR_DAT_07115a50;
                    /* catch() { ... } // from try @ 05b8fb08 with catch @ 05b8fbec */
  if (unaff_x19 != 0) {
                    /* catch() { ... } // from try @ 05b8fb18 with catch @ 05b8fbf0 */
                    /* catch() { ... } // from try @ 05b8fbc8 with catch @ 05b8fbf4 */
                    /* catch() { ... } // from try @ 05b8fbc4 with catch @ 05b8fbf8 */
    *(undefined8 *)(unaff_x19 + 0x58) = unaff_x20;
                    /* catch() { ... } // from try @ 05b8fbc0 with catch @ 05b8fbfc */
                    /* catch() { ... } // from try @ 05b8fbbc with catch @ 05b8fc00 */
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 05b8fbb8 with catch @ 05b8fc04 */
                    /* catch() { ... } // from try @ 05b8fa2c with catch @ 05b8fc08 */
                    /* catch() { ... } // from try @ 05b8fa38 with catch @ 05b8fc0c */
    FUN_05b8e478(uVar2,0);
                    /* catch() { ... } // from try @ 05b8fa1c with catch @ 05b8fc10 */
                    /* catch() { ... } // from try @ 05b8fbb4 with catch @ 05b8fc14 */
    *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
                    /* catch() { ... } // from try @ 05b8facc with catch @ 05b8fc18 */
                    /* catch() { ... } // from try @ 05b8fbb0 with catch @ 05b8fc1c */
                    /* catch() { ... } // from try @ 05b8fb58 with catch @ 05b8fc20 */
                    /* catch() { ... } // from try @ 05b8fbac with catch @ 05b8fc28 */
    thunk_FUN_069d3450();
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05b8f9f8 with catch @ 05b8fc2c */
  FUN_03188cd8();
}


