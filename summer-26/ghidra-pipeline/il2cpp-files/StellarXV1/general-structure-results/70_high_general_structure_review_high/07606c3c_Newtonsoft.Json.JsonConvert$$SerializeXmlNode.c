/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 07606c3c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeXmlNode(undefined8 param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long lVar3;
  long in_stack_00000008;
  char *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  if (param_2 != 1) {
    FUN_03b1fd84(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_041676cc();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar3 = *plVar1;
  in_stack_00000008 = lVar3;
  __cxa_end_catch();
  if (*in_stack_00000010 != '\0') {
    thunk_FUN_0408541c(*in_stack_00000018,0);
  }
  if (lVar3 == 0) {
    uVar2 = *unaff_x19;
    thunk_FUN_04085a30();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828(lVar3);
}


