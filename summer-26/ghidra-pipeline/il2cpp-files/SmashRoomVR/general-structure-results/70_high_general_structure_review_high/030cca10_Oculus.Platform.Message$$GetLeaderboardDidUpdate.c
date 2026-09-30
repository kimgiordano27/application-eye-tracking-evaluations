/*
FUNCTION_NAME: Oculus.Platform.Message$$GetLeaderboardDidUpdate
ENTRY_POINT: 030cca10
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Oculus_Platform_Message__GetLeaderboardDidUpdate(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x20;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  *(undefined1 *)(unaff_x19 + 0xa27) = 1;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *unaff_x20;
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar3 = FUN_0391f968(uVar4,0,0);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *unaff_x20;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar4 = *(undefined8 *)(**(long **)(lVar2 + 0xb8) + 0x90);
  }
  return uVar4;
}


