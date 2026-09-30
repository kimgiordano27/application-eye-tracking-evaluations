/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.cctor
ENTRY_POINT: 04ec610c
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings___cctor(void)

{
  long unaff_x19;
  long unaff_x20;
  int unaff_w23;
  
  if ((unaff_w23 == 9) || (unaff_w23 == 0)) {
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    if (*(int *)(*(long *)PTR_DAT_065c91f8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04f69aa4();
    if (unaff_x20 != 0) {
      thunk_FUN_02c7737c(PTR_DAT_065f7f50);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54();
    }
  }
  return;
}


