/*
FUNCTION_NAME: FUN_02607ed0
ENTRY_POINT: 02607ed0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02607ed0(long param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_34;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar7,uVar8,0);
  }
  else {
    iVar2 = thunk_FUN_01eca4a4(param_2,0);
    if (iVar2 == 1) {
      iVar2 = thunk_FUN_01eca460(param_2,0,0);
      if (iVar2 == 0) {
        iVar2 = FUN_03582fa8(param_2,0);
        if ((param_3 < 0) || (iVar2 < param_3)) {
          local_34 = param_3;
          uVar8 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                    );
          uVar8 = thunk_FUN_01f113fc(uVar8,&local_34);
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar7 = thunk_FUN_01f117cc();
          uVar5 = thunk_FUN_01efb3a4(
                                    Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                    );
          uVar6 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
                                    );
          FUN_034f48f0(uVar7,uVar5,uVar8,uVar6,0);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x20);
          if (iVar1 <= iVar2 - param_3) {
            if (iVar1 != 0) {
              lVar3 = *(long *)(param_1 + 0x10);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              iVar2 = *(int *)(lVar3 + 0x18) - *(int *)(param_1 + 0x18);
              if (iVar1 <= iVar2) {
                iVar2 = iVar1;
              }
              FUN_0358d498(lVar3,*(int *)(param_1 + 0x18),param_2,param_3,iVar2,0);
              if (0 < iVar1 - iVar2) {
                lVar3 = *(long *)(param_1 + 0x10);
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                FUN_0358d498(lVar3,0,param_2,
                             (param_3 - *(int *)(param_1 + 0x18)) + *(int *)(lVar3 + 0x18),
                             iVar1 - iVar2,0);
              }
            }
            return;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar7 = thunk_FUN_01f117cc();
          uVar8 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                                    );
          FUN_034f6754(uVar7,uVar8,0);
        }
        goto LAB_026080f8;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      puVar4 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_15__;
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      puVar4 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_14__;
    }
    uVar8 = thunk_FUN_01efb3a4(puVar4);
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd98(uVar7,uVar8,uVar5,0);
  }
LAB_026080f8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_4);
}


