/*
FUNCTION_NAME: FUN_03aad610
ENTRY_POINT: 03aad610
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03aad610(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_04838fc3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    DAT_04838fc3 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar6,uVar3,0);
  }
  else {
    if (param_3 < 0) {
      local_40 = CONCAT44(local_40._4_4_,param_3);
      uVar3 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar3 = thunk_FUN_01f113fc(uVar3,&local_40);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      uVar4 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                );
      uVar5 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                                );
      FUN_034f48f0(uVar6,uVar4,uVar3,uVar5,0);
      uVar3 = thunk_FUN_01efb3a4(StringLiteral_8792);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,uVar3);
    }
    iVar2 = FUN_03582fa8(param_2,0);
    puVar1 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    if (*(int *)(param_1 + 0x1c) <= iVar2 - param_3) {
      for (lVar7 = *(long *)(param_1 + 0x10); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
        local_40 = 0;
        uStack_38 = 0;
        FUN_0353c748(&local_40,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18),0);
        uStack_48 = uStack_38;
        local_50 = local_40;
        uVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_50);
        FUN_0358cf48(param_2,uVar3,param_3,0);
        param_3 = param_3 + 1;
      }
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_FixedString4096Bytes_CheckCapacityInRange__)
    ;
    FUN_034f6754(uVar6,uVar3,0);
  }
  uVar3 = thunk_FUN_01efb3a4(StringLiteral_8792);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar3);
}


