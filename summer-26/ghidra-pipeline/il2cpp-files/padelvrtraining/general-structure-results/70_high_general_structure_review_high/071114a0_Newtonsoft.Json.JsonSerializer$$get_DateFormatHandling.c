/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateFormatHandling
ENTRY_POINT: 071114a0
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


long Newtonsoft_Json_JsonSerializer__get_DateFormatHandling(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x108) != 0) {
    return *(long *)(param_1 + 0x108);
  }
  plVar2 = *(long **)(param_1 + 0x78);
  if (plVar2 != (long *)0x0) {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
    if (lVar3 != 0) {
      plVar2 = (long *)(param_1 + 0x108);
      lVar3 = FUN_0712db08(lVar3,uVar1,0);
      *plVar2 = lVar3;
      thunk_FUN_03d1023c(plVar2,lVar3);
      return *plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


