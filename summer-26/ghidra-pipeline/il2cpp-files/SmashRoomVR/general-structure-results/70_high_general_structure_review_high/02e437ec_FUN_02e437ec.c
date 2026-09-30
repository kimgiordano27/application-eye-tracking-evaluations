/*
FUNCTION_NAME: FUN_02e437ec
ENTRY_POINT: 02e437ec
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


undefined4 FUN_02e437ec(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  if ((DAT_03ff0296 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0296 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x41) != '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar5,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_02e438b4;
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x58);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(uVar5,0);
      if ((uVar2 & 1) != 0) {
        if (((*(long *)(param_1 + 0x48) == 0) ||
            (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x58), lVar3 == 0)) ||
           (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) goto LAB_02e438b4;
        puVar4 = (undefined4 *)(lVar3 + 0x18);
        goto LAB_02e438a4;
      }
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar4 = (undefined4 *)(*(long *)(param_1 + 0x20) + 0x20);
LAB_02e438a4:
    return *puVar4;
  }
LAB_02e438b4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


