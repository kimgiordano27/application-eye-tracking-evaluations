/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<RewardLedger>
ENTRY_POINT: 04cd9530
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject<RewardLedger>(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
                    /* catch() { ... } // from try @ 04cd9484 with catch @ 04cd9530 */
  FUN_04481fb8();
                    /* catch() { ... } // from try @ 04cd942c with catch @ 04cd9534 */
  lVar1 = thunk_FUN_0448520c();
                    /* catch() { ... } // from try @ 04cd9498 with catch @ 04cd9538 */
                    /* catch() { ... } // from try @ 04cd94e8 with catch @ 04cd953c */
                    /* catch() { ... } // from try @ 04cd94d8 with catch @ 04cd9540 */
                    /* catch() { ... } // from try @ 04cd946c with catch @ 04cd9544
                       catch() { ... } // from try @ 04cd9528 with catch @ 04cd9544 */
  FUN_05ca8558(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
                    /* catch() { ... } // from try @ 04cd941c with catch @ 04cd9548
                       catch() { ... } // from try @ 04cd9524 with catch @ 04cd9548 */
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 04cd9410 with catch @ 04cd954c */
                    /* catch() { ... } // from try @ 04cd93d8 with catch @ 04cd9550 */
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
                    /* catch() { ... } // from try @ 04cd9500 with catch @ 04cd9554 */
                    /* catch() { ... } // from try @ 04cd93f4 with catch @ 04cd9558 */
    thunk_FUN_044bb4b4();
                    /* catch() { ... } // from try @ 04cd93cc with catch @ 04cd955c */
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
    thunk_FUN_044bb4b4();
                    /* try { // try from 04cd9574 to 04dd958b has its CatchHandler @ 04cd95cc */
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar2 = thunk_FUN_0448520c();
                    /* try { // try from 04cd958c to 04dd95bb has its CatchHandler @ 04cd9380 */
    FUN_05556d3c(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


