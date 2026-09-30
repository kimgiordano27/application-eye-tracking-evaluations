/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ConstructorHandling
ENTRY_POINT: 07112a00
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ConstructorHandling(void)

{
  undefined8 uVar1;
  int in_w8;
  undefined4 uVar2;
  long unaff_x20;
  long unaff_x21;
  char unaff_w22;
  long *unaff_x23;
  
  if (in_w8 == 0) {
    FUN_03c8f898(PTR_DAT_08e83798);
    *(undefined1 *)(unaff_x21 + 0x18d) = 1;
  }
  if (unaff_x20 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = System_Convert__ToInt16();
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_070fc18c((int)unaff_w22,uVar1,uVar2);
  return;
}


