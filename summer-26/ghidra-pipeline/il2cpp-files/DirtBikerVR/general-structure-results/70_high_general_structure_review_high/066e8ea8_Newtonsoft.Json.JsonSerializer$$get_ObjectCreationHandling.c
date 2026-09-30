/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ObjectCreationHandling
ENTRY_POINT: 066e8ea8
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


void Newtonsoft_Json_JsonSerializer__get_ObjectCreationHandling(void)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  puVar1 = PTR_DAT_08486bc0;
  FUN_06779364();
  if (unaff_x20 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)puVar1;
  }
  else {
    *(long *)(unaff_x19 + 0x18) = unaff_x20;
  }
  thunk_FUN_03afed3c();
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)puVar1;
  thunk_FUN_03afed3c();
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)puVar1;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x20));
  return;
}


