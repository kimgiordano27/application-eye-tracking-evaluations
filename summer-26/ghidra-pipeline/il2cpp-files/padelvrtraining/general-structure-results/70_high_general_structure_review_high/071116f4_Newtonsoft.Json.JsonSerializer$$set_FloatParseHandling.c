/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_FloatParseHandling
ENTRY_POINT: 071116f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__set_FloatParseHandling(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  
  plVar2 = (long *)(unaff_x19 + 0xf0);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = FUN_07111734(param_1);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    *plVar2 = *(long *)(lVar1 + 0x20);
    thunk_FUN_03d1023c(plVar2);
    lVar1 = *plVar2;
  }
  return lVar1;
}


