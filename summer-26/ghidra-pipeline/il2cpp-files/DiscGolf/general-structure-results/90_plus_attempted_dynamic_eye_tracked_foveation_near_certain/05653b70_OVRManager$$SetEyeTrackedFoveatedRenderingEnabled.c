/*
FUNCTION_NAME: OVRManager$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05653b70
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__SetEyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  uint unaff_w21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long lVar8;
  long *unaff_x29;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x1a0));
  FUN_02d965b8(System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_HashSet<IXRGroupMember>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo);
  *(undefined1 *)(unaff_x27 + 0x350) = 1;
  lVar8 = *unaff_x29;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_02dcfd74(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(long *)(lVar7 + 0x38) == 0) {
    FUN_02dcfd74(lVar7);
  }
  if ((((int)unaff_x24[1] < 1) || (*unaff_x24 == 0)) ||
     (lVar7 = FUN_036eca54(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x28)),
     lVar7 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_036ec98c(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18));
  }
  lVar8 = *unaff_x29;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_02dcfd74(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(long *)(lVar7 + 0x38) == 0) {
    FUN_02dcfd74(lVar7);
  }
  puVar1 = System_Collections_Generic_HashSet<IXRGroupMember>_TypeInfo;
  if ((((int)unaff_x26[1] < 1) || (*unaff_x26 == 0)) ||
     (lVar7 = FUN_036eca54(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x28)),
     lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_036ec98c(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18));
  }
  lVar8 = *(long *)puVar1;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_02dcfd74(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(long *)(lVar7 + 0x38) == 0) {
    FUN_02dcfd74(lVar7);
  }
  puVar1 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
  if ((((int)unaff_x25[1] < 1) || (*unaff_x25 == 0)) ||
     (lVar7 = FUN_036eca58(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x28)),
     lVar7 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_036ec990(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18));
  }
  lVar8 = *(long *)puVar1;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_02dcfd74(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(long *)(lVar7 + 0x38) == 0) {
    FUN_02dcfd74(lVar7);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if ((((int)unaff_x23[1] < 1) || (*unaff_x23 == 0)) ||
     (lVar7 = FUN_036ec9e8(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x28)),
     lVar7 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_036ec8f8(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18));
  }
  puVar2 = System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_05653df0(unaff_w22,uVar3,uVar4,uVar5,unaff_w20,unaff_w21 & 1,uVar6,unaff_w19);
  FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  return;
}


