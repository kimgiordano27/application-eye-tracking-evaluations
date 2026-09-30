/*
FUNCTION_NAME: FUN_034e15dc
ENTRY_POINT: 034e15dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_034e15dc(long *param_1,long param_2,int param_3,int param_4,undefined8 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_04832daf & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeStyleUpdater>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeViewDataUpdater>__
                      );
    DAT_04832daf = 1;
  }
  if (param_1[7] == 0) {
LAB_034e1718:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = FUN_034a3c44(param_1[7],0);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    puVar3 = Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeStyleUpdater>__;
    if ((uVar1 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(Method_Oculus_VoiceSDK_UX_VoiceActivationButton_OnClick__);
      FUN_0356663c(uVar5,uVar6,0);
    }
    else if (param_2 == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                                );
      FUN_034efd20(uVar5,uVar6,0);
    }
    else {
      if (param_4 < 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar5 = thunk_FUN_01f117cc();
        puVar3 = Method_System_Runtime_Serialization_Formatters_Binary_ValueFixup_Fixup__;
      }
      else {
        if (-1 < param_3) {
          if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
            if (*(char *)((long)param_1 + 0x55) == '\0') {
              FUN_034d7220(param_1,param_2,param_3,param_4,param_5,param_6,0,1);
              return;
            }
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeViewDataUpdater>__
                                      );
            FUN_034e1868(lVar2,param_1,*(undefined8 *)puVar3);
            if (lVar2 != 0) {
              FUN_034e191c(lVar2,param_2,param_3,param_4,param_5,param_6);
              return;
            }
            goto LAB_034e1718;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar5 = thunk_FUN_01f117cc();
          uVar6 = thunk_FUN_01efb3a4(Method_Oculus_VoiceSDK_UX_VoiceActivationButton_OnInit__);
          FUN_034f6754(uVar5,uVar6,0);
          goto LAB_034e1850;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar5 = thunk_FUN_01f117cc();
        puVar3 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
      }
      uVar6 = thunk_FUN_01efb3a4(puVar3);
      uVar4 = thunk_FUN_01efb3a4(Method_Oculus_VoiceSDK_UX_VoiceActivationButton_OnComplete__);
      FUN_034f3578(uVar5,uVar6,uVar4,0);
    }
  }
  else {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_VisualElementFocusRing_GetFocusChangeDirection__
                              );
    FUN_03579608(uVar5,uVar6,0);
  }
LAB_034e1850:
  uVar6 = thunk_FUN_01efb3a4(Method_Meta_WitAi_Lib_VoiceLipSyncMic_OnMicSampleReady__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar6);
}


