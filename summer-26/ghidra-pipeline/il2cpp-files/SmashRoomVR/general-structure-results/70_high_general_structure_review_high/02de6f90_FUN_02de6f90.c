/*
FUNCTION_NAME: FUN_02de6f90
ENTRY_POINT: 02de6f90
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_02de6f90(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_03feffc5 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03feffc5 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar1 = FUN_02ddfc74(lVar2);
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0xa8);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar1 = FUN_03923030(uVar3,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(lVar2 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0395a4a4(*(long *)(lVar2 + 0xa8),*(undefined4 *)(lVar2 + 0x1d8),0);
      }
    }
    FUN_02de7170(param_1);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = *(undefined8 *)(lVar2 + 0xa8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_03923030(uVar3,0);
    if ((uVar1 & 1) != 0) {
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(0x41200000,uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    FUN_02de7170(param_1);
  }
  return 0;
}


