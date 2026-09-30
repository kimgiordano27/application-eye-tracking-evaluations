/*
FUNCTION_NAME: FUN_02de6b48
ENTRY_POINT: 02de6b48
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


undefined8 FUN_02de6b48(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_03feffc3 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feffc3 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar4 == 0) {
LAB_02de6c3c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x1e8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar5,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x200);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(uVar5,0);
      if ((uVar2 & 1) != 0) {
        plVar3 = *(long **)(lVar4 + 0x200);
        if (plVar3 == (long *)0x0) goto LAB_02de6c3c;
        (**(code **)(*plVar3 + 0x628))(plVar3,lVar4,1,0,*(undefined8 *)(*plVar3 + 0x630));
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  return 0;
}


