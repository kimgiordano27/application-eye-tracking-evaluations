/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 07108af0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  undefined4 uVar1;
  long unaff_x21;
  undefined8 uVar2;
  
  if (unaff_x21 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_06fd0380();
    uVar1 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_0920fa70 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_07108be8(uVar2,uVar1);
  return;
}


