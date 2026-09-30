/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Converters
ENTRY_POINT: 06762e40
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Converters(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  long unaff_x20;
  long unaff_x21;
  
  if (in_w8 == 0) {
    FUN_03a8a718(PTR_DAT_08493e18);
    *(undefined1 *)(unaff_x21 + 0xb7) = 1;
  }
  uVar2 = FUN_065cab58();
  uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  uVar3 = FUN_066d1144(0);
  FUN_06762ea4(uVar2,uVar1,7,uVar3);
  return;
}


