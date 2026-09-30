/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 0745d12c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 in_w8;
  long unaff_x19;
  long lVar4;
  long *unaff_x22;
  
  *(undefined4 *)(unaff_x19 + 0x20) = in_w8;
                    /* try { // try from 0745d13c to 0755d253 has its CatchHandler @ 0745d13c
                       catch() { ... } // from try @ 0745d13c with catch @ 0745d13c
                       catch() { ... } // from try @ 0745d2c8 with catch @ 0745d13c
                       catch() { ... } // from try @ 0745d314 with catch @ 0745d13c
                       catch() { ... } // from try @ 0745d34c with catch @ 0745d13c
                       catch() { ... } // from try @ 0745d38c with catch @ 0745d13c */
  uVar1 = FUN_08a08900(0,0,0x3f800000,0x42c80000,0);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  thunk_FUN_03d1023c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar2 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar2 = *unaff_x22;
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_StringLiteral_51754_09222a38);
    FUN_06aee7bc(lVar4,uVar1,*(undefined8 *)PTR_DAT_09222ee8,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar3 = lVar4;
    thunk_FUN_03d1023c(plVar3,lVar4);
  }
  *(long *)(unaff_x19 + 0x38) = lVar4;
  thunk_FUN_03d1023c((long *)(unaff_x19 + 0x38),lVar4);
  thunk_FUN_08a4cf1c();
  return;
}


