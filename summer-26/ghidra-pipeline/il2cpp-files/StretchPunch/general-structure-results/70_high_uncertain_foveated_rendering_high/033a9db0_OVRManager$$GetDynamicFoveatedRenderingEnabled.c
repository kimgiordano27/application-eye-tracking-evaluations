/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 033a9db0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRManager__GetDynamicFoveatedRenderingEnabled(void)

{
  bool in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  if (!in_ZR) {
    return -unaff_x19;
  }
  thunk_FUN_01dd295c(StringLiteral_1150);
  uVar1 = thunk_FUN_01de27b8();
  uVar2 = thunk_FUN_01dd295c(StringLiteral_8316);
  FUN_03390704(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01dd295c(StringLiteral_8471);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar1,uVar2);
}


