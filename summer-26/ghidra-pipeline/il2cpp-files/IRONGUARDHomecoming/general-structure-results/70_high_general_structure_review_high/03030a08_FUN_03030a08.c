/*
FUNCTION_NAME: FUN_03030a08
ENTRY_POINT: 03030a08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03030a08(long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_04831b99 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_04831b99 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar7,uVar5,0);
    goto LAB_03030d4c;
  }
  iVar1 = thunk_FUN_01eca4a4(param_2,0);
  if (iVar1 == 1) {
    iVar1 = thunk_FUN_01eca460(param_2,0,0);
    if (iVar1 == 0) {
      if ((int)param_3 < 0) {
        local_50 = CONCAT44(local_50._4_4_,param_3);
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                  );
        uVar5 = thunk_FUN_01f113fc(uVar5,&local_50);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar7 = thunk_FUN_01f117cc();
        uVar9 = thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                  );
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                                  );
        FUN_034f48f0(uVar7,uVar9,uVar5,uVar6,0);
        goto LAB_03030d4c;
      }
      iVar1 = FUN_03582fa8(param_2,0);
      if ((int)(iVar1 - param_3) < *(int *)(param_1 + 0x18)) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar7 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_FixedString4096Bytes_CheckCapacityInRange__
                                  );
        FUN_034f6754(uVar7,uVar5,0);
        goto LAB_03030d4c;
      }
      lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar10 = thunk_FUN_01f116d0(param_2,lVar10);
      if (lVar10 != 0) {
        FUN_0302ff44(param_1,lVar10,param_3,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xc0));
        return;
      }
      plVar2 = (long *)thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                         );
      if (plVar2 != (long *)0x0) {
        lVar10 = *(long *)(param_1 + 0x10);
        if (lVar10 != 0) {
          do {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uStack_48 = *(undefined8 *)(lVar10 + 0x30);
            local_50 = *(undefined8 *)(lVar10 + 0x28);
            lVar3 = thunk_FUN_01f113fc(*(undefined8 *)
                                        (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10),
                                       &local_50);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
              uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar5,0);
            }
            if (*(uint *)(plVar2 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar2[(long)(int)param_3 + 4] = lVar3;
            thunk_FUN_01f51358(plVar2 + (long)(int)param_3 + 4,lVar3);
            lVar10 = *(long *)(lVar10 + 0x18);
            param_3 = param_3 + 1;
          } while (lVar10 != *(long *)(param_1 + 0x10));
        }
        return;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      puVar8 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_17__;
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      puVar8 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_15__;
    }
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    puVar8 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_14__;
  }
  uVar5 = thunk_FUN_01efb3a4(puVar8);
  uVar9 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                            );
  FUN_034efd98(uVar7,uVar5,uVar9,0);
LAB_03030d4c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_4);
}


