/*
FUNCTION_NAME: FUN_0380440c
ENTRY_POINT: 0380440c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_0380440c(long param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_03ff8330 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff8330 = 1;
  }
  if (*(byte *)(param_1 + 0x4d) != (param_2 & 1)) {
    FUN_0380434c(param_1,0);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(byte *)(param_1 + 0x4d) = param_2 & 1;
    if ((param_2 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 != 0) {
          *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(lVar3 + 0x25);
          *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(lVar3 + 0x24);
          *(undefined2 *)(lVar3 + 0x24) = 0;
          return;
        }
        goto LAB_03804534;
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) {
LAB_03804534:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      *(undefined1 *)(lVar3 + 0x25) = *(undefined1 *)(param_1 + 0x5c);
      *(undefined1 *)(lVar3 + 0x24) = *(undefined1 *)(param_1 + 0x5d);
    }
  }
  return;
}


