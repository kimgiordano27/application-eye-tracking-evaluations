/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_FloatFormatHandling
ENTRY_POINT: 0559b7d4
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


long Newtonsoft_Json_JsonSerializer__get_FloatFormatHandling(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long unaff_x19;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(unaff_x19 + 0x68);
  if (*plVar3 != 0) {
    return *plVar3;
  }
  plVar2 = *(long **)(param_1 + 0x78);
  if (plVar2 != (long *)0x0) {
    lVar4 = *(long *)(param_1 + 0x10);
    uVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
    if (lVar4 != 0) {
      lVar4 = FUN_055b7d2c(lVar4,uVar1,0);
      *plVar3 = lVar4;
      thunk_FUN_02f411dc(plVar3,lVar4);
      return *plVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


