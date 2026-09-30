/*
FUNCTION_NAME: FUN_059b84ec
ENTRY_POINT: 059b84ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_059b84ec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 059b84f0 to 05ab84ff has its CatchHandler @ 059b8508 */
                    /* catch() { ... } // from try @ 059b84d8 with catch @ 059b8500 */
  if ((DAT_06dc14d6 & 1) == 0) {
                    /* catch() { ... } // from try @ 059b84c8 with catch @ 059b8504 */
                    /* catch() { ... } // from try @ 059b84a8 with catch @ 059b8508
                       catch() { ... } // from try @ 059b84f0 with catch @ 059b8508 */
    FUN_02d965b8(OVRPlugin_OVRP_1_121_0_TypeInfo);
                    /* try { // try from 059b8510 to 05ab8513 has its CatchHandler @ 059b8574 */
                    /* try { // try from 059b8514 to 05ab8557 has its CatchHandler @ 059b80ec */
    DAT_06dc14d6 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_121_0_TypeInfo;
                    /* catch() { ... } // from try @ 059b8368 with catch @ 059b8518 */
  lVar2 = *(long *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 059b8310 with catch @ 059b851c */
  if (lVar2 == 0) {
                    /* catch() { ... } // from try @ 059b82c8 with catch @ 059b8520 */
                    /* catch() { ... } // from try @ 059b81fc with catch @ 059b8524 */
                    /* catch() { ... } // from try @ 059b83f4 with catch @ 059b8528 */
    lVar2 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
                    /* catch() { ... } // from try @ 059b83d0 with catch @ 059b852c */
                    /* catch() { ... } // from try @ 059b82a8 with catch @ 059b8530
                       catch() { ... } // from try @ 059b8428 with catch @ 059b8530 */
    if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 059b8284 with catch @ 059b8534
                       catch() { ... } // from try @ 059b8424 with catch @ 059b8534 */
      thunk_FUN_02df485c();
                    /* catch() { ... } // from try @ 059b82bc with catch @ 059b8538
                       catch() { ... } // from try @ 059b8420 with catch @ 059b8538 */
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  }
  return lVar2;
}


