/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 0745ced0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_foveatedRenderingLevel(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if (in_w8 == 0) {
    FUN_03d2d2b0(PTR_DAT_091fc908);
    *(undefined1 *)(unaff_x21 + 0xdda) = 1;
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar2 = *unaff_x20;
  }
  puVar1 = PTR_DAT_091fc918;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (lVar2 != 0) {
    uVar3 = FUN_073f8244(lVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c(*(long *)puVar1);
    }
    uVar3 = FUN_073c8660(uVar3);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
    thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


