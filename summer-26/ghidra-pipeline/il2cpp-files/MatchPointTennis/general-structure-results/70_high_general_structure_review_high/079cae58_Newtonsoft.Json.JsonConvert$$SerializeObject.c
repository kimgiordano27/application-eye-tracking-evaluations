/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 079cae58
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeObject(long param_1)

{
  undefined8 uVar1;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  
  if (in_x9 == param_1) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(unaff_x20 + 0x14) == *(int *)(unaff_x19 + 0x14)) {
      uVar1 = thunk_FUN_078b3114(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x19 + 0x48)
                                 ,0);
      return uVar1;
    }
  }
  return 0;
}


