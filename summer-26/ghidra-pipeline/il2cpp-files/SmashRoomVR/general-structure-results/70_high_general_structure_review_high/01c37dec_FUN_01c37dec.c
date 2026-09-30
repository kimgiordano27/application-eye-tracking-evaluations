/*
FUNCTION_NAME: FUN_01c37dec
ENTRY_POINT: 01c37dec
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


void FUN_01c37dec(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_03fed547 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed547 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x3a) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_0391f968(uVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) != 0) {
            if (*(char *)(*(long *)(param_1 + 0x20) + 0x20) == '\0') {
              return;
            }
            if ((*(long *)(param_1 + 0x48) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
              FUN_01c4f6c0(DAT_00b556ec,DAT_00b55110,DAT_00b555e0,*(long *)(param_1 + 0x30),
                           *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x20),0);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
      }
    }
  }
  return;
}


