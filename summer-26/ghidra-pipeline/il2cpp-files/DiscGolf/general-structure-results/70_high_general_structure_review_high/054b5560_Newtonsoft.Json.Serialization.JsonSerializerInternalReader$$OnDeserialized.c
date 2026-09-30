/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserialized
ENTRY_POINT: 054b5560
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined4 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((((uVar1 != 0) && (uVar1 != 1)) && (2 < uVar1)) && (uVar1 != 3)) {
    return *(undefined4 *)(param_1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


