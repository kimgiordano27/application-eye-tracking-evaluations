/*
FUNCTION_NAME: FUN_06a36dfc
ENTRY_POINT: 06a36dfc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_06a36dfc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar3 = Method_System_Nullable<Vector2>_get_Value__;
  puVar2 = PTR_DAT_07279560;
  if ((DAT_076e2b39 & 1) == 0) {
    thunk_FUN_032e1da0(Method_Oculus_Platform_Request<LeaderboardEntryList>_OnComplete__);
    thunk_FUN_032e1da0(PTR_DAT_07279558);
    thunk_FUN_032e1da0(PTR_DAT_07279560);
    thunk_FUN_032e1da0(Method_System_Nullable<Vector2>_get_Value__);
    thunk_FUN_032e1da0(Method_Oculus_Platform_Request<LeaderboardList>__ctor__);
    DAT_076e2b39 = 1;
  }
  puVar1 = PTR_DAT_07279558;
  plVar4 = (long *)FUN_032d5d3c(*(undefined8 *)puVar2,4);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar3);
  }
  local_24 = FUN_06a35a9c(param_1);
  lVar5 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&local_24);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_06a37014:
    uVar7 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    thunk_FUN_0333a630(plVar4 + 4,lVar5);
    local_28 = FUN_06a35af0(param_1);
    lVar5 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&local_28);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_06a37014;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar5;
      thunk_FUN_0333a630(plVar4 + 5,lVar5);
      local_34 = *(undefined4 *)(param_1 + 0x18);
      lVar5 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&local_34);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_06a37014;
      puVar2 = Method_Oculus_Platform_Request<LeaderboardEntryList>_OnComplete__;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar5;
        thunk_FUN_0333a630(plVar4 + 6,lVar5);
        local_38 = *(undefined4 *)(param_1 + 0x1c);
        lVar5 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_38);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_06a37014;
        puVar2 = Method_Oculus_Platform_Request<LeaderboardList>__ctor__;
        if (3 < *(uint *)(plVar4 + 3)) {
          plVar4[7] = lVar5;
          thunk_FUN_0333a630(plVar4 + 7,lVar5);
          FUN_057ab6a4(*(undefined8 *)puVar2,plVar4,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


