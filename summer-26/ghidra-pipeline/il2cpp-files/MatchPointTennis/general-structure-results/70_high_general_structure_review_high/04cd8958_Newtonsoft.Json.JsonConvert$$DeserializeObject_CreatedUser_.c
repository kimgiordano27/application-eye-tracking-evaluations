/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<CreatedUser>
ENTRY_POINT: 04cd8958
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


undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject<CreatedUser>(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
                    /* try { // try from 04cd895c to 04dd8967 has its CatchHandler @ 04cd89b0 */
  FUN_04482014();
  if ((*(byte *)(**(long **)(unaff_x19 + 0x38) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  lVar1 = thunk_FUN_0448520c();
                    /* try { // try from 04cd8980 to 04dd8983 has its CatchHandler @ 04cd89a4 */
                    /* try { // try from 04cd8984 to 04dd8987 has its CatchHandler @ 04cd89a0 */
  FUN_05ca7efc(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
                    /* catch() { ... } // from try @ 04cd88b0 with catch @ 04cd8988
                       try { // try from 04cd8988 to 04dd89cf has its CatchHandler @ 04cd87e8 */
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 04cd88e8 with catch @ 04cd898c */
                    /* catch() { ... } // from try @ 04cd8894 with catch @ 04cd8990 */
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
                    /* catch() { ... } // from try @ 04cd88fc with catch @ 04cd8994 */
                    /* catch() { ... } // from try @ 04cd8944 with catch @ 04cd8998 */
    thunk_FUN_044bb4b4();
                    /* catch() { ... } // from try @ 04cd8934 with catch @ 04cd899c */
                    /* catch() { ... } // from try @ 04cd88d0 with catch @ 04cd89a0
                       catch() { ... } // from try @ 04cd8984 with catch @ 04cd89a0 */
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
                    /* catch() { ... } // from try @ 04cd8884 with catch @ 04cd89a4
                       catch() { ... } // from try @ 04cd8980 with catch @ 04cd89a4 */
                    /* catch() { ... } // from try @ 04cd8878 with catch @ 04cd89a8 */
    thunk_FUN_044bb4b4();
                    /* catch() { ... } // from try @ 04cd8840 with catch @ 04cd89ac */
                    /* catch() { ... } // from try @ 04cd895c with catch @ 04cd89b0 */
                    /* catch() { ... } // from try @ 04cd885c with catch @ 04cd89b4 */
                    /* catch() { ... } // from try @ 04cd8834 with catch @ 04cd89b8 */
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar2 = thunk_FUN_0448520c();
                    /* try { // try from 04cd89d0 to 04dd89e7 has its CatchHandler @ 04cd8a28 */
    FUN_0555528c(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


