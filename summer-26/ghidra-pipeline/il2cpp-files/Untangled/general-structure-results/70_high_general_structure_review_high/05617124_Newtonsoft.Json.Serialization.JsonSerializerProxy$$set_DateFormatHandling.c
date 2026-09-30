/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DateFormatHandling
ENTRY_POINT: 05617124
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateFormatHandling
               (long param_1,long param_2)

{
  long lVar1;
  uint in_w9;
  
  lVar1 = param_1 + 4;
  if ((in_w9 >> 1 & 1) != 0) {
    *(undefined2 *)(param_2 + lVar1) = 0;
    lVar1 = param_1 + 6;
  }
  if ((in_w9 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_2 + lVar1) = 0;
  return;
}


