/*
FUNCTION_NAME: FUN_02e1c814
ENTRY_POINT: 02e1c814
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


void FUN_02e1c814(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = StringLiteral_4665;
  puVar2 = StringLiteral_4664;
  puVar1 = StringLiteral_4194;
  if ((DAT_03ff017c & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4665);
    thunk_FUN_01ad9084(StringLiteral_4664);
    thunk_FUN_01ad9084(StringLiteral_4194);
    DAT_03ff017c = 1;
  }
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_02de6428(uVar4,0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x20),uVar4);
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_02de6428(uVar4,0);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x28),uVar4);
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_02de6428(uVar4,0);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x30),uVar4);
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_02de6428(uVar4,0);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x38),uVar4);
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_02de6428(uVar4,0);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x40),uVar4);
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_02de6428(uVar4,0);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x48),uVar4);
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_02b591b0(uVar4,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x58),uVar4);
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uVar5 = (*(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
          )[1];
  uVar4 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  *(undefined2 *)(param_1 + 0x94) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  FUN_039211e4(param_1,0);
  return;
}


