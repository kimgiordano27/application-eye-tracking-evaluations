/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$UpdateGameObjectState
ENTRY_POINT: 028d7a50
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__UpdateGameObjectState
               (ulong param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f6ce0);
    FUN_017fc350(PTR_DAT_037fb5c8);
    FUN_017fc350(PTR_DAT_037fb5d0);
    FUN_017fc350(PTR_DAT_037fb5d8);
    FUN_017fc350(PTR_DAT_037fb5e0);
    FUN_017fc350(PTR_DAT_037fb5e8);
    FUN_017fc350(PTR_DAT_037fb5f0);
    FUN_017fc350(PTR_DAT_037fb5f8);
    FUN_017fc350(PTR_DAT_037fb5c0);
    FUN_017fc350(PTR_DAT_037fb600);
    FUN_017fc350(PTR_DAT_037fb5b8);
    *(undefined1 *)(unaff_x21 + 0x5c6) = 1;
  }
  uVar6 = thunk_FUN_01861bbc(*unaff_x22);
  FUN_024c491c(uVar6,*unaff_x20);
  plVar9 = (long *)(unaff_x19 + 0x20);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  **(undefined8 **)(lVar7 + 0xb8) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(undefined8 *)(lVar7 + 0xb8),uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar6 = thunk_FUN_01861bbc();
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4(lVar7);
  }
  FUN_02163424(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  puVar5 = PTR_DAT_037fb5e8;
  puVar2 = PTR_DAT_037fb5c8;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 8,uVar6);
  uVar6 = thunk_FUN_01861bbc(*(undefined8 *)puVar5);
  FUN_0216ff30(uVar6,*(undefined8 *)puVar2);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x10,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar6 = thunk_FUN_01861bbc();
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4(lVar7);
  }
  FUN_0216ff30(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x18,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar6 = thunk_FUN_01861bbc();
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4(lVar7);
  }
  FUN_0216ff30(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  puVar5 = PTR_DAT_037fb5f0;
  puVar2 = PTR_DAT_037fb5d8;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x20,uVar6);
  uVar6 = thunk_FUN_01861bbc(*(undefined8 *)puVar5);
  FUN_0216ff30(uVar6,*(undefined8 *)puVar2);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x28) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x28,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar6 = thunk_FUN_01861bbc();
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4(lVar7);
  }
  FUN_0216ff30(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x30,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x50) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar6 = thunk_FUN_01861bbc();
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4(lVar7);
  }
  FUN_0216ff30(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x58));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x38) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  puVar5 = PTR_DAT_037fb600;
  puVar2 = PTR_DAT_037fb5f8;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x38,uVar6);
  uVar6 = thunk_FUN_01861bbc(*(undefined8 *)puVar5);
  FUN_024f24c4(uVar6,*(undefined8 *)puVar2);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x40) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x40,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x60) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar6 = thunk_FUN_01861bbc();
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4(lVar7);
  }
  FUN_0216ff30(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x68));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x48) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x48,uVar6);
  uVar6 = thunk_FUN_01861bbc(*(undefined8 *)puVar5);
  FUN_024f24c4(uVar6,*(undefined8 *)puVar2);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x50) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  puVar4 = PTR_DAT_037fb5e0;
  puVar3 = PTR_DAT_037fb5d0;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x50,uVar6);
  uVar6 = thunk_FUN_01861bbc(*(undefined8 *)puVar4);
  FUN_0216ff30(uVar6,*(undefined8 *)puVar3);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x58) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x58,uVar6);
  uVar6 = thunk_FUN_01861bbc(*(undefined8 *)puVar5);
  FUN_024f24c4(uVar6,*(undefined8 *)puVar2);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x60,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x78);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  puVar2 = PTR_DAT_037f6ce0;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x78);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  uVar10 = **(undefined8 **)(lVar7 + 0xb8);
  uVar6 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4(lVar7);
  }
  FUN_02b42fa8(uVar6,uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x80),0);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x68) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x68,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x78);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar8 = *plVar9;
  uVar6 = **(undefined8 **)(lVar7 + 0xb8);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0185daa4(lVar8);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar10 = thunk_FUN_01861bbc();
  lVar8 = *plVar9;
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar7 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_0185daa4(lVar8);
    uVar1 = *(ushort *)(*plVar9 + 0x135);
    lVar7 = *plVar9;
  }
  uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x88);
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_0185daa4(lVar7);
  }
  FUN_020ecd70(uVar10,uVar6,uVar11,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x98));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x70) = uVar10;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar7 + 0xb8) + 0x70,uVar10);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  FUN_01b7eb94(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xa0));
  return;
}


