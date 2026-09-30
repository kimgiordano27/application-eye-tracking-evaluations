/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ReferenceLoopHandling
ENTRY_POINT: 04d091b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__set_ReferenceLoopHandling(void)

{
  ulong uVar1;
  uint unaff_w19;
  
  uVar1 = FUN_04d09204();
  if ((uVar1 & 1) != 0) {
    if (0xffe5 < (unaff_w19 - 0x5b & 0xffff)) {
      unaff_w19 = unaff_w19 | 0x20;
    }
    return (ulong)unaff_w19;
  }
  uVar1 = FUN_04d09320();
  return uVar1;
}


