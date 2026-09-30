/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$Dispose
ENTRY_POINT: 04ea9b34
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__Dispose(undefined8 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *param_1;
  uVar2 = thunk_FUN_037788cc();
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  FUN_061a7ce0(uVar2,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x80),0);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x68) = uVar2;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  thunk_FUN_037aeb94(*(long *)(lVar3 + 0xb8) + 0x68,uVar2);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x78);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar4 = *unaff_x19;
  uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar5 = thunk_FUN_037788cc();
  lVar4 = *unaff_x19;
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x88);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  FUN_05a9b4cc(uVar5,uVar2,uVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x98));
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x70) = uVar5;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  thunk_FUN_037aeb94(*(long *)(lVar3 + 0xb8) + 0x70,uVar5);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  FUN_040f078c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xa0));
  return;
}


