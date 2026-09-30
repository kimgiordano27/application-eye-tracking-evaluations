/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
ENTRY_POINT: 032a0798
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue
               (long param_1,long param_2)

{
  long lVar1;
  int in_w9;
  
  if (in_w9 == 0) {
    lVar1 = 0;
    if (*(long *)(param_2 + 0x18) == 0) goto LAB_032a07b8;
    lVar1 = *(long *)(*(long *)(param_2 + 0x18) + 0x20);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_2 + 0x25) = 0;
  }
  *(long *)(param_2 + 0x18) = lVar1;
LAB_032a07b8:
  return lVar1 != 0;
}


