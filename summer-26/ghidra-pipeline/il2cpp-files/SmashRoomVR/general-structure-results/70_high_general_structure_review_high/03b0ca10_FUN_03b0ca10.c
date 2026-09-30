/*
FUNCTION_NAME: FUN_03b0ca10
ENTRY_POINT: 03b0ca10
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


void FUN_03b0ca10(long param_1,byte param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((DAT_03ffda89 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffda89 = 1;
  }
  if (*(byte *)(param_1 + 0x28) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x28) = param_2 & 1;
    uVar1 = FUN_03b0cac0(param_1);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_0391f968(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)FUN_03b0cac0(param_1);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03b0caac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x308))(plVar3,*(undefined8 *)(*plVar3 + 0x310));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


