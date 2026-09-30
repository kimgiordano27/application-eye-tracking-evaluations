/*
FUNCTION_NAME: FUN_02ddacc8
ENTRY_POINT: 02ddacc8
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


void FUN_02ddacc8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_03feff57 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feff57 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x210);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_2 + 0x210) == 0) goto LAB_02ddad8c;
      *(undefined1 *)(*(long *)(param_2 + 0x210) + 0x2f2) = 1;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x218);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_2 + 0x218) == 0) goto LAB_02ddad8c;
      *(undefined1 *)(*(long *)(param_2 + 0x218) + 0x2f2) = 1;
    }
    FUN_02e30dc0(param_1,param_2,0);
    return;
  }
LAB_02ddad8c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


