/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateIcon
ENTRY_POINT: 028e1a40
PROGRAM: sharks-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateIcon(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar7;
  undefined8 *unaff_x22;
  undefined8 uVar8;
  
  thunk_FUN_0188fd20(param_1 + 0x38);
  uVar4 = thunk_FUN_01861bbc(*unaff_x22);
  FUN_024f24c4(uVar4,*unaff_x21);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x40) = uVar4;
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar5 + 0xb8) + 0x40,uVar4);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x60) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar4 = thunk_FUN_01861bbc();
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4(lVar5);
  }
  FUN_0216ff30(uVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x68));
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x48) = uVar4;
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar5 + 0xb8) + 0x48,uVar4);
  uVar4 = thunk_FUN_01861bbc(*unaff_x22);
  FUN_024f24c4(uVar4,*unaff_x21);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x50) = uVar4;
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  puVar3 = PTR_DAT_037fb5e0;
  puVar2 = PTR_DAT_037fb5d0;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar5 + 0xb8) + 0x50,uVar4);
  uVar4 = thunk_FUN_01861bbc(*(undefined8 *)puVar3);
  FUN_0216ff30(uVar4,*(undefined8 *)puVar2);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x58) = uVar4;
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar5 + 0xb8) + 0x58,uVar4);
  uVar4 = thunk_FUN_01861bbc(*unaff_x22);
  FUN_024f24c4(uVar4,*unaff_x21);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x60) = uVar4;
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar5 + 0xb8) + 0x60,uVar4);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x78);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  puVar2 = PTR_DAT_037f6ce0;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x78);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
  uVar4 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4(lVar5);
  }
  FUN_02b42fa8(uVar4,uVar7,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x80),0);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x68) = uVar4;
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar5 + 0xb8) + 0x68,uVar4);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x78);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar6 = *unaff_x19;
  uVar4 = **(undefined8 **)(lVar5 + 0xb8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar7 = thunk_FUN_01861bbc();
  lVar6 = *unaff_x19;
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar5 = *unaff_x19;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x88);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_0185daa4(lVar5);
  }
  FUN_020ecd70(uVar7,uVar4,uVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x98));
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x70) = uVar7;
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar5 + 0xb8) + 0x70,uVar7);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  FUN_01b7eba0(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0xa0));
  return;
}


