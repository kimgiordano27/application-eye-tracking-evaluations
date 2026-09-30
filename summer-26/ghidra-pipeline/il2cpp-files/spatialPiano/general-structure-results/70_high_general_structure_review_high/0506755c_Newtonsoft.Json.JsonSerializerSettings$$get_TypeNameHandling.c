/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameHandling
ENTRY_POINT: 0506755c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializerSettings__get_TypeNameHandling(long param_1)

{
  int in_w8;
  long unaff_x19;
  
  if ((in_w8 != 0) &&
     (*(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(unaff_x19 + 100), in_w8 != 1)) {
    *(undefined4 *)(param_1 + 0x24) = 4;
    thunk_FUN_02f168c4();
    *(long *)(unaff_x19 + 0x40) = param_1;
    thunk_FUN_02f168c4();
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


