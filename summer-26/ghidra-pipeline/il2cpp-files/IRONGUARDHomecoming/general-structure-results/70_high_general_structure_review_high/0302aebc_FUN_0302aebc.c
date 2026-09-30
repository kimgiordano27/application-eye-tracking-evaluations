/*
FUNCTION_NAME: FUN_0302aebc
ENTRY_POINT: 0302aebc
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


void FUN_0302aebc(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint local_28;
  uint local_24;
  undefined *puVar5;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar6,uVar7,0);
  }
  else {
    if ((int)param_3 < 0) {
      local_24 = param_3;
      uVar7 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar7 = thunk_FUN_01f113fc(uVar7,&local_24);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      uVar3 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                );
      puVar5 = 
      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__;
    }
    else {
      if ((int)param_3 <= *(int *)(param_2 + 0x18)) {
        if (*(int *)(param_1 + 0x18) <= (int)(*(int *)(param_2 + 0x18) - param_3)) {
          lVar8 = *(long *)(param_1 + 0x10);
          if (lVar8 != 0) {
            do {
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(param_2 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar7 = *(undefined8 *)(lVar8 + 0x28);
              lVar1 = param_2 + (long)(int)param_3 * 0x10;
              puVar2 = (undefined8 *)(lVar1 + 0x20);
              *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar8 + 0x30);
              *puVar2 = uVar7;
              param_3 = param_3 + 1;
              thunk_FUN_01f51358(puVar2,0);
              lVar8 = *(long *)(lVar8 + 0x18);
            } while (lVar8 != *(long *)(param_1 + 0x10));
          }
          return;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar6 = thunk_FUN_01f117cc();
        uVar7 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_FixedString4096Bytes_CheckCapacityInRange__
                                  );
        FUN_034f6754(uVar6,uVar7,0);
        goto LAB_0302b080;
      }
      local_28 = param_3;
      uVar7 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar7 = thunk_FUN_01f113fc(uVar7,&local_28);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      uVar3 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                );
      puVar5 = Method_Unity_Collections_FixedString32Bytes_CheckLengthInRange__;
    }
    uVar4 = thunk_FUN_01efb3a4(puVar5);
    FUN_034f48f0(uVar6,uVar3,uVar7,uVar4,0);
  }
LAB_0302b080:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_4);
}


