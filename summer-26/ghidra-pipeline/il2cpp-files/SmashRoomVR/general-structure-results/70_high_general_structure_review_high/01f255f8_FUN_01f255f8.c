/*
FUNCTION_NAME: FUN_01f255f8
ENTRY_POINT: 01f255f8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_01f255f8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    if (puVar1 == (undefined8 *)0x0) {
      FUN_01ae9ed0(param_1);
      puVar1 = *(undefined8 **)(param_1 + 0x38);
    }
  }
  uVar2 = *puVar1;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0304eec0(uVar2,0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar2 = FUN_03923c3c(uVar2,0,0);
  FUN_01f2f298(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x38) + 8));
  return;
}


