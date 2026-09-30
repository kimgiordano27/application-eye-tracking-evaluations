/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.ctor
ENTRY_POINT: 04ec618c
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ec6118) */
/* WARNING: Removing unreachable block (ram,0x04ec61d8) */

void Newtonsoft_Json_JsonSerializerSettings___ctor(undefined8 param_1,int param_2)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  char in_stack_00000008;
  
  if (param_2 != 1) {
    if (in_stack_00000008 != '\0') {
      thunk_FUN_02c6fbb4();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d846d4(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008 != '\0') {
    thunk_FUN_02c6fbb4();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4(lVar2);
  }
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  if (*(int *)(*(long *)PTR_DAT_065c91f8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04f69aa4();
  if (unaff_x20 == 0) {
    return;
  }
  thunk_FUN_02c7737c(PTR_DAT_065f7f50);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54();
}


