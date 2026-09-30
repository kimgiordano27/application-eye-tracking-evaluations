/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
ENTRY_POINT: 055d31fc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject(void)

{
  long lVar1;
  long in_stack_00000008;
  long *in_stack_00000010;
  
  __cxa_end_catch();
  lVar1 = *in_stack_00000010;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x55) != '\0') {
LAB_055d3180:
      *(undefined8 *)(lVar1 + 0x58) = 0;
      thunk_FUN_02ee2be8((undefined8 *)(lVar1 + 0x58),0);
      *(undefined8 *)(lVar1 + 0x60) = 0;
      thunk_FUN_02ee2be8((undefined8 *)(lVar1 + 0x60),0);
      if (in_stack_00000008 == 0) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccbc();
    }
    if (*(long *)(lVar1 + 0x58) != 0) {
      FUN_055d0f04();
      lVar1 = *in_stack_00000010;
      if (lVar1 != 0) goto LAB_055d3180;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


