/*
FUNCTION_NAME: FUN_02dda8d0
ENTRY_POINT: 02dda8d0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_12;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


undefined8 FUN_02dda8d0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_03feff54 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03feff54 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar4 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar4 == 0) {
LAB_02ddaa78:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(lVar4 + 0xd0);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03922f24(uVar3,uVar5,0);
      if ((uVar2 & 1) != 0) {
        return 0;
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    if ((uVar2 & 1) != 0) {
      FUN_02dd9f98(lVar4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),1,0);
      if (*(long *)(lVar4 + 0xb8) == 0) goto LAB_02ddaa78;
      FUN_02ddaa7c(*(long *)(lVar4 + 0xb8),*(undefined8 *)(param_1 + 0x28),0);
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(uVar3,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                  );
        FUN_03924d70(0x3f800000,uVar3,0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar3);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
  }
  return 0;
}


