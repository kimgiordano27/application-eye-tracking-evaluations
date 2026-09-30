/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 06022710
PROGRAM: vandalizer-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SetDeveloperTelemetryConsent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined4 uVar7;
  
  FUN_031f20f4(PTR_DAT_075f2ee0);
  *(undefined1 *)(unaff_x19 + 0xb2d) = 1;
  puVar2 = PTR_DAT_075f2ee0;
  if (DAT_07a3fba5 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3fba5 = '\x01';
  }
  puVar1 = PTR_DAT_0759b378;
  puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar7 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_0759b378 + 0xb8) + 0x5c);
  *puVar4 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_0759b378 + 0xb8) + 0x54);
  *(undefined4 *)(puVar4 + 1) = uVar7;
  if (DAT_07a3fba6 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3fba6 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  lVar5 = *(long *)puVar2;
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x50);
  *(undefined8 *)(lVar6 + 0xc) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x48);
  *(undefined4 *)(lVar6 + 0x14) = uVar7;
  if (DAT_07a3fba3 == '\0') {
    FUN_031f20f4(puVar1);
    lVar3 = *(long *)puVar1;
    lVar5 = *(long *)puVar2;
    DAT_07a3fba3 = '\x01';
  }
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x44);
  *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x3c);
  *(undefined4 *)(lVar6 + 0x20) = uVar7;
  if (DAT_07a3fba4 == '\0') {
    FUN_031f20f4(puVar1);
    lVar3 = *(long *)puVar1;
    lVar5 = *(long *)puVar2;
    DAT_07a3fba4 = '\x01';
  }
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x38);
  *(undefined8 *)(lVar6 + 0x24) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30);
  *(undefined4 *)(lVar6 + 0x2c) = uVar7;
  if (DAT_07a3f79f == '\0') {
    FUN_031f20f4(puVar1);
    lVar3 = *(long *)puVar1;
    lVar5 = *(long *)puVar2;
    DAT_07a3f79f = '\x01';
  }
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x2c);
  *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x24);
  *(undefined4 *)(lVar6 + 0x38) = uVar7;
  if (DAT_07a3caf2 == '\0') {
    FUN_031f20f4(puVar1);
    lVar3 = *(long *)puVar1;
    lVar5 = *(long *)puVar2;
    DAT_07a3caf2 = '\x01';
  }
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x20);
  *(undefined8 *)(lVar6 + 0x3c) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
  *(undefined4 *)(lVar6 + 0x44) = uVar7;
  if (DAT_07a3fba5 == '\0') {
    FUN_031f20f4(puVar1);
    lVar3 = *(long *)puVar1;
    lVar5 = *(long *)puVar2;
    DAT_07a3fba5 = '\x01';
  }
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x5c);
  *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x54);
  *(undefined4 *)(lVar6 + 0x50) = uVar7;
  if (DAT_07a3fba6 == '\0') {
    FUN_031f20f4(puVar1);
    lVar3 = *(long *)puVar1;
    lVar5 = *(long *)puVar2;
    DAT_07a3fba6 = '\x01';
  }
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x50);
  *(undefined8 *)(lVar6 + 0x54) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x48);
  *(undefined4 *)(lVar6 + 0x5c) = uVar7;
  if (DAT_07a3fba4 == '\0') {
    FUN_031f20f4(puVar1);
    lVar3 = *(long *)puVar1;
    lVar5 = *(long *)puVar2;
    DAT_07a3fba4 = '\x01';
  }
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x38);
  *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30);
  *(undefined4 *)(lVar6 + 0x68) = uVar7;
  if (DAT_07a3fba3 == '\0') {
    FUN_031f20f4(puVar1);
    lVar3 = *(long *)puVar1;
    lVar5 = *(long *)puVar2;
    DAT_07a3fba3 = '\x01';
  }
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x44);
  *(undefined8 *)(lVar6 + 0x6c) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x3c);
  *(undefined4 *)(lVar6 + 0x74) = uVar7;
  if (DAT_07a3f79f == '\0') {
    FUN_031f20f4(puVar1);
    lVar3 = *(long *)puVar1;
    lVar5 = *(long *)puVar2;
    DAT_07a3f79f = '\x01';
  }
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x2c);
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x24);
  *(undefined4 *)(lVar6 + 0x80) = uVar7;
  if (DAT_07a3caf2 == '\0') {
    FUN_031f20f4(puVar1);
    lVar3 = *(long *)puVar1;
    lVar5 = *(long *)puVar2;
    DAT_07a3caf2 = '\x01';
  }
  lVar5 = *(long *)(lVar5 + 0xb8);
  uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x20);
  *(undefined8 *)(lVar5 + 0x84) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
  *(undefined4 *)(lVar5 + 0x8c) = uVar7;
  return;
}


