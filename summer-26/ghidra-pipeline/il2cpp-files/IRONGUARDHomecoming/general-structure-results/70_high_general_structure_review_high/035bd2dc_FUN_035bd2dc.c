/*
FUNCTION_NAME: FUN_035bd2dc
ENTRY_POINT: 035bd2dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_035bd2dc(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  long lVar6;
  ulong local_50;
  undefined8 uStack_48;
  undefined *puVar4;
  
  if ((DAT_048335d9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Gameplay_Creeps_CreepsSpawnerService_<>c_<Awake>b__7_1__);
    DAT_048335d9 = 1;
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    FUN_035bc4dc(param_1);
  }
  FUN_035bd83c(param_1);
  if ((int)param_2 < 0) {
LAB_035bd424:
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_Gameplay_Creeps_CreepsSpawnerService_<>c_<Awake>b__7_3__);
    puVar4 = Method_Gameplay_Creeps_CreepsSpawnerService_<>c_<Awake>b__7_6__;
  }
  else {
    if (*(int *)(param_1 + 0x7c) <= (int)param_2) goto LAB_035bd424;
    if (-1 < (int)param_3) {
      if ((int)param_3 < *(int *)(param_1 + 0x78)) {
        lVar6 = *(long *)(param_1 + 200);
        if (lVar6 != 0) {
          lVar1 = FUN_01f08890(*(undefined8 *)
                                Method_Gameplay_Creeps_CreepsSpawnerService_<>c_<Awake>b__7_1__,2);
          uStack_48 = 0;
          local_50 = (ulong)param_3;
          thunk_FUN_01f51358(&uStack_48,0);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar1 + 0x18) != 0) {
            *(undefined8 *)(lVar1 + 0x28) = uStack_48;
            *(ulong *)(lVar1 + 0x20) = local_50;
            thunk_FUN_01f51358((undefined8 *)(lVar1 + 0x28),0);
            uStack_48 = 0;
            local_50 = (ulong)param_2;
            thunk_FUN_01f51358(&uStack_48,0);
            if (1 < *(uint *)(lVar1 + 0x18)) {
              *(ulong *)(lVar1 + 0x30) = local_50;
              *(undefined8 *)(lVar1 + 0x38) = uStack_48;
              thunk_FUN_01f51358((undefined8 *)(lVar1 + 0x38),0);
              uVar2 = FUN_035bebc0(lVar6,lVar1);
              Oculus_Interaction_HandGrab_Visuals_HandPuppet__CopyCachedJoints(param_1,uVar2);
              *(uint *)(param_1 + 0x18) = param_2;
              *(uint *)(param_1 + 0x1c) = param_3;
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
        uVar5 = thunk_FUN_01f117cc();
        uVar2 = thunk_FUN_01efb3a4(
                                  Method_Gameplay_Creeps_CreepsSpawnerService_<>c__DisplayClass7_0_<Awake>b__5__
                                  );
        FUN_0356663c(uVar5,uVar2,0);
        goto LAB_035bd4d0;
      }
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(
                              Method_Gameplay_Creeps_CreepsSpawnerService_<>c__DisplayClass7_0_<Awake>b__2__
                              );
    puVar4 = Method_Gameplay_Creeps_CreepsSpawnerService_<>c__DisplayClass7_0_<Awake>b__4__;
  }
  uVar3 = thunk_FUN_01efb3a4(puVar4);
  FUN_034f3578(uVar5,uVar2,uVar3,0);
LAB_035bd4d0:
  uVar2 = thunk_FUN_01efb3a4(
                            Method_Gameplay_Creeps_CreepsSpawnerService_<>c__DisplayClass7_0_<Awake>b__7__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar2);
}


