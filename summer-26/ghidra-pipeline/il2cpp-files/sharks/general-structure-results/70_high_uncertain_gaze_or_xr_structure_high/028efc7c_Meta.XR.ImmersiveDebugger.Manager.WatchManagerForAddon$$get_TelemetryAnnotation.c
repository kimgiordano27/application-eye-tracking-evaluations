/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 028efc7c
PROGRAM: sharks-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManagerForAddon__get_TelemetryAnnotation
               (undefined8 param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong in_x9;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((in_x9 & 1) == 0) {
    FUN_0185daa4(param_1);
  }
  FUN_0216ff30();
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20) = unaff_x20;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  puVar5 = PTR_DAT_037fb5f0;
  puVar2 = PTR_DAT_037fb5d8;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar6 + 0xb8) + 0x20);
  uVar7 = thunk_FUN_01861bbc(*(undefined8 *)puVar5);
  FUN_0216ff30(uVar7,*(undefined8 *)puVar2);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x28) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar6 + 0xb8) + 0x28,uVar7);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar7 = thunk_FUN_01861bbc();
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
  }
  FUN_0216ff30(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48));
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar6 + 0xb8) + 0x30,uVar7);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x50) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar7 = thunk_FUN_01861bbc();
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
  }
  FUN_0216ff30(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x58));
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  puVar5 = PTR_DAT_037fb600;
  puVar2 = PTR_DAT_037fb5f8;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar6 + 0xb8) + 0x38,uVar7);
  uVar7 = thunk_FUN_01861bbc(*(undefined8 *)puVar5);
  FUN_024f24c4(uVar7,*(undefined8 *)puVar2);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x40) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar6 + 0xb8) + 0x40,uVar7);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x60) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar7 = thunk_FUN_01861bbc();
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
  }
  FUN_0216ff30(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x68));
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x48) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar6 + 0xb8) + 0x48,uVar7);
  uVar7 = thunk_FUN_01861bbc(*(undefined8 *)puVar5);
  FUN_024f24c4(uVar7,*(undefined8 *)puVar2);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  puVar4 = PTR_DAT_037fb5e0;
  puVar3 = PTR_DAT_037fb5d0;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar6 + 0xb8) + 0x50,uVar7);
  uVar7 = thunk_FUN_01861bbc(*(undefined8 *)puVar4);
  FUN_0216ff30(uVar7,*(undefined8 *)puVar3);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x58) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar6 + 0xb8) + 0x58,uVar7);
  uVar7 = thunk_FUN_01861bbc(*(undefined8 *)puVar5);
  FUN_024f24c4(uVar7,*(undefined8 *)puVar2);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar6 + 0xb8) + 0x60,uVar7);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x78);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  puVar2 = PTR_DAT_037f6ce0;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x78);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  uVar9 = **(undefined8 **)(lVar6 + 0xb8);
  uVar7 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
  }
  FUN_02b42fa8(uVar7,uVar9,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x80),0);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x68) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar6 + 0xb8) + 0x68,uVar7);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x78);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar8 = *unaff_x19;
  uVar7 = **(undefined8 **)(lVar6 + 0xb8);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0185daa4(lVar8);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar9 = thunk_FUN_01861bbc();
  lVar8 = *unaff_x19;
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar6 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_0185daa4(lVar8);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar6 = *unaff_x19;
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x88);
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
  }
  FUN_020ecd70(uVar9,uVar7,uVar10,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x98));
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x70) = uVar9;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar6 + 0xb8) + 0x70,uVar9);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  FUN_01b7ebb0(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xa0));
  return;
}


