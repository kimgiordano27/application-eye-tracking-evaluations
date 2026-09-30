/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$OnError
ENTRY_POINT: 079d7854
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__OnError(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_x9;
  undefined *puVar4;
  
  if (param_1 == *(long *)(in_x9 + 0x10)) {
    iVar1 = *(int *)(param_2 + 0x18);
    thunk_FUN_044adef4(PTR_DAT_09f20bb0);
    uVar2 = thunk_FUN_0448520c();
    puVar4 = PTR_DAT_09f28360;
    if (iVar1 == 0) {
      puVar4 = PTR_DAT_09f28368;
    }
    uVar3 = thunk_FUN_044adef4(puVar4);
    FUN_07a3e070(uVar2,uVar3,0);
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f42dd8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar2,uVar3);
  }
  return param_1;
}


