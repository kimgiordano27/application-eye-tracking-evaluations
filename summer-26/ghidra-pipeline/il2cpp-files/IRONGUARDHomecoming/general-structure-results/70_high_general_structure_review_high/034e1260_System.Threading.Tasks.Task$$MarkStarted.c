/*
FUNCTION_NAME: System.Threading.Tasks.Task$$MarkStarted
ENTRY_POINT: 034e1260
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_4
*/


void System_Threading_Tasks_Task__MarkStarted(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x22;
  undefined *puVar5;
  
  uVar1 = FUN_034a3c44();
  if ((uVar1 & 1) == 0) {
    if (unaff_x22 == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
      uVar3 = thunk_FUN_01f117cc();
      uVar4 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                                );
      FUN_034efd20(uVar3,uVar4,0);
    }
    else {
      uVar1 = (**(code **)(*unaff_x19 + 0x1a8))();
      if ((uVar1 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
        uVar3 = thunk_FUN_01f117cc();
        uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualTreeAsset_CloneTree__);
        FUN_0356663c(uVar3,uVar4,0);
      }
      else {
        if (param_3 < 0) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar3 = thunk_FUN_01f117cc();
          puVar5 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
        }
        else {
          if (-1 < unaff_w20) {
            if (*(int *)(unaff_x22 + 0x18) < param_3) {
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
              uVar3 = thunk_FUN_01f117cc();
              puVar5 = 
              Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualElementAnimationSystem>__
              ;
            }
            else {
              if (param_3 <= *(int *)(unaff_x22 + 0x18) - unaff_w20) {
                if (*(char *)((long)unaff_x19 + 0x55) != '\0') {
                  (**(code **)(*unaff_x19 + 0x288))();
                    /* WARNING: Could not recover jumptable at 0x034e12f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*unaff_x19 + 0x298))();
                  return;
                }
                FUN_034e1488();
                return;
              }
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
              uVar3 = thunk_FUN_01f117cc();
              puVar5 = 
              Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeBindingsUpdater>__
              ;
            }
            uVar4 = thunk_FUN_01efb3a4(puVar5);
            FUN_034f6754(uVar3,uVar4,0);
            goto LAB_034e1470;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar3 = thunk_FUN_01f117cc();
          puVar5 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
        }
        uVar4 = thunk_FUN_01efb3a4(puVar5);
        uVar2 = thunk_FUN_01efb3a4(Method_OVRPermissionsRequester_GetPermissionId__);
        FUN_034f3578(uVar3,uVar4,uVar2,0);
      }
    }
  }
  else {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_VisualElementFocusRing_GetFocusChangeDirection__
                              );
    FUN_03579608(uVar3,uVar4,0);
  }
LAB_034e1470:
  uVar4 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeHierarchyFlagsUpdater>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar4);
}


