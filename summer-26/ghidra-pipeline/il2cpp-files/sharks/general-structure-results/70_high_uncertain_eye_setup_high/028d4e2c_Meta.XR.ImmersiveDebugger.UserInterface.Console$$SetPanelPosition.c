/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$SetPanelPosition
ENTRY_POINT: 028d4e2c
PROGRAM: sharks-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__SetPanelPosition(void)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = FUN_0185daa4();
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
  FUN_01b7eb90(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xa0));
  return;
}


