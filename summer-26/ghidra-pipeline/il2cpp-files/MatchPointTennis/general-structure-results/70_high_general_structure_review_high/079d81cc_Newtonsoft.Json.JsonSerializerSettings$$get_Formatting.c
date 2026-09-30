/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Formatting
ENTRY_POINT: 079d81cc
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


void Newtonsoft_Json_JsonSerializerSettings__get_Formatting(void)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_044a54b4();
  }
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = **(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18));
  return;
}


