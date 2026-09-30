/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
ENTRY_POINT: 055db4e4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList(int param_1)

{
  int unaff_w20;
  
  while( true ) {
    unaff_w20 = unaff_w20 - param_1;
    if (unaff_w20 == 0) {
      return;
    }
    FUN_055da33c();
    if (unaff_w20 < 1) break;
    param_1 = FUN_055db6bc();
  }
  return;
}


