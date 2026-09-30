/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Converters
ENTRY_POINT: 058b8394
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_Converters(void)

{
  int in_w8;
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (in_w8 != 0) {
    return 0;
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
  auVar3 = FUN_058b651c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_07295db0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar1 = FUN_058b7088(uVar2,auVar3._0_8_,auVar3._8_8_,uVar1);
  return uVar1;
}


