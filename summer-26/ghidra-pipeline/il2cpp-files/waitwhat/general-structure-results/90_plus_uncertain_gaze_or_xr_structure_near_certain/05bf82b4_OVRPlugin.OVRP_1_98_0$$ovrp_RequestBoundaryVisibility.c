/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 05bf82b4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility(long param_1)

{
  char cVar1;
  long in_x9;
  long in_x10;
  long in_x11;
  long lVar2;
  int in_w12;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(in_x10 + 0x38);
  *(undefined8 *)(in_x11 + 0x24) = *(undefined8 *)(in_x10 + 0x30);
  *(undefined4 *)(in_x11 + 0x2c) = uVar3;
  if (in_w12 == 0) {
    FUN_03188a78();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    *(undefined1 *)(unaff_x23 + 4) = 1;
  }
  cVar1 = DAT_075457aa;
  lVar2 = *(long *)(in_x9 + 0xb8);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x2c);
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x24);
  *(undefined4 *)(lVar2 + 0x38) = uVar3;
  if (cVar1 == '\0') {
    FUN_03188a78();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    DAT_075457aa = '\x01';
  }
  lVar2 = *(long *)(in_x9 + 0xb8);
  cVar1 = *(char *)(unaff_x25 + 0x406);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x20);
  *(undefined8 *)(lVar2 + 0x3c) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
  *(undefined4 *)(lVar2 + 0x44) = uVar3;
  if (cVar1 == '\0') {
    FUN_03188a78();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    *(undefined1 *)(unaff_x25 + 0x406) = 1;
  }
  lVar2 = *(long *)(in_x9 + 0xb8);
  cVar1 = *(char *)(unaff_x22 + 0xbc0);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x5c);
  *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x54);
  *(undefined4 *)(lVar2 + 0x50) = uVar3;
  if (cVar1 == '\0') {
    FUN_03188a78();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    *(undefined1 *)(unaff_x22 + 0xbc0) = 1;
  }
  lVar2 = *(long *)(in_x9 + 0xb8);
  cVar1 = *(char *)(unaff_x26 + 0x405);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x50);
  *(undefined8 *)(lVar2 + 0x54) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x48);
  *(undefined4 *)(lVar2 + 0x5c) = uVar3;
  if (cVar1 == '\0') {
    FUN_03188a78();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    *(undefined1 *)(unaff_x26 + 0x405) = 1;
  }
  lVar2 = *(long *)(in_x9 + 0xb8);
  cVar1 = *(char *)(unaff_x21 + 0x404);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x38);
  *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x30);
  *(undefined4 *)(lVar2 + 0x68) = uVar3;
  if (cVar1 == '\0') {
    FUN_03188a78();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    *(undefined1 *)(unaff_x21 + 0x404) = 1;
  }
  lVar2 = *(long *)(in_x9 + 0xb8);
  cVar1 = *(char *)(unaff_x23 + 4);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x44);
  *(undefined8 *)(lVar2 + 0x6c) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x3c);
  *(undefined4 *)(lVar2 + 0x74) = uVar3;
  if (cVar1 == '\0') {
    FUN_03188a78();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    *(undefined1 *)(unaff_x23 + 4) = 1;
  }
  cVar1 = DAT_075457aa;
  lVar2 = *(long *)(in_x9 + 0xb8);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x2c);
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x24);
  *(undefined4 *)(lVar2 + 0x80) = uVar3;
  if (cVar1 == '\0') {
    FUN_03188a78();
    param_1 = *unaff_x19;
    in_x9 = *unaff_x20;
    DAT_075457aa = '\x01';
  }
  lVar2 = *(long *)(in_x9 + 0xb8);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x20);
  *(undefined8 *)(lVar2 + 0x84) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
  *(undefined4 *)(lVar2 + 0x8c) = uVar3;
  return;
}


