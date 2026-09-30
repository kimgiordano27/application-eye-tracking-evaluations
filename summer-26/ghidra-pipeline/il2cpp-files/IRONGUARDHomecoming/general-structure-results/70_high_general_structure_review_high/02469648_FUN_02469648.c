/*
FUNCTION_NAME: FUN_02469648
ENTRY_POINT: 02469648
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02469648(undefined8 *param_1,int param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_38;
  ulong local_28;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_01ecafa0(param_3);
  }
  if ((param_2 < 0) ||
     (iVar2 = UnityEngine_UIElements_VisualTreeUpdater__SetDefaultUpdaters(param_1,0),
     iVar2 <= param_2)) {
    uVar3 = UnityEngine_UIElements_VisualTreeUpdater__SetDefaultUpdaters(param_1,0);
    puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_28 = CONCAT44(local_28._4_4_,uVar3);
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_28);
    local_38 = CONCAT44(local_38._4_4_,param_2);
    uVar5 = thunk_FUN_01efb3a4(puVar1);
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_38);
    uVar6 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<uint,_uint,_UintOptions>__);
    uVar7 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<ulong,_ulong,_NoOptions>__);
    uVar4 = FUN_0340f334(uVar6,uVar7,uVar4,uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    FUN_034f7db4(uVar5,uVar4,0);
  }
  else {
    local_28 = FUN_040551ac(*param_1,param_2,0);
    puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__;
    if (local_28 % 0xc == 0) {
      uVar4 = FUN_04055168(*param_1,param_2,0);
      uVar4 = FUN_035b5e80(uVar4,0);
      FUN_0239ac34(uVar4,local_28 / 0xc & 0xffffffff,1,
                   *(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
      return;
    }
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                              );
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_28);
    local_38 = 0xc;
    uVar5 = thunk_FUN_01efb3a4(puVar1);
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_38);
    uVar6 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<Vector2,_Vector2,_VectorOptions>__
                              );
    uVar7 = thunk_FUN_01efb3a4(
                              Method_DG_Tweening_DOTween_ApplyTo<Vector3,_Vector3[],_Vector3ArrayOptions>__
                              );
    uVar4 = FUN_0340f334(uVar6,uVar7,uVar4,uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar5,uVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,param_3);
}


