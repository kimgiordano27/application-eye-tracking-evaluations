/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 05718278
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering(void)

{
  byte bVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_056ebaa0();
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d01eb0 + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d01eb0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440();
    }
  }
  return;
}


