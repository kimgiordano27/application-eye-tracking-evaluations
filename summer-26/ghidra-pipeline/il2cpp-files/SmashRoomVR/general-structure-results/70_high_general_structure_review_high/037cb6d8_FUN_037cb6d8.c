/*
FUNCTION_NAME: FUN_037cb6d8
ENTRY_POINT: 037cb6d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


undefined8 FUN_037cb6d8(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_03ff80fa & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d8e318);
    DAT_03ff80fa = 1;
  }
  if (param_1 == (long *)0x0) {
    uVar2 = *(undefined8 *)PTR_DAT_03d8e318;
  }
  else {
    lVar3 = *param_1;
    bVar1 = *(byte *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                     0x130);
    if ((bVar1 <= *(byte *)(lVar3 + 0x130)) &&
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__)) {
      uVar2 = FUN_037cb44c(param_1);
      return uVar2;
    }
    uVar2 = (**(code **)(lVar3 + 0x168))(param_1,*(undefined8 *)(lVar3 + 0x170));
  }
  return uVar2;
}


