/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Culture
ENTRY_POINT: 05e2ad5c
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


bool Newtonsoft_Json_JsonSerializerSettings__set_Culture(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  float *unaff_x19;
  
  pfVar1 = (float *)thunk_FUN_0367ff68(param_2);
  if (*pfVar1 == *unaff_x19) {
    return true;
  }
  if (0x7f800000 < (uint)ABS(*pfVar1)) {
    return 0x7f800000 < (uint)ABS(*unaff_x19);
  }
  return false;
}


