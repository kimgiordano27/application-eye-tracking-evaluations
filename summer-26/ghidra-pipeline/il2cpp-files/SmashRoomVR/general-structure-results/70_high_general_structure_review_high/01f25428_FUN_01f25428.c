/*
FUNCTION_NAME: FUN_01f25428
ENTRY_POINT: 01f25428
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


long FUN_01f25428(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  if (puVar3 == (undefined8 *)0x0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_01ae9ed0(param_1);
      puVar3 = *(undefined8 **)(param_1 + 0x38);
    }
  }
  uVar5 = *puVar3;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0304eec0(uVar5,0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  lVar1 = FUN_03923ecc(uVar5,0,0);
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ae9e74(lVar4);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_01afa9e0(lVar1,lVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(lVar1,lVar4);
    }
  }
  return lVar2;
}


