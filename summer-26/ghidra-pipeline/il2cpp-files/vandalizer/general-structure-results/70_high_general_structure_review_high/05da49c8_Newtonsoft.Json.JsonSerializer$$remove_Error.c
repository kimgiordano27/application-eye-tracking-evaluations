/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$remove_Error
ENTRY_POINT: 05da49c8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__remove_Error(undefined1 *param_1,undefined8 param_2)

{
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  while( true ) {
    uStack0000000000000018 = 0;
    uStack0000000000000010 = param_2;
    thunk_FUN_0329bf60(param_1);
    uStack0000000000000018 = unaff_x22;
    thunk_FUN_0329bf60();
    thunk_FUN_0322ed78(*unaff_x24);
    FUN_05e240e4();
    unaff_x23 = *(long *)(unaff_x23 + 0x20);
    if (unaff_x23 == 0) break;
    param_2 = *(undefined8 *)(unaff_x23 + 0x10);
    unaff_x22 = *(undefined8 *)(unaff_x23 + 0x18);
    param_1 = (undefined1 *)&stack0x00000010;
  }
  return;
}


