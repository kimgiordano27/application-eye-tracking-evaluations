/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 076ae9a4
PROGRAM: m3ar-libil2cpp.so
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
  long *plVar1;
  long lVar2;
  long unaff_x21;
  long *unaff_x22;
  
  while( true ) {
    lVar2 = param_1;
    if (lVar2 == unaff_x21) {
      return;
    }
    plVar1 = (long *)FUN_0752a63c(lVar2);
    if ((plVar1 != (long *)0x0) && (*plVar1 != *unaff_x22)) break;
    param_1 = FUN_0406a6bc();
    unaff_x21 = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031c0c(plVar1);
}


