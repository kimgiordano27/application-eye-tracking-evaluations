/*
FUNCTION_NAME: FUN_033e2684
ENTRY_POINT: 033e2684
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_033e2684(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RemoveBindingOverride__
                              );
    FUN_034efd20(uVar3,uVar4,0);
    uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,uVar4);
  }
  if (0xb < *(int *)(param_2 + 0x18)) {
    uVar1 = FUN_033e281c();
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar3 = thunk_FUN_01efb3a4(
                              Method_Oculus_Interaction_MonoBehaviourEndOfFrameExtensions_RegisterEndOfFrameCallback__
                              );
    local_28 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_28);
    uVar3 = FUN_03406290(uVar3,uVar4,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RemoveBindingOverride__
                              );
    FUN_034efd98(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar3);
  }
  uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
  FUN_01bc50c0(param_2);
  local_24 = (undefined4)*(undefined8 *)(param_2 + 0x18);
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar4 = thunk_FUN_01f113fc(uVar4,&local_24);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar5 = thunk_FUN_01f117cc();
  uVar2 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RemoveBindingOverride__
                            );
  FUN_034f48f0(uVar5,uVar2,uVar4,uVar3,0);
  uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar3);
}


