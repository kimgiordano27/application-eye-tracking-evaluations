/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetConverter
ENTRY_POINT: 07a3eaa0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter(void)

{
  uint uVar1;
  uint uVar2;
  int in_w8;
  long *unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  
  if (in_w8 != 0) {
    FUN_04447ba8(PTR_DAT_09f40228);
    *(undefined1 *)(unaff_x22 + 0x1a8) = 1;
  }
  uVar2 = unaff_w21 ^ unaff_w20;
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = uVar2 + (unaff_w20 >> 0xc | unaff_w20 << 0x14);
  uVar2 = uVar1 ^ (uVar2 >> 0x17 | uVar2 << 9);
  return uVar2 + (uVar1 >> 5 | uVar1 * 0x8000000) ^ (uVar2 >> 0xd | uVar2 << 0x13);
}


