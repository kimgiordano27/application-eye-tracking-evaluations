/*
FUNCTION_NAME: FUN_03432c9c
ENTRY_POINT: 03432c9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03432c9c(long *param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  if ((uVar1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_ProperBitConverter_ToDouble__);
    FUN_0356663c(uVar4,uVar5,0);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      puVar2 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
    }
    else {
      if (-1 < param_4) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
          return;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar4 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                                  );
        FUN_034f6754(uVar4,uVar5,0);
        goto LAB_03432dbc;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      puVar2 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
    }
    uVar5 = thunk_FUN_01efb3a4(puVar2);
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    FUN_034f3578(uVar4,uVar5,uVar3,0);
  }
LAB_03432dbc:
  uVar5 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_ProperBitConverter_ToGuid__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


