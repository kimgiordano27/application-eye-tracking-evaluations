/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_CanDeserialize
ENTRY_POINT: 055ff680
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonArrayContract__get_CanDeserialize(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 unaff_w20;
  undefined4 uVar3;
  long unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xab6) = 1;
  puVar1 = PTR_DAT_06d4e298;
  if (unaff_x21 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_0546365c();
    uVar3 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_055fd808(unaff_w20,uVar2,uVar3);
  return;
}


