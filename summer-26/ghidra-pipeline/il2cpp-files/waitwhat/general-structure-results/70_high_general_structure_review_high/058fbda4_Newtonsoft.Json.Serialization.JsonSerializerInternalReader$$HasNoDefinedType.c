/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 058fbda4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType
          (undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_stack_00000008;
  long *in_stack_00000010;
  
  if (param_2 != 1) {
    FUN_030e5464(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_032a9e8c();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar3 = *plVar1;
  in_stack_00000008 = lVar3;
  __cxa_end_catch();
  plVar1 = in_stack_00000010;
  lVar2 = *in_stack_00000010;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x55) != '\0') {
LAB_058fbd5c:
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x60) = 0;
      if (lVar3 == 0) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188cd0(lVar3);
    }
    if (*(long *)(lVar2 + 0x58) != 0) {
      FUN_058fa07c();
      lVar2 = *plVar1;
      if (lVar2 != 0) goto LAB_058fbd5c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


