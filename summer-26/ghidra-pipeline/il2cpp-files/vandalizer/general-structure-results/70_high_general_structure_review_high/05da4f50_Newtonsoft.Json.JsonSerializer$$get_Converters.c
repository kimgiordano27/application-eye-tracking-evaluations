/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Converters
ENTRY_POINT: 05da4f50
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializer__get_Converters(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
    thunk_FUN_0329bf60();
  }
                    /* try { // try from 05da4f68 to 05ea4f6b has its CatchHandler @ 05da5238 */
  return *(long *)(unaff_x19 + 0x18) != 0;
}


