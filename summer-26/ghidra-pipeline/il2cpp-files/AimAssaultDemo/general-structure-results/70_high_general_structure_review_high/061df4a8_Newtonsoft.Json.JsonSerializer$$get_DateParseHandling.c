/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateParseHandling
ENTRY_POINT: 061df4a8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_DateParseHandling(int param_1)

{
  undefined8 uVar1;
  
  if ((DAT_0825b5ec & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d98ab0);
    DAT_0825b5ec = 1;
  }
  if ((param_1 < 0x7feffffd) && (0x7feffffd < (uint)(param_1 << 1))) {
    return 0x7feffffd;
  }
  if (*(int *)(*(long *)PTR_DAT_07d98ab0 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_061df31c(param_1 << 1);
  return uVar1;
}


