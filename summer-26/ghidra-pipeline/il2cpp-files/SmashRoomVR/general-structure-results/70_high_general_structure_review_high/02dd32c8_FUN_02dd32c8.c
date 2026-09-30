/*
FUNCTION_NAME: FUN_02dd32c8
ENTRY_POINT: 02dd32c8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void FUN_02dd32c8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_03feff03 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feff03 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x1e8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (plVar3 = *(long **)(*(long *)(param_1 + 0x30) + 0x1e8), plVar3 == (long *)0x0))
      goto LAB_02dd339c;
      uVar2 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_02dd339c;
        FUN_02ddffb4(*(long *)(param_1 + 0x30),1,0);
        uVar4 = *(undefined8 *)(param_1 + 0xd8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_03923030(uVar4,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0xd8) == 0) goto LAB_02dd339c;
          *(undefined1 *)(*(long *)(param_1 + 0xd8) + 0x70) = 1;
        }
      }
    }
    return;
  }
LAB_02dd339c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


