/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 033a9d64
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRManager__get_useDynamicFoveatedRendering(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = StringLiteral_513;
  if ((DAT_044a68a6 & 1) == 0) {
    FUN_01d7d918(StringLiteral_513);
    DAT_044a68a6 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x10) != param_1) {
    return -param_1;
  }
  thunk_FUN_01dd295c(StringLiteral_1150);
  uVar3 = thunk_FUN_01de27b8();
  uVar4 = thunk_FUN_01dd295c(StringLiteral_8316);
  FUN_03390704(uVar3,uVar4,0);
  uVar4 = thunk_FUN_01dd295c(StringLiteral_8471);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar3,uVar4);
}


