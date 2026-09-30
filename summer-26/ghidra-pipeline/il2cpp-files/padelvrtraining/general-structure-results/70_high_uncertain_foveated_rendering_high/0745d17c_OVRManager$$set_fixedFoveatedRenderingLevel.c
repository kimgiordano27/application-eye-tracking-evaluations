/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 0745d17c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_fixedFoveatedRenderingLevel(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x22;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    param_1 = *unaff_x22;
  }
  uVar3 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_StringLiteral_51754_09222a38);
  FUN_06aee7bc(uVar1,uVar3,*(undefined8 *)PTR_DAT_09222ee8,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03d1023c(puVar2,uVar1);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x38),uVar1);
  thunk_FUN_08a4cf1c();
  return;
}


