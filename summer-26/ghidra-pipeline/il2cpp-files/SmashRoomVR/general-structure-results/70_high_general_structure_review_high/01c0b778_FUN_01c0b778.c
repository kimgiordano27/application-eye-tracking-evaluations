/*
FUNCTION_NAME: FUN_01c0b778
ENTRY_POINT: 01c0b778
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c0b778(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((DAT_03fed3ec & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_1__
                      );
    DAT_03fed3ec = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    FUN_03919868(*(undefined8 *)
                  Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_1__,1,
                 0);
    FUN_03919c1c(0);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(lVar4 + 0x28);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(lVar4 + 0x28) == 0) goto LAB_01c0b958;
        FUN_0391fb70(*(long *)(lVar4 + 0x28),1,0);
      }
      uVar2 = *(undefined8 *)(lVar4 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(lVar4 + 0x30) == 0) goto LAB_01c0b958;
        FUN_0391fb70(*(long *)(lVar4 + 0x30),0,0);
      }
      uVar2 = *(undefined8 *)(lVar4 + 0x48);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(lVar4 + 0x48) == 0) goto LAB_01c0b958;
        FUN_0391fb70(*(long *)(lVar4 + 0x48),0,0);
      }
      uVar2 = *(undefined8 *)(lVar4 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(lVar4 + 0x40) == 0) goto LAB_01c0b958;
        FUN_0391fb70(*(long *)(lVar4 + 0x40),1,0);
      }
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 != 0) {
      uVar5 = *(undefined4 *)(lVar4 + 0x38);
      uVar2 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(uVar5,uVar2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar2);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
LAB_01c0b958:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


