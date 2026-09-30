/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ResetReader
ENTRY_POINT: 0170d5b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0170d608) */

undefined8 Newtonsoft_Json_JsonSerializer__ResetReader(undefined8 param_1,int param_2)

{
  long *plVar1;
  undefined8 *unaff_x19;
  long lVar2;
  undefined8 in_stack_00000008;
  
  if (param_2 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_00d56f10();
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_00d56f10();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar2);
  }
  return *unaff_x19;
}


