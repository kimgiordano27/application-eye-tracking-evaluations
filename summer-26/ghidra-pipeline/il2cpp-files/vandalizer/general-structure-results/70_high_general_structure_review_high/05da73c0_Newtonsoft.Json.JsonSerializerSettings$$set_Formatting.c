/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Formatting
ENTRY_POINT: 05da73c0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__set_Formatting(long param_1)

{
  uint uVar1;
  int in_w9;
  uint in_w10;
  int in_w11;
  
  uVar1 = in_w9 - in_w11 * in_w10;
  if (uVar1 < in_w10) {
    return *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


