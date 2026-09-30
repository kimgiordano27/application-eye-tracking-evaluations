/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonData$$Best.HTTP.JSON.LitJson.IJsonWrapper.ToJson
ENTRY_POINT: 04e94b50
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_3;telemetry_or_network_hits_2
*/


void Best_HTTP_JSON_LitJson_JsonData__Best_HTTP_JSON_LitJson_IJsonWrapper_ToJson(ulong param_1)

{
  ulong in_x9;
  uint *in_x10;
  uint *in_x11;
  ulong in_x12;
  
  while( true ) {
    in_x11[-1] = in_x10[-1] ^ in_x11[-1];
    if ((in_x9 <= in_x12 + 1) || (param_1 <= in_x12 + 1)) break;
    *in_x11 = *in_x10 ^ *in_x11;
    if ((in_x9 <= in_x12 + 2) || (param_1 <= in_x12 + 2)) break;
    in_x11[1] = in_x10[1] ^ in_x11[1];
    if (0xb < in_x12 - 1) {
      return;
    }
    if ((in_x9 <= in_x12 + 3) || (param_1 <= in_x12 + 3)) break;
    in_x12 = in_x12 + 4;
    in_x11[2] = in_x10[2] ^ in_x11[2];
    if ((in_x9 <= in_x12) || (in_x10 = in_x10 + 4, in_x11 = in_x11 + 4, param_1 <= in_x12)) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


