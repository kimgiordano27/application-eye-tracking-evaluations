/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_StringEscapeHandling
ENTRY_POINT: 05e2ac54
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializerSettings__get_StringEscapeHandling(uint param_1)

{
  int iVar1;
  uint in_w9;
  
  if (in_w9 < 0x7f800001) {
    iVar1 = 1;
  }
  else {
    iVar1 = -(uint)((param_1 & 0x7fffffff) < 0x7f800001);
  }
  return iVar1;
}


