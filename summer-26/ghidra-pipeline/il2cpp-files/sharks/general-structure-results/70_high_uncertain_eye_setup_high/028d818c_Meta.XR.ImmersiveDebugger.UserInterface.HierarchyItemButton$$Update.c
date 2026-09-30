/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$Update
ENTRY_POINT: 028d818c
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


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__Update(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 028d8184 with catch @ 028d8190
                        */
  thunk_FUN_0188fd20(param_1 + 0x50);
  uVar3 = thunk_FUN_01861bbc(*unaff_x24);
  FUN_0216ff30(uVar3,*unaff_x23);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x58) = uVar3;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar4 + 0xb8) + 0x58,uVar3);
  uVar3 = thunk_FUN_01861bbc(*unaff_x22);
  FUN_024f24c4(uVar3,*unaff_x21);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x60) = uVar3;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar4 + 0xb8) + 0x60,uVar3);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x78);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  puVar2 = PTR_DAT_037f6ce0;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x78);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
  uVar3 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4(lVar4);
  }
  FUN_02b42fa8(uVar3,uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80),0);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x68) = uVar3;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar4 + 0xb8) + 0x68,uVar3);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x78);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar5 = *unaff_x19;
  uVar3 = **(undefined8 **)(lVar4 + 0xb8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4(lVar5);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar6 = thunk_FUN_01861bbc();
  lVar5 = *unaff_x19;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_0185daa4(lVar5);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar4 = *unaff_x19;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x88);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_0185daa4(lVar4);
  }
  FUN_020ecd70(uVar6,uVar3,uVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x98));
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x70) = uVar6;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar4 + 0xb8) + 0x70,uVar6);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  FUN_01b7eb94(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xa0));
  return;
}


