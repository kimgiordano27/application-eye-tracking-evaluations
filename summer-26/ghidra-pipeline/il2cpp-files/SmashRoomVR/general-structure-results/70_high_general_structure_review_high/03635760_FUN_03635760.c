/*
FUNCTION_NAME: FUN_03635760
ENTRY_POINT: 03635760
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_03635760(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_03d9a938;
  if ((DAT_03ff72a1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Collections_Stack_StackEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9a938);
    DAT_03ff72a1 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *(long *)puVar1;
  }
  lVar4 = **(long **)(lVar2 + 0xb8);
  if (lVar4 != 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar4 == 0) goto LAB_03635868;
    }
                    /* WARNING: Could not recover jumptable at 0x03635800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),param_1,*(undefined8 *)(lVar4 + 0x28))
    ;
    return;
  }
  lVar2 = FUN_0391c2b8(param_1,0);
  if ((lVar2 != 0) &&
     (lVar2 = FUN_01ed712c(lVar2,*(undefined8 *)
                                  Method_System_Collections_Stack_StackEnumerator_get_Current__),
     lVar2 != 0)) {
    uVar3 = FUN_03900d8c(lVar2,0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    FUN_03923b08(uVar3,1,0);
    return;
  }
LAB_03635868:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


