/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Formatting
ENTRY_POINT: 05e2768c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__set_Formatting(long param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_2 == 2) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
  }
  else if (param_2 == 1) {
    puVar2 = (undefined8 *)(param_1 + 8);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(lVar1 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    puVar2 = (undefined8 *)(lVar1 + (long)(int)param_2 * 8 + 0x20);
  }
  return *puVar2;
}


