/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$PopulateInternal
ENTRY_POINT: 079d640c
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


void Newtonsoft_Json_JsonSerializer__PopulateInternal(long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  
  if (param_1 != (long *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
    if (iVar1 <= param_2) {
      thunk_FUN_044adef4(PTR_DAT_09f25200);
      uVar3 = thunk_FUN_0448520c();
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09f251f8);
      uVar5 = thunk_FUN_044adef4(PTR_DAT_09f25228);
      FUN_0799a4bc(uVar3,uVar4,uVar5,0);
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09f42d60);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar3,uVar4);
    }
    (**(code **)(*unaff_x20 + 0x2b8))();
    plVar2 = (long *)unaff_x20[2];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x2e8))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x2f0));
      (**(code **)(*unaff_x20 + 0x278))();
      plVar2 = (long *)unaff_x20[2];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x2f8))(plVar2,param_2,param_3,*(undefined8 *)(*plVar2 + 0x300));
        (**(code **)(*unaff_x20 + 0x2c8))();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


