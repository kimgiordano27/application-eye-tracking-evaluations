/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
ENTRY_POINT: 04d45890
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject(void)

{
  long lVar1;
  long *plVar2;
  undefined4 *unaff_x19;
  long lVar3;
  long *unaff_x22;
  int *in_stack_00000020;
  long *in_stack_00000028;
  
  plVar2 = (long *)__cxa_begin_catch();
  lVar3 = *plVar2;
  __cxa_end_catch();
  if (*in_stack_00000020 < 0) {
    if ((*in_stack_00000028 == 0) || (lVar1 = FUN_04d40734(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_04de299c(lVar1,0);
  }
  if (lVar3 == 0) {
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04caac50(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc(lVar3);
}


