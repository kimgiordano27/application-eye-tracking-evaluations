/*
FUNCTION_NAME: FUN_03aadd5c
ENTRY_POINT: 03aadd5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03aadd5c(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int local_34;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar2,uVar3,0);
    uVar3 = thunk_FUN_01efb3a4(StringLiteral_8800);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2,uVar3);
  }
  if (-1 < param_3) {
    if (*(long *)(param_1 + 0x10) != 0) {
      for (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10); lVar6 != 0;
          lVar6 = *(long *)(lVar6 + 0x20)) {
        lVar1 = 0x18;
        if (*(char *)(param_1 + 0x18) != '\0') {
          lVar1 = 0x10;
        }
        FUN_0358cf48(param_2,*(undefined8 *)(lVar6 + lVar1),param_3,0);
        param_3 = param_3 + 1;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  local_34 = param_3;
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar2 = thunk_FUN_01f113fc(uVar2,&local_34);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  uVar5 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                            );
  FUN_034f48f0(uVar3,uVar4,uVar2,uVar5,0);
  uVar2 = thunk_FUN_01efb3a4(StringLiteral_8800);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


