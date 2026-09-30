/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateTimeZoneHandling
ENTRY_POINT: 04ec5d2c
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ec5dbc) */

uint Newtonsoft_Json_JsonSerializerSettings__set_DateTimeZoneHandling(void)

{
  uint uVar1;
  int in_w8;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_02cd038c();
  }
  uVar1 = AkSoundEnginePINVOKE__CSharp_AkChannelConfig_eConfigType_get();
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_04e562ec();
  }
  return uVar1 & 1;
}


