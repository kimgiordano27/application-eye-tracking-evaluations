/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 07c5b91c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xc10));
  *(undefined1 *)(unaff_x21 + 0x637) = 1;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a51d591 == '\0') {
    FUN_04447ba8(PTR_DAT_09f28c00);
    DAT_0a51d591 = '\x01';
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar2 = *unaff_x20;
  }
  puVar1 = PTR_DAT_09f28c10;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (lVar2 != 0) {
    uVar3 = FUN_07c043ac(lVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)puVar1);
    }
    uVar3 = FUN_07bd479c(uVar3);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


