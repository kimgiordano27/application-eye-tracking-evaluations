/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeEnum
ENTRY_POINT: 0720683c
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeEnum(long *param_1)

{
  if (*param_1 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(*param_1 + 0x1c)) {
      FUN_075069a4(0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


