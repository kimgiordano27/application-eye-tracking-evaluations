/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ContractResolver
ENTRY_POINT: 02707d40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_JsonSerializer__set_ContractResolver(void)

{
  uint uVar1;
  int in_w8;
  undefined4 uVar2;
  uint in_w9;
  uint in_w10;
  
  uVar1 = (in_w10 & 0xffff | 0x51e0000) + in_w8 * (in_w9 & 0xffff | 0xc28f0000);
  uVar2 = 0x16d;
  if ((uVar1 >> 4 | uVar1 * 0x10000000) < 0xa3d70b || 0x28f5c28 < (uVar1 >> 2 | uVar1 * 0x40000000))
  {
    uVar2 = 0x16e;
  }
  return uVar2;
}


