/*
FUNCTION_NAME: FUN_034e20f8
ENTRY_POINT: 034e20f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_5
*/


void FUN_034e20f8(long *param_1,long param_2,int param_3,int param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_04832db2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Voice_Bindings_Android_VoiceSDKImpl_OnStoppedListening__);
    thunk_FUN_01efb3a4(Method_Oculus_Voice_Bindings_Android_VoiceSDKImpl_OnRequestSuccess__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Voice_Bindings_Android_VoiceSDKImpl_set_UsePlatformIntegrations__
                      );
    DAT_04832db2 = 1;
  }
  if (param_1[7] == 0) {
LAB_034e2270:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = FUN_034a3c44(param_1[7],0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    if ((uVar2 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(Method_Meta_WitAi_VoiceService_set_UsePlatformIntegrations__);
      FUN_0356663c(uVar6,uVar7,0);
    }
    else if (param_2 == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                                );
      FUN_034efd20(uVar6,uVar7,0);
    }
    else {
      if (param_4 < 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar6 = thunk_FUN_01f117cc();
        puVar4 = Method_System_Runtime_Serialization_Formatters_Binary_ValueFixup_Fixup__;
      }
      else {
        if (-1 < param_3) {
          if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
            if (*(char *)((long)param_1 + 0x55) == '\0') {
              FUN_034d814c(param_1,param_2,param_3,param_4,param_5,param_6,0,1);
              return;
            }
            lVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Oculus_Voice_Bindings_Android_VoiceSDKImpl_OnStoppedListening__
                                      );
            FUN_034e23c0(lVar3,param_5,param_6);
            puVar4 = Method_Oculus_Voice_Bindings_Android_VoiceSDKImpl_set_UsePlatformIntegrations__
            ;
            if (lVar3 != 0) {
              *(int *)(lVar3 + 0x38) = param_4;
              *(undefined4 *)(lVar3 + 0x3c) = 0xffffffff;
              *(int *)(lVar3 + 0x34) = param_4;
              puVar1 = Method_Oculus_Voice_Bindings_Android_VoiceSDKImpl_OnRequestSuccess__;
              lVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
              FUN_034e24c0(lVar3,param_1,*(undefined8 *)puVar1);
              if (lVar3 != 0) {
                FUN_034e2574(lVar3,param_2,param_3,param_4,param_5,param_6);
                return;
              }
            }
            goto LAB_034e2270;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar6 = thunk_FUN_01f117cc();
          uVar7 = thunk_FUN_01efb3a4(Method_Oculus_VoiceSDK_UX_VoiceTranscriptionLabel_OnComplete__)
          ;
          FUN_034f6754(uVar6,uVar7,0);
          goto LAB_034e23a8;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar6 = thunk_FUN_01f117cc();
        puVar4 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
      }
      uVar7 = thunk_FUN_01efb3a4(puVar4);
      uVar5 = thunk_FUN_01efb3a4(Method_Oculus_VoiceSDK_UX_VoiceActivationButton_OnComplete__);
      FUN_034f3578(uVar6,uVar7,uVar5,0);
    }
  }
  else {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_VisualElementFocusRing_GetFocusChangeDirection__
                              );
    FUN_03579608(uVar6,uVar7,0);
  }
LAB_034e23a8:
  uVar7 = thunk_FUN_01efb3a4(Method_Oculus_VoiceSDK_UX_VoiceTranscriptionLabel_OnError__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


