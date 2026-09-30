/*
FUNCTION_NAME: FUN_053a1b58
ENTRY_POINT: 053a1b58
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void FUN_053a1b58(long param_1,undefined8 param_2)

{
  long lVar1;
  
                    /* try { // try from 053a1b58 to 054a1b5b has its CatchHandler @ 053a1b90 */
                    /* try { // try from 053a1b5c to 054a1b5f has its CatchHandler @ 053a1b84 */
                    /* try { // try from 053a1b60 to 054a1b63 has its CatchHandler @ 053a1b7c */
                    /* try { // try from 053a1b64 to 054a1b67 has its CatchHandler @ 053a1b74 */
                    /* try { // try from 053a1b68 to 054a1bab has its CatchHandler @ 053a178c */
  if ((DAT_066d085f & 1) == 0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053a1b64 with catch @ 053a1b74
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053a1a98 with catch @ 053a1b78
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053a1b60 with catch @ 053a1b7c
                        */
    FUN_02b3c81c(
                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                );
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053a1aa0 with catch @ 053a1b80
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053a1b5c with catch @ 053a1b84
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053a1a38 with catch @ 053a1b88
                        */
    FUN_02b3c81c(UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053a19d4 with catch @ 053a1b8c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053a1b58 with catch @ 053a1b90
                        */
    DAT_066d085f = 1;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(int *)(*(long *)UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
                    /* try { // try from 053a1bf4 to 054a1cbb has its CatchHandler @ 053a1bf4
                       catch() { ... } // from try @ 053a1bf4 with catch @ 053a1bf4
                       catch() { ... } // from try @ 053a1cf8 with catch @ 053a1bf4
                       catch() { ... } // from try @ 053a1ddc with catch @ 053a1bf4
                       catch() { ... } // from try @ 053a1e48 with catch @ 053a1bf4
                       catch() { ... } // from try @ 053a1e60 with catch @ 053a1bf4
                       catch() { ... } // from try @ 053a1eec with catch @ 053a1bf4
                       catch() { ... } // from try @ 053a1f4c with catch @ 053a1bf4
                       catch() { ... } // from try @ 053a1f94 with catch @ 053a1bf4 */
    if (lVar1 != 0) {
      FUN_05398c9c(lVar1,param_2);
      return;
    }
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 053a1bac to 054a1baf has its CatchHandler @ 053a1bb8 */
    lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
                    /* catch() { ... } // from try @ 053a1bac with catch @ 053a1bb8 */
    if (*(int *)(*(long *)
                  Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                + 0xe4) == 0) {
                    /* try { // try from 053a1bbc to 054a1bc3 has its CatchHandler @ 053a1bcc */
      thunk_FUN_02b9ad44();
    }
    if (lVar1 != 0) {
                    /* try { // try from 053a1bc4 to 054a1bcf has its CatchHandler @ 053a178c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 053a1bbc with catch @ 053a1bcc
                        */
      FUN_053983dc(lVar1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


