/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateFormatString
ENTRY_POINT: 058bb504
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateFormatString(void)

{
  long lVar1;
  int in_w8;
  long *unaff_x23;
  
  if (in_w8 == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076d5068 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07297108);
    DAT_076d5068 = '\x01';
  }
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar1 = *unaff_x23;
  }
  if (**(char **)(lVar1 + 0xb8) != '\0') {
    FUN_057a9fc0();
    return;
  }
  FUN_058bb660();
  return;
}


