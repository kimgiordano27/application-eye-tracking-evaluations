/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 07107cb4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject(undefined1 param_1 [16])

{
  uint uVar1;
  uint uVar2;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  char *unaff_x24;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_1._8_8_;
  uVar3 = param_1._0_8_;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x58) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  FUN_070eb51c((undefined8 *)(unaff_x19 + 0x10),unaff_w21,0);
  uVar2 = unaff_w20 | 0x10;
  if (unaff_w21 == 0) {
    uVar2 = unaff_w20;
  }
  uVar1 = uVar2 | 2;
  if (*unaff_x24 != '.') {
    uVar1 = uVar2;
  }
  uVar2 = 0x80;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  *(uint *)(unaff_x19 + 0x2b8) = uVar2;
  return;
}


