/*
FUNCTION_NAME: FUN_034e1b48
ENTRY_POINT: 034e1b48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_5
*/


void FUN_034e1b48(long *param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = FUN_034a3c44(param_1[7],0);
  if ((uVar1 & 1) == 0) {
    if (param_2 == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      uVar2 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                                );
      FUN_034efd20(uVar5,uVar2,0);
    }
    else {
      if (param_3 < 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar5 = thunk_FUN_01f117cc();
        puVar3 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
      }
      else {
        if (-1 < param_4) {
          if (*(int *)(param_2 + 0x18) - param_4 < param_3) {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
            uVar5 = thunk_FUN_01f117cc();
            uVar2 = thunk_FUN_01efb3a4(
                                      Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeBindingsUpdater>__
                                      );
            FUN_034f6754(uVar5,uVar2,0);
          }
          else {
            uVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
            if ((uVar1 & 1) != 0) {
              if (*(char *)((long)param_1 + 0x55) != '\0') {
                uVar2 = (**(code **)(*param_1 + 0x2c8))
                                  (param_1,param_2,param_3,param_4,0,0,
                                   *(undefined8 *)(*param_1 + 0x2d0));
                    /* WARNING: Could not recover jumptable at 0x034e1bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*param_1 + 0x2d8))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x2e0));
                return;
              }
              System_Threading_Tasks_Task__get_ExceptionRecorded(param_1,param_2,param_3,param_4);
              return;
            }
            thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
            uVar5 = thunk_FUN_01f117cc();
            uVar2 = thunk_FUN_01efb3a4(
                                      Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<UIRLayoutUpdater>__
                                      );
            FUN_0356663c(uVar5,uVar2,0);
          }
          goto LAB_034e1d54;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar5 = thunk_FUN_01f117cc();
        puVar3 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
      }
      uVar2 = thunk_FUN_01efb3a4(puVar3);
      uVar4 = thunk_FUN_01efb3a4(Method_OVRPermissionsRequester_GetPermissionId__);
      FUN_034f3578(uVar5,uVar2,uVar4,0);
    }
  }
  else {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar5 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_VisualElementFocusRing_GetFocusChangeDirection__
                              );
    FUN_03579608(uVar5,uVar2,0);
  }
LAB_034e1d54:
  uVar2 = thunk_FUN_01efb3a4(Method_Oculus_Voice_Bindings_Android_VoiceSDKImpl_OnRequestFailed__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar2);
}


