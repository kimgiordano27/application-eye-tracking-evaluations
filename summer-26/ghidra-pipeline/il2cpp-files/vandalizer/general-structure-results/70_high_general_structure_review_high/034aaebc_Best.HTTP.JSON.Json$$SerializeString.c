/*
FUNCTION_NAME: Best.HTTP.JSON.Json$$SerializeString
ENTRY_POINT: 034aaebc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Best_HTTP_JSON_Json__SerializeString
               (undefined8 param_1,long param_2,int param_3,long param_4,int param_5)

{
  int in_w9;
  
  *(undefined8 *)(param_4 + (long)in_w9 * 8 + 0x20) = param_1;
  if ((param_3 + 2U < *(uint *)(param_2 + 0x18)) && (param_5 + 2U < *(uint *)(param_4 + 0x18))) {
    *(undefined8 *)(param_4 + (long)(int)(param_5 + 2U) * 8 + 0x20) =
         *(undefined8 *)(param_2 + (long)(int)(param_3 + 2U) * 8 + 0x20);
    if ((param_3 + 3U < *(uint *)(param_2 + 0x18)) && (param_5 + 3U < *(uint *)(param_4 + 0x18))) {
      *(undefined8 *)(param_4 + (long)(int)(param_5 + 3U) * 8 + 0x20) =
           *(undefined8 *)(param_2 + (long)(int)(param_3 + 3U) * 8 + 0x20);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


