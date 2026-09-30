/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializableItem
ENTRY_POINT: 0684f950
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


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializableItem
               (long param_1,long param_2)

{
  if (param_2 == param_1) {
    return true;
  }
  if ((((param_2 != 0) && (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) &&
      (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
     (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) {
    return *(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c);
  }
  return false;
}


