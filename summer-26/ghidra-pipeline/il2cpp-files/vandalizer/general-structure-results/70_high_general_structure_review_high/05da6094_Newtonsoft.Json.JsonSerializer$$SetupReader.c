/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SetupReader
ENTRY_POINT: 05da6094
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__SetupReader(long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)param_1[2];
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
    if (iVar1 <= param_2) {
      thunk_FUN_03257e30(PTR_DAT_0759e028);
      uVar3 = thunk_FUN_0322f148();
      uVar4 = thunk_FUN_03257e30(PTR_DAT_0759c148);
      uVar5 = thunk_FUN_03257e30(PTR_DAT_075d6798);
      FUN_05d72b58(uVar3,uVar4,uVar5,0);
      uVar4 = thunk_FUN_03257e30(PTR_DAT_075ea8f8);
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar3,uVar4);
    }
    (**(code **)(*param_1 + 0x2b8))(param_1,param_3,*(undefined8 *)(*param_1 + 0x2c0));
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x2e8))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x2f0));
      (**(code **)(*param_1 + 0x278))
                (param_1,param_2,uVar3,param_3,*(undefined8 *)(*param_1 + 0x280));
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x2f8))(plVar2,param_2,param_3,*(undefined8 *)(*plVar2 + 0x300));
        (**(code **)(*param_1 + 0x2c8))
                  (param_1,param_2,uVar3,param_3,*(undefined8 *)(*param_1 + 0x2d0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


