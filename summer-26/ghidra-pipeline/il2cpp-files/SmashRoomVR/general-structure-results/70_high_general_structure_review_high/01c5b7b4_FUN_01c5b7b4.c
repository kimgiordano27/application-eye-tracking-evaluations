/*
FUNCTION_NAME: FUN_01c5b7b4
ENTRY_POINT: 01c5b7b4
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


void FUN_01c5b7b4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_03fed682 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_154);
    DAT_03fed682 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0xb4) != '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0xf0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar5,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(param_1 + 0xf0);
      if (plVar3 == (long *)0x0) goto LAB_01c5b8ac;
      (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    }
  }
  lVar4 = *(long *)(*(long *)(*(long *)StringLiteral_154 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  }
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar5,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
LAB_01c5b8ac:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x68) + 0x30);
    if (lVar4 != 0) {
      FUN_0392e738(lVar4,0);
      return;
    }
  }
  return;
}


