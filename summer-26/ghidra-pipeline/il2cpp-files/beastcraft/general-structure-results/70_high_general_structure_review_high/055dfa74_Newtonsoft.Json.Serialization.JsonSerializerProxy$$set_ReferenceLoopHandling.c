/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ReferenceLoopHandling
ENTRY_POINT: 055dfa74
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ReferenceLoopHandling(long param_1)

{
  undefined *puVar1;
  undefined2 in_w9;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar2;
  undefined4 uStack000000000000000c;
  
  *(undefined2 *)(unaff_x19 + param_1 * 2) = in_w9;
  puVar1 = PTR_DAT_06a7ae10;
  FUN_05651144(*(undefined8 *)(unaff_x21 + 0x10),0);
  if (*(int *)(unaff_x21 + 0x18) < 0) {
    FUN_056265f0(0);
  }
  lVar2 = *(long *)puVar1;
  uStack000000000000000c = 0;
  if (unaff_w20 < *(int *)(unaff_x21 + 8) + ((*(byte *)(unaff_x21 + 0x1c) ^ 0xffffffff) & 1)) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_045dab70();
  return;
}


