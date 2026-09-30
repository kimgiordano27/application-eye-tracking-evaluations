/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$get_ShouldSerialize
ENTRY_POINT: 074b1a40
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonProperty__get_ShouldSerialize(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  undefined4 uVar3;
  long unaff_x20;
  long unaff_x21;
  
  if (in_w8 == 0) {
    FUN_03f13384(PTR_DAT_0910b618);
    *(undefined1 *)(unaff_x21 + 0x6f8) = 1;
  }
  if (unaff_x20 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_07324190();
    uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  uVar2 = FUN_074350d4();
  FUN_074b187c(uVar1,uVar3,7,uVar2);
  return;
}


