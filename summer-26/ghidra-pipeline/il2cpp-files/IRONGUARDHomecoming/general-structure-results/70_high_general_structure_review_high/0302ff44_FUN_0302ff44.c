/*
FUNCTION_NAME: FUN_0302ff44
ENTRY_POINT: 0302ff44
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


void FUN_0302ff44(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint local_28;
  uint local_24;
  undefined *puVar4;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar5,uVar6,0);
  }
  else {
    if ((int)param_3 < 0) {
      local_24 = param_3;
      uVar6 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar6 = thunk_FUN_01f113fc(uVar6,&local_24);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      uVar2 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                );
      puVar4 = 
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
              if (*(uint *)(param_2 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar6 = *(undefined8 *)(lVar7 + 0x28);
              lVar1 = param_2 + (long)(int)param_3 * 0x10;
              param_3 = param_3 + 1;
              *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar7 + 0x30);
              *(undefined8 *)(lVar1 + 0x20) = uVar6;
              thunk_FUN_01f51358(lVar1 + 0x28,0);
              lVar7 = *(long *)(lVar7 + 0x18);
            } while (lVar7 != *(long *)(param_1 + 0x10));
          }
          return;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar5 = thunk_FUN_01f117cc();
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_FixedString4096Bytes_CheckCapacityInRange__
                                  );
        FUN_034f6754(uVar5,uVar6,0);
        goto LAB_0303010c;
      }
      local_28 = param_3;
      uVar6 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar6 = thunk_FUN_01f113fc(uVar6,&local_28);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      uVar2 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                );
      puVar4 = Method_Unity_Collections_FixedString32Bytes_CheckLengthInRange__;
    }
    uVar3 = thunk_FUN_01efb3a4(puVar4);
    FUN_034f48f0(uVar5,uVar2,uVar6,uVar3,0);
  }
LAB_0303010c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,param_4);
}


