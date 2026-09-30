/*
FUNCTION_NAME: FUN_0302c080
ENTRY_POINT: 0302c080
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0302c080(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint local_34;
  undefined *puVar3;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar4,uVar5,0);
  }
  else {
    if ((int)param_3 < 0) {
      local_34 = param_3;
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar5 = thunk_FUN_01f113fc(uVar5,&local_34);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      uVar1 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                );
      puVar3 = 
      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__;
    }
    else {
      if ((int)param_3 <= *(int *)(param_2 + 0x18)) {
        if (*(int *)(param_1 + 0x18) <= (int)(*(int *)(param_2 + 0x18) - param_3)) {
          lVar7 = *(long *)(param_1 + 0x10);
          if (lVar7 != 0) {
            do {
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar4 = *(undefined8 *)(lVar7 + 0x30);
              uVar5 = *(undefined8 *)(lVar7 + 0x28);
              if (*(uint *)(param_2 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar6 = param_2 + (long)(int)param_3 * 0x18;
              param_3 = param_3 + 1;
              *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar7 + 0x38);
              *(undefined8 *)(lVar6 + 0x28) = uVar4;
              *(undefined8 *)(lVar6 + 0x20) = uVar5;
              thunk_FUN_01f51358(lVar6 + 0x20,0);
              lVar7 = *(long *)(lVar7 + 0x18);
            } while (lVar7 != *(long *)(param_1 + 0x10));
          }
          return;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar4 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_FixedString4096Bytes_CheckCapacityInRange__
                                  );
        FUN_034f6754(uVar4,uVar5,0);
        goto LAB_0302c26c;
      }
      local_34 = param_3;
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar5 = thunk_FUN_01f113fc(uVar5,&local_34);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      uVar1 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                );
      puVar3 = Method_Unity_Collections_FixedString32Bytes_CheckLengthInRange__;
    }
    uVar2 = thunk_FUN_01efb3a4(puVar3);
    FUN_034f48f0(uVar4,uVar1,uVar5,uVar2,0);
  }
LAB_0302c26c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,param_4);
}


