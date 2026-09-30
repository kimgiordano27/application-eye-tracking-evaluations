/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 058bb7c0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Deserialize(undefined2 param_1)

{
  int iVar1;
  long unaff_x19;
  long *unaff_x20;
  undefined2 *unaff_x23;
  int unaff_w24;
  
  while( true ) {
    iVar1 = *(int *)(unaff_x19 + 0x10);
    unaff_w24 = unaff_w24 + 1;
    *unaff_x23 = param_1;
    if (iVar1 <= unaff_w24) break;
    param_1 = (**(code **)(*unaff_x20 + 0x1a8))();
    unaff_x23 = unaff_x23 + 1;
  }
  return;
}


