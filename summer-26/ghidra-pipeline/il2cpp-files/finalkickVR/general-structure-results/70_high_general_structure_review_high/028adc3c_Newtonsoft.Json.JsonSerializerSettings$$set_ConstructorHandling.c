/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ConstructorHandling
ENTRY_POINT: 028adc3c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializerSettings__set_ConstructorHandling(long param_1)

{
  long in_x9;
  undefined8 in_stack_00000008;
  
  if (param_1 - in_x9 == 0) {
    return in_stack_00000008._4_4_ & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1 - in_x9);
}


