/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 05d65d68
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFixedFoveatedRendering(long *param_1)

{
  long unaff_x21;
  long lVar1;
  long *unaff_x22;
  
  do {
    lVar1 = unaff_x21;
    if (*param_1 != *unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(param_1);
    }
    do {
      unaff_x21 = FUN_032ef8c0();
      if (lVar1 == unaff_x21) {
        return;
      }
      param_1 = (long *)FUN_059692bc(unaff_x21);
      lVar1 = unaff_x21;
    } while (param_1 == (long *)0x0);
  } while( true );
}


