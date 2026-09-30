/*
FUNCTION_NAME: FUN_02355704
ENTRY_POINT: 02355704
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


void FUN_02355704(long *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_01ecafa0(param_4);
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_System_Collections_Comparer_Compare__);
    FUN_034efd20(uVar3,uVar2,0);
  }
  else {
    lVar1 = **(long **)(param_4 + 0x38);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    lVar5 = *param_1;
    if ((*(byte *)(lVar1 + 0x130) <= *(byte *)(lVar5 + 0x130)) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) == lVar1)) {
                    /* WARNING: Could not recover jumptable at 0x02355790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 600))(param_1,param_2,param_3,*(undefined8 *)(lVar5 + 0x260));
      return;
    }
    uVar2 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                              );
    uVar2 = FUN_01f08890(uVar2,5);
    FUN_01bc50c0();
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_10__);
    FUN_01bc5408(uVar2,0,uVar3);
    uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar4 = (long *)FUN_03579868(uVar3,0);
    FUN_01bc50c0();
    uVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    FUN_01bc50c0(uVar2);
    FUN_01bc5408(uVar2,1,uVar3);
    FUN_01bc50c0(uVar2);
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_11__);
    FUN_01bc5408(uVar2,2,uVar3);
    FUN_01bc50c0(param_1);
    plVar4 = (long *)thunk_FUN_01ecaf38(param_1,0);
    FUN_01bc50c0();
    uVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    FUN_01bc50c0(uVar2);
    FUN_01bc5408(uVar2,3,uVar3);
    FUN_01bc50c0(uVar2);
    uVar3 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                              );
    FUN_01bc5408(uVar2,4,uVar3);
    uVar2 = FUN_0340efe8(uVar2,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar3,uVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,param_4);
}


