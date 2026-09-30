/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ThrowUnexpectedEndException
ENTRY_POINT: 0768071c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
               (undefined2 *param_1)

{
  undefined2 *puVar1;
  int unaff_w20;
  undefined2 *unaff_x21;
  
  puVar1 = param_1;
  if (-1 < unaff_w20 + -1) {
    do {
      unaff_w20 = unaff_w20 + -1;
      param_1 = puVar1 + 1;
      *puVar1 = *unaff_x21;
      puVar1 = param_1;
      unaff_x21 = unaff_x21 + 1;
    } while (unaff_w20 != 0);
  }
  *param_1 = 0;
  return;
}


