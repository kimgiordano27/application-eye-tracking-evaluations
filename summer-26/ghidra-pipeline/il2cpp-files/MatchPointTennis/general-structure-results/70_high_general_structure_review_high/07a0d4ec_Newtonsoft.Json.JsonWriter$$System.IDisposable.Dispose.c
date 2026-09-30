/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$System.IDisposable.Dispose
ENTRY_POINT: 07a0d4ec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__System_IDisposable_Dispose
               (long *param_1,long param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_0a524f24 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f43448);
    FUN_04447ba8(PTR_DAT_09f1e590);
    DAT_0a524f24 = 1;
  }
  puVar2 = PTR_DAT_09f43448;
  puVar1 = PTR_DAT_09f1e590;
  if (param_2 == 0) {
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f433b0);
    uVar5 = FUN_07a80dec(uVar5,0);
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar6 = thunk_FUN_0448520c();
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f28a48);
    FUN_0799eb50(uVar6,uVar4,uVar5,0);
  }
  else {
    if ((param_4 < 0) || (param_3 < 0)) {
      puVar1 = PTR_DAT_09f251f8;
      if (-1 < param_3) {
        puVar1 = PTR_DAT_09f25230;
      }
      uVar5 = thunk_FUN_044adef4(puVar1);
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09f25208);
      uVar4 = FUN_07a80dec(uVar4,0);
      thunk_FUN_044adef4(PTR_DAT_09f25200);
      uVar6 = thunk_FUN_0448520c();
      FUN_0799a4bc(uVar6,uVar5,uVar4,0);
      uVar5 = thunk_FUN_044adef4(PTR_DAT_09f43f88);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar6,uVar5);
    }
    if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
      uVar3 = (**(code **)(*param_1 + 0x1e8))
                        (param_1,param_2,param_3,param_4,*(undefined8 *)(*param_1 + 0x1f0));
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)puVar1);
      }
      FUN_04feca08(uVar3,*(undefined8 *)puVar2);
      return;
    }
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f25210);
    uVar5 = FUN_07a80dec(uVar5,0);
    thunk_FUN_044adef4(PTR_DAT_09f217f8);
    uVar6 = thunk_FUN_0448520c();
    FUN_0799d598(uVar6,uVar5,0);
  }
  uVar5 = thunk_FUN_044adef4(PTR_DAT_09f43f88);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar6,uVar5);
}


