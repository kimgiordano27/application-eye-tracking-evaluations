/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 058b8d68
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializer__Create(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_057a62b4();
  uVar1 = (uVar1 & 0xffff) - 0xd800;
  if (uVar1 < 0x400) {
    uVar2 = FUN_057a62b4();
    uVar2 = (uVar2 & 0xffff) - 0xdc00;
    if (uVar2 < 0x400) {
      return uVar2 + uVar1 * 0x400 + 0x10000;
    }
  }
  uVar1 = FUN_057a62b4();
  return uVar1 & 0xffff;
}


