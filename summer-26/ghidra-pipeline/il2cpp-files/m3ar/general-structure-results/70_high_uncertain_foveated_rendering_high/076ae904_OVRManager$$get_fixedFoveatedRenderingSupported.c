/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 076ae904
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x21;
  long *unaff_x22;
  
  do {
    lVar2 = FUN_0406a6bc();
    if (lVar2 == unaff_x21) {
      return;
    }
    plVar1 = (long *)FUN_0752a828(lVar2);
    unaff_x21 = lVar2;
  } while ((plVar1 == (long *)0x0) || (*plVar1 == *unaff_x22));
                    /* WARNING: Subroutine does not return */
  FUN_04031c0c(plVar1);
}


