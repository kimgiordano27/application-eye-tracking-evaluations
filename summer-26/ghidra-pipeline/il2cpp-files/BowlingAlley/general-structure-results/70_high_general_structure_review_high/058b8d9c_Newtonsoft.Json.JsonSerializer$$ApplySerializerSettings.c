/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ApplySerializerSettings
ENTRY_POINT: 058b8d9c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_JsonSerializer__ApplySerializerSettings(uint param_1)

{
  uint uVar1;
  int in_w8;
  int unaff_w21;
  
  uVar1 = in_w8 + (param_1 & 0xffff);
  if (uVar1 < 0x400) {
    uVar1 = uVar1 + unaff_w21 * 0x400 + 0x10000;
  }
  else {
    uVar1 = FUN_057a62b4();
    uVar1 = uVar1 & 0xffff;
  }
  return uVar1;
}


