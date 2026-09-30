/*
FUNCTION_NAME: FUN_01c0b520
ENTRY_POINT: 01c0b520
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_8;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_01c0b520(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_03fed3e9 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_TMPro_Examples_VertexJitter_<AnimateVertexColors>d__11_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed3e9 = 1;
  }
  uVar2 = FUN_02ee6cf0(*(undefined8 *)(param_1 + 0x20),0);
  puVar1 = 
  Method_TMPro_Examples_VertexJitter_<AnimateVertexColors>d__11_System_Collections_IEnumerator_Reset__
  ;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f336c(*(undefined8 *)puVar1,0);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)
                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_038eec20(uVar3,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_01c0b67c;
    FUN_0391fb70(*(long *)(param_1 + 0x40),0,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
LAB_01c0b67c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_0391fb70(*(long *)(param_1 + 0x48),1,0);
  }
  uVar3 = FUN_01c0b680(param_1);
  FUN_03920cb0(param_1,uVar3,0);
  return;
}


