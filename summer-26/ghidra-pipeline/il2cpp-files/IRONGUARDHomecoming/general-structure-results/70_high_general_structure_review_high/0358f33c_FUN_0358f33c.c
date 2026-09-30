/*
FUNCTION_NAME: FUN_0358f33c
ENTRY_POINT: 0358f33c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0358f33c(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_04833461 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshl_u16__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_04833461 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar6,uVar5,0);
  }
  else {
    iVar2 = FUN_01eca460(param_1,0);
    if ((param_3 < 0) || (iVar2 - param_2 != 0 && param_2 <= iVar2)) {
      puVar1 = Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__;
      if (iVar2 <= param_2) {
        puVar1 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__;
      }
      uVar5 = thunk_FUN_01efb3a4(puVar1);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                                );
      FUN_034f3578(uVar6,uVar5,uVar7,0);
      uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshl_u32__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,uVar5);
    }
    iVar3 = FUN_03582fa8(param_1);
    if ((iVar2 - param_2) + iVar3 < param_3) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                                );
      FUN_034f6754(uVar6,uVar5,0);
    }
    else {
      iVar2 = FUN_01eca4a4(param_1);
      if (iVar2 == 1) {
        lVar4 = thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  );
        if (lVar4 != 0) {
          FUN_0224756c(lVar4,param_2,param_3,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrshl_u16__);
          return;
        }
        iVar2 = param_3 + param_2 + -1;
        if (param_2 < iVar2) {
          do {
            uVar5 = FUN_03583008(param_1,param_2);
            uVar6 = FUN_03583008(param_1,iVar2);
            FUN_0358cf48(param_1,uVar6,param_2);
            FUN_0358cf48(param_1,uVar5,iVar2);
            param_2 = param_2 + 1;
            iVar2 = iVar2 + -1;
          } while (param_2 < iVar2);
        }
        return;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Callback_SetNotificationCallback<SystemVoipState>__)
      ;
      uVar6 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrndaq_f32__);
      FUN_0357bdc0(uVar6,uVar5);
    }
  }
  uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshl_u32__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar5);
}


