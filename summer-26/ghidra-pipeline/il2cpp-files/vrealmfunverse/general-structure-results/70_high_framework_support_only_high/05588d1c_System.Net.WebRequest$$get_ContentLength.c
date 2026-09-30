/*
FUNCTION_NAME: System.Net.WebRequest$$get_ContentLength
ENTRY_POINT: 05588d1c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


void System_Net_WebRequest__get_ContentLength(void)

{
  long unaff_x19;
  long unaff_x23;
  
  FUN_02b3c81c();
                    /* try { // try from 05588d20 to 05688d23 has its CatchHandler @ 05588d2c */
  FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
                    /* catch() { ... } // from try @ 05588d20 with catch @ 05588d2c */
                    /* try { // try from 05588d30 to 05688d37 has its CatchHandler @ 05588d40 */
  FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__);
                    /* try { // try from 05588d38 to 05688d43 has its CatchHandler @ 05587f74 */
                    /* catch() { ... } // from try @ 05588c18 with catch @ 05588d40
                       catch() { ... } // from try @ 05588c6c with catch @ 05588d40
                       catch() { ... } // from try @ 05588cbc with catch @ 05588d40
                       catch() { ... } // from try @ 05588cf8 with catch @ 05588d40
                       catch() { ... } // from try @ 05588d30 with catch @ 05588d40 */
  FUN_02b3c81c(PTR_DAT_0632a950);
  FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__);
  FUN_02b3c81c(PTR_DAT_063217c0);
  *(undefined1 *)(unaff_x23 + 0x6c5) = 1;
  FUN_04db368c();
  if (unaff_x19 != 0) {
    FUN_04c8c710();
    FUN_04c8c710();
    FUN_04c8c8f4();
    FUN_04c8c8f4();
    FUN_04c8c710();
    FUN_04c8c710();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


