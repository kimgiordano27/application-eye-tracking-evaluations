/*
FUNCTION_NAME: FUN_01c4c7d0
ENTRY_POINT: 01c4c7d0
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


undefined8 FUN_01c4c7d0(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar2 = param_1;
  if ((DAT_03fed5fe & 1) == 0) {
    uVar2 = thunk_FUN_01ad9084(
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
    DAT_03fed5fe = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar6,0,0);
    lVar4 = *(long *)(param_1 + 0xa0);
    if (lVar4 != 0) {
      if ((uVar2 & 1) == 0) {
        uVar6 = *(undefined8 *)(lVar4 + 0x40);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(uVar6,0,0);
        uVar2 = 0;
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (*(long *)(param_1 + 0xa0) == 0) goto LAB_01c4c890;
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0xa0) + 0x40);
      }
      else {
        puVar5 = (undefined8 *)(lVar4 + 0x30);
      }
      return *puVar5;
    }
  }
LAB_01c4c890:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178(uVar2);
}


