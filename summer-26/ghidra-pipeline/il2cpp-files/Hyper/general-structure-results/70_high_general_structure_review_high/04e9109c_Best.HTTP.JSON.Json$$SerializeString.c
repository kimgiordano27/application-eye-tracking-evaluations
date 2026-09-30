/*
FUNCTION_NAME: Best.HTTP.JSON.Json$$SerializeString
ENTRY_POINT: 04e9109c
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Best_HTTP_JSON_Json__SerializeString(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  bVar3 = false;
  uVar2 = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0x18) == uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (*(long *)(param_1 + 0x20 + uVar2 * 8) != 0) break;
    uVar1 = uVar2 + 1;
    bVar3 = 2 < uVar2;
    uVar2 = uVar1;
    if (uVar1 == 4) {
      return bVar3;
    }
  }
  return bVar3;
}


