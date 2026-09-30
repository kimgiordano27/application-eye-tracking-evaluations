/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 04d09870
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Create(void)

{
  int iVar1;
  undefined2 uVar2;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined2 *unaff_x23;
  int unaff_w24;
  
  while( true ) {
    uVar2 = (*in_x9)();
    iVar1 = *(int *)(unaff_x19 + 0x10);
    unaff_w24 = unaff_w24 + 1;
    *unaff_x23 = uVar2;
    if (iVar1 <= unaff_w24) break;
    in_x9 = *(code **)(*unaff_x20 + 0x1a8);
    unaff_x23 = unaff_x23 + 1;
  }
  return;
}


