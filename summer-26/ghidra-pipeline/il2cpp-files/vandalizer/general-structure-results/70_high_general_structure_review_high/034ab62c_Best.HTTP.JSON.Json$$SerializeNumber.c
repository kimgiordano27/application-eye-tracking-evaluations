/*
FUNCTION_NAME: Best.HTTP.JSON.Json$$SerializeNumber
ENTRY_POINT: 034ab62c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


byte Best_HTTP_JSON_Json__SerializeNumber(ulong param_1)

{
  undefined1 in_CY;
  long in_x9;
  ulong in_x10;
  
  while( true ) {
    in_x10 = in_x10 + 1;
    if (in_x10 == 8) break;
    if (param_1 <= in_x10) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (*(int *)(in_x9 + in_x10 * 4) != 0) break;
    in_CY = 6 < in_x10;
  }
  return ~!(bool)in_CY & 1;
}


