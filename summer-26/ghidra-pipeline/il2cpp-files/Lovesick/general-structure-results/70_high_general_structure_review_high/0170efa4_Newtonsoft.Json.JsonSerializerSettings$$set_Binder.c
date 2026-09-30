/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Binder
ENTRY_POINT: 0170efa4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializerSettings__set_Binder(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    *(long *)(param_1 + 0x38) = lVar1;
  }
  return lVar1;
}


