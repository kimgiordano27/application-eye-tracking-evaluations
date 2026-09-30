/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_FloatParseHandling
ENTRY_POINT: 05617244
PROGRAM: Untangled-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_FloatParseHandling
               (undefined8 *param_1,ulong param_2)

{
  long lVar1;
  
  for (; 7 < param_2; param_2 = param_2 - 8) {
    lVar1 = FUN_0564ec4c(param_2,0);
    param_1[lVar1 + -1] = 0;
    lVar1 = FUN_0564ec4c(param_2,0);
    param_1[lVar1 + -2] = 0;
    lVar1 = FUN_0564ec4c(param_2,0);
    param_1[lVar1 + -3] = 0;
    lVar1 = FUN_0564ec4c(param_2,0);
    param_1[lVar1 + -4] = 0;
    lVar1 = FUN_0564ec4c(param_2,0);
    param_1[lVar1 + -5] = 0;
    lVar1 = FUN_0564ec4c(param_2,0);
    param_1[lVar1 + -6] = 0;
    lVar1 = FUN_0564ec4c(param_2,0);
    param_1[lVar1 + -7] = 0;
    lVar1 = FUN_0564ec4c(param_2,0);
    param_1[lVar1 + -8] = 0;
  }
  if (param_2 < 4) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        return;
      }
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MaxDepth;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    lVar1 = FUN_0564ec4c(param_2,0);
    param_1[lVar1 + -3] = 0;
    lVar1 = FUN_0564ec4c(param_2,0);
    param_1[lVar1 + -2] = 0;
  }
  param_1[1] = 0;
  lVar1 = FUN_0564ec4c(param_2,0);
  param_1[lVar1 + -1] = 0;
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MaxDepth:
  *param_1 = 0;
  return;
}


