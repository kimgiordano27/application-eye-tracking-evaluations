/*
FUNCTION_NAME: FUN_034e29d8
ENTRY_POINT: 034e29d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_034e29d8(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int local_24;
  
  if ((DAT_04832db5 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRTask_FromGuid<bool>__);
    DAT_04832db5 = 1;
  }
  local_24 = 0;
  if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = FUN_034a3c44(param_1[7],0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar2 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      puVar3 = Method_UnityEngine_UIElements_VisualElementPanelActivator_OnEnter__;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
      puVar3 = Method_OVRTask_FromGuid<bool>__;
      if ((uVar2 & 1) != 0) {
        if (param_2 < 0) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar5 = thunk_FUN_01f117cc();
          uVar4 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_Rendering_VolumeStack_GetComponent<ChannelMixer>__
                                    );
          FUN_034f7db4(uVar5,uVar4,0);
        }
        else {
          FUN_034e0cd8(param_1);
          lVar6 = param_1[7];
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_034e2bd8(lVar6,param_2,&local_24);
          if (local_24 == 0) {
            lVar6 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
            if (param_2 < lVar6) {
              (**(code **)(*param_1 + 0x208))(param_1,param_2,*(undefined8 *)(*param_1 + 0x210));
            }
            return;
          }
          uVar4 = System_Threading_Tasks_DebuggerSupport__RemoveFromActiveTasksNonInlined
                            (param_1,param_1[6]);
          iVar1 = local_24;
          thunk_FUN_01efb3a4(Method_OVRTask_FromGuid<bool>__);
          FUN_01bc4c70();
          uVar5 = FUN_034dfb20(uVar4,iVar1);
        }
        goto LAB_034e2bc0;
      }
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      puVar3 = Method_UnityEngine_Rendering_VolumeStack_GetComponent<Bloom>__;
    }
    uVar4 = thunk_FUN_01efb3a4(puVar3);
    FUN_0356663c(uVar5,uVar4,0);
  }
  else {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar5 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_VisualElementFocusRing_GetFocusChangeDirection__
                              );
    FUN_03579608(uVar5,uVar4,0);
  }
LAB_034e2bc0:
  uVar4 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_Rendering_VolumeStack_GetComponent<ChromaticAberration>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar4);
}


