/*
FUNCTION_NAME: FUN_03596b60
ENTRY_POINT: 03596b60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_03596b60(long param_1,int param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_n_s8__;
  }
  else {
    if (param_3 != 0) {
      if (param_2 < 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar5 = thunk_FUN_01f117cc();
        puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_n_u32__;
      }
      else if (param_4 < 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar5 = thunk_FUN_01f117cc();
        puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_n_u64__;
      }
      else {
        if (-1 < param_5) {
          uVar2 = FUN_01f0a9f4(param_1,param_2,param_3,param_4,param_5);
          if ((uVar2 & 1) != 0) {
            return;
          }
          iVar1 = FUN_03596acc(param_1);
          if ((param_2 <= iVar1 - param_5) &&
             (iVar1 = FUN_03596acc(param_3), param_4 <= iVar1 - param_5)) {
            return;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar5 = thunk_FUN_01f117cc();
          uVar6 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                                    );
          FUN_034f6754(uVar5,uVar6,0);
          goto LAB_03596cf0;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar5 = thunk_FUN_01f117cc();
        puVar3 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
      }
      uVar6 = thunk_FUN_01efb3a4(puVar3);
      uVar4 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                                );
      FUN_034f3578(uVar5,uVar6,uVar4,0);
      goto LAB_03596cf0;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_n_u16__;
  }
  uVar6 = thunk_FUN_01efb3a4(puVar3);
  FUN_034efd20(uVar5,uVar6,0);
LAB_03596cf0:
  uVar6 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_n_u8__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar6);
}


