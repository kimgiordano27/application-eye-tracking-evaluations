/*
FUNCTION_NAME: FUN_0274312c
ENTRY_POINT: 0274312c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0274312c(long param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_24;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar5,uVar6,0);
  }
  else {
    iVar1 = thunk_FUN_01eca4a4(param_2,0);
    if (iVar1 == 1) {
      iVar1 = thunk_FUN_01eca460(param_2,0,0);
      if (iVar1 == 0) {
        if ((param_3 < 0) || (iVar1 = FUN_03582fa8(param_2,0), iVar1 < param_3)) {
          local_24 = param_3;
          uVar6 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                    );
          uVar6 = thunk_FUN_01f113fc(uVar6,&local_24);
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar5 = thunk_FUN_01f117cc();
          uVar2 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt16__);
          uVar3 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
                                    );
          FUN_034f48f0(uVar5,uVar2,uVar6,uVar3,0);
        }
        else {
          iVar1 = FUN_03582fa8(param_2,0);
          if (*(int *)(param_1 + 0x18) <= iVar1 - param_3) {
            FUN_0358d498(*(undefined8 *)(param_1 + 0x10),0,param_2,param_3,*(int *)(param_1 + 0x18),
                         0);
            FUN_0358f33c(param_2,param_3,*(undefined4 *)(param_1 + 0x18),0);
            return;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar5 = thunk_FUN_01f117cc();
          uVar6 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                                    );
          FUN_034f6754(uVar5,uVar6,0);
        }
        goto LAB_02743320;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      puVar4 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_15__;
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      puVar4 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_14__;
    }
    uVar6 = thunk_FUN_01efb3a4(puVar4);
    uVar2 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd98(uVar5,uVar6,uVar2,0);
  }
LAB_02743320:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,param_4);
}


