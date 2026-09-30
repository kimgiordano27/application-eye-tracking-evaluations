/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeToken
ENTRY_POINT: 072080fc
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Meta_WitAi_Json_JsonConvert__SerializeToken(long param_1,long param_2)

{
  bool in_NG;
  undefined4 uVar1;
  long lVar2;
  uint in_w9;
  
  if (in_NG) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(uint *)(lVar2 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar2 + (ulong)in_w9 * 8 + 0x20);
    uVar1 = 1;
  }
  return uVar1;
}


