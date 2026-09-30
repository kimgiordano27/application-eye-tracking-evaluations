/*
FUNCTION_NAME: FUN_03a9fb48
ENTRY_POINT: 03a9fb48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03a9fb48(undefined8 param_1,long param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_3 < 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__
                              );
    puVar4 = StringLiteral_8544;
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(param_2 + 0x18) < param_3) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar1 = thunk_FUN_01f117cc();
      uVar2 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__
                                );
      puVar4 = StringLiteral_8545;
    }
    else if (param_4 < 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar1 = thunk_FUN_01f117cc();
      uVar2 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Extensions_Blendable<Vector3,_Vector3[],_Vector3ArrayOptions>__
                                );
      puVar4 = StringLiteral_8546;
    }
    else {
      if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
        return;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar1 = thunk_FUN_01f117cc();
      uVar2 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Extensions_Blendable<Vector3,_Vector3[],_Vector3ArrayOptions>__
                                );
      puVar4 = StringLiteral_8547;
    }
  }
  uVar3 = thunk_FUN_01efb3a4(puVar4);
  FUN_034f3578(uVar1,uVar2,uVar3,0);
  uVar2 = thunk_FUN_01efb3a4(StringLiteral_8548);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar1,uVar2);
}


