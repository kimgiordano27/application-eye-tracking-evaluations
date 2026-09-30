/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewDictionary
ENTRY_POINT: 074e3598
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined4 uVar4;
  long unaff_x21;
  long unaff_x22;
  
  FUN_0403162c(PTR_DAT_08f9f500);
  *(undefined1 *)(unaff_x22 + 0xead) = 1;
  uVar3 = *unaff_x20;
  if (DAT_0953f498 == '\0') {
    FUN_0403162c(PTR_DAT_08f8ca88);
    DAT_0953f498 = '\x01';
  }
  puVar1 = PTR_DAT_08f9f500;
  if (unaff_x21 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_0736648c();
    uVar4 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_074e3100(uVar3,uVar2,uVar4);
  return;
}


