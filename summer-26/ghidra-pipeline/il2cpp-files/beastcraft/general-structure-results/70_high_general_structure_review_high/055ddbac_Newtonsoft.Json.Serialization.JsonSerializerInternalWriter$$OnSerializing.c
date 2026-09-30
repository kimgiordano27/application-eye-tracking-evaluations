/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerializing
ENTRY_POINT: 055ddbac
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  thunk_FUN_02e9a04c(param_1);
  lVar1 = FUN_055d8cc8();
  if (DAT_06e860ef == '\0') {
                    /* try { // try from 055ddbe4 to 056ddc67 has its CatchHandler @ 055dd314 */
                    /* catch() { ... } // from try @ 055ddba0 with catch @ 055ddbe8 */
                    /* catch() { ... } // from try @ 055ddb24 with catch @ 055ddbec */
    FUN_02e3ca1c(PTR_DAT_06a3a270);
                    /* catch() { ... } // from try @ 055dd968 with catch @ 055ddbf0 */
                    /* catch() { ... } // from try @ 055dd728 with catch @ 055ddbf4 */
    DAT_06e860ef = '\x01';
  }
                    /* catch() { ... } // from try @ 055ddb70 with catch @ 055ddbf8 */
  if (lVar1 == 0) {
                    /* catch() { ... } // from try @ 055ddaf4 with catch @ 055ddbfc */
    uVar2 = 0;
                    /* catch() { ... } // from try @ 055ddbe0 with catch @ 055ddc00 */
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_0548a2e4(lVar1,0);
    uVar3 = (ulong)*(uint *)(lVar1 + 0x10);
                    /* try { // try from 055ddbe0 to 056ddbe3 has its CatchHandler @ 055ddc00 */
  }
                    /* catch() { ... } // from try @ 055dd98c with catch @ 055ddc04 */
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
                    /* catch() { ... } // from try @ 055dd9c4 with catch @ 055ddc08 */
                    /* catch() { ... } // from try @ 055ddb64 with catch @ 055ddc0c */
                    /* catch() { ... } // from try @ 055dd74c with catch @ 055ddc10 */
  return auVar4;
}


