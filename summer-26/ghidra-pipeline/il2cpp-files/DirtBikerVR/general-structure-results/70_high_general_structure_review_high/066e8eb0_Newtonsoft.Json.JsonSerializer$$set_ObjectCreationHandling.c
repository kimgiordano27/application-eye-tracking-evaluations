/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ObjectCreationHandling
ENTRY_POINT: 066e8eb0
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


void Newtonsoft_Json_JsonSerializer__set_ObjectCreationHandling(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(unaff_x21 + 0xbc0);
  FUN_06779364(param_1,0);
  if (unaff_x20 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = *puVar1;
  }
  else {
    *(long *)(unaff_x19 + 0x18) = unaff_x20;
  }
  thunk_FUN_03afed3c();
  *(undefined8 *)(unaff_x19 + 0x10) = *puVar1;
  thunk_FUN_03afed3c();
  *(undefined8 *)(unaff_x19 + 0x20) = *puVar1;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x20));
  return;
}


