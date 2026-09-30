/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SetPosition
ENTRY_POINT: 028e4d00
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SetPosition(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_0216ff30();
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x28) = unaff_x20;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                    /* try { // try from 028e4d48 to 029e4d4f has its CatchHandler @ 028e4df4 */
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 028e4d50 to 029e4dcb has its CatchHandler @ 028e4b0c */
    lVar6 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar6 + 0xb8) + 0x28);
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
                    /* try { // try from 028e4dcc to 029e4dcf has its CatchHandler @ 028e4dfc */
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                    /* try { // try from 028e4dd0 to 029e4dd3 has its CatchHandler @ 028e4df0 */
                    /* try { // try from 028e4dd4 to 029e4dd7 has its CatchHandler @ 028e4dfc */
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 028e4dd8 to 029e4ddb has its CatchHandler @ 028e4b0c */
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
  FUN_01b7eba4(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xa0));
  return;
}


