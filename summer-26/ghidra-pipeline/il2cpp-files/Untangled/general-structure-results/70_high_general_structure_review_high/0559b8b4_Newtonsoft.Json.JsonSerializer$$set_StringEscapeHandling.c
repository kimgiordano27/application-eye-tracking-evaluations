/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_StringEscapeHandling
ENTRY_POINT: 0559b8b4
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__set_StringEscapeHandling(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0xd8);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = FUN_0559b8fc(param_1);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *plVar2 = *(long *)(lVar1 + 0x20);
    thunk_FUN_02f411dc(plVar2);
    lVar1 = *plVar2;
  }
  return lVar1;
}


