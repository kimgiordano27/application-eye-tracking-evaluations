/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_EqualityComparer
ENTRY_POINT: 04d51fec
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


/* WARNING: Removing unreachable block (ram,0x04d51f68) */

void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_EqualityComparer(void)

{
  long *plVar1;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar2;
  char *in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (*in_stack_00000008 != '\0') {
    thunk_FUN_02b4a54c(*in_stack_00000010,0);
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc(lVar2);
  }
  *unaff_x21 = 0;
  thunk_FUN_02bb0e9c();
  if (*(int *)(*(long *)PTR_DAT_0631cae8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04db3f60();
  if (unaff_x20 == 0) {
    return;
  }
  thunk_FUN_02ba3594(PTR_DAT_06332ac8);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988();
}


