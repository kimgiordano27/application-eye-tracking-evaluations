/*
FUNCTION_NAME: FUN_02e3059c
ENTRY_POINT: 02e3059c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void FUN_02e3059c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((DAT_03ff01dc & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4050);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4742);
    DAT_03ff01dc = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0xf0) != '\0') {
    puVar4 = (undefined8 *)(param_1 + 0xf8);
    uVar5 = *puVar4;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar5,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = FUN_01e8b0b4(param_1,*(undefined8 *)StringLiteral_4050);
      *(undefined8 *)(param_1 + 0xf8) = uVar5;
      thunk_FUN_01b4f09c(puVar4,uVar5);
    }
    if (*(char *)(param_1 + 0xf0) != '\0') {
      uVar5 = *puVar4;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(uVar5,0);
      if ((uVar2 & 1) == 0) {
        lVar3 = FUN_0391c2b8(param_1,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar5 = FUN_039230bc(lVar3,0);
        uVar5 = FUN_02edd6e8(uVar5,*(undefined8 *)StringLiteral_4742,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f336c(uVar5,0);
        *(undefined1 *)(param_1 + 0xf0) = 0;
      }
    }
  }
  return;
}


