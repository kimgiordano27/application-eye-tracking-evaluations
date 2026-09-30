/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$DeserializeInternal
ENTRY_POINT: 074c528c
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__DeserializeInternal
          (long param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < *(uint *)(param_1 + 0x18)) {
    return *(undefined8 *)(param_1 + (long)(int)param_3 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f13634();
}


