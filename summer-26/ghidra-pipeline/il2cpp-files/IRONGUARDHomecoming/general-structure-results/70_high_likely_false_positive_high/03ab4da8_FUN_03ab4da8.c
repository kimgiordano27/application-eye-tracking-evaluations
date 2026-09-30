/*
FUNCTION_NAME: FUN_03ab4da8
ENTRY_POINT: 03ab4da8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03ab4da8(long *param_1,long param_2,int param_3,int param_4,undefined8 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_04839015 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_8868);
    thunk_FUN_01efb3a4(StringLiteral_8869);
    DAT_04839015 = 1;
  }
  if (*(char *)((long)param_1 + 0x35) != '\0') {
    plVar3 = (long *)thunk_FUN_01ecaf38(param_1,0);
    FUN_01bc50c0();
    uVar7 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar6 = thunk_FUN_01f117cc();
    FUN_03579608(uVar6,uVar7,0);
    uVar7 = thunk_FUN_01efb3a4(StringLiteral_8870);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar7);
  }
  uVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  puVar4 = StringLiteral_8868;
  if ((uVar1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(Method_Oculus_VoiceSDK_UX_VoiceActivationButton_OnClick__);
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
      puVar4 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
    }
    else {
      if (-1 < param_3) {
        if (param_4 + param_3 <= *(int *)(param_2 + 0x18)) {
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_8869);
          FUN_03ab500c(lVar2,param_1,*(undefined8 *)puVar4);
          if (lVar2 != 0) {
            FUN_03ab50c0(lVar2,param_2,param_3,param_4,param_5,param_6);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar6 = thunk_FUN_01f117cc();
        uVar7 = thunk_FUN_01efb3a4(StringLiteral_8865);
        FUN_034f6754(uVar6,uVar7,0);
        goto LAB_03ab4ff0;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      puVar4 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
    }
    uVar7 = thunk_FUN_01efb3a4(puVar4);
    uVar5 = thunk_FUN_01efb3a4(Method_Oculus_VoiceSDK_UX_VoiceActivationButton_OnComplete__);
    FUN_034f3578(uVar6,uVar7,uVar5,0);
  }
LAB_03ab4ff0:
  uVar7 = thunk_FUN_01efb3a4(StringLiteral_8870);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


