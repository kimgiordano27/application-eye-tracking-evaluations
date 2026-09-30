/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 076ae9fc
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


void OVRManager__get_useDynamicFoveatedRendering(void)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  puVar1 = PTR_DAT_08f66370;
  lVar5 = *(long *)(unaff_x20 + 0x58);
  while ((plVar3 = (long *)FUN_0752a828(lVar5), plVar3 == (long *)0x0 ||
         (*plVar3 == *(long *)puVar1))) {
    lVar4 = FUN_0406a6bc((long *)(unaff_x20 + 0x58),plVar3,lVar5);
    bVar2 = lVar4 == lVar5;
    lVar5 = lVar4;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031c0c(plVar3);
}


