/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 02c03b0c
PROGRAM: sharks-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFoveatedRendering(void)

{
  byte bVar1;
  long *unaff_x20;
  
  FUN_017f82a0();
  if (*(int *)(*(long *)PTR_DAT_037f4790 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)PTR_DAT_037f4790);
  }
  if (unaff_x20 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_037f87b8 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f87b8)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944();
    }
  }
  FUN_02c00a74();
  return;
}


