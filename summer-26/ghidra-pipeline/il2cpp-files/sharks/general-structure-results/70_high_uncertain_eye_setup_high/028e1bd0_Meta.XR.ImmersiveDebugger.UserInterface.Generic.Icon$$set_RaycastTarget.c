/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon$$set_RaycastTarget
ENTRY_POINT: 028e1bd0
PROGRAM: sharks-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__set_RaycastTarget(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  long unaff_x23;
  undefined8 *puVar8;
  long unaff_x24;
  undefined8 *puVar9;
  
  lVar3 = *(long *)(param_1 + 8);
  puVar9 = *(undefined8 **)(unaff_x24 + 0x5e0);
  puVar8 = *(undefined8 **)(unaff_x23 + 0x5d0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar3 + 0xb8) + 0x50);
  uVar4 = thunk_FUN_01861bbc(*puVar9);
  FUN_0216ff30(uVar4,*puVar8);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x58) = uVar4;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar3 + 0xb8) + 0x58,uVar4);
  uVar4 = thunk_FUN_01861bbc(*unaff_x22);
  FUN_024f24c4(uVar4,*unaff_x21);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x60) = uVar4;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar3 + 0xb8) + 0x60,uVar4);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x78);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  puVar2 = PTR_DAT_037f6ce0;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x78);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  uVar6 = **(undefined8 **)(lVar3 + 0xb8);
  uVar4 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4(lVar3);
  }
  FUN_02b42fa8(uVar4,uVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x80),0);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x68) = uVar4;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar3 + 0xb8) + 0x68,uVar4);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x78);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar5 = *unaff_x19;
  uVar4 = **(undefined8 **)(lVar3 + 0xb8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4(lVar5);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar6 = thunk_FUN_01861bbc();
  lVar5 = *unaff_x19;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_0185daa4(lVar5);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x88);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_0185daa4(lVar3);
  }
  FUN_020ecd70(uVar6,uVar4,uVar7,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x98));
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x70) = uVar6;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar3 + 0xb8) + 0x70,uVar6);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  FUN_01b7eba0(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xa0));
  return;
}


