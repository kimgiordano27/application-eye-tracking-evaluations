/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 05653c98
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_foveatedRenderingLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 unaff_w22;
  long *unaff_x23;
  long *unaff_x25;
  long lVar5;
  long *unaff_x29;
  
  lVar5 = *unaff_x29;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_02dcfd74(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 8);
  if (*(long *)(lVar4 + 0x38) == 0) {
    FUN_02dcfd74(lVar4);
  }
  puVar1 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
  if (((0 < (int)unaff_x25[1]) && (*unaff_x25 != 0)) &&
     (lVar4 = FUN_036eca58(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x28)),
     lVar4 != 0)) {
    FUN_036ec990(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
  }
  lVar5 = *(long *)puVar1;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_02dcfd74(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 8);
  if (*(long *)(lVar4 + 0x38) == 0) {
    FUN_02dcfd74(lVar4);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x23[1]) && (*unaff_x23 != 0)) &&
     (lVar4 = FUN_036ec9e8(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x28)),
     lVar4 != 0)) {
    FUN_036ec8f8(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
  }
  puVar2 = System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_05653df0(unaff_w22);
  FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  return;
}


