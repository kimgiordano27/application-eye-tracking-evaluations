/*
FUNCTION_NAME: FUN_0302f7e8
ENTRY_POINT: 0302f7e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0302f7e8(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  void *__src;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong __n;
  undefined1 auStack_70 [4];
  uint local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_04831b95 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_04831b95 = 1;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10) + 0xfc);
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar10 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar10,uVar8,0);
    goto LAB_0302fbcc;
  }
  iVar2 = thunk_FUN_01eca4a4(param_2,0);
  if (iVar2 == 1) {
    iVar2 = thunk_FUN_01eca460(param_2,0,0);
    if (iVar2 == 0) {
      if ((int)param_3 < 0) {
        local_6c = param_3;
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                  );
        uVar8 = thunk_FUN_01f113fc(uVar8,&local_6c);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar10 = thunk_FUN_01f117cc();
        uVar12 = thunk_FUN_01efb3a4(
                                   Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                   );
        uVar9 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                                  );
        FUN_034f48f0(uVar10,uVar12,uVar8,uVar9,0);
        goto LAB_0302fbcc;
      }
      iVar2 = FUN_03582fa8(param_2,0);
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x60))
                        (param_1);
      if ((int)(iVar2 - param_3) < iVar3) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar10 = thunk_FUN_01f117cc();
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_FixedString4096Bytes_CheckCapacityInRange__
                                  );
        FUN_034f6754(uVar10,uVar8,0);
        goto LAB_0302fbcc;
      }
      lVar13 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01ecaf44(lVar13);
      }
      lVar13 = thunk_FUN_01f116d0(param_2,lVar13);
      if (lVar13 != 0) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xc0))
                  (param_1,lVar13,param_3);
LAB_0302f9e8:
        if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      plVar4 = (long *)thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                         );
      if (plVar4 != (long *)0x0) {
        lVar13 = *(long *)(param_1 + 0x10);
        if (lVar13 != 0) {
          do {
            __src = (void *)thunk_FUN_01ee7388(lVar13,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  param_4 + 0x20) + 0xc0) + 8) + 0x80) + 0x60);
            memcpy(auStack_70 + -(__n + 0xf & 0x1fffffff0),__src,__n);
            lVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                        (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10),
                                       auStack_70 + -(__n + 0xf & 0x1fffffff0));
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar8,0);
            }
            if (*(uint *)(plVar4 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar4[(long)(int)param_3 + 4] = lVar5;
            thunk_FUN_01f51358(plVar4 + (long)(int)param_3 + 4,lVar5);
            plVar7 = (long *)thunk_FUN_01ee7388(lVar13,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  param_4 + 0x20) + 0xc0) + 8) + 0x80) + 0x20);
            lVar13 = *plVar7;
            param_3 = param_3 + 1;
          } while (lVar13 != *(long *)(param_1 + 0x10));
        }
        goto LAB_0302f9e8;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar10 = thunk_FUN_01f117cc();
      puVar11 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_17__;
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar10 = thunk_FUN_01f117cc();
      puVar11 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_15__;
    }
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar10 = thunk_FUN_01f117cc();
    puVar11 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_14__;
  }
  uVar8 = thunk_FUN_01efb3a4(puVar11);
  uVar12 = thunk_FUN_01efb3a4(
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                             );
  FUN_034efd98(uVar10,uVar8,uVar12,0);
LAB_0302fbcc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar10,param_4);
}


