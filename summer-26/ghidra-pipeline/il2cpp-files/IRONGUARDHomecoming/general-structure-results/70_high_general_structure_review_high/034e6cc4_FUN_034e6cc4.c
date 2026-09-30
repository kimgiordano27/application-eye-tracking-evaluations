/*
FUNCTION_NAME: FUN_034e6cc4
ENTRY_POINT: 034e6cc4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_034e6cc4(long param_1,long param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakQueueFormatter__ctor__);
    FUN_034efd20(uVar3,uVar4,0);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      puVar1 = Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__;
    }
    else {
      if (-1 < param_4) {
        if (param_3 <= *(int *)(param_2 + 0x18) - param_4) {
          if (*(long *)(param_1 + 0x60) != 0) {
            FUN_035be620();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar3 = thunk_FUN_01f117cc();
        uVar4 = thunk_FUN_01efb3a4(Method_System_WeakReference__ctor__);
        FUN_034f6754(uVar3,uVar4,0);
        goto LAB_034e6dd0;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      puVar1 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
    }
    uVar4 = thunk_FUN_01efb3a4(puVar1);
    uVar2 = thunk_FUN_01efb3a4(Method_OVRPermissionsRequester_GetPermissionId__);
    FUN_034f3578(uVar3,uVar4,uVar2,0);
  }
LAB_034e6dd0:
  uVar4 = thunk_FUN_01efb3a4(Method_System_WeakReference_GetObjectData__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar4);
}


