/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<AddReportResponse>
ENTRY_POINT: 016a35ec
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializer__Deserialize<AddReportResponse>
               (ulong param_1,long param_2,ulong param_3)

{
  ulong in_x9;
  
  if (in_x9 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01597c78();
  }
  if ((param_1 & 1) == 0) {
    param_2 = param_2 + 4;
  }
  else {
                    /* try { // try from 016a3610 to 017a361b has its CatchHandler @ 016a3634 */
    param_2 = *(long *)(param_2 + 0x10);
  }
                    /* try { // try from 016a361c to 017a3647 has its CatchHandler @ 016a35e0 */
  return param_2 + param_3 * 4;
}


