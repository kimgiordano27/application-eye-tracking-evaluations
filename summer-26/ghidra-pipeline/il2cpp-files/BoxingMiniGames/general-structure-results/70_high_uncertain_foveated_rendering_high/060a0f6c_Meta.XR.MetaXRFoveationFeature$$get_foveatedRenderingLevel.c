/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_foveatedRenderingLevel
ENTRY_POINT: 060a0f6c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__get_foveatedRenderingLevel(void)

{
  long lVar1;
  
  lVar1 = thunk_FUN_0367fd24();
  if (lVar1 == 0) {
                    /* try { // try from 060a0f80 to 061a0f9f has its CatchHandler @ 060a0d34 */
                    /* WARNING: Subroutine does not return */
    FUN_03643084();
  }
  thunk_FUN_036b7ad0();
  return;
}


