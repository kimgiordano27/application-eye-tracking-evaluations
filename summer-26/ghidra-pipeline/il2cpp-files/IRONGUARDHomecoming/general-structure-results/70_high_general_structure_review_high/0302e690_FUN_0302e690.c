/*
FUNCTION_NAME: FUN_0302e690
ENTRY_POINT: 0302e690
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0302e690(long param_1,long *param_2,uint param_3,long param_4)

{
  long lVar1;
  int iVar2;
  void *__src;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong __n;
  undefined1 *__dest;
  undefined1 auStack_70 [4];
  uint local_6c;
  long local_68;
  undefined *puVar7;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar10 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar10 + 0x10) + 0xfc);
  __dest = auStack_70 + -(__n + 0xf & 0x1fffffff0);
  if (param_2 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar8,uVar9,0);
  }
  else {
    if ((int)param_3 < 0) {
      local_6c = param_3;
      uVar9 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar9 = thunk_FUN_01f113fc(uVar9,&local_6c);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar8 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                );
      puVar7 = 
      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__;
    }
    else {
      if ((int)param_3 <= (int)param_2[3]) {
        iVar2 = (*(code *)**(undefined8 **)(lVar10 + 0x60))();
        if (iVar2 <= (int)((int)param_2[3] - param_3)) {
          lVar10 = *(long *)(param_1 + 0x10);
          if (lVar10 != 0) {
            do {
              __src = (void *)thunk_FUN_01ee7388(lVar10,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  param_4 + 0x20) + 0xc0) + 8) + 0x80) + 0x60);
              memcpy(__dest,__src,__n);
              if (*(uint *)(param_2 + 3) <= param_3) {
LAB_0302e828:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              memcpy((void *)((long)param_2 +
                             (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)param_3 + 0x20),__dest,
                     __n);
              lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01ecaf44();
              }
              if (*(uint *)(param_2 + 3) <= param_3) goto LAB_0302e828;
              FUN_01f087b0(lVar3,(long)param_2 +
                                 (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)param_3 + 0x20,
                           __dest);
              plVar4 = (long *)thunk_FUN_01ee7388(lVar10,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  param_4 + 0x20) + 0xc0) + 8) + 0x80) + 0x20);
              lVar10 = *plVar4;
              param_3 = param_3 + 1;
            } while (lVar10 != *(long *)(param_1 + 0x10));
          }
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar8 = thunk_FUN_01f117cc();
        uVar9 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_FixedString4096Bytes_CheckCapacityInRange__
                                  );
        FUN_034f6754(uVar8,uVar9,0);
        goto LAB_0302e94c;
      }
      local_6c = param_3;
      uVar9 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar9 = thunk_FUN_01f113fc(uVar9,&local_6c);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar8 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                );
      puVar7 = Method_Unity_Collections_FixedString32Bytes_CheckLengthInRange__;
    }
    uVar6 = thunk_FUN_01efb3a4(puVar7);
    FUN_034f48f0(uVar8,uVar5,uVar9,uVar6,0);
  }
LAB_0302e94c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,param_4);
}


