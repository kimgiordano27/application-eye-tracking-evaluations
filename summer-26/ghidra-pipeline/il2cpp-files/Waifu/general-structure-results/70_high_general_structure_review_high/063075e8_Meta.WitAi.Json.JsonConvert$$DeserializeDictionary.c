/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeDictionary
ENTRY_POINT: 063075e8
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


void Meta_WitAi_Json_JsonConvert__DeserializeDictionary(long param_1,float param_2,float *param_3)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0xc5c) <= param_2) {
    fVar1 = 1.0 / (param_2 + param_3[1] + param_3[2] + param_3[3]);
    *param_3 = param_2 * fVar1;
    param_3[1] = param_3[1] * fVar1;
    param_3[2] = param_3[2] * fVar1;
    param_3[3] = param_3[3] * fVar1;
  }
  return;
}


