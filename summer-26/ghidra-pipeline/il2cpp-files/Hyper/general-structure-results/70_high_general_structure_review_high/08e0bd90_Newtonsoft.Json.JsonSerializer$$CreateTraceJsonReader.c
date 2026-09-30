/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateTraceJsonReader
ENTRY_POINT: 08e0bd90
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__CreateTraceJsonReader(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), lVar1 != 0)) {
    FUN_05291894(lVar1,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


