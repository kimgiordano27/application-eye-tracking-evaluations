/*
FUNCTION_NAME: FUN_01c5c8a8
ENTRY_POINT: 01c5c8a8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_9;telemetry_or_network_hits_4
*/


void FUN_01c5c8a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((DAT_03fed68e & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_OnTrackingAcquired__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_166);
    DAT_03fed68e = 1;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar2 = FUN_01e8a9f8(param_1,*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_OnTrackingAcquired__
                        );
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f336c(*(undefined8 *)StringLiteral_166,0);
    }
    if ((*(int *)(param_1 + 0x20) == 0) && (*(char *)(param_1 + 0x24) != '\0')) {
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x49) = 1;
      }
    }
  }
  return;
}


