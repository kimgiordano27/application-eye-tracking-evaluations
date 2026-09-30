/*
FUNCTION_NAME: FUN_01c07a24
ENTRY_POINT: 01c07a24
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c07a24(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  
  if ((DAT_03fed3c5 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed3c5 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
LAB_01c07b4c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_01c07b4c;
      fVar5 = *(float *)(lVar4 + 0x28);
      FUN_0395ae9c(fVar5 * *(float *)(param_1 + 0x28),fVar5 * *(float *)(param_1 + 0x2c),
                   fVar5 * *(float *)(param_1 + 0x30),*(long *)(lVar4 + 0x20),1,0);
    }
    iVar1 = *(int *)(param_1 + 0x34) + 1;
    *(int *)(param_1 + 0x34) = iVar1;
    if (99 < iVar1) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                            );
  FUN_03924d70(DAT_00b55428,uVar3,0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar3);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}


