/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$BuildStateArray
ENTRY_POINT: 05a89b3c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_JsonWriter__BuildStateArray(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = FUN_05a89ad4();
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x18) == 0) {
      uVar4 = FUN_05a899fc(param_1,param_2);
      return uVar4;
    }
    if (param_2 == 0) {
      plVar3 = *(long **)(param_1 + 0x78);
      if (plVar3 == (long *)0x0) goto LAB_05a89bc0;
      param_2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
    }
    lVar2 = *(long *)(param_1 + 0x128);
    if (lVar2 != 0) {
      uVar1 = param_2 - 1;
      if ((-1 < (int)uVar1) && ((int)uVar1 < (int)*(uint *)(lVar2 + 0x18))) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(undefined8 *)(lVar2 + (ulong)uVar1 * 8 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      thunk_FUN_03037804(PTR_DAT_06f7a510);
      uVar4 = thunk_FUN_0301080c();
      uVar5 = thunk_FUN_03037804(PTR_DAT_06faa5a8);
      uVar6 = thunk_FUN_03037804(PTR_DAT_06faa5b0);
      FUN_05a61b10(uVar4,uVar5,uVar6,0);
      uVar5 = thunk_FUN_03037804(PTR_DAT_06faa5c0);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar4,uVar5);
    }
  }
LAB_05a89bc0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


