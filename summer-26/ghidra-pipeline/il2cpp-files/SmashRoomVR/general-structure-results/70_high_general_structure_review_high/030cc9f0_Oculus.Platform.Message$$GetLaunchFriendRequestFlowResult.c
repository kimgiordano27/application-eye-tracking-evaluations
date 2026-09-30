/*
FUNCTION_NAME: Oculus.Platform.Message$$GetLaunchFriendRequestFlowResult
ENTRY_POINT: 030cc9f0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4
*/


undefined8 Oculus_Platform_Message__GetLaunchFriendRequestFlowResult(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = StringLiteral_13202;
  if ((DAT_03ff1a27 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13202);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1a27 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *(long *)puVar2;
  }
  uVar5 = **(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar4 = FUN_0391f968(uVar5,0,0);
  uVar5 = 0;
  if ((uVar4 & 1) != 0) {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar3 = *(long *)puVar2;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar5 = *(undefined8 *)(**(long **)(lVar3 + 0xb8) + 0x90);
  }
  return uVar5;
}


