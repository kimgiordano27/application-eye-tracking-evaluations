/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeToken<WitEntityKeywordInfo>
ENTRY_POINT: 04f8d0d0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Meta_WitAi_Json_JsonConvert__SerializeToken<WitEntityKeywordInfo>
               (long param_1,long param_2,undefined8 param_3)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  FUN_05edeb78(param_2,param_3,*(undefined8 *)(param_1 + 8));
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x30) = unaff_x20;
    thunk_FUN_040ec700();
    *(undefined8 *)(param_2 + 0x40) = unaff_x19;
    thunk_FUN_040ec700();
                    /* try { // try from 04f8d104 to 0508d113 has its CatchHandler @ 04f8d114 */
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


