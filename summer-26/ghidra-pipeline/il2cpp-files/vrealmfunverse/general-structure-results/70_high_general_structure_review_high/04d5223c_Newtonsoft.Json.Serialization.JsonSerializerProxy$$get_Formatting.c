/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Formatting
ENTRY_POINT: 04d5223c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Formatting(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  char *in_stack_00000008;
  long *in_stack_00000010;
  
  if (param_2 != 1) {
    FUN_02aa0190();
                    /* WARNING: Subroutine does not return */
    FUN_02c2be1c(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (*in_stack_00000008 != '\0') {
    if (*in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_04ca4af4(*in_stack_00000010,0);
  }
  if (lVar2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc(lVar2);
}


