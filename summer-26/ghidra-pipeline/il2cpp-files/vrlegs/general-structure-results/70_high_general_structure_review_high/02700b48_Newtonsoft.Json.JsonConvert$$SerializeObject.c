/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 02700b48
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  undefined8 uVar1;
  int unaff_w19;
  int unaff_w20;
  long unaff_x25;
  
  FUN_01ab69ac(PTR_DAT_03cefba0);
  FUN_01ab69ac(PTR_DAT_03cef9c0);
  *(undefined1 *)(unaff_x25 + 0xd85) = 1;
  if (unaff_w19 == unaff_w20) {
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


