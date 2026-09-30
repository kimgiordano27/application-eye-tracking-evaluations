/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 05f247e4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>___ctor(undefined8 param_1)

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
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_069e86c0();
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10) = param_1;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x10,param_1);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar7 = thunk_FUN_03d2ef40();
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  FUN_069e86c0(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x18,uVar7);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar7 = thunk_FUN_03d2ef40();
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  FUN_069e86c0(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  puVar5 = PTR_StringLiteral_52571_091fd3c8;
  puVar2 = PTR_DAT_091fd3b0;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x20,uVar7);
  uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar5);
  FUN_069e86c0(uVar7,*(undefined8 *)puVar2);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x28) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x28,uVar7);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar7 = thunk_FUN_03d2ef40();
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  FUN_069e86c0(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48));
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x30,uVar7);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x50) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar7 = thunk_FUN_03d2ef40();
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  FUN_069e86c0(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x58));
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  puVar5 = PTR_DAT_091fd3d8;
  puVar2 = PTR_DAT_091fd3d0;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x38,uVar7);
  uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar5);
  FUN_055dbae8(uVar7,*(undefined8 *)puVar2);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x40) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x40,uVar7);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x60) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar7 = thunk_FUN_03d2ef40();
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  FUN_069e86c0(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x68));
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x48) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x48,uVar7);
  uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar5);
  FUN_055dbae8(uVar7,*(undefined8 *)puVar2);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  puVar4 = PTR_StringLiteral_52569_091fd3b8;
  puVar3 = PTR_DAT_091fd3a8;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x50,uVar7);
  uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar4);
  FUN_069e86c0(uVar7,*(undefined8 *)puVar3);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x58) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x58,uVar7);
  uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar5);
  FUN_055dbae8(uVar7,*(undefined8 *)puVar2);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x60,uVar7);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x78);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  puVar2 = PTR_DAT_091a0cb0;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x78);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  uVar9 = **(undefined8 **)(lVar6 + 0xb8);
  uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  FUN_070caf4c(uVar7,uVar9,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x80),0);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x68) = uVar7;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x68,uVar7);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x78);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar8 = *unaff_x19;
  uVar7 = **(undefined8 **)(lVar6 + 0xb8);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03d8f26c(lVar8);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar9 = thunk_FUN_03d2ef40();
  lVar8 = *unaff_x19;
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar6 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_03d8f26c(lVar8);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar6 = *unaff_x19;
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x88);
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  FUN_06bd9c88(uVar9,uVar7,uVar10,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x98));
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x70) = uVar9;
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(long *)(lVar6 + 0xb8) + 0x70,uVar9);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  FUN_0509ed9c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xa0));
  return;
}


