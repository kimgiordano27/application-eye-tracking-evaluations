/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetReferenceResolver
ENTRY_POINT: 079d46c4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__GetReferenceResolver(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_2 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar3 = thunk_FUN_0448520c();
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f22398);
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f42c78);
    FUN_0799eb50(uVar3,uVar4,uVar5,0);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f42c80);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,uVar4);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (lVar6 == 0) {
      return 0;
    }
    plVar1 = *(long **)(lVar6 + 0x10);
    if (plVar1 == (long *)0x0) break;
    uVar2 = (**(code **)(*plVar1 + 0x138))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x140));
    if ((uVar2 & 1) != 0) {
      return *(undefined8 *)(lVar6 + 0x18);
    }
    lVar6 = *(long *)(lVar6 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


