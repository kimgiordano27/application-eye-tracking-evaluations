/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 054bcabc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x054bca24) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString(void)

{
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  char *in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  if (*in_stack_00000008 != '\0') {
    thunk_FUN_02da42ec(*in_stack_00000010,0);
  }
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  *unaff_x21 = 0;
  LeanTween__value();
  if (*(int *)(*(long *)PTR_DAT_06a0a5a0 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05520f50();
  if (unaff_x20 == 0) {
    return;
  }
  thunk_FUN_02dfd288(PTR_DAT_06a21ad0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724();
}


