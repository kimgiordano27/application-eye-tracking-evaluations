/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ConstructorHandling
ENTRY_POINT: 079d4de4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_ConstructorHandling(undefined8 *param_1)

{
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    thunk_FUN_044bb4b4(param_1);
    in_stack_00000018 = unaff_x22;
    thunk_FUN_044bb4b4();
    thunk_FUN_04484e3c(*unaff_x24);
    FUN_07a60d64();
    unaff_x23 = *(long *)(unaff_x23 + 0x20);
    if (unaff_x23 == 0) break;
    in_stack_00000010 = *(undefined8 *)(unaff_x23 + 0x10);
    unaff_x22 = *(undefined8 *)(unaff_x23 + 0x18);
    param_1 = &stack0x00000010;
    in_stack_00000018 = 0;
  }
  return;
}


