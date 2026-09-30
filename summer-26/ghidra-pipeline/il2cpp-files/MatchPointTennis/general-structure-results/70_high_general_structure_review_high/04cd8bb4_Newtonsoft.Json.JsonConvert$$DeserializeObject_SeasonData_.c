/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<SeasonData>
ENTRY_POINT: 04cd8bb4
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


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject<SeasonData>(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  FUN_05ca8000(param_2,*(undefined8 *)(param_1 + 8));
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x22 + 0x10) = unaff_x21;
    thunk_FUN_044bb4b4();
                    /* try { // try from 04cd8bd4 to 04dd8bd7 has its CatchHandler @ 04cd8bf8 */
    *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* try { // try from 04cd8bd8 to 04dd8bdb has its CatchHandler @ 04cd8bf4 */
                    /* catch() { ... } // from try @ 04cd8b04 with catch @ 04cd8bdc
                       try { // try from 04cd8bdc to 04dd8c23 has its CatchHandler @ 04cd8a3c */
    thunk_FUN_044bb4b4();
                    /* catch() { ... } // from try @ 04cd8b3c with catch @ 04cd8be0 */
                    /* catch() { ... } // from try @ 04cd8ae8 with catch @ 04cd8be4 */
                    /* catch() { ... } // from try @ 04cd8b50 with catch @ 04cd8be8 */
                    /* catch() { ... } // from try @ 04cd8b98 with catch @ 04cd8bec */
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 04cd8b88 with catch @ 04cd8bf0 */
      FUN_04481fb8();
    }
                    /* catch() { ... } // from try @ 04cd8b24 with catch @ 04cd8bf4
                       catch() { ... } // from try @ 04cd8bd8 with catch @ 04cd8bf4 */
    uVar1 = thunk_FUN_0448520c();
                    /* catch() { ... } // from try @ 04cd8ad8 with catch @ 04cd8bf8
                       catch() { ... } // from try @ 04cd8bd4 with catch @ 04cd8bf8 */
                    /* catch() { ... } // from try @ 04cd8acc with catch @ 04cd8bfc */
                    /* catch() { ... } // from try @ 04cd8a94 with catch @ 04cd8c00 */
                    /* catch() { ... } // from try @ 04cd8bb0 with catch @ 04cd8c04 */
                    /* catch() { ... } // from try @ 04cd8ab0 with catch @ 04cd8c08 */
                    /* catch() { ... } // from try @ 04cd8a88 with catch @ 04cd8c0c */
    FUN_0555555c();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04cd8c24 to 04dd8c3b has its CatchHandler @ 04cd8c7c */
  FUN_04447e44();
}


