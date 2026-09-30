/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 05d1b63c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 113
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFixedFoveatedRendering(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long lVar4;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_05d182c8();
  *(undefined8 *)(unaff_x19 + 0x150) = param_1;
  thunk_FUN_03048534(unaff_x19 + 0x150,param_1);
  uVar1 = FUN_02fe9340(*unaff_x23,5);
  *(undefined8 *)(unaff_x19 + 0x160) = uVar1;
  thunk_FUN_03048534(unaff_x19 + 0x160);
  uVar1 = thunk_FUN_0301080c(*unaff_x21);
  FUN_05d177c4();
  *(undefined8 *)(unaff_x19 + 0x170) = uVar1;
  thunk_FUN_03048534(unaff_x19 + 0x170,uVar1);
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar2 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *unaff_x22;
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb8a18);
    FUN_051110bc(lVar4,uVar1,*(undefined8 *)PTR_DAT_06fb8a28,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar3 = lVar4;
    thunk_FUN_03048534(plVar3,lVar4);
  }
  *(long *)(unaff_x19 + 0x178) = lVar4;
  thunk_FUN_03048534(unaff_x19 + 0x178,lVar4);
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar2 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *unaff_x22;
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb8a18);
    FUN_051110bc(lVar4,uVar1,*(undefined8 *)PTR_DAT_06fb8a30,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar3 = lVar4;
    thunk_FUN_03048534(plVar3,lVar4);
  }
  *(long *)(unaff_x19 + 0x180) = lVar4;
  thunk_FUN_03048534(unaff_x19 + 0x180,lVar4);
  FUN_040598f8();
  return;
}


