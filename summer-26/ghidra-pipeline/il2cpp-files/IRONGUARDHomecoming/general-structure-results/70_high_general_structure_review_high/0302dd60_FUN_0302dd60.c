/*
FUNCTION_NAME: FUN_0302dd60
ENTRY_POINT: 0302dd60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0302dd60(long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint local_34;
  
  if ((DAT_04831b91 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_04831b91 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar6,uVar4,0);
    goto LAB_0302e07c;
  }
  iVar1 = thunk_FUN_01eca4a4(param_2,0);
  if (iVar1 == 1) {
    iVar1 = thunk_FUN_01eca460(param_2,0,0);
    if (iVar1 == 0) {
      if ((int)param_3 < 0) {
        local_34 = param_3;
        uVar4 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                  );
        uVar4 = thunk_FUN_01f113fc(uVar4,&local_34);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar6 = thunk_FUN_01f117cc();
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                  );
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                                  );
        FUN_034f48f0(uVar6,uVar8,uVar4,uVar5,0);
        goto LAB_0302e07c;
      }
      iVar1 = FUN_03582fa8(param_2,0);
      if ((int)(iVar1 - param_3) < *(int *)(param_1 + 0x18)) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar6 = thunk_FUN_01f117cc();
        uVar4 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_FixedString4096Bytes_CheckCapacityInRange__
                                  );
        FUN_034f6754(uVar6,uVar4,0);
        goto LAB_0302e07c;
      }
      lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar9 = thunk_FUN_01f116d0(param_2,lVar9);
      if (lVar9 != 0) {
        FUN_0302d28c(param_1,lVar9,param_3,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xc0));
        return;
      }
      plVar2 = (long *)thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                         );
      if (plVar2 != (long *)0x0) {
        lVar9 = *(long *)(param_1 + 0x10);
        if (lVar9 != 0) {
          do {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar10 = *(long *)(lVar9 + 0x28);
            if ((lVar10 != 0) &&
               (lVar3 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
              uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar4,0);
            }
            if (*(uint *)(plVar2 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar2[(long)(int)param_3 + 4] = lVar10;
            thunk_FUN_01f51358(plVar2 + (long)(int)param_3 + 4,lVar10);
            lVar9 = *(long *)(lVar9 + 0x18);
            param_3 = param_3 + 1;
          } while (lVar9 != *(long *)(param_1 + 0x10));
        }
        return;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      puVar7 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_17__;
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      puVar7 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_15__;
    }
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    puVar7 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_14__;
  }
  uVar4 = thunk_FUN_01efb3a4(puVar7);
  uVar8 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                            );
  FUN_034efd98(uVar6,uVar4,uVar8,0);
LAB_0302e07c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_4);
}


