/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<Dictionary.Entry<object,-PokeInteractor.SurfaceHitCache.HitInfo>>
ENTRY_POINT: 023e34f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void System_Array__InternalArray__ICollection_CopyTo<Dictionary_Entry<object,_PokeInteractor_SurfaceHitCache_HitInfo>>
               (long param_1,long param_2,int param_3,int param_4,undefined8 *param_5,
               undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (param_1 == 0) {
    FUN_01ecafa0(param_7);
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar4,uVar5,0);
  }
  else if ((param_4 < 0) || (param_3 < 0)) {
    puVar1 = Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__;
    if (-1 < param_3) {
      puVar1 = 
      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__;
    }
    uVar5 = thunk_FUN_01efb3a4(puVar1);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    FUN_034f3578(uVar4,uVar5,uVar3,0);
  }
  else {
    if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
      lVar2 = *(long *)(*(long *)(param_7 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar6 = *(long *)(*(long *)(param_7 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      in_stack_00000020 = *param_5;
      in_stack_00000028 = param_5[1];
      in_stack_00000030 = param_5[2];
      in_stack_00000038 = param_5[3];
      FUN_026e82d4(**(long **)(lVar2 + 0xb8),param_2,param_3,param_4,&stack0x00000020,param_6,
                   *(undefined8 *)(*(long *)(param_7 + 0x38) + 0x30));
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                              );
    FUN_034f6754(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,param_7);
}


