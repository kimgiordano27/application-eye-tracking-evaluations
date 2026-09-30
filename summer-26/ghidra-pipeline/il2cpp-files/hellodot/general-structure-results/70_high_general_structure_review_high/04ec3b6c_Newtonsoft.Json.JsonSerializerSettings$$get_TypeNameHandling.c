/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameHandling
ENTRY_POINT: 04ec3b6c
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ec3be0) */

undefined8
Newtonsoft_Json_JsonSerializerSettings__get_TypeNameHandling(undefined8 param_1,int param_2)

{
  long *plVar1;
  long unaff_x19;
  long lVar2;
  undefined8 in_stack_00000008;
  
  if (param_2 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_04e562ec();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d846d4();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_04e562ec();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4(lVar2);
  }
  return 0;
}


