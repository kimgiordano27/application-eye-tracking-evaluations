/*
FUNCTION_NAME: FUN_01bd871c
ENTRY_POINT: 01bd871c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_9;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_01bd871c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_03fed271 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<SendAsyncApm>b__23_0__);
    thunk_FUN_01ad9084(Method_OVRTrackedKeyboard_<>c_<_ctor>b__113_0__);
    DAT_03fed271 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
LAB_01bd88e0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar2 = FUN_02ee6cf0(*(undefined8 *)(lVar4 + 0x68),0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_01bd770c(uVar2,*(undefined8 *)(lVar4 + 0x68));
      if ((uVar2 & 1) == 0) {
        uVar1 = *(undefined8 *)(lVar4 + 0x68);
        uVar3 = *(undefined8 *)(lVar4 + 0x70);
      }
      else {
        if (*(int *)(*(long *)
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar1 = FUN_038eeae0(0);
        uVar1 = FUN_02ee6c30(uVar1,*(undefined8 *)Method_OVRTrackedKeyboard_<>c_<_ctor>b__113_0__,
                             *(undefined8 *)(lVar4 + 0x68),0);
        uVar3 = 0;
      }
      FUN_01bd7a20(lVar4,uVar1,uVar3);
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x38) == 0)) goto LAB_01bd88e0;
    uVar1 = FUN_038fe800(*(long *)(lVar4 + 0x38),0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_03922f24(uVar1,0,0);
    if ((uVar2 & 1) == 0) {
      uVar1 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(0x3f800000,uVar1,0);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar1);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2e04(*(undefined8 *)Method_System_Net_Sockets_Socket_<>c_<SendAsyncApm>b__23_0__,0);
  }
  return 0;
}


