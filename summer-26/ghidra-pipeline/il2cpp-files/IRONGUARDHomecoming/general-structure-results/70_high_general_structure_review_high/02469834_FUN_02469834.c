/*
FUNCTION_NAME: FUN_02469834
ENTRY_POINT: 02469834
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


void FUN_02469834(undefined8 *param_1,int param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_40;
  ulong local_38;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_01ecafa0(param_3);
  }
  if ((param_2 < 0) ||
     (iVar3 = UnityEngine_UIElements_VisualTreeUpdater__SetDefaultUpdaters(param_1,0),
     iVar3 <= param_2)) {
    uVar4 = UnityEngine_UIElements_VisualTreeUpdater__SetDefaultUpdaters(param_1,0);
    puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_38 = CONCAT44(local_38._4_4_,uVar4);
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar6 = thunk_FUN_01f113fc(uVar6,&local_38);
    local_40 = CONCAT44(local_40._4_4_,param_2);
    uVar7 = thunk_FUN_01efb3a4(puVar2);
    uVar7 = thunk_FUN_01f113fc(uVar7,&local_40);
    uVar8 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<uint,_uint,_UintOptions>__);
    uVar9 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<ulong,_ulong,_NoOptions>__);
    uVar6 = FUN_0340f334(uVar8,uVar9,uVar6,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar7 = thunk_FUN_01f117cc();
    FUN_034f7db4(uVar7,uVar6,0);
  }
  else {
    uVar5 = FUN_040551ac(*param_1,param_2,0);
    iVar3 = (**(code **)**(undefined8 **)(param_3 + 0x38))
                      ((undefined8 *)**(undefined8 **)(param_3 + 0x38));
    puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__;
    local_40 = (ulong)iVar3;
    uVar1 = 0;
    if (local_40 != 0) {
      uVar1 = uVar5 / local_40;
    }
    if (uVar5 == uVar1 * local_40) {
      uVar6 = FUN_04055168(*param_1,param_2,0);
      uVar6 = FUN_035b5e80(uVar6,0);
                    /* WARNING: Could not recover jumptable at 0x024698ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 8))(uVar6,uVar1 & 0xffffffff,1);
      return;
    }
    local_38 = uVar5;
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                              );
    uVar6 = thunk_FUN_01f113fc(uVar6,&local_38);
    uVar7 = thunk_FUN_01efb3a4(puVar2);
    uVar7 = thunk_FUN_01f113fc(uVar7,&local_40);
    uVar8 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<Vector2,_Vector2,_VectorOptions>__
                              );
    uVar9 = thunk_FUN_01efb3a4(
                              Method_DG_Tweening_DOTween_ApplyTo<Vector3,_Vector3[],_Vector3ArrayOptions>__
                              );
    uVar6 = FUN_0340f334(uVar8,uVar9,uVar6,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar7,uVar6,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_3);
}


