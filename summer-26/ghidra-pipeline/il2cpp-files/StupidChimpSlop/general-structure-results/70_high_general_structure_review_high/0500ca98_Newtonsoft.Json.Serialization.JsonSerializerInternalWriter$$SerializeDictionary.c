/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 0500ca98
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(ulong param_1)

{
  int *unaff_x19;
  int unaff_w21;
  
  if ((param_1 & 1) == 0) {
    if (unaff_w21 < 0) {
      return 0;
    }
  }
  else {
    unaff_w21 = -unaff_w21;
    if (0 < unaff_w21) {
      return 0;
    }
  }
  *unaff_x19 = unaff_w21;
  return 1;
}


