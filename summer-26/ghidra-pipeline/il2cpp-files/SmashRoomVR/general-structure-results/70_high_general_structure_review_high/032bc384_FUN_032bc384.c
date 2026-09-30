/*
FUNCTION_NAME: FUN_032bc384
ENTRY_POINT: 032bc384
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_032bc384(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_03d87248;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff58b9 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d87248);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d87250);
    DAT_03ff58b9 = 1;
  }
  uVar4 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2e04(*(undefined8 *)PTR_DAT_03d87250,0);
    return;
  }
  **(long **)(*(long *)puVar2 + 0xb8) = param_1;
  thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar2 + 0xb8),param_1);
  puVar1 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if (*(int *)(*(long *)
                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_038f032c(0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038eea7c(1,0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_032ad830(*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


