/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 0675f808
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic
               (undefined2 *param_1)

{
  undefined2 in_w8;
  int unaff_w20;
  undefined2 *unaff_x21;
  
  while( true ) {
    unaff_w20 = unaff_w20 + -1;
    *param_1 = in_w8;
    if (unaff_w20 == 0) break;
    in_w8 = *unaff_x21;
    param_1 = param_1 + 1;
    unaff_x21 = unaff_x21 + 1;
  }
  param_1[1] = 0;
  return;
}


