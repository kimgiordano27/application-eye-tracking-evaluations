/*
FUNCTION_NAME: FUN_02dd20e8
ENTRY_POINT: 02dd20e8
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


undefined8 FUN_02dd20e8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  
  if ((DAT_03fefef2 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fefef2 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar2,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_02dd222c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = FUN_02ddfc74(*(long *)(param_1 + 0x28),0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_02dd222c;
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x98);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_03923030(uVar2,0);
        if ((uVar3 & 1) == 0) {
          plVar4 = *(long **)(param_1 + 0x30);
          if (plVar4 == (long *)0x0) goto LAB_02dd222c;
          (**(code **)(*plVar4 + 0x3a8))
                    (plVar4,*(undefined8 *)(param_1 + 0x28),1,*(undefined8 *)(*plVar4 + 0x3b0));
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x30);
      uVar2 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(uVar5,uVar2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar2);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    goto LAB_02dd222c;
  }
  return 0;
}


