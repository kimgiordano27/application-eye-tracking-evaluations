/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetMatchingConverter
ENTRY_POINT: 05a811b0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__GetMatchingConverter(void)

{
  int in_w8;
  long unaff_x19;
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_05a7efe0();
  lVar1 = *(long *)PTR_DAT_06fa33a8;
  if (*(uint *)(unaff_x19 + 0x90) < in_stack_00000008._4_4_) {
    FUN_05b0fafc(0);
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0x88);
  if ((*(byte *)(*(long *)(lVar1 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  auVar3 = FUN_04ba599c(uVar2,in_stack_00000008._4_4_,*(undefined8 *)PTR_DAT_06fa33b0);
  *(undefined1 (*) [16])(unaff_x19 + 0x98) = auVar3;
  return;
}


