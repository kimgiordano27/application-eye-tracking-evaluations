/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 066f114c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader__ParsePostValue(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long in_stack_00000008;
  char *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  if (param_2 != 1) {
    FUN_0350e1f0(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_03b79cbc(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  in_stack_00000008 = lVar2;
  __cxa_end_catch();
  if (*in_stack_00000010 != '\0') {
    thunk_FUN_03a98474(*in_stack_00000018,0);
  }
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8(lVar2);
}


