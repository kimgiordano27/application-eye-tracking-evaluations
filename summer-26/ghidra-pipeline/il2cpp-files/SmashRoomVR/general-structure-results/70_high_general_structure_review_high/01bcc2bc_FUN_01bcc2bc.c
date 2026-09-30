/*
FUNCTION_NAME: FUN_01bcc2bc
ENTRY_POINT: 01bcc2bc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01bcc2bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed1df & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_8__);
    thunk_FUN_01ad9084(
                      Method_BNG_RaycastWeapon_<doMuzzleFlash>d__76_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed1df = 1;
  }
  puVar3 = Method_BNG_RaycastWeapon_<doMuzzleFlash>d__76_System_Collections_IEnumerator_Reset__;
  puVar2 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_8__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_01f25510(*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  thunk_FUN_01b4f09c();
  uVar4 = FUN_01f25510(*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x28),uVar4);
  return;
}


