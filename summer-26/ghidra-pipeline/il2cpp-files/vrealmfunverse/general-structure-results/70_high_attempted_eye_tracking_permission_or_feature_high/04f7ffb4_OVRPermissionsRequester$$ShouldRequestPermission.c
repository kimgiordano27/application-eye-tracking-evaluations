/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 04f7ffb4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__ShouldRequestPermission(long param_1)

{
  char cVar1;
  long in_x9;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x25;
  long unaff_x26;
  undefined4 uVar3;
  
  cVar1 = DAT_066c1f0a;
  lVar2 = *(long *)(in_x9 + 0xb8);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x38);
  *(undefined8 *)(lVar2 + 0x24) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x30);
  *(undefined4 *)(lVar2 + 0x2c) = uVar3;
  if (cVar1 == '\0') {
    FUN_02b3c81c();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    DAT_066c1f0a = '\x01';
  }
  cVar1 = DAT_066c1caa;
  lVar2 = *(long *)(in_x9 + 0xb8);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x2c);
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x24);
  *(undefined4 *)(lVar2 + 0x38) = uVar3;
  if (cVar1 == '\0') {
    FUN_02b3c81c();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    DAT_066c1caa = '\x01';
  }
  lVar2 = *(long *)(in_x9 + 0xb8);
  cVar1 = *(char *)(unaff_x25 + 0x7c7);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x20);
  *(undefined8 *)(lVar2 + 0x3c) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
  *(undefined4 *)(lVar2 + 0x44) = uVar3;
  if (cVar1 == '\0') {
    FUN_02b3c81c();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    *(undefined1 *)(unaff_x25 + 0x7c7) = 1;
  }
  lVar2 = *(long *)(in_x9 + 0xb8);
  cVar1 = *(char *)(unaff_x22 + 0xd9f);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x5c);
  *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x54);
  *(undefined4 *)(lVar2 + 0x50) = uVar3;
  if (cVar1 == '\0') {
    FUN_02b3c81c();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    *(undefined1 *)(unaff_x22 + 0xd9f) = 1;
  }
  lVar2 = *(long *)(in_x9 + 0xb8);
  cVar1 = *(char *)(unaff_x26 + 0x7c6);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x50);
  *(undefined8 *)(lVar2 + 0x54) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x48);
  *(undefined4 *)(lVar2 + 0x5c) = uVar3;
  if (cVar1 == '\0') {
    FUN_02b3c81c();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    *(undefined1 *)(unaff_x26 + 0x7c6) = 1;
  }
  lVar2 = *(long *)(in_x9 + 0xb8);
  cVar1 = *(char *)(unaff_x21 + 0xda1);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x38);
  *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x30);
  *(undefined4 *)(lVar2 + 0x68) = uVar3;
  if (cVar1 == '\0') {
    FUN_02b3c81c();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    *(undefined1 *)(unaff_x21 + 0xda1) = 1;
  }
  cVar1 = DAT_066c1f0a;
  lVar2 = *(long *)(in_x9 + 0xb8);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x44);
  *(undefined8 *)(lVar2 + 0x6c) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x3c);
  *(undefined4 *)(lVar2 + 0x74) = uVar3;
  if (cVar1 == '\0') {
    FUN_02b3c81c();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    DAT_066c1f0a = '\x01';
  }
  cVar1 = DAT_066c1caa;
  lVar2 = *(long *)(in_x9 + 0xb8);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x2c);
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x24);
  *(undefined4 *)(lVar2 + 0x80) = uVar3;
  if (cVar1 == '\0') {
    FUN_02b3c81c();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    DAT_066c1caa = '\x01';
  }
  lVar2 = *(long *)(in_x9 + 0xb8);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x20);
  *(undefined8 *)(lVar2 + 0x84) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
  *(undefined4 *)(lVar2 + 0x8c) = uVar3;
  return;
}


