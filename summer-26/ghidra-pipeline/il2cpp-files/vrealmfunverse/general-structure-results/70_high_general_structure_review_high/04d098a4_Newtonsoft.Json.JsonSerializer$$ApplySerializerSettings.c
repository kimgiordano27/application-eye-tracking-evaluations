/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ApplySerializerSettings
ENTRY_POINT: 04d098a4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


ulong Newtonsoft_Json_JsonSerializer__ApplySerializerSettings(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  
  if (((param_2 & 0xffff) < 0x80) && (uVar1 = FUN_04d09204(param_1), (uVar1 & 1) != 0)) {
    if (0xffe5 < (param_2 - 0x7b & 0xffff)) {
      param_2 = param_2 & 0x5f;
    }
    return (ulong)param_2;
  }
  uVar1 = FUN_04d09920(param_1,param_2);
  return uVar1;
}


