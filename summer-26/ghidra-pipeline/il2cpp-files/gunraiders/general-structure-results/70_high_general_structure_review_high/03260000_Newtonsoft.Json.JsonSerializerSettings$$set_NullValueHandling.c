/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_NullValueHandling
ENTRY_POINT: 03260000
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x248))
                      (plVar1,param_2,0,*(undefined4 *)(param_2 + 0x18),
                       *(undefined8 *)(*plVar1 + 0x250));
    if ((lVar2 != 0) && (plVar1 = *(long **)(param_1 + 0x10), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0326004c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x378))
                (plVar1,lVar2,0,*(undefined4 *)(lVar2 + 0x18),*(undefined8 *)(*plVar1 + 0x380));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


