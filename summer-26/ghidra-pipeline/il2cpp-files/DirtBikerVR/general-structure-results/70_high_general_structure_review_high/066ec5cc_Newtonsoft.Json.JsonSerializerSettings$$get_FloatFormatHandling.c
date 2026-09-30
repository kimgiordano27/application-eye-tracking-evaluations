/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_FloatFormatHandling
ENTRY_POINT: 066ec5cc
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


void Newtonsoft_Json_JsonSerializerSettings__get_FloatFormatHandling
               (long param_1,undefined8 param_2)

{
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    thunk_FUN_03afed3c(param_1,param_2);
    thunk_FUN_03ac70f4(*unaff_x23);
    FUN_067736d4();
    unaff_x22 = *(long *)(unaff_x22 + 0x20);
    if (unaff_x22 == 0) break;
    in_stack_00000010 = *(undefined8 *)(unaff_x22 + 0x10);
    param_2 = *(undefined8 *)(unaff_x22 + 0x18);
    in_stack_00000018 = 0;
    thunk_FUN_03afed3c(&stack0x00000010);
    param_1 = unaff_x24 + 8;
    in_stack_00000018 = param_2;
  }
  return;
}


