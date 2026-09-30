/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateValueInternal
ENTRY_POINT: 05e913e0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
               (undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x19;
  int unaff_w21;
  long in_stack_00000018;
  char *in_stack_00000020;
  undefined8 *in_stack_00000028;
  
  FUN_03154064(&stack0x00000008);
  if (unaff_w21 != 1) {
    FUN_0315402c(&stack0x00000018);
                    /* WARNING: Subroutine does not return */
    FUN_03732a6c(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  in_stack_00000018 = *plVar1;
  __cxa_end_catch();
  if (*in_stack_00000020 != '\0') {
    thunk_FUN_036509ac(*in_stack_00000028,0);
  }
  if (in_stack_00000018 == 0) {
    thunk_FUN_03650fbc();
    *unaff_x19 = 0;
    thunk_FUN_036b7ad0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c00();
}


