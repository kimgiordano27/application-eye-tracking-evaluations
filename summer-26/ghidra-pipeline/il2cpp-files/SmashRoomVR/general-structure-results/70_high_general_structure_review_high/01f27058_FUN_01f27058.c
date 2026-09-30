/*
FUNCTION_NAME: FUN_01f27058
ENTRY_POINT: 01f27058
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_01f27058(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2679);
    thunk_FUN_01ad9084(StringLiteral_2681);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_01ae9ed0(param_2);
    }
  }
  puVar1 = StringLiteral_2679;
  if (*(int *)(*(long *)StringLiteral_2679 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03feddc6 == '\0') {
    thunk_FUN_01ad9084(StringLiteral_2679);
    DAT_03feddc6 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *(long *)puVar1;
  }
  uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar3 = FUN_03922f24(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2e04(*(undefined8 *)StringLiteral_2681,0);
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03feddc6 == '\0') {
    thunk_FUN_01ad9084(StringLiteral_2679);
    DAT_03feddc6 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    FUN_01f27580(lVar2,**(undefined8 **)(param_2 + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


