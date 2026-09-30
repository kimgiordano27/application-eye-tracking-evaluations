/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 027007fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeObject(long param_1)

{
  undefined8 uVar1;
  int unaff_w19;
  int iVar2;
  long unaff_x25;
  long unaff_x26;
  
  if (*(char *)(unaff_x26 + 0x1cf) == '\0') {
    FUN_01ab69ac(PTR_DAT_03cdba00);
    *(undefined1 *)(unaff_x26 + 0x1cf) = 1;
  }
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_025bb98c(param_1,0);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  if (*(char *)(unaff_x25 + 0xd85) == '\0') {
    FUN_01ab69ac(PTR_DAT_03cefba0);
    FUN_01ab69ac(PTR_DAT_03cef9c0);
    *(undefined1 *)(unaff_x25 + 0xd85) = 1;
  }
  if (unaff_w19 == iVar2) {
    if (unaff_w19 != 0) {
      uVar1 = FUN_025c6a00();
      return uVar1;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


