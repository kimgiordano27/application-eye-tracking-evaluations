/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnDeserialized
ENTRY_POINT: 058f26cc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (unaff_x20 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_057bc4c8();
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  FUN_058f2904(unaff_x19 + 0x18,uVar1,uVar2,0);
  return *(undefined8 *)(unaff_x19 + 0x28);
}


