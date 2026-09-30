/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 06aac110
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c3e00,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x135) = 1;
  *(undefined1 *)(unaff_x19 + 0xb0) = 1;
  if (*(int *)(DAT_083c3e00 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_0467aa8c();
  return;
}


