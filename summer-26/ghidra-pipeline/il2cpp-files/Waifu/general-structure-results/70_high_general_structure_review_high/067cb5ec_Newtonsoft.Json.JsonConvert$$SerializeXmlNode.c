/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 067cb5ec
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__SerializeXmlNode(long param_1)

{
  if (*(int *)(DAT_083cc118 + 0xe0) == 0) {
                    /* try { // try from 067cb600 to 068cb637 has its CatchHandler @ 067cb734 */
    FUN_033b9870(DAT_083cc118);
  }
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(DAT_083cc118 + 0xb8);
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 067cb488 with catch @ 067cb638
                       try { // try from 067cb638 to 068cb6a3 has its CatchHandler @ 067cafb8 */
    FUN_033d1d44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


