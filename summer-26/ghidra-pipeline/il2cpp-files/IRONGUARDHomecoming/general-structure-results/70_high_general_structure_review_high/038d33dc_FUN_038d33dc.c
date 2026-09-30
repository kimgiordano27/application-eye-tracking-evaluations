/*
FUNCTION_NAME: FUN_038d33dc
ENTRY_POINT: 038d33dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_038d33dc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_048380a1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048380a1 = 1;
  }
  puVar4 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    uVar1 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__);
    FUN_034efd20(uVar2,uVar1,0);
  }
  else {
    uVar1 = thunk_FUN_01ecaf38(param_2,0);
    uVar2 = thunk_FUN_01ecaf38(param_1,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar3 = FUN_03583338(uVar1,uVar2,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_0340e600(*(undefined8 *)(param_2 + 0x10),param_1[2],0);
      if ((uVar3 & 1) == 0) {
        fVar6 = *(float *)(param_1 + 4);
        fVar5 = *(float *)(param_2 + 0x20);
        if (fVar6 != 0.0) {
          if (fVar5 == 0.0) goto LAB_038d34a8;
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0
             ) {
            thunk_FUN_01ee6d7c();
          }
          fVar5 = (float)FUN_0356bd58(fVar6,fVar5,0);
        }
        *(float *)(param_1 + 4) = fVar5;
LAB_038d34a8:
        *(byte *)((long)param_1 + 0x24) =
             *(byte *)(param_2 + 0x24) & *(byte *)((long)param_1 + 0x24);
        if (param_1[5] == 0) {
          param_1[5] = *(long *)(param_2 + 0x28);
          thunk_FUN_01f51358();
        }
        *(byte *)(param_1 + 6) = *(byte *)(param_2 + 0x30) & *(byte *)(param_1 + 6);
        (**(code **)(*param_1 + 0x178))(param_1,param_2,*(undefined8 *)(*param_1 + 0x180));
        return param_1;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar2 = thunk_FUN_01f117cc();
      puVar4 = StringLiteral_2805;
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar2 = thunk_FUN_01f117cc();
      puVar4 = StringLiteral_2804;
    }
    uVar1 = thunk_FUN_01efb3a4(puVar4);
    FUN_034f6754(uVar2,uVar1,0);
  }
  uVar1 = thunk_FUN_01efb3a4(StringLiteral_2806);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar1);
}


