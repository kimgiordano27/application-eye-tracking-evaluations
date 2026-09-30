/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ReferenceLoopHandling
ENTRY_POINT: 06762fa0
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ReferenceLoopHandling(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  undefined4 unaff_w20;
  long unaff_x22;
  long unaff_x23;
  
  if (in_w8 == 0) {
    FUN_03a8a718(PTR_DAT_08493e18);
    *(undefined1 *)(unaff_x23 + 0xb7) = 1;
  }
  uVar2 = FUN_065cab58();
  uVar1 = *(undefined4 *)(unaff_x22 + 0x10);
  uVar3 = FUN_066d0fa4();
  FUN_06762ea4(uVar2,uVar1,unaff_w20,uVar3);
  return;
}


