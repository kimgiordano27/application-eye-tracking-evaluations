/*
FUNCTION_NAME: FUN_02e18b14
ENTRY_POINT: 02e18b14
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


void FUN_02e18b14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_03ff01a9 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01a9 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0xf0) != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x328);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(param_1 + 0x328);
      if (plVar3 == (long *)0x0) goto LAB_02e18bf4;
      (**(code **)(*plVar3 + 0x1a8))(plVar3,param_2,0,*(undefined8 *)(*plVar3 + 0x1b0));
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x118);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02e18be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x1a8))(plVar3,param_2,0,*(undefined8 *)(*plVar3 + 0x1b0));
    return;
  }
LAB_02e18bf4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


