/*
FUNCTION_NAME: System.Threading.Tasks.Task$$get_ShouldNotifyDebuggerOfWaitCompletion
ENTRY_POINT: 034e1248
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_4
*/


void System_Threading_Tasks_Task__get_ShouldNotifyDebuggerOfWaitCompletion
               (long *param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = FUN_034a3c44(param_1[7],0);
  if ((uVar1 & 1) == 0) {
    if (param_2 == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
      uVar4 = thunk_FUN_01f117cc();
      uVar2 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                                );
      FUN_034efd20(uVar4,uVar2,0);
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      if ((uVar1 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
        uVar4 = thunk_FUN_01f117cc();
        uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualTreeAsset_CloneTree__);
        FUN_0356663c(uVar4,uVar2,0);
      }
      else {
        if (param_3 < 0) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar4 = thunk_FUN_01f117cc();
          puVar5 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
        }
        else {
          if (-1 < param_4) {
            if (*(int *)(param_2 + 0x18) < param_3) {
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
              uVar4 = thunk_FUN_01f117cc();
              puVar5 = 
              Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualElementAnimationSystem>__
              ;
            }
            else {
              if (param_3 <= *(int *)(param_2 + 0x18) - param_4) {
                if (*(char *)((long)param_1 + 0x55) != '\0') {
                  uVar2 = (**(code **)(*param_1 + 0x288))
                                    (param_1,param_2,param_3,param_4,0,0,
                                     *(undefined8 *)(*param_1 + 0x290));
                    /* WARNING: Could not recover jumptable at 0x034e12f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*param_1 + 0x298))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x2a0));
                  return;
                }
                FUN_034e1488(param_1,param_2,param_3,param_4);
                return;
              }
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
              uVar4 = thunk_FUN_01f117cc();
              puVar5 = 
              Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeBindingsUpdater>__
              ;
            }
            uVar2 = thunk_FUN_01efb3a4(puVar5);
            FUN_034f6754(uVar4,uVar2,0);
            goto LAB_034e1470;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar4 = thunk_FUN_01f117cc();
          puVar5 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
        }
        uVar2 = thunk_FUN_01efb3a4(puVar5);
        uVar3 = thunk_FUN_01efb3a4(Method_OVRPermissionsRequester_GetPermissionId__);
        FUN_034f3578(uVar4,uVar2,uVar3,0);
      }
    }
  }
  else {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar4 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_VisualElementFocusRing_GetFocusChangeDirection__
                              );
    FUN_03579608(uVar4,uVar2,0);
  }
LAB_034e1470:
  uVar2 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeHierarchyFlagsUpdater>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar2);
}


