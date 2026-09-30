/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 05653bc8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_permission_setup
*/


void OVRManager__OnPermissionGranted(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  uint unaff_w21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long lVar7;
  long lVar8;
  long *unaff_x29;
  
  lVar8 = *(long *)(param_1 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_02dcfd74(lVar8);
  }
  if ((((int)unaff_x24[1] < 1) || (*unaff_x24 == 0)) ||
     (lVar8 = FUN_036eca54(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_036ec98c(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(unaff_x27 + 0x38) + 0x18)
                        );
  }
  lVar7 = *unaff_x29;
  lVar8 = *(long *)(lVar7 + 0x38);
  if (lVar8 == 0) {
    FUN_02dcfd74(lVar7);
    lVar8 = *(long *)(lVar7 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_02dcfd74(lVar8);
  }
  puVar1 = System_Collections_Generic_HashSet<IXRGroupMember>_TypeInfo;
  if ((((int)unaff_x26[1] < 1) || (*unaff_x26 == 0)) ||
     (lVar8 = FUN_036eca54(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_036ec98c(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x18));
  }
  lVar7 = *(long *)puVar1;
  lVar8 = *(long *)(lVar7 + 0x38);
  if (lVar8 == 0) {
    FUN_02dcfd74(lVar7);
    lVar8 = *(long *)(lVar7 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_02dcfd74(lVar8);
  }
  puVar1 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
  if ((((int)unaff_x25[1] < 1) || (*unaff_x25 == 0)) ||
     (lVar8 = FUN_036eca58(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_036ec990(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x18));
  }
  lVar7 = *(long *)puVar1;
  lVar8 = *(long *)(lVar7 + 0x38);
  if (lVar8 == 0) {
    FUN_02dcfd74(lVar7);
    lVar8 = *(long *)(lVar7 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_02dcfd74(lVar8);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if ((((int)unaff_x23[1] < 1) || (*unaff_x23 == 0)) ||
     (lVar8 = FUN_036ec9e8(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_036ec8f8(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x18));
  }
  puVar2 = System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_05653df0(unaff_w22,uVar3,uVar4,uVar5,unaff_w20,unaff_w21 & 1,uVar6,unaff_w19);
  FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  return;
}


