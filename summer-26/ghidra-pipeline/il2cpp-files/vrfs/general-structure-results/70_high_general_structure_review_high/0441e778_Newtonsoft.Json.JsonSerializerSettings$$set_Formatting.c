/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Formatting
ENTRY_POINT: 0441e778
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_Formatting(long param_1,long param_2)

{
  FUN_02d76b34(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(7,0);
  }
  *(long *)(param_1 + 0x10) = param_2;
  thunk_FUN_01656ef8((long *)(param_1 + 0x10),param_2);
  return;
}


