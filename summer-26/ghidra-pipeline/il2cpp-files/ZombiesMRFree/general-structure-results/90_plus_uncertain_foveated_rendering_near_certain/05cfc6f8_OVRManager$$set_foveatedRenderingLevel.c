/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 05cfc6f8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_foveatedRenderingLevel(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x280));
  *(undefined1 *)(unaff_x20 + 0x766) = 1;
  *(undefined4 *)(unaff_x19 + 0x30) = 0x3dcccccd;
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar1 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    lVar3 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb52e0);
    FUN_057f1be4(lVar3,uVar4,*(undefined8 *)PTR_DAT_06fb8288,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar2 = lVar3;
    thunk_FUN_03048534(plVar2,lVar3);
  }
  *(long *)(unaff_x19 + 0x38) = lVar3;
  thunk_FUN_03048534((long *)(unaff_x19 + 0x38),lVar3);
  thunk_FUN_068f530c();
  return;
}


