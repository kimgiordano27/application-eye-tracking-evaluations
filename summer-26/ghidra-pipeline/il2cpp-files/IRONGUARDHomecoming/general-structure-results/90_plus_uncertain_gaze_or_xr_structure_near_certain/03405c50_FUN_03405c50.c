/*
FUNCTION_NAME: FUN_03405c50
ENTRY_POINT: 03405c50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_03405c50(long param_1,long param_2,int param_3,int param_4,long param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar4 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(Method_OVRPlugin_get_version__);
    FUN_03579608(uVar4,uVar3,0);
LAB_03405e3c:
    uVar3 = thunk_FUN_01efb3a4(Method_OVRPlayerController_UpdateTransform__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar3);
  }
  FUN_03405b0c();
  if (param_5 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(Method_OVRPlayerController_ResetOrientation__);
    FUN_034efd20(uVar4,uVar3,0);
    goto LAB_03405e3c;
  }
  if (param_6 < 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(Method_OVRRoomLayout_FetchLayoutAnchorsAsync__);
    uVar5 = thunk_FUN_01efb3a4(Method_OVRPermissionsRequester_GetPermissionId__);
    FUN_034f3578(uVar4,uVar3,uVar5,0);
    goto LAB_03405e3c;
  }
  iVar1 = *(int *)(param_5 + 0x18);
  iVar2 = (iVar1 - param_4) - param_6;
  if ((*(char *)(param_1 + 0x18) == '\0') && (iVar2 < 0)) {
    uVar6 = *(uint *)(param_1 + 0x40);
    if ((uVar6 | 2) == 3) goto LAB_03405d2c;
LAB_03405cc0:
    if ((uVar6 & 0xfffffffd) != 1) {
      if (*(int *)(param_1 + 0x1c) + iVar2 < 0) goto LAB_03405d2c;
      goto LAB_03405d00;
    }
  }
  else if (*(char *)(param_1 + 0x18) == '\0') {
    uVar6 = *(uint *)(param_1 + 0x40);
    goto LAB_03405cc0;
  }
  if (iVar2 < 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(param_2 + 0x18) - (iVar1 + param_3) != *(int *)(param_1 + 0x1c)) {
LAB_03405d2c:
      uVar3 = thunk_FUN_01efb3a4(Method_OVRPlatformMenu_RetreatOneLevel__);
      uVar3 = FUN_033f1a84(uVar3,0);
      thunk_FUN_01efb3a4(Method_System_Reflection_MemberInfoSerializationHolder_GetObjectData__);
      uVar4 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(Method_OVRPlayerController_ResetOrientation__);
      FUN_03437a14(uVar4,uVar5,uVar3,0);
      uVar3 = thunk_FUN_01efb3a4(Method_OVRPlayerController_UpdateTransform__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar4,uVar3);
    }
    param_4 = iVar1 - param_6;
  }
LAB_03405d00:
  FUN_03405e7c(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


