/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_PreserveReferencesHandling
ENTRY_POINT: 061dee2c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_PreserveReferencesHandling
               (long *param_1,undefined8 param_2,long param_3)

{
  uint in_w9;
  long in_x10;
  
  if ((in_w9 <= *(byte *)(*param_1 + 0x130)) &&
     (*(long *)(*(long *)(*param_1 + 200) + in_x10 * 8) == param_3)) {
    thunk_FUN_037aeb94();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373bb54(param_1);
}


