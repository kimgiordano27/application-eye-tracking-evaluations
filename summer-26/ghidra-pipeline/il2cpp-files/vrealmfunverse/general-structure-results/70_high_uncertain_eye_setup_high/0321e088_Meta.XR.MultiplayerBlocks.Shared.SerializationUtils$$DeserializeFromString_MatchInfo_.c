/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<MatchInfo>
ENTRY_POINT: 0321e088
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<MatchInfo>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  
                    /* try { // try from 0321e088 to 0331e08b has its CatchHandler @ 0321e0a4 */
                    /* try { // try from 0321e08c to 0331e0a7 has its CatchHandler @ 0321dfc8 */
  if (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40)) {
    puVar1 = (undefined4 *)thunk_FUN_02b7978c();
                    /* catch() { ... } // from try @ 0321e088 with catch @ 0321e0a4 */
                    /* try { // try from 0321e0a8 to 0331e0af has its CatchHandler @ 0321e0b8 */
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3ce44();
}


