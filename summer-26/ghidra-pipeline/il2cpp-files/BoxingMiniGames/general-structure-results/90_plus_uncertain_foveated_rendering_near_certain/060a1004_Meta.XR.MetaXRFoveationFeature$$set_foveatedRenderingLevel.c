/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel
ENTRY_POINT: 060a1004
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 91
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__set_foveatedRenderingLevel(long param_1)

{
  long lVar1;
  long *unaff_x19;
  
  if (param_1 != 0) {
    *unaff_x19 = param_1;
    lVar1 = thunk_FUN_0367fd24();
    if (lVar1 != 0) {
      thunk_FUN_036b7ad0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}


