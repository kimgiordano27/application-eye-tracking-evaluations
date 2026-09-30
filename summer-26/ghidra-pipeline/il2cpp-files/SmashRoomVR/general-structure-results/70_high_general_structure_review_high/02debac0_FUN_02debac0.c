/*
FUNCTION_NAME: FUN_02debac0
ENTRY_POINT: 02debac0
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


void FUN_02debac0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_03fefff8 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4078);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fefff8 = 1;
  }
  puVar1 = StringLiteral_4078;
  if (*(char *)(param_1 + 0xb0) != '\0') {
    lVar2 = *(long *)StringLiteral_4078;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *(long *)puVar1;
    }
    FUN_02debc84(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb4),
                 *(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),
                 *(undefined4 *)(param_1 + 0x74),param_1,
                 *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10),*(undefined8 *)(param_1 + 0x30));
    FUN_02debc84(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xc0),
                 *(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200),
                 *(undefined4 *)(param_1 + 0x70),param_1,
                 *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),
                 *(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x80) != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar4,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03923030(uVar4,0);
      if ((uVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x90);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_03923030(uVar4,0);
        if ((uVar3 & 1) != 0) {
          FUN_02debeac(param_1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                       *(undefined8 *)(param_1 + 0x90));
        }
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar4,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03923030(uVar4,0);
      if ((uVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x98);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_03923030(uVar4,0);
        if ((uVar3 & 1) != 0) {
          FUN_02debeac(param_1,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                       *(undefined8 *)(param_1 + 0x98));
          return;
        }
      }
    }
  }
  return;
}


