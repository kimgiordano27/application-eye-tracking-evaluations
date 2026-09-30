/*
FUNCTION_NAME: FUN_03405b0c
ENTRY_POINT: 03405b0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_11;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void FUN_03405b0c(undefined8 param_1,long param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_OVRPassthroughColorLut_RefreshIfInitialized__);
    FUN_034efd20(uVar3,uVar2,0);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      puVar1 = Method_OVRPassthroughLayer_SetColorMap__;
    }
    else {
      if (-1 < param_4) {
        if (param_3 <= *(int *)(param_2 + 0x18) - param_4) {
          return;
        }
        uVar2 = thunk_FUN_01efb3a4(Method_OVRPlatformMenu_RetreatOneLevel__);
        uVar2 = FUN_033f1a84(uVar2,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar3 = thunk_FUN_01f117cc();
        uVar4 = thunk_FUN_01efb3a4(Method_OVRPassthroughColorLut_RefreshIfInitialized__);
        FUN_034efd98(uVar3,uVar4,uVar2,0);
        uVar2 = thunk_FUN_01efb3a4(Method_OVRPermissionsRequester_IsPermissionSupportedByPlatform__)
        ;
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar3,uVar2);
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      puVar1 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
    }
    uVar2 = thunk_FUN_01efb3a4(puVar1);
    uVar4 = thunk_FUN_01efb3a4(Method_OVRPermissionsRequester_GetPermissionId__);
    FUN_034f3578(uVar3,uVar2,uVar4,0);
  }
  uVar2 = thunk_FUN_01efb3a4(Method_OVRPermissionsRequester_IsPermissionSupportedByPlatform__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


