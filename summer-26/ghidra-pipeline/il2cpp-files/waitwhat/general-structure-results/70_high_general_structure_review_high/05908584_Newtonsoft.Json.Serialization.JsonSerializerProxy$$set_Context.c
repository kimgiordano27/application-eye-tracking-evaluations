/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Context
ENTRY_POINT: 05908584
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Context(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined4 *unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  undefined4 *unaff_x24;
  
  if (unaff_w21 < unaff_w23) {
    uVar2 = 0;
  }
  else {
    puVar1 = &stack0x00000010;
    if (unaff_w22 != 0) {
      puVar1 = &stack0x00000020;
    }
    FUN_049f4510(puVar1);
    *unaff_x19 = *unaff_x24;
    uVar2 = 1;
  }
  return uVar2;
}


